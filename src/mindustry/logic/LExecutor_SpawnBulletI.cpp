#include "mindustry/logic/LExecutor_SpawnBulletI.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/world/blocks/defense/turrets/LiquidTurret.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_SpawnBulletI.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/defense/turrets/PowerTurret.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/world/blocks/defense/turrets/ContinuousTurret.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/Mover.h"
#include "mindustry/game/Team.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SpawnBulletI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SpawnBulletI *) object;
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_from)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_from)->clazz)->markFunction)((jobject) self->F_from, mark, depth + 1);
	if (self->F_weapon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weapon)->clazz)->markFunction)((jobject) self->F_weapon, mark, depth + 1);
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

void clinit_mindustry_logic_LExecutor$SpawnBulletI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SpawnBulletI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8, jobject param9, jobject param10, jobject param11, jobject param12) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SpawnBulletI:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SpawnBulletI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	frame[9].o = param8;
	frame[10].o = param9;
	frame[11].o = param10;
	frame[12].o = param11;
	frame[13].o = param12;
	{
	LINE_NUMBER(1655);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1656);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[1].o);
	LINE_NUMBER(1657);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_from = (jref) (frame[2].o);
	LINE_NUMBER(1658);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_weapon = (jref) (frame[3].o);
	LINE_NUMBER(1659);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[4].o);
	LINE_NUMBER(1660);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[5].o);
	LINE_NUMBER(1661);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_rotation = (jref) (frame[6].o);
	LINE_NUMBER(1662);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[7].o);
	LINE_NUMBER(1663);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_owner = (jref) (frame[8].o);
	LINE_NUMBER(1664);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_damage = (jref) (frame[9].o);
	LINE_NUMBER(1665);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_velocityScl = (jref) (frame[10].o);
	LINE_NUMBER(1666);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_lifeScl = (jref) (frame[11].o);
	LINE_NUMBER(1667);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_aimX = (jref) (frame[12].o);
	LINE_NUMBER(1668);
	((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_aimY = (jref) (frame[13].o);
	LINE_NUMBER(1669);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SpawnBulletI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SpawnBulletI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SpawnBulletI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1671);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SpawnBulletI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[29];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SpawnBulletI:run", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1676);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1678);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_from;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1679);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_owner;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Entityc)) == 0) goto label_3;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Entityc, (frame[6].o)));
	sp[0].o = frame[5].o;
	sp += 1;
	goto label_5;
	}
label_3:;
	INST_ACONST_NULL();
label_5:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1680);
	if ((frame[2].o) != nullptr) goto label_7;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Teamc)) == 0) goto label_7;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Teamc, (frame[4].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[5].o)))(ctx, (frame[5].o));
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(1681);
	if ((frame[2].o) != nullptr) goto label_9;
	}
	clinit_mindustry_game_Team(ctx);
	(sp++)->o = SF_mindustry_game_Team_derelict;
	INST_ASTORE(2);
label_9:;
	{
	LINE_NUMBER(1684);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_type_UnitType)) == 0) goto label_10;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[3].o)));
	LINE_NUMBER(1685);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_weapon;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[12].i = temp0;
	LINE_NUMBER(1686);
	if ((frame[12].i) < 0) goto label_13;
	}
	{
	jint temp0 = frame[12].i;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[7].o)))->F_weapons;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_14;
	}
label_13:;
	INST_ACONST_NULL();
	goto label_15;
label_14:;
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[7].o)))->F_weapons;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[12].i));
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Weapon, sp[0].o))))->F_bullet;
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1687);
	goto label_17;
	}
label_10:;
	{
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_defense_turrets_ItemTurret)) == 0) goto label_18;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret, (frame[3].o)));
	LINE_NUMBER(1688);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_weapon;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	if ((isInstance(ctx, (frame[14].o), &class_mindustry_type_Item)) == 0) goto label_20;
	}
	{
	frame[13].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[14].o)));
	sp[0].o = frame[13].o;
	sp += 1;
	goto label_22;
	}
label_20:;
	INST_ACONST_NULL();
label_22:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1689);
	if ((frame[12].o) != nullptr) goto label_24;
	}
	INST_ACONST_NULL();
	goto label_25;
label_24:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret *) NULL_CHECK((frame[8].o)))->F_ammoTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[12].o));
	sp[0].o = checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o);
	sp += 1;
	}
label_25:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1690);
	goto label_17;
	}
label_18:;
	{
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_defense_turrets_LiquidTurret)) == 0) goto label_27;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_LiquidTurret, (frame[3].o)));
	LINE_NUMBER(1691);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_weapon;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	if ((isInstance(ctx, (frame[14].o), &class_mindustry_type_Liquid)) == 0) goto label_29;
	}
	{
	frame[13].o = (checkCast(ctx, &class_mindustry_type_Liquid, (frame[14].o)));
	sp[0].o = frame[13].o;
	sp += 1;
	goto label_31;
	}
label_29:;
	INST_ACONST_NULL();
label_31:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1692);
	if ((frame[12].o) != nullptr) goto label_33;
	}
	INST_ACONST_NULL();
	goto label_34;
label_33:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_LiquidTurret *) NULL_CHECK((frame[9].o)))->F_ammoTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[12].o));
	sp[0].o = checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o);
	sp += 1;
	}
label_34:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1693);
	goto label_17;
	}
label_27:;
	{
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret)) == 0) goto label_36;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret, (frame[3].o)));
	LINE_NUMBER(1694);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_weapon;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	if ((isInstance(ctx, (frame[14].o), &class_mindustry_type_Liquid)) == 0) goto label_38;
	}
	{
	frame[13].o = (checkCast(ctx, &class_mindustry_type_Liquid, (frame[14].o)));
	sp[0].o = frame[13].o;
	sp += 1;
	goto label_40;
	}
label_38:;
	INST_ACONST_NULL();
label_40:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1695);
	if ((frame[12].o) != nullptr) goto label_42;
	}
	INST_ACONST_NULL();
	goto label_43;
label_42:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret *) NULL_CHECK((frame[10].o)))->F_ammoTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[12].o));
	sp[0].o = checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o);
	sp += 1;
	}
label_43:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1696);
	goto label_17;
	}
label_36:;
	{
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_defense_turrets_PowerTurret)) == 0) goto label_45;
	}
	{
	frame[11].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_PowerTurret, (frame[3].o)));
	LINE_NUMBER(1697);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_PowerTurret *) NULL_CHECK((frame[11].o)))->F_shootType;
	frame[5].o = sp[0].o;
	goto label_17;
	}
label_45:;
	{
	LINE_NUMBER(1698);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_defense_turrets_ContinuousTurret)) == 0) goto label_48;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ContinuousTurret, (frame[3].o)));
	LINE_NUMBER(1699);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ContinuousTurret *) NULL_CHECK((frame[6].o)))->F_shootType;
	frame[5].o = sp[0].o;
	goto label_17;
	}
label_48:;
	LINE_NUMBER(1701);
	popStackFrame(ctx);
	INST_RETURN();
label_17:;
	{
	LINE_NUMBER(1704);
	if ((frame[5].o) != nullptr) goto label_51;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_51:;
	{
	LINE_NUMBER(1706);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = frame[5].o;
	sp[2].o = frame[4].o;
	sp[3].o = frame[2].o;
	sp[4].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[4].o);
	jfloat temp1 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp0);
	sp[4].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[4].o);
	jfloat temp3 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp2);
	sp[4].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp4 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[4].o);
	sp[4].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_damage;
	jfloat temp5 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[4].o);
	sp[4].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_velocityScl;
	jfloat temp6 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[4].o);
	sp[4].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_lifeScl;
	jfloat temp7 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[4].o);
	sp[4].o = jobject(nullptr);
	sp[5].o = jobject(nullptr);
	sp[6].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_aimX;
	jfloat temp8 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[6].o);
	jfloat temp9 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp8);
	sp[6].o = (jobject)((mindustry_logic_LExecutor$SpawnBulletI *) NULL_CHECK((frame[0].o)))->F_aimY;
	jfloat temp10 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[6].o);
	jfloat temp11 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp10);
	sp[1].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet])(ctx, sp[1].o, sp[2].o, sp[3].o, temp1, temp3, temp4, temp5, temp6, temp7, sp[4].o, sp[5].o, temp9, temp11);
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1707);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SpawnBulletI[] {
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
	(void *) M_mindustry_logic_LExecutor$SpawnBulletI_run_mindustry_logic_LExecutor,
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
	{ "result", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_result), "Lmindustry/logic/LVar;", 1 },
	{ "from", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_from), "Lmindustry/logic/LVar;", 1 },
	{ "weapon", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_weapon), "Lmindustry/logic/LVar;", 1 },
	{ "x", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_x), "Lmindustry/logic/LVar;", 1 },
	{ "y", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_y), "Lmindustry/logic/LVar;", 1 },
	{ "rotation", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_rotation), "Lmindustry/logic/LVar;", 1 },
	{ "team", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_team), "Lmindustry/logic/LVar;", 1 },
	{ "owner", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_owner), "Lmindustry/logic/LVar;", 1 },
	{ "damage", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_damage), "Lmindustry/logic/LVar;", 1 },
	{ "velocityScl", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_velocityScl), "Lmindustry/logic/LVar;", 1 },
	{ "lifeScl", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_lifeScl), "Lmindustry/logic/LVar;", 1 },
	{ "aimX", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_aimX), "Lmindustry/logic/LVar;", 1 },
	{ "aimY", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnBulletI, F_aimY), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SpawnBulletI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SpawnBulletI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SpawnBulletI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SpawnBulletI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SpawnBulletI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SpawnBulletI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SpawnBulletI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SpawnBulletI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SpawnBulletI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SpawnBulletI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$SpawnBulletI = registerClass(&class_mindustry_logic_LExecutor$SpawnBulletI);

}

