#include "mindustry/entities/comp/LegsComp.h"
#include "arc/math/Angles.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/logic/Settable.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/InverseKinematics.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Shieldc.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Unit.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/gen/Weaponsc.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/ConstructBlock.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/entities/LegDestroyData.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/entities/Leg.h"
#include "mindustry/entities/comp/LegsComp_invoke_mindustry_entities_EntityCollisions_SolidPred_0.h"
#include "mindustry/entities/comp/LegsComp_invoke_mindustry_entities_EntityCollisions_SolidPred_1.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/entities/comp/LegsComp.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Teamc.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/entities/EntityCollisions_SolidPred.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/gen/Player.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {

jobject SF_mindustry_entities_comp_LegsComp_straightVec;

void mark_mindustry_entities_comp_LegsComp(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_comp_LegsComp_straightVec)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_LegsComp_straightVec)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_LegsComp_straightVec, mark, depth + 1);
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
	auto self = (mindustry_entities_comp_LegsComp *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_legs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_legs)->clazz)->markFunction)((jobject) self->F_legs, mark, depth + 1);
	if (self->F_lastDeepFloor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastDeepFloor)->clazz)->markFunction)((jobject) self->F_lastDeepFloor, mark, depth + 1);
	if (self->F_curMoveOffset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_curMoveOffset)->clazz)->markFunction)((jobject) self->F_curMoveOffset, mark, depth + 1);
}

void init_mindustry_entities_comp_LegsComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_LegsComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_Leg, (jint(0)));
	((mindustry_entities_comp_LegsComp *) NULL_CHECK(sp[0].o))->F_legs = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_entities_comp_LegsComp *) NULL_CHECK(sp[0].o))->F_curMoveOffset = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_LegsComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:solidity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)((func_mindustry_entities_comp_LegsComp_ignoreSolids_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_ignoreSolids_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep) == 0) goto label_3;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_LegsComp_invoke_mindustry_entities_EntityCollisions$SolidPred_0(ctx);
		auto proxy = (mindustry_entities_comp_LegsComp_invoke_mindustry_entities_EntityCollisions$SolidPred_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_LegsComp_invoke_mindustry_entities_EntityCollisions$SolidPred_0);
		PUSH_OBJECT((jobject) proxy);
	}
	goto label_2;
label_3:;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_LegsComp_invoke_mindustry_entities_EntityCollisions$SolidPred_1(ctx);
		auto proxy = (mindustry_entities_comp_LegsComp_invoke_mindustry_entities_EntityCollisions$SolidPred_1 *) gcAlloc(ctx, &class_mindustry_entities_comp_LegsComp_invoke_mindustry_entities_EntityCollisions$SolidPred_1);
		PUSH_OBJECT((jobject) proxy);
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_LegsComp_drownFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:drownFloor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_LegsComp_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:add", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	((func_mindustry_entities_comp_LegsComp_resetLegs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_resetLegs])(ctx, (frame[0].o));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_LegsComp_unloaded(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:unloaded", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	((func_mindustry_entities_comp_LegsComp_resetLegs_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_resetLegs_float])(ctx, (frame[0].o), (jfloat(1)));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_LegsComp_destroy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:destroy", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)((func_mindustry_entities_comp_LegsComp_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legRegion;
	frame[1].f = (((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height))) / (jfloat(4.0f))) / (jfloat(1.45f)));
	LINE_NUMBER(68);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_mindustry_entities_comp_LegsComp_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_LegsComp_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_y));
	frame[4].o = sp[0].o;
	LINE_NUMBER(73);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legExtension));
	LINE_NUMBER(75);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec2, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[4].o);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(2);
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_base;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_10:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_11;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(76);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_y;
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0);
	jfloat temp4 = jfloat(0);
	jfloat temp5 = frame[1].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp6 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_damageExplosions;
	jint temp7 = jint(0);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_deathExplosionEffect;
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(79);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_legDestroy;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y;
	jfloat temp2 = jfloat(0);
	clinit_mindustry_entities_LegDestroyData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_LegDestroyData);
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2])(ctx, (frame[4].o));
	sp[3].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	sp[4].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[4].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[4].o))->F_legRegion;
	init_mindustry_entities_LegDestroyData_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(80);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_legDestroy;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp5 = jfloat(0);
	clinit_mindustry_entities_LegDestroyData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_LegDestroyData);
	sp[2].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2])(ctx, sp[2].o);
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_v2;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_base;
	sp[4].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[4].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[4].o))->F_legBaseRegion;
	init_mindustry_entities_LegDestroyData_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp3, temp4, temp5, sp[1].o);
	LINE_NUMBER(68);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_LegsComp_resetLegs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:resetLegs", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_comp_LegsComp_resetLegs_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_LegsComp_resetLegs_float])(ctx, sp[0].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legLength));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_LegsComp_resetLegs_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:resetLegs", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	frame[2].i = ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legCount);
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_Leg, (frame[2].i));
	((mindustry_entities_comp_LegsComp *) NULL_CHECK(sp[0].o))->F_legs = (jref) sp[1].o;
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_lockLegBase) == 0) goto label_3;
	}
	{
	LINE_NUMBER(95);
	((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_baseRotation = ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_rotation);
	}
label_3:;
	{
	LINE_NUMBER(98);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(99);
	clinit_mindustry_entities_Leg(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_Leg);
	init_mindustry_entities_Leg(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(101);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_LegsComp_legAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_legAngle_int_R_float])(ctx, (frame[0].o), (frame[3].i));
	frame[5].f = temp0;
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v5;
	sp[0].o = (jobject)((func_mindustry_entities_comp_LegsComp_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_LegsComp_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (frame[3].i));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_y));
	frame[6].o = sp[0].o;
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[4].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[5].f), ((frame[1].f) / (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[4].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[5].f), (frame[1].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[4].o);
	LINE_NUMBER(98);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(100.0f)));
	((mindustry_entities_comp_LegsComp *) NULL_CHECK(sp[0].o))->F_totalLength = temp0;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_LegsComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[31];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:update", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_LegsComp_deltaX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_deltaX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_LegsComp_deltaY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_deltaY_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_dst_float_float_R_float(ctx, temp0, temp1);
	if ((floatCompare(temp2, (jfloat(1,000000e-03f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_baseRotation;
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_LegsComp_deltaX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_deltaX_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_mindustry_entities_comp_LegsComp_deltaY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_deltaY_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, temp1, temp2);
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp3, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rotateSpeed));
	((mindustry_entities_comp_LegsComp *) NULL_CHECK(sp[0].o))->F_baseRotation = temp4;
	}
label_1:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_lockLegBase) == 0) goto label_3;
	}
	{
	LINE_NUMBER(119);
	((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_baseRotation = ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_rotation);
	}
label_3:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	frame[1].f = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legLength);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (temp0 == ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legCount)) goto label_6;
	}
	{
	LINE_NUMBER(126);
	((func_mindustry_entities_comp_LegsComp_resetLegs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_resetLegs])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	frame[2].f = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legSpeed);
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (temp0 / ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legGroupSize)), (jint(2)));
	frame[3].i = temp1;
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	jfloat temp2 = ((frame[1].f) / (jfloat(1.6f))) / ((jfloat((frame[3].i))) / (jfloat(2)));
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_entities_comp_LegsComp *) NULL_CHECK(sp[0].o))->F_moveSpace = (temp2 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMoveSpace));
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK(sp[0].o))->F_totalLength;
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jobject temp4 = sp[1].o;
	sp[1].f = temp3;
	sp += 2;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(temp4))->F_legContinuousMove) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed) * ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_speedMultiplier)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[0].f = temp0;
	sp += 1;
	goto label_12;
	}
label_11:;
	{
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_LegsComp_deltaX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_deltaX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_LegsComp_deltaY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_deltaY_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_dst_float_float_R_float(ctx, temp0, temp1);
	sp[0].f = temp2;
	sp += 1;
	}
label_12:;
	{
	sp -= 3;
	((mindustry_entities_comp_LegsComp *) NULL_CHECK(sp[0].o))->F_totalLength = (sp[1].f + sp[2].f);
	LINE_NUMBER(135);
	jfloat temp0 = ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_moveSpace) * (jfloat(0.85f));
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	frame[4].f = (temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legForwardScl));
	LINE_NUMBER(138);
	jint temp1 = (jint)((func_mindustry_entities_comp_LegsComp_moving_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_moving_R_boolean])(ctx, (frame[0].o));
	frame[5].i = temp1;
	LINE_NUMBER(139);
	if ((frame[5].i) != 0) goto label_16;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v4;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	sp += 1;
	goto label_17;
	}
label_16:;
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v4;
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_LegsComp_deltaX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_deltaX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_LegsComp_deltaY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_deltaY_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_angle_float_float_R_float(ctx, temp0, temp1);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, (frame[4].f));
	sp += 1;
	}
label_17:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_curMoveOffset;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].o), (jfloat(0.1f)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(143);
	((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor = (jref) (jobject(nullptr));
	LINE_NUMBER(144);
	frame[7].i = (jint(0));
	LINE_NUMBER(146);
	frame[8].i = (jint(0));
	}
label_22:;
	{
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_23;
	}
	{
	LINE_NUMBER(147);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_LegsComp_legAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_legAngle_int_R_float])(ctx, (frame[0].o), (frame[8].i));
	frame[9].f = temp0;
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v5;
	sp[0].o = (jobject)((func_mindustry_entities_comp_LegsComp_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_LegsComp_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (frame[8].i));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_y));
	frame[10].o = sp[0].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMinLength) * (frame[1].f)) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMaxLength) * (frame[1].f)) / (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMinLength) * (frame[1].f);
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMaxLength) * (frame[1].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(155);
	jfloat temp3 = (jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_totalLength;
	jfloat temp4 = jfloat((frame[8].i));
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	frame[12].f = ((temp3 + (temp4 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legPairOffset))) / ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_moveSpace));
	LINE_NUMBER(156);
	frame[13].i = (jint((frame[12].f)));
	LINE_NUMBER(157);
	frame[14].i = ((frame[13].i) % (frame[3].i));
	LINE_NUMBER(158);
	if (((frame[8].i) % (frame[3].i)) != (frame[14].i)) goto label_33;
	}
	INST_ICONST(1);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(159);
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	if (temp0 >= ((((jarray) nullCheck(ctx, sp[0].o))->length) / (jint(2)))) goto label_36;
	}
	INST_ICONST(1);
	goto label_37;
label_36:;
	INST_ICONST(0);
label_37:;
	{
	sp -= 1;
	frame[16].i = sp[0].i;
	LINE_NUMBER(161);
	jfloat temp0 = (jfloat((frame[8].i))) + (jfloat(0.5f));
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - ((jfloat((((jarray) nullCheck(ctx, sp[0].o))->length))) / (jfloat(2)))));
	if ((floatCompare(temp1, (jfloat(0.501f)), 1)) > 0) goto label_39;
	}
	INST_ICONST(1);
	goto label_40;
label_39:;
	INST_ICONST(0);
label_40:;
	{
	sp -= 1;
	frame[17].i = sp[0].i;
	LINE_NUMBER(162);
	if ((frame[17].i) == 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flipBackLegs) == 0) goto label_42;
	}
	INST_ILOAD(16);
	if ((--sp)->i != 0) goto label_43;
	INST_ICONST(1);
	goto label_44;
label_43:;
	INST_ICONST(0);
label_44:;
	INST_ISTORE(16);
label_42:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flipLegSide) == 0) goto label_45;
	}
	INST_ILOAD(16);
	if ((--sp)->i != 0) goto label_46;
	INST_ICONST(1);
	goto label_47;
label_46:;
	INST_ICONST(0);
label_47:;
	INST_ISTORE(16);
label_45:;
	{
	LINE_NUMBER(165);
	((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_moving = (frame[15].i);
	LINE_NUMBER(166);
	sp[0].o = frame[11].o;
	sp += 1;
	if ((frame[5].i) == 0) goto label_49;
	}
	{
	jfloat temp0 = fmodf((frame[12].f), (jfloat(1)));
	sp[0].f = temp0;
	sp += 1;
	goto label_50;
	}
label_49:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_stage), (jfloat(0)), (jfloat(0.1f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_50:;
	{
	sp -= 2;
	((mindustry_entities_Leg *) NULL_CHECK(sp[0].o))->F_stage = sp[1].f;
	LINE_NUMBER(168);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	frame[18].o = sp[0].o;
	LINE_NUMBER(169);
	if ((frame[18].o) != nullptr) goto label_53;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_clear;
	goto label_54;
label_53:;
	INST_ALOAD(18);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, sp[0].o);
	sp++;
label_54:;
	{
	sp -= 1;
	frame[19].o = sp[0].o;
	LINE_NUMBER(170);
	if ((frame[18].o) != nullptr) goto label_56;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp += 1;
	goto label_57;
	}
label_56:;
	INST_ALOAD(18);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_57:;
	{
	sp -= 1;
	frame[20].o = sp[0].o;
	LINE_NUMBER(172);
	if ((frame[18].o) == nullptr) goto label_59;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isDeep_R_boolean) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_isDeep_R_boolean])(ctx, (frame[18].o));
	if (temp0 == 0) goto label_59;
	}
	{
	LINE_NUMBER(173);
	INST_IINC(7, 1);
	LINE_NUMBER(174);
	((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor = (jref) (frame[20].o);
	}
label_59:;
	{
	LINE_NUMBER(177);
	if (((jint)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_group) == (frame[14].i)) goto label_62;
	}
	{
	LINE_NUMBER(180);
	if ((frame[15].i) != 0) goto label_64;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_65;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legContinuousMove) != 0) goto label_64;
	}
label_65:;
	{
	if (((frame[8].i) % (frame[3].i)) != ((jint)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_group)) goto label_64;
	}
	{
	LINE_NUMBER(181);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_67;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_entities_comp_LegsComp_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_LegsComp_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_67;
	}
	{
	LINE_NUMBER(182);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[20].o)))->F_isLiquid) == 0) goto label_69;
	}
	INST_ALOAD(18);
	if ((--sp)->o == nullptr) goto label_69;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[18].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_69;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[20].o)))->F_walkEffect;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rippleScale), (frame[19].o));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[20].o)))->F_walkSound;
	jint temp2 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(1)), ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[20].o)))->F_walkSoundVolume));
	goto label_72;
	}
label_69:;
	{
	LINE_NUMBER(186);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitLandSmall;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rippleScale), (frame[19].o));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_stepSound;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp4 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_stepSoundPitch;
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_stepSoundPitchRange));
	jfloat temp6 = temp4 + temp5;
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp7 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp2, temp3, temp6, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_stepSoundVolume));
	}
label_72:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_stepShake), (jfloat(0)), -1)) <= 0) goto label_67;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_stepShake;
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_stepShake;
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, temp0, temp1, sp[0].o);
	}
label_67:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legSplashDamage), (jfloat(0)), -1)) <= 0) goto label_64;
	}
	{
	if (((jint)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_disarmed) != 0) goto label_64;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legSplashRange;
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp3 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legSplashDamage;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp4 = (jfloat)((func_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean(ctx, sp[0].o, temp0, temp1, temp2, (temp3 * temp4), (jint(0)), (jint(1)));
	LINE_NUMBER(199);
	if ((frame[18].o) == nullptr) goto label_64;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[18].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_unitMoveBreakable) == 0) goto label_64;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = frame[18].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[18].o));
	sp[2].o = (jobject)((func_mindustry_entities_comp_LegsComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_world_blocks_ConstructBlock_deconstructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[2].o)));
	}
label_64:;
	{
	LINE_NUMBER(205);
	((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_group = (frame[14].i);
	}
label_62:;
	{
	LINE_NUMBER(209);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = frame[9].f;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (temp1 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legLengthScl)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].o));
	frame[21].o = sp[0].o;
	LINE_NUMBER(211);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	frame[22].o = sp[0].o;
	LINE_NUMBER(212);
	jfloat temp2 = (frame[1].f) / (jfloat(2));
	jfloat temp3 = (frame[1].f) / (jfloat(2));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v6;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	jint temp4 = (jint)SM_mindustry_graphics_InverseKinematics_solve_float_float_arc_math_geom_Vec2_boolean_arc_math_geom_Vec2_R_boolean(ctx, temp2, temp3, sp[0].o, (frame[16].i), (frame[22].o));
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[22].o), (frame[10].o));
	LINE_NUMBER(214);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v6;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (jfloat(0.5f)));
	LINE_NUMBER(216);
	if ((frame[15].i) == 0) goto label_83;
	}
	{
	LINE_NUMBER(217);
	frame[23].f = (fmodf((frame[12].f), (jfloat(1))));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[21].o), (frame[23].f));
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[22].o), ((frame[23].f) / (jfloat(2))));
	}
label_83:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[22].o), ((frame[2].f) / (jfloat(4.0f))));
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMinLength) * (frame[1].f)) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMaxLength) * (frame[1].f)) / (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMinLength) * (frame[1].f);
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMaxLength) * (frame[1].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(146);
	INST_IINC(8, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(231);
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_90;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_LegsComp_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_91;
	}
label_90:;
	{
	LINE_NUMBER(232);
	((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor = (jref) (jobject(nullptr));
	}
label_91:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_LegsComp_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:legOffset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float])(ctx, (frame[0].o), (frame[2].i));
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legBaseOffset));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legStraightness), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(240);
	clinit_mindustry_entities_comp_LegsComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_LegsComp_straightVec;
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float])(ctx, (frame[0].o), (frame[2].i));
	jfloat temp1 = temp0 - ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_baseRotation);
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legBaseOffset));
	LINE_NUMBER(241);
	clinit_mindustry_entities_comp_LegsComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_LegsComp_straightVec;
	clinit_mindustry_entities_comp_LegsComp(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_comp_LegsComp_straightVec;
	jint temp2 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	jfloat temp3 = jfloat(temp2);
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp4 = temp3 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legBaseOffset);
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (temp4 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legStraightLength));
	LINE_NUMBER(242);
	clinit_mindustry_entities_comp_LegsComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_LegsComp_straightVec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_baseRotation));
	LINE_NUMBER(243);
	sp[0].o = frame[1].o;
	clinit_mindustry_entities_comp_LegsComp(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_comp_LegsComp_straightVec;
	sp[2].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_baseLegStraightness));
	}
label_2:;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_LegsComp_legAngle_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:legAngle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legStraightness), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(252);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = frame[1].i;
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	jobject temp2 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (temp1 < ((((jarray) nullCheck(ctx, temp2))->length) / (jint(2)))) goto label_3;
	}
	(sp++)->f = jfloat(-90.0f);
	goto label_4;
label_3:;
	(sp++)->f = jfloat(90.0f);
label_4:;
	{
	sp -= 2;
	jfloat temp0 = sp[1].f + ((jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_baseRotation);
	sp[1].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_slerp_float_float_float_R_float(ctx, sp[0].f, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legStraightness));
	popStackFrame(ctx);
	return temp1;
	}
label_1:;
	{
	LINE_NUMBER(254);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:defaultLegAngle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(258);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_baseRotation;
	jfloat temp1 = jfloat(360.0f);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	jfloat temp2 = temp0 + ((temp1 / (jfloat((((jarray) nullCheck(ctx, sp[0].o))->length)))) * (jfloat((frame[1].i))));
	jfloat temp3 = jfloat(360.0f);
	sp[0].o = (jobject)((mindustry_entities_comp_LegsComp *) NULL_CHECK((frame[0].o)))->F_legs;
	popStackFrame(ctx);
	return (temp2 + ((temp3 / (jfloat((((jarray) nullCheck(ctx, sp[0].o))->length)))) / (jfloat(2))));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_entities_comp_LegsComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LegsComp:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_LegsComp(ctx);
	{
	LINE_NUMBER(24);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_entities_comp_LegsComp(ctx);
	SF_mindustry_entities_comp_LegsComp_straightVec = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_LegsComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_LegsComp_add,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_LegsComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_LegsComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_LegsComp_destroy,
	(void *) M_mindustry_entities_comp_LegsComp_unloaded,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_LegsComp_drownFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_LegsComp_resetLegs,
	(void *) M_mindustry_entities_comp_LegsComp_resetLegs_float,
	(void *) M_mindustry_entities_comp_LegsComp_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_comp_LegsComp_legAngle_int_R_float,
	(void *) M_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float,
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
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "hitSize", "()F" },
	{ "collides", "(Lmindustry/gen/Hitboxc;)Z" },
	{ "deltaAngle", "()F" },
	{ "deltaLen", "()F" },
	{ "deltaX", "()F" },
	{ "deltaY", "()F" },
	{ "lastX", "()F" },
	{ "lastY", "()F" },
	{ "collision", "(Lmindustry/gen/Hitboxc;FF)V" },
	{ "deltaX", "(F)V" },
	{ "deltaY", "(F)V" },
	{ "getCollisions", "(Larc/func/Cons;)V" },
	{ "hitSize", "(F)V" },
	{ "hitboxTile", "(Larc/math/geom/Rect;)V" },
	{ "lastX", "(F)V" },
	{ "lastY", "(F)V" },
	{ "updateLastPosition", "()V" },
	{ "applyDynamicStatus", "()Lmindustry/entities/units/StatusEntry;" },
	{ "apply", "(Lmindustry/type/StatusEffect;F)V" },
	{ "apply", "(Lmindustry/type/StatusEffect;)V" },
	{ "unapply", "(Lmindustry/type/StatusEffect;)V" },
	{ "statusDamageMultiplier", "(F)V" },
	{ "statusReloadMultiplier", "(F)V" },
	{ "statusArmor", "(F)V" },
	{ "statusBuildSpeed", "(F)V" },
	{ "statusDrag", "(F)V" },
	{ "statusMaxHealth", "(F)V" },
	{ "statusSpeed", "(F)V" },
	{ "statusColor", "()Larc/graphics/Color;" },
	{ "statusBits", "()Larc/struct/Bits;" },
	{ "disarmed", "()Z" },
	{ "hasEffect", "(Lmindustry/type/StatusEffect;)Z" },
	{ "isBoss", "()Z" },
	{ "isGrounded", "()Z" },
	{ "isImmune", "(Lmindustry/type/StatusEffect;)Z" },
	{ "armorOverride", "()F" },
	{ "buildSpeedMultiplier", "()F" },
	{ "damageMultiplier", "()F" },
	{ "dragMultiplier", "()F" },
	{ "getDuration", "(Lmindustry/type/StatusEffect;)F" },
	{ "healthMultiplier", "()F" },
	{ "reloadMultiplier", "()F" },
	{ "speedMultiplier", "()F" },
	{ "armorOverride", "(F)V" },
	{ "buildSpeedMultiplier", "(F)V" },
	{ "clearStatuses", "()V" },
	{ "damageMultiplier", "(F)V" },
	{ "disarmed", "(Z)V" },
	{ "dragMultiplier", "(F)V" },
	{ "draw", "()V" },
	{ "healthMultiplier", "(F)V" },
	{ "reloadMultiplier", "(F)V" },
	{ "setDuration", "(Lmindustry/type/StatusEffect;F)V" },
	{ "speedMultiplier", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "buildPlan", "()Lmindustry/entities/units/BuildPlan;" },
	{ "shouldSkip", "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Building;)Z" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "clearBuilding", "()V" },
	{ "isBuilding", "()Z" },
	{ "plans", "()Larc/struct/Queue;" },
	{ "activelyBuilding", "()Z" },
	{ "canBuild", "()Z" },
	{ "updateBuilding", "()Z" },
	{ "buildAlpha", "()F" },
	{ "buildAlpha", "(F)V" },
	{ "drawBuilding", "()V" },
	{ "drawBuildingBeam", "(FF)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "drawPlanTop", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "plans", "(Larc/struct/Queue;)V" },
	{ "removeBuild", "(IIZ)V" },
	{ "updateBuildLogic", "()V" },
	{ "updateBuilding", "(Z)V" },
	{ "validatePlans", "()V" },
	{ "clipSize", "()F" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "isValid", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "acceptsItem", "(Lmindustry/type/Item;)Z" },
	{ "hasItem", "()Z" },
	{ "itemTime", "()F" },
	{ "itemCapacity", "()I" },
	{ "maxAccepted", "(Lmindustry/type/Item;)I" },
	{ "item", "()Lmindustry/type/Item;" },
	{ "stack", "()Lmindustry/type/ItemStack;" },
	{ "addItem", "(Lmindustry/type/Item;)V" },
	{ "addItem", "(Lmindustry/type/Item;I)V" },
	{ "clearItem", "()V" },
	{ "itemTime", "(F)V" },
	{ "stack", "(Lmindustry/type/ItemStack;)V" },
	{ "mineTile", "()Lmindustry/world/Tile;" },
	{ "canMine", "()Z" },
	{ "canMine", "(Lmindustry/type/Item;)Z" },
	{ "mining", "()Z" },
	{ "offloadImmediately", "()Z" },
	{ "validMine", "(Lmindustry/world/Tile;)Z" },
	{ "validMine", "(Lmindustry/world/Tile;Z)Z" },
	{ "mineTimer", "()F" },
	{ "getMineResult", "(Lmindustry/world/Tile;)Lmindustry/type/Item;" },
	{ "mineTile", "(Lmindustry/world/Tile;)V" },
	{ "mineTimer", "(F)V" },
	{ "solidity", "()Lmindustry/entities/EntityCollisions$SolidPred;" },
	{ "canPassOn", "()Z" },
	{ "canPass", "(II)Z" },
	{ "vel", "()Larc/math/geom/Vec2;" },
	{ "ignoreSolids", "()Z" },
	{ "moving", "()Z" },
	{ "drag", "()F" },
	{ "drag", "(F)V" },
	{ "move", "(Larc/math/geom/Vec2;)V" },
	{ "move", "(FF)V" },
	{ "vel", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(FF)V" },
	{ "hasPhysicsRef", "()Z" },
	{ "mass", "()F" },
	{ "hasPhysicsRef", "(Z)V" },
	{ "impulse", "(Larc/math/geom/Vec2;)V" },
	{ "impulse", "(FF)V" },
	{ "impulseNet", "(Larc/math/geom/Vec2;)V" },
	{ "shield", "()F" },
	{ "shield", "(F)V" },
	{ "shieldAlpha", "()F" },
	{ "shieldAlpha", "(F)V" },
	{ "armor", "()F" },
	{ "armor", "(F)V" },
	{ "rawDamage", "(F)V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "aim", "(FF)V" },
	{ "aim", "(FFZ)V" },
	{ "mounts", "()[Lmindustry/entities/units/WeaponMount;" },
	{ "mounts", "([Lmindustry/entities/units/WeaponMount;)V" },
	{ "canShoot", "()Z" },
	{ "isRotate", "()Z" },
	{ "isShooting", "()Z" },
	{ "aimX", "()F" },
	{ "aimY", "()F" },
	{ "aim", "(Larc/math/geom/Position;)V" },
	{ "aimX", "(F)V" },
	{ "aimY", "(F)V" },
	{ "controlWeapons", "(ZZ)V" },
	{ "controlWeapons", "(Z)V" },
	{ "isShooting", "(Z)V" },
	{ "setWeaponRotation", "(F)V" },
	{ "setupWeapons", "(Lmindustry/type/UnitType;)V" },
	{ "range", "()F" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "physicSize", "()F" },
	{ "getControllerName", "()Ljava/lang/String;" },
	{ "speed", "()F" },
	{ "collisionLayer", "()I" },
	{ "prefRotation", "()F" },
	{ "allowCommand", "()Z" },
	{ "isCommandable", "()Z" },
	{ "canLand", "()Z" },
	{ "destroy", "()V" },
	{ "unloaded", "()V" },
	{ "movePref", "(Larc/math/geom/Vec2;)V" },
	{ "hasTarget", "()Z" },
	{ "hasTarget", "(Z)V" },
	{ "trail", "()Lmindustry/graphics/Trail;" },
	{ "dockedType", "()Lmindustry/type/UnitType;" },
	{ "lastDrownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "getPlayer", "()Lmindustry/gen/Player;" },
	{ "canDrown", "()Z" },
	{ "canTarget", "(Lmindustry/gen/Teamc;)Z" },
	{ "checkTarget", "(ZZ)Z" },
	{ "hasWeapons", "()Z" },
	{ "hittable", "()Z" },
	{ "inRange", "(Larc/math/geom/Position;)Z" },
	{ "isAI", "()Z" },
	{ "isEnemy", "()Z" },
	{ "isFlying", "()Z" },
	{ "isMissile", "()Z" },
	{ "isPathImpassable", "(II)Z" },
	{ "isPlayer", "()Z" },
	{ "killable", "()Z" },
	{ "playerControllable", "()Z" },
	{ "shouldUpdateController", "()Z" },
	{ "spawnedByCore", "()Z" },
	{ "targetable", "(Lmindustry/game/Team;)Z" },
	{ "flag", "()D" },
	{ "ammof", "()F" },
	{ "bounds", "()F" },
	{ "drownTime", "()F" },
	{ "elevation", "()F" },
	{ "floorSpeedMultiplier", "()F" },
	{ "healTime", "()F" },
	{ "shadowAlpha", "()F" },
	{ "splashTimer", "()F" },
	{ "cap", "()I" },
	{ "count", "()I" },
	{ "lastFogPos", "()I" },
	{ "lastCommanded", "()Ljava/lang/String;" },
	{ "command", "()Lmindustry/ai/types/CommandAI;" },
	{ "abilities", "()[Lmindustry/entities/abilities/Ability;" },
	{ "controller", "()Lmindustry/entities/units/UnitController;" },
	{ "type", "()Lmindustry/type/UnitType;" },
	{ "drownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "abilities", "([Lmindustry/entities/abilities/Ability;)V" },
	{ "aimLook", "(Larc/math/geom/Position;)V" },
	{ "aimLook", "(FF)V" },
	{ "approach", "(Larc/math/geom/Vec2;)V" },
	{ "controller", "(Lmindustry/entities/units/UnitController;)V" },
	{ "dockedType", "(Lmindustry/type/UnitType;)V" },
	{ "drownTime", "(F)V" },
	{ "elevation", "(F)V" },
	{ "flag", "(D)V" },
	{ "healTime", "(F)V" },
	{ "landed", "()V" },
	{ "lastCommanded", "(Ljava/lang/String;)V" },
	{ "lastDrownFloor", "(Lmindustry/world/blocks/environment/Floor;)V" },
	{ "lastFogPos", "(I)V" },
	{ "lookAt", "(Larc/math/geom/Position;)V" },
	{ "lookAt", "(F)V" },
	{ "lookAt", "(FF)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;F)V" },
	{ "resetController", "()V" },
	{ "rotateMove", "(Larc/math/geom/Vec2;)V" },
	{ "set", "(Lmindustry/type/UnitType;Lmindustry/entities/units/UnitController;)V" },
	{ "setType", "(Lmindustry/type/UnitType;)V" },
	{ "shadowAlpha", "(F)V" },
	{ "spawnedByCore", "(Z)V" },
	{ "splashTimer", "(F)V" },
	{ "trail", "(Lmindustry/graphics/Trail;)V" },
	{ "type", "(Lmindustry/type/UnitType;)V" },
	{ "updateBoosting", "(Z)V" },
	{ "updateBoosting", "(ZZ)V" },
	{ "updateDrowning", "()V" },
	{ "wobble", "()V" },
	{ "resetLegs", "()V" },
	{ "resetLegs", "(F)V" },
	{ "legOffset", "(Larc/math/geom/Vec2;I)Larc/math/geom/Vec2;" },
	{ "legAngle", "(I)F" },
	{ "defaultLegAngle", "(I)F" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Unitc, };

static FieldMetadata fields[] {
	{ "straightVec", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_entities_comp_LegsComp_straightVec, "Larc/math/geom/Vec2;", 26 },
	{ "x", &class_float, offsetof(mindustry_entities_comp_LegsComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_LegsComp, F_y), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_LegsComp, F_rotation), "F", 0 },
	{ "speedMultiplier", &class_float, offsetof(mindustry_entities_comp_LegsComp, F_speedMultiplier), "F", 0 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_LegsComp, F_type), "Lmindustry/type/UnitType;", 0 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_entities_comp_LegsComp, F_team), "Lmindustry/game/Team;", 0 },
	{ "disarmed", &class_boolean, offsetof(mindustry_entities_comp_LegsComp, F_disarmed), "Z", 0 },
	{ "legs", getArrayClass(&class_mindustry_entities_Leg, 1), offsetof(mindustry_entities_comp_LegsComp, F_legs), "[Lmindustry/entities/Leg;", 128 },
	{ "totalLength", &class_float, offsetof(mindustry_entities_comp_LegsComp, F_totalLength), "F", 128 },
	{ "moveSpace", &class_float, offsetof(mindustry_entities_comp_LegsComp, F_moveSpace), "F", 128 },
	{ "baseRotation", &class_float, offsetof(mindustry_entities_comp_LegsComp, F_baseRotation), "F", 128 },
	{ "lastDeepFloor", &class_mindustry_world_blocks_environment_Floor, offsetof(mindustry_entities_comp_LegsComp, F_lastDeepFloor), "Lmindustry/world/blocks/environment/Floor;", 128 },
	{ "curMoveOffset", &class_arc_math_geom_Vec2, offsetof(mindustry_entities_comp_LegsComp, F_curMoveOffset), "Larc/math/geom/Vec2;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_LegsComp, 0, "()V", 0 },
	{ "solidity", (intptr_t) M_mindustry_entities_comp_LegsComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred, VTABLE_mindustry_entities_comp_LegsComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred, "()Lmindustry/entities/EntityCollisions$SolidPred;", 1 },
	{ "drownFloor", (intptr_t) M_mindustry_entities_comp_LegsComp_drownFloor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_entities_comp_LegsComp_drownFloor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "add", (intptr_t) M_mindustry_entities_comp_LegsComp_add, VTABLE_mindustry_entities_comp_LegsComp_add, "()V", 1 },
	{ "unloaded", (intptr_t) M_mindustry_entities_comp_LegsComp_unloaded, VTABLE_mindustry_entities_comp_LegsComp_unloaded, "()V", 1 },
	{ "destroy", (intptr_t) M_mindustry_entities_comp_LegsComp_destroy, VTABLE_mindustry_entities_comp_LegsComp_destroy, "()V", 1 },
	{ "resetLegs", (intptr_t) M_mindustry_entities_comp_LegsComp_resetLegs, VTABLE_mindustry_entities_comp_LegsComp_resetLegs, "()V", 1 },
	{ "resetLegs", (intptr_t) M_mindustry_entities_comp_LegsComp_resetLegs_float, VTABLE_mindustry_entities_comp_LegsComp_resetLegs_float, "(F)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_LegsComp_update, VTABLE_mindustry_entities_comp_LegsComp_update, "()V", 1 },
	{ "legOffset", (intptr_t) M_mindustry_entities_comp_LegsComp_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_LegsComp_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;I)Larc/math/geom/Vec2;", 0 },
	{ "legAngle", (intptr_t) M_mindustry_entities_comp_LegsComp_legAngle_int_R_float, VTABLE_mindustry_entities_comp_LegsComp_legAngle_int_R_float, "(I)F", 0 },
	{ "defaultLegAngle", (intptr_t) M_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float, VTABLE_mindustry_entities_comp_LegsComp_defaultLegAngle_int_R_float, "(I)F", 0 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_comp_LegsComp, 0, "()V", 8 },
};

Class class_mindustry_entities_comp_LegsComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/LegsComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_LegsComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_LegsComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_LegsComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_LegsComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 344,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_LegsComp = registerClass(&class_mindustry_entities_comp_LegsComp);

}
