#include "mindustry/logic/LStatements_SpawnBulletStatement.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_SpawnBulletI.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LStatements.h"
#include "java/lang/String.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_21.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_22.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_20.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_25.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_23.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_24.h"
#include "mindustry/logic/LVar.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_18.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_19.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_16.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_17.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_14.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_15.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement_invoke_arc_func_Cons_13.h"

extern "C" {


void mark_mindustry_logic_LStatements$SpawnBulletStatement(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$SpawnBulletStatement *) object;
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_from)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_from)->clazz)->markFunction)((jobject) self->F_from, mark, depth + 1);
	if (self->F_index)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_index)->clazz)->markFunction)((jobject) self->F_index, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_rotation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rotation)->clazz)->markFunction)((jobject) self->F_rotation, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_owner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_owner)->clazz)->markFunction)((jobject) self->F_owner, mark, depth + 1);
	if (self->F_damage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_damage)->clazz)->markFunction)((jobject) self->F_damage, mark, depth + 1);
	if (self->F_velocityScl)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_velocityScl)->clazz)->markFunction)((jobject) self->F_velocityScl, mark, depth + 1);
	if (self->F_lifeScl)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lifeScl)->clazz)->markFunction)((jobject) self->F_lifeScl, mark, depth + 1);
	if (self->F_aimX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_aimX)->clazz)->markFunction)((jobject) self->F_aimX, mark, depth + 1);
	if (self->F_aimY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_aimY)->clazz)->markFunction)((jobject) self->F_aimY, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$SpawnBulletStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$SpawnBulletStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$SpawnBulletStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1388);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(1389);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_result = (jref) (((jobject) createStringLiteral(ctx, u8"result"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_from = (jref) (((jobject) createStringLiteral(ctx, u8"@dagger"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_index = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (((jobject) createStringLiteral(ctx, u8"x"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (((jobject) createStringLiteral(ctx, u8"y"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_rotation = (jref) (((jobject) createStringLiteral(ctx, u8"angle"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_team = (jref) (((jobject) createStringLiteral(ctx, u8"null"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_owner = (jref) (((jobject) createStringLiteral(ctx, u8"null"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_damage = (jref) (((jobject) createStringLiteral(ctx, u8"-1"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_velocityScl = (jref) (((jobject) createStringLiteral(ctx, u8"1"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_lifeScl = (jref) (((jobject) createStringLiteral(ctx, u8"1"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_aimX = (jref) (((jobject) createStringLiteral(ctx, u8"-1"_j)));
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_aimY = (jref) (((jobject) createStringLiteral(ctx, u8"-1"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:build", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1393);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"-bullet"_j));
	jint temp0 = jint(1);
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_result;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o);
	LINE_NUMBER(1395);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"from"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_from;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1396);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"index"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_index;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1397);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_x;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1398);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1399);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"rotation"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_rotation;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1400);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"team"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_team;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1401);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"owner"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_owner;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1402);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"damage"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_damage;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1403);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"velocityScl"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_velocityScl;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1404);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"lifeScl"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_lifeScl;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1405);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"aimX"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_aimX;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_24(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_24 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1406);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"aimY"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_aimY;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_25(ctx);
		auto proxy = (mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_25 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$SpawnBulletStatement_invoke_arc_func_Cons_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1407);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$SpawnBulletStatement_privileged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:privileged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1411);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$SpawnBulletStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:build", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1416);
	clinit_mindustry_logic_LExecutor$SpawnBulletI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$SpawnBulletI);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_result;
	LINE_NUMBER(1417);
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_from;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_index;
	sp[3].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[3].o, sp[4].o);
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_x;
	sp[4].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[4].o, sp[5].o);
	sp[5].o = frame[1].o;
	sp[6].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_y;
	sp[5].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[5].o, sp[6].o);
	sp[6].o = frame[1].o;
	sp[7].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[6].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[6].o, sp[7].o);
	sp[7].o = frame[1].o;
	sp[8].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_team;
	LINE_NUMBER(1418);
	sp[7].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[7].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[7].o, sp[8].o);
	sp[8].o = frame[1].o;
	sp[9].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_owner;
	sp[8].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[8].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[8].o, sp[9].o);
	sp[9].o = frame[1].o;
	sp[10].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_damage;
	sp[9].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[9].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[9].o, sp[10].o);
	sp[10].o = frame[1].o;
	sp[11].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_velocityScl;
	sp[10].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[10].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[10].o, sp[11].o);
	sp[11].o = frame[1].o;
	sp[12].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_lifeScl;
	sp[11].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[11].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[11].o, sp[12].o);
	sp[12].o = frame[1].o;
	sp[13].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_aimX;
	LINE_NUMBER(1419);
	sp[12].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[12].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[12].o, sp[13].o);
	sp[13].o = frame[1].o;
	sp[14].o = (jobject)((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_aimY;
	sp[13].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[13].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[13].o, sp[14].o);
	init_mindustry_logic_LExecutor$SpawnBulletI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o, sp[9].o, sp[10].o, sp[11].o, sp[12].o, sp[13].o);
	LINE_NUMBER(1416);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$SpawnBulletStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1425);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_world;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$12_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1406);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_aimY = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$11_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1405);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_aimX = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$10_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1404);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_lifeScl = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$9_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1403);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_velocityScl = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$8_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1402);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_damage = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$7_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1401);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_owner = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$6_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1400);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$5_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1399);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_rotation = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$4_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1398);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$3_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1397);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1396);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_index = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1395);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_from = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$SpawnBulletStatement:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1393);
	((mindustry_logic_LStatements$SpawnBulletStatement *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$SpawnBulletStatement[] {
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
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_privileged_R_boolean,
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
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$12_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$11_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$10_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$9_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$8_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$7_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$6_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$5_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$4_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$3_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$2_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$1_java_lang_String,
	(void *) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$0_java_lang_String,
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
	{ "lambda$build$6", "(Ljava/lang/String;)V" },
	{ "lambda$build$5", "(Ljava/lang/String;)V" },
	{ "lambda$build$4", "(Ljava/lang/String;)V" },
	{ "lambda$build$3", "(Ljava/lang/String;)V" },
	{ "lambda$build$2", "(Ljava/lang/String;)V" },
	{ "lambda$build$1", "(Ljava/lang/String;)V" },
	{ "lambda$build$0", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "result", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_result), "Ljava/lang/String;", 1 },
	{ "from", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_from), "Ljava/lang/String;", 1 },
	{ "index", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_index), "Ljava/lang/String;", 1 },
	{ "x", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_x), "Ljava/lang/String;", 1 },
	{ "y", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_y), "Ljava/lang/String;", 1 },
	{ "rotation", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_rotation), "Ljava/lang/String;", 1 },
	{ "team", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_team), "Ljava/lang/String;", 1 },
	{ "owner", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_owner), "Ljava/lang/String;", 1 },
	{ "damage", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_damage), "Ljava/lang/String;", 1 },
	{ "velocityScl", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_velocityScl), "Ljava/lang/String;", 1 },
	{ "lifeScl", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_lifeScl), "Ljava/lang/String;", 1 },
	{ "aimX", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_aimX), "Ljava/lang/String;", 1 },
	{ "aimY", &class_java_lang_String, offsetof(mindustry_logic_LStatements$SpawnBulletStatement, F_aimY), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$SpawnBulletStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "privileged", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_privileged_R_boolean, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_privileged_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$build$12", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$12_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$12_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$11", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$11_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$11_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$10", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$10_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$10_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$9", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$9_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$9_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$8", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$8_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$8_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$7", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$7_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$7_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$6", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$6_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$6_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$5", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$5_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$5_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$4", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$4_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$4_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$3_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$3_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$2_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$2_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$1_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$0_java_lang_String, VTABLE_mindustry_logic_LStatements$SpawnBulletStatement_lambda$build$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_logic_LStatements$SpawnBulletStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$SpawnBulletStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$SpawnBulletStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$SpawnBulletStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$SpawnBulletStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$SpawnBulletStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$SpawnBulletStatement = registerClass(&class_mindustry_logic_LStatements$SpawnBulletStatement);

}

