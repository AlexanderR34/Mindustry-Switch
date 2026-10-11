#include "mindustry/logic/LExecutor_UnitControlI.h"
#include "mindustry/gen/PosTeam.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/logic/LExecutor_UnitControlI_invoke_arc_func_Boolf_1.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/gen/Healthc.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/gen/Payloadc.h"
#include "arc/struct/Queue.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "mindustry/entities/Units.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/logic/LUnitControl.h"
#include "mindustry/logic/LExecutor_1.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/logic/LExecutor_UnitControlI.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Enum.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/ai/types/LogicAI.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Call.h"
#include "mindustry/world/Build.h"

extern "C" {


void mark_mindustry_logic_LExecutor$UnitControlI(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_logic_LExecutor$UnitControlI *) object;
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

void clinit_mindustry_logic_LExecutor$UnitControlI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$UnitControlI_mindustry_logic_LUnitControl_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitControlI:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$UnitControlI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(310);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_move;
	((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(311);
	((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(312);
	((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[2].o);
	LINE_NUMBER(313);
	((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[3].o);
	LINE_NUMBER(314);
	((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (frame[4].o);
	LINE_NUMBER(315);
	((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p4 = (jref) (frame[5].o);
	LINE_NUMBER(316);
	((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p5 = (jref) (frame[6].o);
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$UnitControlI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitControlI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$UnitControlI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(319);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_move;
	((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LExecutor$UnitControlI_checkLogicAI_mindustry_logic_LExecutor_java_lang_Object_boolean_R_mindustry_ai_types_LogicAI(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitControlI:checkLogicAI", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$UnitControlI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(324);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Unit)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[1].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	if (sp[0].o != (frame[3].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_team;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_privileged) == 0) goto label_1;
	}
label_3:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_mindustry_entities_units_UnitController_isLogicControllable_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_isLogicControllable_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_ai_types_LogicAI)) == 0) goto label_5;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_ai_types_LogicAI, (frame[5].o)));
	LINE_NUMBER(326);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_thisv;
	sp[1].o = (jobject)((func_mindustry_logic_LVar_building_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_building_R_mindustry_gen_Building])(ctx, sp[1].o);
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_5:;
	{
	LINE_NUMBER(328);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(329);
	clinit_mindustry_ai_types_LogicAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_LogicAI);
	init_mindustry_ai_types_LogicAI(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(330);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[0].o)))->F_thisv;
	sp[1].o = (jobject)((func_mindustry_logic_LVar_building_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_building_R_mindustry_gen_Building])(ctx, sp[1].o);
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(332);
	((func_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController])(ctx, (frame[3].o), (frame[5].o));
	LINE_NUMBER(334);
	((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(335);
	((func_mindustry_gen_Unit_clearBuilding) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_clearBuilding])(ctx, (frame[3].o));
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_1:;
	{
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$UnitControlI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitControlI:run", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(345);
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitControl) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(348);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_unbind;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_within;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(349);
	sp[0].o = (jobject)SM_mindustry_logic_LExecutor$UnitControlI_checkLogicAI_mindustry_logic_LExecutor_java_lang_Object_boolean_R_mindustry_ai_types_LogicAI(ctx, (frame[1].o), (frame[2].o), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(352);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unit)) == 0) goto label_7;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[2].o)));
	if ((frame[4].o) != nullptr) goto label_9;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_7;
label_9:;
	{
	LINE_NUMBER(353);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_controlTimer = (jfloat(600.0f));
	}
label_10:;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp0);
	frame[6].f = temp1;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p2;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp2);
	frame[7].f = temp3;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p3;
	jfloat temp4 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[0].o);
	jfloat temp5 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp4);
	frame[8].f = temp5;
	LINE_NUMBER(356);
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LUnitControl;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp6 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp6))) {
		case 1: goto label_14;
		case 2: goto label_14;
		case 3: goto label_15;
		case 4: goto label_15;
		case 5: goto label_15;
		case 6: goto label_15;
		case 7: goto label_16;
		case 8: goto label_17;
		case 9: goto label_18;
		case 10: goto label_19;
		case 11: goto label_20;
		case 12: goto label_21;
		case 13: goto label_22;
		case 14: goto label_23;
		case 15: goto label_24;
		case 16: goto label_25;
		case 17: goto label_26;
		case 18: goto label_27;
		case 19: goto label_28;
		case 20: goto label_29;
		case 21: goto label_30;
		default: goto label_7;
	}
	}
label_14:;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_control = (jref) sp[1].o;
	LINE_NUMBER(359);
	goto label_7;
	}
label_15:;
	{
	LINE_NUMBER(361);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_control = (jref) sp[1].o;
	LINE_NUMBER(362);
	((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_moveX = (frame[6].f);
	LINE_NUMBER(363);
	((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_moveY = (frame[7].f);
	LINE_NUMBER(364);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_approach;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	{
	LINE_NUMBER(365);
	((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_moveRad = (frame[8].f);
	}
label_35:;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_stop;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(370);
	((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(371);
	((func_mindustry_gen_Unit_clearBuilding) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_clearBuilding])(ctx, (frame[5].o));
	goto label_7;
	}
label_16:;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[5].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ai_types_LogicAI)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(376);
	((func_mindustry_gen_Unit_resetController) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_resetController])(ctx, (frame[5].o));
	goto label_7;
	}
label_17:;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p4;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, (frame[5].o), (frame[6].f), (frame[7].f), (frame[8].f));
	sp += 1;
	if (temp0 == 0) goto label_40;
	}
	INST_DCONST(1);
	goto label_41;
label_40:;
	INST_DCONST(0);
label_41:;
	{
	sp -= 2;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, sp[1].d);
	LINE_NUMBER(381);
	goto label_7;
	}
label_18:;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_posTarget;
	((func_mindustry_gen_PosTeam_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_PosTeam_set_float_float])(ctx, sp[0].o, (frame[6].f), (frame[7].f));
	LINE_NUMBER(384);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_aimControl = (jref) sp[1].o;
	LINE_NUMBER(385);
	((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_mainTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(386);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p3;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_shoot = temp0;
	LINE_NUMBER(387);
	goto label_7;
	}
label_19:;
	{
	LINE_NUMBER(389);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_aimControl = (jref) sp[1].o;
	LINE_NUMBER(390);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[1].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[1].o);
	frame[10].o = sp[1].o;
	sp += 1;
	if ((isInstance(ctx, (frame[10].o), &class_mindustry_gen_Teamc)) == 0) goto label_48;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_gen_Teamc, (frame[10].o)));
	sp[0].o = frame[9].o;
	sp += 1;
	goto label_50;
	}
label_48:;
	INST_ACONST_NULL();
label_50:;
	{
	sp -= 2;
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_mainTarget = (jref) sp[1].o;
	LINE_NUMBER(391);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p2;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_shoot = temp0;
	LINE_NUMBER(392);
	goto label_7;
	}
label_20:;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_boost = temp0;
	LINE_NUMBER(395);
	goto label_7;
	}
label_21:;
	{
	LINE_NUMBER(397);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[1].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp0;
	LINE_NUMBER(398);
	goto label_7;
	}
label_22:;
	{
	LINE_NUMBER(400);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].f), (frame[7].f));
	frame[9].o = sp[0].o;
	LINE_NUMBER(401);
	jint temp0 = (jint)((func_mindustry_gen_Unit_canMine_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_canMine_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_56;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)((func_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean])(ctx, (frame[5].o), (frame[9].o));
	sp += 1;
	if (temp0 == 0) goto label_58;
	}
	INST_ALOAD(9);
	goto label_59;
label_58:;
	INST_ACONST_NULL();
label_59:;
	sp -= 2;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
label_56:;
	LINE_NUMBER(404);
	goto label_7;
label_23:;
	{
	LINE_NUMBER(406);
	jint temp0 = (jint)((func_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean])(ctx, (frame[1].o), (frame[5].o), (jfloat(90.0f)));
	if (temp0 != 0) goto label_60;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_60:;
	{
	LINE_NUMBER(408);
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Payloadc)) == 0) goto label_61;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[5].o)));
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_61;
	}
	{
	LINE_NUMBER(409);
	SM_mindustry_gen_Call_payloadDropped_mindustry_gen_Unit_float_float(ctx, (frame[5].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_y));
	LINE_NUMBER(410);
	((func_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit])(ctx, (frame[1].o), (frame[5].o));
	}
label_61:;
	LINE_NUMBER(412);
	goto label_7;
label_24:;
	{
	LINE_NUMBER(414);
	jint temp0 = (jint)((func_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean])(ctx, (frame[1].o), (frame[5].o), (jfloat(90.0f)));
	if (temp0 != 0) goto label_65;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_65:;
	{
	LINE_NUMBER(416);
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Payloadc)) == 0) goto label_66;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[5].o)));
	LINE_NUMBER(418);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_68;
	}
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_type;
	jfloat temp2 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_hitSize) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LExecutor$UnitControlI_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_logic_LExecutor$UnitControlI_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_logic_LExecutor$UnitControlI_invoke_arc_func_Boolf_1);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(421);
	if ((frame[10].o) == nullptr) goto label_71;
	}
	{
	LINE_NUMBER(422);
	SM_mindustry_gen_Call_pickedUnitPayload_mindustry_gen_Unit_mindustry_gen_Unit(ctx, (frame[5].o), (frame[10].o));
	}
label_71:;
	LINE_NUMBER(424);
	goto label_73;
label_68:;
	{
	LINE_NUMBER(425);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_y));
	frame[10].o = sp[0].o;
	LINE_NUMBER(428);
	if ((frame[10].o) == nullptr) goto label_73;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_73;
	}
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(430);
	if ((frame[11].o) == nullptr) goto label_77;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean, (frame[9].o)))(ctx, (frame[9].o), (frame[11].o));
	if (temp0 == 0) goto label_77;
	}
	{
	LINE_NUMBER(431);
	SM_mindustry_gen_Call_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean(ctx, (frame[5].o), (frame[10].o), (jint(0)));
	goto label_73;
	}
label_77:;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_hidden;
	if (sp[0].o == sp[1].o) goto label_73;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canPickup_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_gen_Building_canPickup_R_boolean])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_73;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean, (frame[9].o)))(ctx, (frame[9].o), (frame[10].o));
	if (temp0 == 0) goto label_73;
	}
	{
	LINE_NUMBER(434);
	SM_mindustry_gen_Call_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean(ctx, (frame[5].o), (frame[10].o), (jint(1)));
	}
label_73:;
	{
	LINE_NUMBER(438);
	((func_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit])(ctx, (frame[1].o), (frame[5].o));
	}
label_66:;
	LINE_NUMBER(440);
	goto label_7;
label_25:;
	{
	LINE_NUMBER(442);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_y));
	frame[9].o = sp[0].o;
	LINE_NUMBER(443);
	if ((frame[9].o) == nullptr) goto label_81;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, (frame[5].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_81;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean])(ctx, (frame[9].o), (frame[5].o));
	if (temp0 == 0) goto label_81;
	}
	{
	LINE_NUMBER(444);
	SM_mindustry_gen_Call_unitBuildingControlSelect_mindustry_gen_Unit_mindustry_gen_Building(ctx, (frame[5].o), (frame[9].o));
	}
label_81:;
	LINE_NUMBER(446);
	goto label_7;
label_26:;
	{
	LINE_NUMBER(448);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitBuild) != 0) goto label_83;
	}
	{
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) == 0) goto label_84;
	}
label_83:;
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_canBuild_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_canBuild_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_84;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p3;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	if ((isInstance(ctx, (frame[10].o), &class_mindustry_world_Block)) == 0) goto label_84;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[10].o)));
	jint temp0 = (jint)((func_mindustry_world_Block_canBeBuilt_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Block_canBeBuilt_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_84;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Block_unlockedNow_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_86;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_84;
	}
label_86:;
	{
	LINE_NUMBER(449);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((frame[6].f) - (((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_offset) / (jfloat(8.0f)))));
	frame[10].i = temp0;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((frame[7].f) - (((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_offset) / (jfloat(8.0f)))));
	frame[11].i = temp1;
	LINE_NUMBER(450);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p4;
	jint temp2 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	jint temp3 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, temp2, (jint(4)));
	frame[12].i = temp3;
	LINE_NUMBER(453);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x) != (frame[10].i)) goto label_90;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y) != (frame[11].i)) goto label_90;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_block;
	if (sp[0].o != (frame[9].o)) goto label_90;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_plans;
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_91;
	}
label_90:;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_progress = (jfloat(0));
	LINE_NUMBER(455);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_initialized = (jint(0));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_stuck = (jint(0));
	}
label_91:;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p5;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(460);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, (frame[10].i), (frame[11].i), (frame[12].i), (frame[9].o));
	LINE_NUMBER(461);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	sp += 1;
	if ((isInstance(ctx, (frame[13].o), &class_mindustry_ctype_Content)) == 0) goto label_96;
	}
	{
	frame[15].o = (checkCast(ctx, &class_mindustry_ctype_Content, (frame[13].o)));
	sp[0].o = frame[15].o;
	sp += 1;
	goto label_98;
	}
label_96:;
	{
	if ((isInstance(ctx, (frame[13].o), &class_mindustry_gen_Building)) == 0) goto label_99;
	}
	{
	frame[14].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[13].o)));
	sp[0].o = frame[14].o;
	sp += 1;
	goto label_98;
	}
label_99:;
	INST_ACONST_NULL();
label_98:;
	{
	sp -= 2;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_config = (jref) sp[1].o;
	LINE_NUMBER(463);
	((func_mindustry_gen_Unit_clearBuilding) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_clearBuilding])(ctx, (frame[5].o));
	LINE_NUMBER(464);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(466);
	if ((frame[14].o) == nullptr) goto label_84;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[14].o));
	if (sp[0].o != (frame[9].o)) goto label_104;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_build;
	if (sp[0].o == nullptr) goto label_104;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_build;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation) == (frame[12].i)) goto label_84;
	}
label_104:;
	{
	LINE_NUMBER(467);
	((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_updateBuilding = (jint(1));
	LINE_NUMBER(468);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, sp[1].o);
	}
label_84:;
	LINE_NUMBER(471);
	goto label_7;
label_27:;
	{
	LINE_NUMBER(473);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitDeconstruct) != 0) goto label_106;
	}
	{
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) == 0) goto label_7;
	}
label_106:;
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_canBuild_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_canBuild_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[6].f));
	if (temp0 != temp1) goto label_108;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[7].f));
	if (temp0 != temp1) goto label_108;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_breaking) == 0) goto label_108;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_plans;
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_109;
	}
label_108:;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_progress = (jfloat(0));
	LINE_NUMBER(477);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_initialized = (jint(0));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_stuck = (jint(0));
	}
label_109:;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[6].f));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(482);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[7].f));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y = temp1;
	LINE_NUMBER(483);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_breaking = (jint(1));
	LINE_NUMBER(485);
	((func_mindustry_gen_Unit_clearBuilding) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_clearBuilding])(ctx, (frame[5].o));
	LINE_NUMBER(486);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(488);
	if ((frame[9].o) == nullptr) goto label_117;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_team;
	sp[1].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	jint temp1 = (jint)SM_mindustry_world_Build_validBreak_mindustry_game_Team_int_int_R_boolean(ctx, sp[0].o, temp0, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_y));
	if (temp1 == 0) goto label_117;
	}
	{
	LINE_NUMBER(489);
	((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_updateBuilding = (jint(1));
	LINE_NUMBER(490);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[4].o)))->F_plan;
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, sp[1].o);
	}
label_117:;
	LINE_NUMBER(492);
	goto label_7;
label_28:;
	{
	LINE_NUMBER(495);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, (frame[5].o));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_type;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildRange));
	frame[9].f = temp1;
	LINE_NUMBER(496);
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, (frame[5].o), (frame[6].f), (frame[7].f), (frame[9].f));
	if (temp2 != 0) goto label_121;
	}
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p3;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(498);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p4;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(499);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p5;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	goto label_125;
	}
label_121:;
	{
	LINE_NUMBER(501);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].f), (frame[7].f));
	frame[10].o = sp[0].o;
	LINE_NUMBER(502);
	if ((frame[10].o) != nullptr) goto label_127;
	}
	{
	LINE_NUMBER(503);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p3;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(504);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p4;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(505);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p5;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	goto label_125;
	}
label_127:;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p3;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[10].o));
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p4;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[10].o)))->F_build;
	sp += 1;
	if (sp[0].o == nullptr) goto label_132;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[10].o)))->F_build;
	sp += 1;
	goto label_133;
	}
label_132:;
	INST_ACONST_NULL();
label_133:;
	{
	sp -= 2;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(510);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p5;
	sp[1].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[10].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_air;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_135;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[10].o));
	sp += 1;
	goto label_136;
	}
label_135:;
	INST_ALOAD(10);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_136:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
label_125:;
	LINE_NUMBER(513);
	goto label_7;
label_29:;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_137;
	}
	{
	jint temp0 = (jint)((func_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean])(ctx, (frame[1].o), (frame[5].o), (jfloat(90.0f)));
	if (temp0 != 0) goto label_137;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_137:;
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_138;
	}
	{
	LINE_NUMBER(520);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(521);
	((func_mindustry_gen_Unit_clearItem) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_clearItem])(ctx, (frame[5].o));
	goto label_7;
	}
label_138:;
	{
	LINE_NUMBER(524);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_building_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_building_R_mindustry_gen_Building])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(525);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p2;
	jint temp1 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[10].i = temp2;
	LINE_NUMBER(526);
	if ((frame[9].o) == nullptr) goto label_143;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_143;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_143;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_allowDeposit_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Building_allowDeposit_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_143;
	}
	INST_ILOAD(10);
	if ((--sp)->i <= 0) goto label_143;
	{
	sp[0].o = frame[5].o;
	sp[1].o = frame[9].o;
	jfloat temp0 = jfloat(45.0f);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_block;
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp0 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size) * (8)))) / (jfloat(2)))));
	if (temp1 == 0) goto label_143;
	}
	{
	LINE_NUMBER(527);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, (frame[10].i), (frame[5].o));
	frame[11].i = temp0;
	LINE_NUMBER(528);
	if ((frame[11].i) <= 0) goto label_143;
	}
	{
	LINE_NUMBER(529);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, (frame[5].o));
	SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, (frame[11].i), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_y), (frame[9].o));
	LINE_NUMBER(530);
	((func_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit])(ctx, (frame[1].o), (frame[5].o));
	}
label_143:;
	LINE_NUMBER(534);
	goto label_7;
label_30:;
	{
	LINE_NUMBER(536);
	jint temp0 = (jint)((func_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean])(ctx, (frame[1].o), (frame[5].o), (jfloat(90.0f)));
	if (temp0 != 0) goto label_148;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_148:;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_building_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_building_R_mindustry_gen_Building])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(539);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p3;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[10].i = temp0;
	LINE_NUMBER(541);
	if ((frame[9].o) == nullptr) goto label_151;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_151;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_151;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_items;
	if (sp[0].o == nullptr) goto label_151;
	}
	{
	LINE_NUMBER(542);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitControlI *) NULL_CHECK((frame[0].o)))->F_p2;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	if ((isInstance(ctx, (frame[12].o), &class_mindustry_type_Item)) == 0) goto label_151;
	}
	{
	frame[11].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[12].o)));
	sp[0].o = frame[5].o;
	sp[1].o = frame[9].o;
	jfloat temp0 = jfloat(45.0f);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_block;
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp0 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size) * (8)))) / (jfloat(2)))));
	if (temp1 == 0) goto label_151;
	}
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[11].o));
	jint temp1 = frame[10].i;
	jint temp2 = (jint)((func_mindustry_gen_Unit_maxAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_maxAccepted_mindustry_type_Item_R_int])(ctx, (frame[5].o), (frame[11].o));
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, temp2);
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp3);
	frame[12].i = temp4;
	LINE_NUMBER(545);
	if ((frame[12].i) <= 0) goto label_151;
	}
	{
	LINE_NUMBER(546);
	SM_mindustry_gen_Call_takeItems_mindustry_gen_Building_mindustry_type_Item_int_mindustry_gen_Unit(ctx, (frame[9].o), (frame[11].o), (frame[12].i), (frame[5].o));
	LINE_NUMBER(547);
	((func_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit])(ctx, (frame[1].o), (frame[5].o));
	}
label_151:;
	LINE_NUMBER(550);
	goto label_7;
label_7:;
	LINE_NUMBER(554);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LExecutor$UnitControlI_lambda$run$0_mindustry_gen_Unit_mindustry_gen_Payloadc_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitControlI:lambda$run$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$UnitControlI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(419);
	if ((frame[2].o) == (frame[0].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isAI_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[2].o), (frame[0].o), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitSize) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(1.2f)))));
	if (temp0 == 0) goto label_1;
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

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_logic_LExecutor$UnitControlI;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method checkLogicAI
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_logic_LExecutor$UnitControlI[] {
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
	(void *) M_mindustry_logic_LExecutor$UnitControlI_run_mindustry_logic_LExecutor,
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
	{ "type", &class_mindustry_logic_LUnitControl, offsetof(mindustry_logic_LExecutor$UnitControlI, F_type), "Lmindustry/logic/LUnitControl;", 1 },
	{ "p1", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitControlI, F_p1), "Lmindustry/logic/LVar;", 1 },
	{ "p2", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitControlI, F_p2), "Lmindustry/logic/LVar;", 1 },
	{ "p3", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitControlI, F_p3), "Lmindustry/logic/LVar;", 1 },
	{ "p4", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitControlI, F_p4), "Lmindustry/logic/LVar;", 1 },
	{ "p5", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitControlI, F_p5), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$UnitControlI_mindustry_logic_LUnitControl_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LUnitControl;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$UnitControlI, 0, "()V", 1 },
	{ "checkLogicAI", (intptr_t) SM_mindustry_logic_LExecutor$UnitControlI_checkLogicAI_mindustry_logic_LExecutor_java_lang_Object_boolean_R_mindustry_ai_types_LogicAI, 0, "(Lmindustry/logic/LExecutor;Ljava/lang/Object;Z)Lmindustry/ai/types/LogicAI;", 9 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$UnitControlI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$UnitControlI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
	{ "lambda$run$0", (intptr_t) SM_mindustry_logic_LExecutor$UnitControlI_lambda$run$0_mindustry_gen_Unit_mindustry_gen_Payloadc_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Payloadc;Lmindustry/gen/Unit;)Z", 4106 },
};

Class class_mindustry_logic_LExecutor$UnitControlI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$UnitControlI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$UnitControlI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$UnitControlI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$UnitControlI,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$UnitControlI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$UnitControlI = registerClass(&class_mindustry_logic_LExecutor$UnitControlI);

}

