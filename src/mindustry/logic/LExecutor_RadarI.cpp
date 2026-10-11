#include "mindustry/logic/LExecutor_RadarI.h"
#include "mindustry/world/Block.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/logic/LExecutor_RadarI_invoke_arc_func_Cons_1.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/RadarTarget_RadarTargetFunc.h"
#include "mindustry/logic/RadarTarget.h"
#include "mindustry/logic/RadarSort_RadarSortFunc.h"
#include "mindustry/logic/LExecutor_RadarI.h"
#include "arc/struct/Seq.h"
#include "mindustry/logic/RadarSort.h"
#include "mindustry/gen/Healthc.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_UnitControlI.h"
#include "mindustry/game/Teams_TeamData.h"
#include "arc/util/Interval.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/ai/types/LogicAI.h"
#include "mindustry/game/Teams.h"
#include "mindustry/entities/Units.h"
#include "mindustry/game/Team.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {

jfloat SF_mindustry_logic_LExecutor$RadarI_bestValue;
jobject SF_mindustry_logic_LExecutor$RadarI_best;

void mark_mindustry_logic_LExecutor$RadarI(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LExecutor$RadarI_best)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LExecutor$RadarI_best)->clazz)->markFunction)((jobject) SF_mindustry_logic_LExecutor$RadarI_best, mark, depth + 1);
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
	auto self = (mindustry_logic_LExecutor$RadarI *) object;
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
	if (self->F_lastTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTarget)->clazz)->markFunction)((jobject) self->F_lastTarget, mark, depth + 1);
	if (self->F_lastSourceBuild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastSourceBuild)->clazz)->markFunction)((jobject) self->F_lastSourceBuild, mark, depth + 1);
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
}

void init_mindustry_logic_LExecutor$RadarI_mindustry_logic_RadarTarget_mindustry_logic_RadarTarget_mindustry_logic_RadarTarget_mindustry_logic_RadarSort_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$RadarI:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(741);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(728);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_enemy;
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK(sp[0].o))->F_target1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_any;
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK(sp[0].o))->F_target2 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_any;
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK(sp[0].o))->F_target3 = (jref) sp[1].o;
	LINE_NUMBER(729);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarSort(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarSort_distance;
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK(sp[0].o))->F_sort = (jref) sp[1].o;
	LINE_NUMBER(736);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval(ctx, sp[1].o);
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK(sp[0].o))->F_timer = (jref) sp[1].o;
	LINE_NUMBER(742);
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target1 = (jref) (frame[1].o);
	LINE_NUMBER(743);
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target2 = (jref) (frame[2].o);
	LINE_NUMBER(744);
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target3 = (jref) (frame[3].o);
	LINE_NUMBER(745);
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_sort = (jref) (frame[4].o);
	LINE_NUMBER(746);
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_radar = (jref) (frame[5].o);
	LINE_NUMBER(747);
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_sortOrder = (jref) (frame[6].o);
	LINE_NUMBER(748);
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_output = (jref) (frame[7].o);
	LINE_NUMBER(749);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$RadarI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$RadarI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(751);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(728);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_enemy;
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK(sp[0].o))->F_target1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_any;
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK(sp[0].o))->F_target2 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_any;
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK(sp[0].o))->F_target3 = (jref) sp[1].o;
	LINE_NUMBER(729);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_RadarSort(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarSort_distance;
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK(sp[0].o))->F_sort = (jref) sp[1].o;
	LINE_NUMBER(736);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval(ctx, sp[1].o);
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK(sp[0].o))->F_timer = (jref) sp[1].o;
	LINE_NUMBER(752);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$RadarI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$RadarI:run", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_radar;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(758);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_sortOrder;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(-1);
label_3:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(759);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(761);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_logic_Ranged)) == 0) goto label_6;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_logic_Ranged, (frame[2].o)));
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[5].o)))(ctx, (frame[5].o));
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_6;
	}
label_8:;
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Building)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(762);
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) == 0) goto label_12;
	}
	{
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) != 0) goto label_12;
	}
label_9:;
	{
	sp[0].o = (jobject)SM_mindustry_logic_LExecutor$UnitControlI_checkLogicAI_mindustry_logic_LExecutor_java_lang_Object_boolean_R_mindustry_ai_types_LogicAI(ctx, (frame[1].o), (frame[2].o), (jint(1)));
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
label_12:;
	{
	LINE_NUMBER(763);
	jfloat temp0 = (jfloat)((func_mindustry_logic_Ranged_range_R_float) resolveInterfaceMethod(ctx, &class_mindustry_logic_Ranged, INDEX_mindustry_logic_Ranged_range_R_float, (frame[5].o)))(ctx, (frame[5].o));
	frame[7].f = temp0;
	LINE_NUMBER(769);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Building)) == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_float_R_boolean])(ctx, sp[0].o, (jfloat(30.0f)));
	if (temp0 != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_lastSourceBuild;
	if (sp[0].o != (frame[2].o)) goto label_15;
	}
label_14:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_16;
	{
	jint temp0 = (jint)((func_mindustry_ai_types_LogicAI_checkTargetTimer_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ai_types_LogicAI_checkTargetTimer_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[0].o));
	if (temp0 == 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target1;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_enemy;
	if (sp[0].o == sp[1].o) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target2;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_enemy;
	if (sp[0].o == sp[1].o) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target3;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_enemy;
	if (sp[0].o != sp[1].o) goto label_18;
	}
label_17:;
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(772);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target1;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_ally;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target2;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_ally;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target3;
	clinit_mindustry_logic_RadarTarget(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarTarget_ally;
	if (sp[0].o != sp[1].o) goto label_22;
	}
label_21:;
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(774);
	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	SF_mindustry_logic_LExecutor$RadarI_best = (jobject(nullptr));
	LINE_NUMBER(775);
	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	SF_mindustry_logic_LExecutor$RadarI_bestValue = (jfloat(0));
	LINE_NUMBER(777);
	if ((frame[9].i) == 0) goto label_27;
	}
	{
	LINE_NUMBER(778);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	frame[11].o = sp[0].o;
	LINE_NUMBER(779);
	frame[12].i = (jint(0));
	}
label_30:;
	{
	if ((frame[12].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[11].o)))->F_size)) goto label_31;
	}
	{
	LINE_NUMBER(780);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[11].o)))->F_items;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[0].o)), (frame[12].i)))))->F_team;
	sp[1].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[5].o)))(ctx, (frame[5].o));
	if (sp[0].o == sp[1].o) goto label_33;
	}
	{
	LINE_NUMBER(781);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	jfloat temp0 = frame[7].f;
	jint temp1 = frame[3].i;
	sp[2].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[11].o)))->F_items;
	sp[2].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[2].o)), (frame[12].i)))))->F_team;
	((func_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	}
label_33:;
	{
	LINE_NUMBER(779);
	INST_IINC(12, 1);
	goto label_30;
	}
label_31:;
	LINE_NUMBER(784);
	goto label_35;
label_27:;
	INST_ILOAD(10);
	if ((--sp)->i != 0) goto label_36;
	{
	LINE_NUMBER(785);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	frame[11].o = sp[0].o;
	LINE_NUMBER(786);
	frame[12].i = (jint(0));
	}
label_39:;
	{
	if ((frame[12].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[11].o)))->F_size)) goto label_40;
	}
	{
	LINE_NUMBER(787);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	jfloat temp0 = frame[7].f;
	jint temp1 = frame[3].i;
	sp[2].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[11].o)))->F_items;
	sp[2].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[2].o)), (frame[12].i)))))->F_team;
	((func_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	LINE_NUMBER(786);
	INST_IINC(12, 1);
	goto label_39;
	}
label_40:;
	LINE_NUMBER(789);
	goto label_35;
label_36:;
	{
	LINE_NUMBER(790);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	jfloat temp0 = frame[7].f;
	jint temp1 = frame[3].i;
	sp[2].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[5].o)))(ctx, (frame[5].o));
	((func_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	}
label_35:;
	{
	LINE_NUMBER(793);
	if ((frame[4].o) == nullptr) goto label_43;
	}
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_execCache;
	sp[1].o = frame[0].o;
	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_LExecutor$RadarI_best;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_43:;
	{
	LINE_NUMBER(797);
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_lastSourceBuild = (jref) (frame[2].o);
	LINE_NUMBER(798);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LExecutor$RadarI_best;
	frame[8].o = sp[1].o;
	((mindustry_logic_LExecutor$RadarI *) NULL_CHECK(sp[0].o))->F_lastTarget = (jref) sp[1].o;
	LINE_NUMBER(799);
	goto label_48;
	}
label_16:;
	{
	LINE_NUMBER(800);
	if ((frame[4].o) == nullptr) goto label_49;
	}
	{
	LINE_NUMBER(801);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_execCache;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Healthc, sp[0].o));
	goto label_48;
	}
label_49:;
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_lastTarget;
	frame[8].o = sp[0].o;
	}
label_48:;
	{
	LINE_NUMBER(807);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_output;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(808);
	goto label_53;
	}
label_6:;
	{
	LINE_NUMBER(809);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_output;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_53:;
	LINE_NUMBER(811);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$RadarI:find", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(814);
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = frame[2].f;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LExecutor$RadarI_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_logic_LExecutor$RadarI_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_logic_LExecutor$RadarI_invoke_arc_func_Cons_1);
		proxy->F_field4 = (frame[3].i);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(830);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$RadarI_lambda$find$0_mindustry_logic_Ranged_float_mindustry_game_Team_int_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$RadarI:lambda$find$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(815);
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[5].o), (frame[1].o), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean])(ctx, (frame[5].o), (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if ((frame[1].o) != (frame[5].o)) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(817);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target1;
	sp[0].o = (jobject)((mindustry_logic_RadarTarget *) NULL_CHECK(sp[0].o))->F_func;
	sp[1].o = frame[1].o;
	LINE_NUMBER(818);
	sp[1].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_logic_RadarTarget$RadarTargetFunc_get_mindustry_game_Team_mindustry_gen_Unit_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_logic_RadarTarget$RadarTargetFunc, INDEX_mindustry_logic_RadarTarget$RadarTargetFunc_get_mindustry_game_Team_mindustry_gen_Unit_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target2;
	sp[0].o = (jobject)((mindustry_logic_RadarTarget *) NULL_CHECK(sp[0].o))->F_func;
	sp[1].o = frame[1].o;
	LINE_NUMBER(819);
	sp[1].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_logic_RadarTarget$RadarTargetFunc_get_mindustry_game_Team_mindustry_gen_Unit_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_logic_RadarTarget$RadarTargetFunc, INDEX_mindustry_logic_RadarTarget$RadarTargetFunc_get_mindustry_game_Team_mindustry_gen_Unit_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_target3;
	sp[0].o = (jobject)((mindustry_logic_RadarTarget *) NULL_CHECK(sp[0].o))->F_func;
	sp[1].o = frame[1].o;
	LINE_NUMBER(820);
	sp[1].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_logic_RadarTarget$RadarTargetFunc_get_mindustry_game_Team_mindustry_gen_Unit_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_logic_RadarTarget$RadarTargetFunc, INDEX_mindustry_logic_RadarTarget$RadarTargetFunc_get_mindustry_game_Team_mindustry_gen_Unit_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_7;
label_4:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(822);
	if ((frame[6].i) != 0) goto label_9;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(824);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$RadarI *) NULL_CHECK((frame[0].o)))->F_sort;
	sp[0].o = (jobject)((mindustry_logic_RadarSort *) NULL_CHECK(sp[0].o))->F_func;
	jfloat temp0 = (jfloat)((func_mindustry_logic_RadarSort$RadarSortFunc_get_arc_math_geom_Position_mindustry_gen_Unit_R_float) resolveInterfaceMethod(ctx, &class_mindustry_logic_RadarSort$RadarSortFunc, INDEX_mindustry_logic_RadarSort$RadarSortFunc_get_arc_math_geom_Position_mindustry_gen_Unit_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[5].o));
	frame[7].f = (temp0 * (jfloat((frame[4].i))));
	LINE_NUMBER(825);
	if ((floatCompare((frame[7].f), (clinit_mindustry_logic_LExecutor$RadarI(ctx), (jfloat)SF_mindustry_logic_LExecutor$RadarI_bestValue), -1)) > 0) goto label_11;
	}
	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	(sp++)->o = SF_mindustry_logic_LExecutor$RadarI_best;
	if ((--sp)->o != nullptr) goto label_12;
label_11:;
	{
	LINE_NUMBER(826);
	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	SF_mindustry_logic_LExecutor$RadarI_bestValue = (frame[7].f);
	LINE_NUMBER(827);
	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	SF_mindustry_logic_LExecutor$RadarI_best = (frame[5].o);
	}
label_12:;
	LINE_NUMBER(829);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LExecutor$RadarI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$RadarI:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	{
	LINE_NUMBER(738);
	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	SF_mindustry_logic_LExecutor$RadarI_bestValue = (jfloat(0));
	LINE_NUMBER(739);
	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	SF_mindustry_logic_LExecutor$RadarI_best = (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$RadarI[] {
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
	(void *) M_mindustry_logic_LExecutor$RadarI_run_mindustry_logic_LExecutor,
	(void *) M_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team,
	(void *) M_mindustry_logic_LExecutor$RadarI_lambda$find$0_mindustry_logic_Ranged_float_mindustry_game_Team_int_mindustry_gen_Unit,
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
	{ "find", "(Lmindustry/logic/Ranged;FILmindustry/game/Team;)V" },
	{ "lambda$find$0", "(Lmindustry/logic/Ranged;FLmindustry/game/Team;ILmindustry/gen/Unit;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "target1", &class_mindustry_logic_RadarTarget, offsetof(mindustry_logic_LExecutor$RadarI, F_target1), "Lmindustry/logic/RadarTarget;", 1 },
	{ "target2", &class_mindustry_logic_RadarTarget, offsetof(mindustry_logic_LExecutor$RadarI, F_target2), "Lmindustry/logic/RadarTarget;", 1 },
	{ "target3", &class_mindustry_logic_RadarTarget, offsetof(mindustry_logic_LExecutor$RadarI, F_target3), "Lmindustry/logic/RadarTarget;", 1 },
	{ "sort", &class_mindustry_logic_RadarSort, offsetof(mindustry_logic_LExecutor$RadarI, F_sort), "Lmindustry/logic/RadarSort;", 1 },
	{ "radar", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$RadarI, F_radar), "Lmindustry/logic/LVar;", 1 },
	{ "sortOrder", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$RadarI, F_sortOrder), "Lmindustry/logic/LVar;", 1 },
	{ "output", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$RadarI, F_output), "Lmindustry/logic/LVar;", 1 },
	{ "lastTarget", &class_mindustry_gen_Healthc, offsetof(mindustry_logic_LExecutor$RadarI, F_lastTarget), "Lmindustry/gen/Healthc;", 1 },
	{ "lastSourceBuild", &class_java_lang_Object, offsetof(mindustry_logic_LExecutor$RadarI, F_lastSourceBuild), "Ljava/lang/Object;", 1 },
	{ "timer", &class_arc_util_Interval, offsetof(mindustry_logic_LExecutor$RadarI, F_timer), "Larc/util/Interval;", 1 },
	{ "bestValue", &class_float, (intptr_t) &SF_mindustry_logic_LExecutor$RadarI_bestValue, "F", 8 },
	{ "best", &class_mindustry_gen_Unit, (intptr_t) &SF_mindustry_logic_LExecutor$RadarI_best, "Lmindustry/gen/Unit;", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$RadarI_mindustry_logic_RadarTarget_mindustry_logic_RadarTarget_mindustry_logic_RadarTarget_mindustry_logic_RadarSort_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/RadarTarget;Lmindustry/logic/RadarTarget;Lmindustry/logic/RadarTarget;Lmindustry/logic/RadarSort;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$RadarI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$RadarI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$RadarI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
	{ "find", (intptr_t) M_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team, VTABLE_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team, "(Lmindustry/logic/Ranged;FILmindustry/game/Team;)V", 0 },
	{ "lambda$find$0", (intptr_t) M_mindustry_logic_LExecutor$RadarI_lambda$find$0_mindustry_logic_Ranged_float_mindustry_game_Team_int_mindustry_gen_Unit, VTABLE_mindustry_logic_LExecutor$RadarI_lambda$find$0_mindustry_logic_Ranged_float_mindustry_game_Team_int_mindustry_gen_Unit, "(Lmindustry/logic/Ranged;FLmindustry/game/Team;ILmindustry/gen/Unit;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LExecutor$RadarI, 0, "()V", 8 },
};

Class class_mindustry_logic_LExecutor$RadarI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$RadarI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$RadarI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$RadarI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$RadarI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$RadarI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$RadarI = registerClass(&class_mindustry_logic_LExecutor$RadarI);

}

