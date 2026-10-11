#include "mindustry/entities/bullet/EmpBulletType.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/content/Fx.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/bullet/EmpBulletType_invoke_arc_func_Cons_3.h"
#include "mindustry/entities/bullet/EmpBulletType.h"
#include "mindustry/entities/bullet/BasicBulletType.h"
#include "java/lang/Object.h"
#include "mindustry/entities/bullet/EmpBulletType_invoke_arc_func_Cons_2.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/entities/Units.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_entities_bullet_EmpBulletType(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_bullet_BasicBulletType(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_bullet_EmpBulletType *) object;
	if (self->F_hitPowerEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hitPowerEffect)->clazz)->markFunction)((jobject) self->F_hitPowerEffect, mark, depth + 1);
	if (self->F_chainEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chainEffect)->clazz)->markFunction)((jobject) self->F_chainEffect, mark, depth + 1);
	if (self->F_applyEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applyEffect)->clazz)->markFunction)((jobject) self->F_applyEffect, mark, depth + 1);
}

void clinit_mindustry_entities_bullet_EmpBulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BasicBulletType(ctx);
}

void init_mindustry_entities_bullet_EmpBulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/EmpBulletType:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_EmpBulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_entities_bullet_BasicBulletType(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(100.0f));
	LINE_NUMBER(11);
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_timeIncrease = (jfloat(2.5f));
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_timeDuration = (jfloat(600.0f));
	LINE_NUMBER(12);
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_powerDamageScl = (jfloat(2));
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_powerSclDecrease = (jfloat(0.2f));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitEmpSpark;
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK(sp[0].o))->F_hitPowerEffect = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_chainEmp;
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK(sp[0].o))->F_chainEffect = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_heal;
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK(sp[0].o))->F_applyEffect = (jref) sp[1].o;
	LINE_NUMBER(14);
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_hitUnits = (jint(1));
	LINE_NUMBER(15);
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_unitDamageScl = (jfloat(0.7f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_EmpBulletType_hit_mindustry_gen_Bullet_float_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/EmpBulletType:hit", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(19);
	M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i));
	LINE_NUMBER(21);
	if (((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_absorbed) != 0) goto label_2;
	}
	{
	LINE_NUMBER(22);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_radius;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_EmpBulletType_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_entities_bullet_EmpBulletType_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_entities_bullet_EmpBulletType_invoke_arc_func_Cons_2);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ai_BlockIndexer_allBuildings_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_allBuildings_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(50);
	if (((jint)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_hitUnits) == 0) goto label_2;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_radius;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_EmpBulletType_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_entities_bullet_EmpBulletType_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_entities_bullet_EmpBulletType_invoke_arc_func_Cons_3);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	}
label_2:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_EmpBulletType_lambda$hit$1_mindustry_gen_Bullet_float_float_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/EmpBulletType:lambda$hit$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_hittable_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)SM_mindustry_entities_Damage_findAbsorber_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Building(ctx, sp[0].o, (frame[2].f), (frame[3].f), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_y));
	frame[5].o = sp[0].o;
	LINE_NUMBER(54);
	if ((frame[5].o) == nullptr) goto label_4;
	}
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_hitPowerEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[4].o));
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_chainEffect;
	jfloat temp3 = frame[2].f;
	jfloat temp4 = frame[3].f;
	jfloat temp5 = jfloat(0);
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp3, temp4, temp5, sp[1].o, (frame[4].o));
	LINE_NUMBER(60);
	((func_mindustry_gen_Unit_damage_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_damage_float])(ctx, (frame[4].o), (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage) * ((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_unitDamageScl)));
	LINE_NUMBER(61);
	jint temp6 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_statusChance))));
	if (temp6 == 0) goto label_1;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_status;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_statusDuration));
	}
label_1:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_EmpBulletType_lambda$hit$0_mindustry_gen_Bullet_float_float_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/EmpBulletType:lambda$hit$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_canOverdrive) == 0) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_timeScale_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_timeScale_R_float])(ctx, (frame[4].o));
	if ((floatCompare(temp0, ((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_timeIncrease), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(25);
	((func_mindustry_gen_Building_applyBoost_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_applyBoost_float_float])(ctx, (frame[4].o), ((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_timeIncrease), ((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_timeDuration));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_chainEffect;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = jfloat(0);
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (frame[4].o));
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_applyEffect;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size))) * (jfloat(7.0f))));
	}
label_3:;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = frame[4].o;
	jfloat temp0 = ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healPercent) / (jfloat(100.0f));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_maxHealth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_maxHealth_R_float])(ctx, (frame[4].o));
	((func_mindustry_gen_Building_heal_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_heal_float])(ctx, sp[0].o, ((temp0 * temp1) + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healAmount)));
	LINE_NUMBER(32);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_healBlockFull;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_x;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	jfloat temp4 = jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size));
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp2, temp3, temp4, sp[1].o, sp[2].o);
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_applyEffect;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size))) * (jfloat(7.0f))));
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_power;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)SM_mindustry_entities_Damage_findAbsorber_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Building(ctx, sp[0].o, (frame[2].f), (frame[3].f), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_y));
	frame[5].o = sp[0].o;
	LINE_NUMBER(37);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(38);
	frame[4].o = (frame[5].o);
	}
label_13:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_power;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastPowerProduced_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastPowerProduced_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(42);
	((func_mindustry_gen_Building_applySlowdown_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_applySlowdown_float_float])(ctx, (frame[4].o), ((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_powerSclDecrease), ((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_timeDuration));
	LINE_NUMBER(43);
	((func_mindustry_gen_Building_damage_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_damage_float])(ctx, (frame[4].o), (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage) * ((jfloat)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_powerDamageScl)));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_hitPowerEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[4].o));
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_chainEffect;
	jfloat temp3 = frame[2].f;
	jfloat temp4 = frame[3].f;
	jfloat temp5 = jfloat(0);
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp3, temp4, temp5, sp[1].o, (frame[4].o));
	}
label_7:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_bullet_EmpBulletType[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_Content_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_entities_bullet_BulletType_init,
	(void *) M_mindustry_ctype_Content_postInit,
	(void *) M_mindustry_entities_bullet_BulletType_afterPatch,
	(void *) M_mindustry_entities_bullet_BasicBulletType_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_entities_bullet_BulletType_estimateDPS_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_calculateRange_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_continuousDamage_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_heals_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float,
	(void *) M_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_EmpBulletType_hit_mindustry_gen_Bullet_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BasicBulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$0_mindustry_gen_Building,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$hit$0_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_EmpBulletType_lambda$hit$1_mindustry_gen_Bullet_float_float_mindustry_gen_Unit,
	(void *) M_mindustry_entities_bullet_EmpBulletType_lambda$hit$0_mindustry_gen_Bullet_float_float_mindustry_gen_Building,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "copy", "()Lmindustry/entities/bullet/BulletType;" },
	{ "estimateDPS", "()F" },
	{ "calculateRange", "()F" },
	{ "continuousDamage", "()F" },
	{ "heals", "()Z" },
	{ "testCollision", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "hitTile", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;FFFZ)V" },
	{ "hitEntity", "(Lmindustry/gen/Bullet;Lmindustry/gen/Hitboxc;F)V" },
	{ "handlePierce", "(Lmindustry/gen/Bullet;FFF)V" },
	{ "damageMultiplier", "(Lmindustry/gen/Bullet;)F" },
	{ "hit", "(Lmindustry/gen/Bullet;)V" },
	{ "hit", "(Lmindustry/gen/Bullet;FF)V" },
	{ "hit", "(Lmindustry/gen/Bullet;FFZ)V" },
	{ "createIncend", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createPuddles", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createSplashDamage", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createFrags", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createUnits", "(Lmindustry/gen/Bullet;FF)V" },
	{ "despawned", "(Lmindustry/gen/Bullet;)V" },
	{ "removed", "(Lmindustry/gen/Bullet;)V" },
	{ "buildingDamage", "(Lmindustry/gen/Bullet;)F" },
	{ "shieldDamage", "(Lmindustry/gen/Bullet;)F" },
	{ "draw", "(Lmindustry/gen/Bullet;)V" },
	{ "drawTrail", "(Lmindustry/gen/Bullet;)V" },
	{ "drawParts", "(Lmindustry/gen/Bullet;)V" },
	{ "drawLight", "(Lmindustry/gen/Bullet;)V" },
	{ "init", "(Lmindustry/gen/Bullet;)V" },
	{ "update", "(Lmindustry/gen/Bullet;)V" },
	{ "updateBulletInterval", "(Lmindustry/gen/Bullet;)V" },
	{ "updateHoming", "(Lmindustry/gen/Bullet;)V" },
	{ "updateWeaving", "(Lmindustry/gen/Bullet;)V" },
	{ "updateTrailEffects", "(Lmindustry/gen/Bullet;)V" },
	{ "updateTrail", "(Lmindustry/gen/Bullet;)V" },
	{ "create", "(Lmindustry/gen/Teamc;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFLmindustry/entities/Mover;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FFLmindustry/gen/Teamc;)Lmindustry/gen/Bullet;" },
	{ "createNet", "(Lmindustry/game/Team;FFFFFF)V" },
	{ "lambda$updateHoming$3", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "lambda$updateHoming$2", "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z" },
	{ "lambda$updateHoming$1", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "lambda$updateHoming$0", "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z" },
	{ "lambda$createSplashDamage$0", "(Lmindustry/gen/Building;)V" },
	{ "lambda$hit$0", "(Lmindustry/gen/Bullet;FF)V" },
	{ "lambda$hit$1", "(Lmindustry/gen/Bullet;FFLmindustry/gen/Unit;)V" },
	{ "lambda$hit$0", "(Lmindustry/gen/Bullet;FFLmindustry/gen/Building;)V" },
};

static FieldMetadata fields[] {
	{ "radius", &class_float, offsetof(mindustry_entities_bullet_EmpBulletType, F_radius), "F", 1 },
	{ "timeIncrease", &class_float, offsetof(mindustry_entities_bullet_EmpBulletType, F_timeIncrease), "F", 1 },
	{ "timeDuration", &class_float, offsetof(mindustry_entities_bullet_EmpBulletType, F_timeDuration), "F", 1 },
	{ "powerDamageScl", &class_float, offsetof(mindustry_entities_bullet_EmpBulletType, F_powerDamageScl), "F", 1 },
	{ "powerSclDecrease", &class_float, offsetof(mindustry_entities_bullet_EmpBulletType, F_powerSclDecrease), "F", 1 },
	{ "hitPowerEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_EmpBulletType, F_hitPowerEffect), "Lmindustry/entities/Effect;", 1 },
	{ "chainEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_EmpBulletType, F_chainEffect), "Lmindustry/entities/Effect;", 1 },
	{ "applyEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_EmpBulletType, F_applyEffect), "Lmindustry/entities/Effect;", 1 },
	{ "hitUnits", &class_boolean, offsetof(mindustry_entities_bullet_EmpBulletType, F_hitUnits), "Z", 1 },
	{ "unitDamageScl", &class_float, offsetof(mindustry_entities_bullet_EmpBulletType, F_unitDamageScl), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_EmpBulletType, 0, "()V", 1 },
	{ "hit", (intptr_t) M_mindustry_entities_bullet_EmpBulletType_hit_mindustry_gen_Bullet_float_float_boolean, VTABLE_mindustry_entities_bullet_EmpBulletType_hit_mindustry_gen_Bullet_float_float_boolean, "(Lmindustry/gen/Bullet;FFZ)V", 1 },
	{ "lambda$hit$1", (intptr_t) M_mindustry_entities_bullet_EmpBulletType_lambda$hit$1_mindustry_gen_Bullet_float_float_mindustry_gen_Unit, VTABLE_mindustry_entities_bullet_EmpBulletType_lambda$hit$1_mindustry_gen_Bullet_float_float_mindustry_gen_Unit, "(Lmindustry/gen/Bullet;FFLmindustry/gen/Unit;)V", 4098 },
	{ "lambda$hit$0", (intptr_t) M_mindustry_entities_bullet_EmpBulletType_lambda$hit$0_mindustry_gen_Bullet_float_float_mindustry_gen_Building, VTABLE_mindustry_entities_bullet_EmpBulletType_lambda$hit$0_mindustry_gen_Bullet_float_float_mindustry_gen_Building, "(Lmindustry/gen/Bullet;FFLmindustry/gen/Building;)V", 4098 },
};

Class class_mindustry_entities_bullet_EmpBulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/EmpBulletType",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BasicBulletType,
		.size = sizeof(mindustry_entities_bullet_EmpBulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_EmpBulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_EmpBulletType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_EmpBulletType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 79,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_EmpBulletType = registerClass(&class_mindustry_entities_bullet_EmpBulletType);

}
