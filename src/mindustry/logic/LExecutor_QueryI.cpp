#include "mindustry/logic/LExecutor_QueryI.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/logic/LExecutor.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LExecutor_1.h"
#include "mindustry/logic/QueryType.h"
#include "arc/struct/Seq.h"
#include "mindustry/logic/LExecutor_QueryI_invoke_arc_func_Cons_1.h"
#include "mindustry/logic/LExecutor_QueryI_invoke_arc_func_Boolf_3.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "mindustry/logic/LExecutor_QueryI_invoke_arc_func_Boolf_5.h"
#include "mindustry/logic/LExecutor_QueryI_invoke_arc_func_Boolf_4.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/game/Teams_TeamData.h"
#include "arc/math/geom/QuadTree.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/QueryShape.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/game/Teams.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/logic/LExecutor_QueryI.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {

jobject SF_mindustry_logic_LExecutor$QueryI_paramSeq;
jobject SF_mindustry_logic_LExecutor$QueryI_paramTeam;
jobject SF_mindustry_logic_LExecutor$QueryI_bulletCons;

void mark_mindustry_logic_LExecutor$QueryI(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LExecutor$QueryI_paramSeq)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$QueryI_paramSeq)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$QueryI_paramSeq, mark, depth + 1);
		if (SF_mindustry_logic_LExecutor$QueryI_paramTeam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$QueryI_paramTeam)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$QueryI_paramTeam, mark, depth + 1);
		if (SF_mindustry_logic_LExecutor$QueryI_bulletCons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$QueryI_bulletCons)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$QueryI_bulletCons, mark, depth + 1);
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
	auto self = (mindustry_logic_LExecutor$QueryI *) object;
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
	if (self->F_width)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_width)->clazz)->markFunction)((jobject) self->F_width, mark, depth + 1);
	if (self->F_height)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_height)->clazz)->markFunction)((jobject) self->F_height, mark, depth + 1);
}

void init_mindustry_logic_LExecutor$QueryI_mindustry_logic_QueryShape_mindustry_logic_QueryType_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$QueryI:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(1454);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1450);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_QueryShape(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryShape_rect;
	((mindustry_logic_LExecutor$QueryI *) NULL_CHECK(sp[0].o))->F_shape = (jref) sp[1].o;
	LINE_NUMBER(1451);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_QueryType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryType_unit;
	((mindustry_logic_LExecutor$QueryI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1455);
	((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_shape = (jref) (frame[1].o);
	LINE_NUMBER(1456);
	((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(1457);
	((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[3].o);
	LINE_NUMBER(1458);
	((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[4].o);
	LINE_NUMBER(1459);
	((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[5].o);
	LINE_NUMBER(1460);
	((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_width = (jref) (frame[6].o);
	LINE_NUMBER(1461);
	((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_height = (jref) (frame[7].o);
	LINE_NUMBER(1462);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$QueryI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$QueryI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1464);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1450);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_QueryShape(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryShape_rect;
	((mindustry_logic_LExecutor$QueryI *) NULL_CHECK(sp[0].o))->F_shape = (jref) sp[1].o;
	LINE_NUMBER(1451);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_QueryType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryType_unit;
	((mindustry_logic_LExecutor$QueryI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1465);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$QueryI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$QueryI:run", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1469);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_queryResult;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1470);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_queryResult;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_arc_struct_Seq)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[4].o)));
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_4;
	}
label_2:;
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1471);
	if ((frame[2].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1472);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[0].o, (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1473);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_queryResult;
	((func_mindustry_logic_LVar_setconst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setconst_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(1476);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numfWorld_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numfWorld_R_float])(ctx, sp[0].o);
	frame[3].f = temp0;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp1 = (jfloat)((func_mindustry_logic_LVar_numfWorld_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numfWorld_R_float])(ctx, sp[0].o);
	frame[4].f = temp1;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_width;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numfWorld_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numfWorld_R_float])(ctx, sp[0].o);
	frame[5].f = temp2;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_height;
	jfloat temp3 = (jfloat)((func_mindustry_logic_LVar_numfWorld_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numfWorld_R_float])(ctx, sp[0].o);
	frame[6].f = temp3;
	LINE_NUMBER(1477);
	frame[7].f = (frame[5].f);
	frame[8].f = (frame[3].f);
	frame[9].f = (frame[4].f);
	LINE_NUMBER(1478);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_shape;
	clinit_mindustry_logic_QueryShape(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryShape_circle;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(1479);
	if ((frame[10].i) == 0) goto label_19;
	}
	{
	LINE_NUMBER(1480);
	frame[3].f = ((frame[3].f) - (frame[7].f));
	LINE_NUMBER(1481);
	frame[4].f = ((frame[4].f) - (frame[7].f));
	LINE_NUMBER(1482);
	frame[5].f = ((frame[7].f) * (jfloat(2)));
	LINE_NUMBER(1483);
	frame[6].f = ((frame[7].f) * (jfloat(2)));
	}
label_19:;
	{
	LINE_NUMBER(1486);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(1487);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(1489);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_QueryType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryType_bullet;
	if (sp[0].o != sp[1].o) goto label_26;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_26:;
	{
	LINE_NUMBER(1491);
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$QueryType;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_logic_QueryType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_QueryType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_27;
		case 2: goto label_28;
		case 3: goto label_29;
		default: goto label_30;
	}
	}
label_27:;
	{
	LINE_NUMBER(1493);
	if ((frame[11].o) == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(1494);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[11].o));
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, sp[0].o);
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[5].f;
	jfloat temp3 = frame[6].f;
	sp[1].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, (frame[2].o));
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(1496);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	}
label_33:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[12].o)))(ctx, (frame[12].o));
	if (temp0 == 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[12].o)))(ctx, (frame[12].o));
	frame[13].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(1497);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, (frame[13].o));
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[5].f;
	jfloat temp3 = frame[6].f;
	sp[1].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, (frame[2].o));
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(1498);
	goto label_33;
	}
label_34:;
	LINE_NUMBER(1500);
	goto label_30;
label_28:;
	{
	LINE_NUMBER(1502);
	if ((frame[11].o) == nullptr) goto label_37;
	}
	{
	LINE_NUMBER(1503);
	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	SF_mindustry_logic_LExecutor$QueryI_paramTeam = (frame[11].o);
	LINE_NUMBER(1504);
	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	SF_mindustry_logic_LExecutor$QueryI_paramSeq = (frame[2].o);
	LINE_NUMBER(1505);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree])(ctx, sp[0].o);
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[5].f;
	jfloat temp3 = frame[6].f;
	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LExecutor$QueryI_bulletCons;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	goto label_30;
	}
label_37:;
	{
	LINE_NUMBER(1507);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree])(ctx, sp[0].o);
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[5].f;
	jfloat temp3 = frame[6].f;
	sp[1].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, (frame[2].o));
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(1509);
	goto label_30;
	}
label_29:;
	{
	LINE_NUMBER(1511);
	if ((frame[11].o) == nullptr) goto label_42;
	}
	{
	LINE_NUMBER(1512);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[11].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree;
	if (sp[0].o != nullptr) goto label_44;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_44:;
	{
	LINE_NUMBER(1513);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[11].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[5].f;
	jfloat temp3 = frame[6].f;
	sp[1].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, (frame[2].o));
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	goto label_30;
	}
label_42:;
	{
	LINE_NUMBER(1515);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	}
label_45:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[12].o)))(ctx, (frame[12].o));
	if (temp0 == 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[12].o)))(ctx, (frame[12].o));
	frame[13].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(1516);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[13].o)))->F_buildingTree;
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(1517);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[13].o)))->F_buildingTree;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[5].f;
	jfloat temp3 = frame[6].f;
	sp[1].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, (frame[2].o));
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	}
label_47:;
	LINE_NUMBER(1519);
	goto label_45;
label_30:;
	{
	LINE_NUMBER(1524);
	if ((frame[10].i) == 0) goto label_49;
	}
	{
	LINE_NUMBER(1525);
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$QueryType;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$QueryI *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_logic_QueryType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_QueryType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_51;
		case 2: goto label_52;
		case 3: goto label_53;
		default: goto label_49;
	}
	}
label_51:;
	{
	LINE_NUMBER(1527);
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, (frame[2].o));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LExecutor$QueryI_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_logic_LExecutor$QueryI_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_logic_LExecutor$QueryI_invoke_arc_func_Boolf_3);
		proxy->F_field2 = (frame[7].f);
		proxy->F_field1 = (frame[9].f);
		proxy->F_field0 = (frame[8].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_49;
	}
label_52:;
	{
	LINE_NUMBER(1528);
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, (frame[2].o));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LExecutor$QueryI_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_logic_LExecutor$QueryI_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_logic_LExecutor$QueryI_invoke_arc_func_Boolf_4);
		proxy->F_field2 = (frame[7].f);
		proxy->F_field1 = (frame[9].f);
		proxy->F_field0 = (frame[8].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_49;
	}
label_53:;
	{
	LINE_NUMBER(1529);
	sp[0].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, (frame[2].o));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LExecutor$QueryI_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_logic_LExecutor$QueryI_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_logic_LExecutor$QueryI_invoke_arc_func_Boolf_5);
		proxy->F_field2 = (frame[7].f);
		proxy->F_field1 = (frame[9].f);
		proxy->F_field0 = (frame[8].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_49:;
	LINE_NUMBER(1532);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LExecutor$QueryI_lambda$run$2_float_float_float_mindustry_gen_Building_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$QueryI:lambda$run$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1529);
	sp[0].o = frame[3].o;
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[3].o));
	jint temp4 = (jint)((func_mindustry_gen_Building_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, (temp2 + (temp3 / (jfloat(2)))));
	if (temp4 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LExecutor$QueryI_lambda$run$1_float_float_float_mindustry_gen_Bullet_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$QueryI:lambda$run$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1528);
	jint temp0 = (jint)((func_mindustry_gen_Bullet_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Bullet_within_float_float_float_R_boolean])(ctx, (frame[3].o), (frame[0].f), (frame[1].f), ((frame[2].f) + (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[3].o)))->F_hitSize) / (jfloat(2)))));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LExecutor$QueryI_lambda$run$0_float_float_float_mindustry_gen_Unit_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$QueryI:lambda$run$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1527);
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, (frame[3].o), (frame[0].f), (frame[1].f), ((frame[2].f) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_hitSize) / (jfloat(2)))));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_logic_LExecutor$QueryI_lambda$static$0_mindustry_gen_Bullet(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$QueryI:lambda$static$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1445);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LExecutor$QueryI_paramTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(1446);
	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$QueryI_paramSeq;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(1448);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LExecutor$QueryI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$QueryI:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	{
	LINE_NUMBER(1444);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LExecutor$QueryI_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_logic_LExecutor$QueryI_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_logic_LExecutor$QueryI_invoke_arc_func_Cons_1);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_logic_LExecutor$QueryI(ctx);
	SF_mindustry_logic_LExecutor$QueryI_bulletCons = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$QueryI[] {
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
	(void *) M_mindustry_logic_LExecutor$QueryI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "paramSeq", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_logic_LExecutor$QueryI_paramSeq, "Larc/struct/Seq;", 10 },
	{ "paramTeam", &class_mindustry_game_Team, (intptr_t) &SF_mindustry_logic_LExecutor$QueryI_paramTeam, "Lmindustry/game/Team;", 10 },
	{ "bulletCons", &class_arc_func_Cons, (intptr_t) &SF_mindustry_logic_LExecutor$QueryI_bulletCons, "Larc/func/Cons;", 26 },
	{ "shape", &class_mindustry_logic_QueryShape, offsetof(mindustry_logic_LExecutor$QueryI, F_shape), "Lmindustry/logic/QueryShape;", 1 },
	{ "type", &class_mindustry_logic_QueryType, offsetof(mindustry_logic_LExecutor$QueryI, F_type), "Lmindustry/logic/QueryType;", 1 },
	{ "team", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$QueryI, F_team), "Lmindustry/logic/LVar;", 1 },
	{ "x", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$QueryI, F_x), "Lmindustry/logic/LVar;", 1 },
	{ "y", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$QueryI, F_y), "Lmindustry/logic/LVar;", 1 },
	{ "width", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$QueryI, F_width), "Lmindustry/logic/LVar;", 1 },
	{ "height", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$QueryI, F_height), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$QueryI_mindustry_logic_QueryShape_mindustry_logic_QueryType_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/QueryShape;Lmindustry/logic/QueryType;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$QueryI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$QueryI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$QueryI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
	{ "lambda$run$2", (intptr_t) SM_mindustry_logic_LExecutor$QueryI_lambda$run$2_float_float_float_mindustry_gen_Building_R_boolean, 0, "(FFFLmindustry/gen/Building;)Z", 4106 },
	{ "lambda$run$1", (intptr_t) SM_mindustry_logic_LExecutor$QueryI_lambda$run$1_float_float_float_mindustry_gen_Bullet_R_boolean, 0, "(FFFLmindustry/gen/Bullet;)Z", 4106 },
	{ "lambda$run$0", (intptr_t) SM_mindustry_logic_LExecutor$QueryI_lambda$run$0_float_float_float_mindustry_gen_Unit_R_boolean, 0, "(FFFLmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_logic_LExecutor$QueryI_lambda$static$0_mindustry_gen_Bullet, 0, "(Lmindustry/gen/Bullet;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LExecutor$QueryI, 0, "()V", 8 },
};

Class class_mindustry_logic_LExecutor$QueryI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$QueryI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$QueryI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$QueryI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$QueryI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$QueryI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$QueryI = registerClass(&class_mindustry_logic_LExecutor$QueryI);

}

