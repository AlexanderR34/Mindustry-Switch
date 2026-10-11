#include "mindustry/logic/LExecutor_SetRuleI.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/Block.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_SetRuleI.h"
#include "mindustry/game/Rules.h"
#include "java/lang/Enum.h"
#include "arc/graphics/Color.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/core/UI.h"
#include "mindustry/logic/LExecutor_1.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LogicRule.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"
#include "mindustry/ui/fragments/PlacementFragment.h"
#include "mindustry/game/Rules_TeamRule.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SetRuleI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SetRuleI *) object;
	if (self->F_rule)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rule)->clazz)->markFunction)((jobject) self->F_rule, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_p1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p1)->clazz)->markFunction)((jobject) self->F_p1, mark, depth + 1);
	if (self->F_p2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p2)->clazz)->markFunction)((jobject) self->F_p2, mark, depth + 1);
	if (self->F_p3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p3)->clazz)->markFunction)((jobject) self->F_p3, mark, depth + 1);
	if (self->F_p4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p4)->clazz)->markFunction)((jobject) self->F_p4, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$SetRuleI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SetRuleI_mindustry_logic_LogicRule_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetRuleI:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetRuleI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(1783);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1780);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_waveSpacing;
	((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK(sp[0].o))->F_rule = (jref) sp[1].o;
	LINE_NUMBER(1784);
	((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_rule = (jref) (frame[1].o);
	LINE_NUMBER(1785);
	((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(1786);
	((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[3].o);
	LINE_NUMBER(1787);
	((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[4].o);
	LINE_NUMBER(1788);
	((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (frame[5].o);
	LINE_NUMBER(1789);
	((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_p4 = (jref) (frame[6].o);
	LINE_NUMBER(1790);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SetRuleI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetRuleI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetRuleI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1792);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1780);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_waveSpacing;
	((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK(sp[0].o))->F_rule = (jref) sp[1].o;
	LINE_NUMBER(1793);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SetRuleI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetRuleI:run", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1797);
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_rule;
	jint temp0 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_1;
		case 3: goto label_1;
		case 4: goto label_1;
		case 5: goto label_1;
		case 6: goto label_1;
		case 7: goto label_1;
		case 8: goto label_1;
		case 9: goto label_1;
		case 10: goto label_1;
		case 11: goto label_2;
		case 12: goto label_3;
		case 13: goto label_4;
		case 14: goto label_5;
		case 15: goto label_6;
		case 16: goto label_7;
		case 17: goto label_8;
		case 18: goto label_9;
		case 19: goto label_10;
		case 20: goto label_11;
		case 21: goto label_12;
		case 22: goto label_13;
		case 23: goto label_14;
		case 24: goto label_15;
		case 25: goto label_16;
		case 26: goto label_17;
		case 27: goto label_18;
		case 28: goto label_19;
		case 29: goto label_20;
		case 30: goto label_21;
		case 31: goto label_22;
		default: goto label_23;
	}
	}
label_2:;
	{
	LINE_NUMBER(1798);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTimer = temp0;
	goto label_23;
	}
label_3:;
	{
	LINE_NUMBER(1799);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(1)));
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave = temp1;
	goto label_23;
	}
label_4:;
	{
	LINE_NUMBER(1800);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp0 * (jfloat(60.0f))), (jfloat(0)));
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wavetime = temp1;
	goto label_23;
	}
label_5:;
	{
	LINE_NUMBER(1801);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves = temp0;
	goto label_23;
	}
label_6:;
	{
	LINE_NUMBER(1802);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveSending = temp0;
	goto label_23;
	}
label_7:;
	{
	LINE_NUMBER(1803);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode = temp0;
	goto label_23;
	}
label_8:;
	{
	LINE_NUMBER(1804);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveSpacing = (temp0 * (jfloat(60.0f)));
	goto label_23;
	}
label_9:;
	{
	LINE_NUMBER(1805);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_enemyCoreBuildRadius = (temp0 * (jfloat(8.0f)));
	goto label_23;
	}
label_10:;
	{
	LINE_NUMBER(1806);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dropZoneRadius = (temp0 * (jfloat(8.0f)));
	goto label_23;
	}
label_11:;
	{
	LINE_NUMBER(1807);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(0)));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitCap = temp1;
	goto label_23;
	}
label_12:;
	{
	LINE_NUMBER(1808);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_lighting = temp0;
	goto label_23;
	}
label_13:;
	{
	LINE_NUMBER(1809);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_canGameOver = temp0;
	goto label_23;
	}
label_14:;
	{
	LINE_NUMBER(1810);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled = temp0;
	goto label_23;
	}
label_15:;
	{
	LINE_NUMBER(1811);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_musicVolume = temp1;
	goto label_23;
	}
label_16:;
	{
	LINE_NUMBER(1813);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_p1;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_p2;
	jint temp1 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[3].i = temp1;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_p3;
	jint temp2 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[4].i = temp2;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_p4;
	jint temp3 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[5].i = temp3;
	LINE_NUMBER(1814);
	jint temp4 = (jint)SM_mindustry_logic_LExecutor_checkMapArea_int_int_int_int_boolean_R_boolean(ctx, (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (jint(0)));
	if (temp4 != 0) goto label_28;
	}
	{
	LINE_NUMBER(1815);
	SM_mindustry_gen_Call_setMapArea_int_int_int_int(ctx, (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	}
label_28:;
	LINE_NUMBER(1817);
	goto label_23;
label_17:;
	{
	LINE_NUMBER(1818);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_ambientLight;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color])(ctx, sp[0].o, temp0);
	goto label_23;
	}
label_18:;
	{
	LINE_NUMBER(1819);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitLight = temp0;
	goto label_23;
	}
label_19:;
	{
	LINE_NUMBER(1820);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat(0)));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_solarMultiplier = temp1;
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(1821);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat(0)));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dragMultiplier = temp1;
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(1823);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1824);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_Block)) == 0) goto label_31;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[2].o)));
	LINE_NUMBER(1826);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_bannedBlocks;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_33;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_33;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_blockfrag;
	((func_mindustry_ui_fragments_PlacementFragment_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_rebuild])(ctx, sp[0].o);
	goto label_33;
	}
label_31:;
	{
	LINE_NUMBER(1827);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_UnitType)) == 0) goto label_33;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[2].o)));
	LINE_NUMBER(1828);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_bannedUnits;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	}
label_33:;
	LINE_NUMBER(1830);
	goto label_23;
label_22:;
	{
	LINE_NUMBER(1832);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1833);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_Block)) == 0) goto label_36;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[2].o)));
	LINE_NUMBER(1834);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_bannedBlocks;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_38;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_38;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment *) NULL_CHECK(sp[0].o))->F_blockfrag;
	((func_mindustry_ui_fragments_PlacementFragment_rebuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlacementFragment_rebuild])(ctx, sp[0].o);
	goto label_38;
	}
label_36:;
	{
	LINE_NUMBER(1835);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_UnitType)) == 0) goto label_38;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[2].o)));
	LINE_NUMBER(1836);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_bannedUnits;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	}
label_38:;
	LINE_NUMBER(1838);
	goto label_23;
label_1:;
	{
	LINE_NUMBER(1840);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1841);
	if ((frame[2].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(1842);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_value;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(1843);
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LogicRule;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$SetRuleI *) NULL_CHECK((frame[0].o)))->F_rule;
	jint temp1 = (jint)((func_mindustry_logic_LogicRule_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LogicRule_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp1))) {
		case 1: goto label_43;
		case 2: goto label_44;
		case 3: goto label_45;
		case 4: goto label_46;
		case 5: goto label_47;
		case 6: goto label_48;
		case 7: goto label_49;
		case 8: goto label_50;
		case 9: goto label_51;
		case 10: goto label_52;
		default: goto label_23;
	}
	}
label_43:;
	{
	LINE_NUMBER(1844);
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[2].o));
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[3].f), (jfloat(1,000000e-03f)), (jfloat(50.0f)));
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = temp0;
	goto label_23;
	}
label_44:;
	{
	LINE_NUMBER(1845);
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[2].o));
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), (jfloat(1,000000e-03f)));
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitHealthMultiplier = temp0;
	goto label_23;
	}
label_45:;
	{
	LINE_NUMBER(1846);
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[2].o));
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[3].f), (jfloat(0)), (jfloat(50.0f)));
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitBuildSpeedMultiplier = temp0;
	goto label_23;
	}
label_46:;
	{
	LINE_NUMBER(1847);
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[2].o));
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), (jfloat(0)));
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitMineSpeedMultiplier = temp0;
	goto label_23;
	}
label_47:;
	{
	LINE_NUMBER(1848);
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[2].o));
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), (jfloat(0)));
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitCostMultiplier = temp0;
	goto label_23;
	}
label_48:;
	{
	LINE_NUMBER(1849);
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[2].o));
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), (jfloat(0)));
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitDamageMultiplier = temp0;
	goto label_23;
	}
label_49:;
	{
	LINE_NUMBER(1850);
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[2].o));
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), (jfloat(1,000000e-03f)));
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_blockHealthMultiplier = temp0;
	goto label_23;
	}
label_50:;
	{
	LINE_NUMBER(1851);
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[2].o));
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), (jfloat(0)));
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_blockDamageMultiplier = temp0;
	goto label_23;
	}
label_51:;
	{
	LINE_NUMBER(1852);
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[2].o));
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsMinWeight = (frame[3].f);
	goto label_23;
	}
label_52:;
	{
	LINE_NUMBER(1853);
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[2].o));
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsMinSquad = (jint((frame[3].f)));
	}
label_23:;
	LINE_NUMBER(1858);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SetRuleI[] {
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
	(void *) M_mindustry_logic_LExecutor$SetRuleI_run_mindustry_logic_LExecutor,
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
	{ "rule", &class_mindustry_logic_LogicRule, offsetof(mindustry_logic_LExecutor$SetRuleI, F_rule), "Lmindustry/logic/LogicRule;", 1 },
	{ "value", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetRuleI, F_value), "Lmindustry/logic/LVar;", 1 },
	{ "p1", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetRuleI, F_p1), "Lmindustry/logic/LVar;", 1 },
	{ "p2", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetRuleI, F_p2), "Lmindustry/logic/LVar;", 1 },
	{ "p3", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetRuleI, F_p3), "Lmindustry/logic/LVar;", 1 },
	{ "p4", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetRuleI, F_p4), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetRuleI_mindustry_logic_LogicRule_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LogicRule;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetRuleI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SetRuleI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SetRuleI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SetRuleI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SetRuleI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SetRuleI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SetRuleI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SetRuleI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SetRuleI,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$SetRuleI = registerClass(&class_mindustry_logic_LExecutor$SetRuleI);

}

