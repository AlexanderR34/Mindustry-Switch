#include "mindustry/entities/UnitSorts.h"
#include "mindustry/world/Block.h"
#include "mindustry/entities/Units_Sortf.h"
#include "mindustry/entities/Units_BuildingPriorityf.h"
#include "mindustry/entities/UnitSorts.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_Sortf_12.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_Sortf_13.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_Sortf_14.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_Sortf_15.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_Sortf_16.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_BuildingPriorityf_2.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_Sortf_17.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_BuildingPriorityf_3.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_Sortf_10.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_Sortf_11.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_Sortf_9.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/game/Team.h"
#include "mindustry/content/Liquids.h"
#include "mindustry/world/modules/LiquidModule.h"

extern "C" {

jobject SF_mindustry_entities_UnitSorts_closest;
jobject SF_mindustry_entities_UnitSorts_farthest;
jobject SF_mindustry_entities_UnitSorts_strongest;
jobject SF_mindustry_entities_UnitSorts_weakest;
jobject SF_mindustry_entities_UnitSorts_mostArmor;
jobject SF_mindustry_entities_UnitSorts_leastArmor;
jobject SF_mindustry_entities_UnitSorts_mostShield;
jobject SF_mindustry_entities_UnitSorts_leastShield;
jobject SF_mindustry_entities_UnitSorts_grouped;
jobject SF_mindustry_entities_UnitSorts_buildingDefault;
jobject SF_mindustry_entities_UnitSorts_buildingWater;

void mark_mindustry_entities_UnitSorts(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_UnitSorts_closest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_UnitSorts_closest)->clazz)->markFunction)((jobject) SF_mindustry_entities_UnitSorts_closest, mark, depth + 1);
		if (SF_mindustry_entities_UnitSorts_farthest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_UnitSorts_farthest)->clazz)->markFunction)((jobject) SF_mindustry_entities_UnitSorts_farthest, mark, depth + 1);
		if (SF_mindustry_entities_UnitSorts_strongest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_UnitSorts_strongest)->clazz)->markFunction)((jobject) SF_mindustry_entities_UnitSorts_strongest, mark, depth + 1);
		if (SF_mindustry_entities_UnitSorts_weakest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_UnitSorts_weakest)->clazz)->markFunction)((jobject) SF_mindustry_entities_UnitSorts_weakest, mark, depth + 1);
		if (SF_mindustry_entities_UnitSorts_mostArmor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_UnitSorts_mostArmor)->clazz)->markFunction)((jobject) SF_mindustry_entities_UnitSorts_mostArmor, mark, depth + 1);
		if (SF_mindustry_entities_UnitSorts_leastArmor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_UnitSorts_leastArmor)->clazz)->markFunction)((jobject) SF_mindustry_entities_UnitSorts_leastArmor, mark, depth + 1);
		if (SF_mindustry_entities_UnitSorts_mostShield)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_UnitSorts_mostShield)->clazz)->markFunction)((jobject) SF_mindustry_entities_UnitSorts_mostShield, mark, depth + 1);
		if (SF_mindustry_entities_UnitSorts_leastShield)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_UnitSorts_leastShield)->clazz)->markFunction)((jobject) SF_mindustry_entities_UnitSorts_leastShield, mark, depth + 1);
		if (SF_mindustry_entities_UnitSorts_grouped)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_UnitSorts_grouped)->clazz)->markFunction)((jobject) SF_mindustry_entities_UnitSorts_grouped, mark, depth + 1);
		if (SF_mindustry_entities_UnitSorts_buildingDefault)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_UnitSorts_buildingDefault)->clazz)->markFunction)((jobject) SF_mindustry_entities_UnitSorts_buildingDefault, mark, depth + 1);
		if (SF_mindustry_entities_UnitSorts_buildingWater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_UnitSorts_buildingWater)->clazz)->markFunction)((jobject) SF_mindustry_entities_UnitSorts_buildingWater, mark, depth + 1);
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
	auto self = (mindustry_entities_UnitSorts *) object;
}

void init_mindustry_entities_UnitSorts(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_UnitSorts_grouped_float_R_mindustry_entities_Units$Sortf(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:grouped", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(28);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_9(ctx);
		auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_9 *) gcAlloc(ctx, &class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_9);
		proxy->F_field0 = (frame[0].f);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_UnitSorts_lambda$grouped$0_float_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jfloat param0, jobject param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:lambda$grouped$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_getClustered_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_getClustered_float_float_R_int])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y));
	jfloat temp1 = jfloat((-temp0));
	sp[0].f = temp1;
	sp += 1;
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f), (frame[3].f));
	jfloat temp1 = temp0 * (frame[0].f);
	sp[0].f = temp1;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	INST_FADD();
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_UnitSorts_lambda$static$8_mindustry_gen_Building_R_float(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:lambda$static$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_priority;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_water;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(5.0f)), -1)) <= 0) goto label_1;
	}
	(sp++)->f = jfloat(10.0f);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	INST_FADD();
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_UnitSorts_lambda$static$7_mindustry_gen_Building_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:lambda$static$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_priority);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_UnitSorts_lambda$static$6_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:lambda$static$6", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(18);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return (temp0 + (temp1 / (jfloat(6400.0f))));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_UnitSorts_lambda$static$5_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:lambda$static$5", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(17);
	jfloat temp0 = -((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return (temp0 + (temp1 / (jfloat(6400.0f))));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_UnitSorts_lambda$static$4_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:lambda$static$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(16);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armor;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return (temp0 + (temp1 / (jfloat(6400.0f))));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_UnitSorts_lambda$static$3_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:lambda$static$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(15);
	jfloat temp0 = -((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armor);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return (temp0 + (temp1 / (jfloat(6400.0f))));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_UnitSorts_lambda$static$2_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:lambda$static$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(14);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return (temp0 + (temp1 / (jfloat(6400.0f))));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_UnitSorts_lambda$static$1_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:lambda$static$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(13);
	jfloat temp0 = -((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return (temp0 + (temp1 / (jfloat(6400.0f))));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_UnitSorts_lambda$static$0_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:lambda$static$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(12);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_dst2_float_float_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return (-temp0);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_entities_UnitSorts(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/UnitSorts:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_UnitSorts(ctx);
	{
	LINE_NUMBER(11);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_10(ctx);
		auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_10 *) gcAlloc(ctx, &class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_10);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_UnitSorts(ctx);
	SF_mindustry_entities_UnitSorts_closest = sp[0].o;
	LINE_NUMBER(12);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_11(ctx);
		auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_11 *) gcAlloc(ctx, &class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_11);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_UnitSorts(ctx);
	SF_mindustry_entities_UnitSorts_farthest = sp[0].o;
	LINE_NUMBER(13);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_12(ctx);
		auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_12 *) gcAlloc(ctx, &class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_12);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_UnitSorts(ctx);
	SF_mindustry_entities_UnitSorts_strongest = sp[0].o;
	LINE_NUMBER(14);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_13(ctx);
		auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_13 *) gcAlloc(ctx, &class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_13);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_UnitSorts(ctx);
	SF_mindustry_entities_UnitSorts_weakest = sp[0].o;
	LINE_NUMBER(15);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_14(ctx);
		auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_14 *) gcAlloc(ctx, &class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_14);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_UnitSorts(ctx);
	SF_mindustry_entities_UnitSorts_mostArmor = sp[0].o;
	LINE_NUMBER(16);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_15(ctx);
		auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_15 *) gcAlloc(ctx, &class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_15);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_UnitSorts(ctx);
	SF_mindustry_entities_UnitSorts_leastArmor = sp[0].o;
	LINE_NUMBER(17);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_16(ctx);
		auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_16 *) gcAlloc(ctx, &class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_16);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_UnitSorts(ctx);
	SF_mindustry_entities_UnitSorts_mostShield = sp[0].o;
	LINE_NUMBER(18);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_17(ctx);
		auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_17 *) gcAlloc(ctx, &class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_17);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_UnitSorts(ctx);
	SF_mindustry_entities_UnitSorts_leastShield = sp[0].o;
	LINE_NUMBER(19);
	sp[0].o = (jobject)SM_mindustry_entities_UnitSorts_grouped_float_R_mindustry_entities_Units$Sortf(ctx, (jfloat(3,000000e-03f)));
	clinit_mindustry_entities_UnitSorts(ctx);
	SF_mindustry_entities_UnitSorts_grouped = sp[0].o;
	LINE_NUMBER(23);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$BuildingPriorityf_2(ctx);
		auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$BuildingPriorityf_2 *) gcAlloc(ctx, &class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$BuildingPriorityf_2);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_UnitSorts(ctx);
	SF_mindustry_entities_UnitSorts_buildingDefault = sp[0].o;
	LINE_NUMBER(24);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$BuildingPriorityf_3(ctx);
		auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$BuildingPriorityf_3 *) gcAlloc(ctx, &class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$BuildingPriorityf_3);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_UnitSorts(ctx);
	SF_mindustry_entities_UnitSorts_buildingWater = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_UnitSorts[] {
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
};

static FieldMetadata fields[] {
	{ "closest", &class_mindustry_entities_Units$Sortf, (intptr_t) &SF_mindustry_entities_UnitSorts_closest, "Lmindustry/entities/Units$Sortf;", 9 },
	{ "farthest", &class_mindustry_entities_Units$Sortf, (intptr_t) &SF_mindustry_entities_UnitSorts_farthest, "Lmindustry/entities/Units$Sortf;", 9 },
	{ "strongest", &class_mindustry_entities_Units$Sortf, (intptr_t) &SF_mindustry_entities_UnitSorts_strongest, "Lmindustry/entities/Units$Sortf;", 9 },
	{ "weakest", &class_mindustry_entities_Units$Sortf, (intptr_t) &SF_mindustry_entities_UnitSorts_weakest, "Lmindustry/entities/Units$Sortf;", 9 },
	{ "mostArmor", &class_mindustry_entities_Units$Sortf, (intptr_t) &SF_mindustry_entities_UnitSorts_mostArmor, "Lmindustry/entities/Units$Sortf;", 9 },
	{ "leastArmor", &class_mindustry_entities_Units$Sortf, (intptr_t) &SF_mindustry_entities_UnitSorts_leastArmor, "Lmindustry/entities/Units$Sortf;", 9 },
	{ "mostShield", &class_mindustry_entities_Units$Sortf, (intptr_t) &SF_mindustry_entities_UnitSorts_mostShield, "Lmindustry/entities/Units$Sortf;", 9 },
	{ "leastShield", &class_mindustry_entities_Units$Sortf, (intptr_t) &SF_mindustry_entities_UnitSorts_leastShield, "Lmindustry/entities/Units$Sortf;", 9 },
	{ "grouped", &class_mindustry_entities_Units$Sortf, (intptr_t) &SF_mindustry_entities_UnitSorts_grouped, "Lmindustry/entities/Units$Sortf;", 9 },
	{ "buildingDefault", &class_mindustry_entities_Units$BuildingPriorityf, (intptr_t) &SF_mindustry_entities_UnitSorts_buildingDefault, "Lmindustry/entities/Units$BuildingPriorityf;", 9 },
	{ "buildingWater", &class_mindustry_entities_Units$BuildingPriorityf, (intptr_t) &SF_mindustry_entities_UnitSorts_buildingWater, "Lmindustry/entities/Units$BuildingPriorityf;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_UnitSorts, 0, "()V", 1 },
	{ "grouped", (intptr_t) SM_mindustry_entities_UnitSorts_grouped_float_R_mindustry_entities_Units$Sortf, 0, "(F)Lmindustry/entities/Units$Sortf;", 9 },
	{ "lambda$grouped$0", (intptr_t) SM_mindustry_entities_UnitSorts_lambda$grouped$0_float_mindustry_gen_Unit_float_float_R_float, 0, "(FLmindustry/gen/Unit;FF)F", 4106 },
	{ "lambda$static$8", (intptr_t) SM_mindustry_entities_UnitSorts_lambda$static$8_mindustry_gen_Building_R_float, 0, "(Lmindustry/gen/Building;)F", 4106 },
	{ "lambda$static$7", (intptr_t) SM_mindustry_entities_UnitSorts_lambda$static$7_mindustry_gen_Building_R_float, 0, "(Lmindustry/gen/Building;)F", 4106 },
	{ "lambda$static$6", (intptr_t) SM_mindustry_entities_UnitSorts_lambda$static$6_mindustry_gen_Unit_float_float_R_float, 0, "(Lmindustry/gen/Unit;FF)F", 4106 },
	{ "lambda$static$5", (intptr_t) SM_mindustry_entities_UnitSorts_lambda$static$5_mindustry_gen_Unit_float_float_R_float, 0, "(Lmindustry/gen/Unit;FF)F", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_entities_UnitSorts_lambda$static$4_mindustry_gen_Unit_float_float_R_float, 0, "(Lmindustry/gen/Unit;FF)F", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_entities_UnitSorts_lambda$static$3_mindustry_gen_Unit_float_float_R_float, 0, "(Lmindustry/gen/Unit;FF)F", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_entities_UnitSorts_lambda$static$2_mindustry_gen_Unit_float_float_R_float, 0, "(Lmindustry/gen/Unit;FF)F", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_entities_UnitSorts_lambda$static$1_mindustry_gen_Unit_float_float_R_float, 0, "(Lmindustry/gen/Unit;FF)F", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_entities_UnitSorts_lambda$static$0_mindustry_gen_Unit_float_float_R_float, 0, "(Lmindustry/gen/Unit;FF)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_UnitSorts, 0, "()V", 8 },
};

Class class_mindustry_entities_UnitSorts{
		.nativeName = (intptr_t) "mindustry/entities/UnitSorts",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_UnitSorts),
		.classVtable = (intptr_t) vtable_mindustry_entities_UnitSorts,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_UnitSorts,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_UnitSorts,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_UnitSorts = registerClass(&class_mindustry_entities_UnitSorts);

}
