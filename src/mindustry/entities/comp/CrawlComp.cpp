#include "mindustry/entities/comp/CrawlComp.h"
#include "mindustry/world/Block.h"
#include "arc/math/Angles.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/game/Rules.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/logic/Settable.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Velc.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/entities/comp/CrawlComp.h"
#include "mindustry/entities/comp/CrawlComp_invoke_mindustry_entities_EntityCollisions_SolidPred_0.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Shieldc.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/entities/EntityCollisions_SolidPred.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Weaponsc.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_entities_comp_CrawlComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_CrawlComp *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_lastDeepFloor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastDeepFloor)->clazz)->markFunction)((jobject) self->F_lastDeepFloor, mark, depth + 1);
}

void clinit_mindustry_entities_comp_CrawlComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_CrawlComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/CrawlComp:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_CrawlComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_lastCrawlSlowdown = (jfloat(1));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(100.0f)));
	((mindustry_entities_comp_CrawlComp *) NULL_CHECK(sp[0].o))->F_crawlTime = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_CrawlComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/CrawlComp:solidity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	jint temp0 = (jint)((func_mindustry_entities_comp_CrawlComp_ignoreSolids_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_CrawlComp_ignoreSolids_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_CrawlComp_invoke_mindustry_entities_EntityCollisions$SolidPred_0(ctx);
		auto proxy = (mindustry_entities_comp_CrawlComp_invoke_mindustry_entities_EntityCollisions$SolidPred_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_CrawlComp_invoke_mindustry_entities_EntityCollisions$SolidPred_0);
		PUSH_OBJECT((jobject) proxy);
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_CrawlComp_floorSpeedMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/CrawlComp:floorSpeedMultiplier", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	jint temp0 = (jint)((func_mindustry_entities_comp_CrawlComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_CrawlComp_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_entities_comp_CrawlComp_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_CrawlComp_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(39);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	(sp++)->d = jdouble(0.44999998807907104);
	goto label_5;
label_4:;
	{
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_speedMultiplier));
	sp[0].d = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	sp[1].o = (jobject)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, sp[0].d, (jdouble(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_floorMultiplier))));
	popStackFrame(ctx);
	return (((jfloat(temp0)) * ((jfloat)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_speedMultiplier)) * ((jfloat)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_lastCrawlSlowdown));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_CrawlComp_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/CrawlComp:add", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_segmentRot = ((jfloat)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_CrawlComp_drownFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/CrawlComp:drownFloor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_CrawlComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/CrawlComp:update", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	jint temp0 = (jint)((func_mindustry_entities_comp_CrawlComp_moving_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_CrawlComp_moving_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_segmentRot;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[1].o = (jobject)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_segmentRotSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((mindustry_entities_comp_CrawlComp *) NULL_CHECK(sp[0].o))->F_segmentRot = temp2;
	LINE_NUMBER(59);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((((jfloat)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(8.0f))) * (jfloat(2))));
	frame[1].i = (jint(temp3));
	LINE_NUMBER(60);
	frame[2].i = (jint(0));
	frame[3].i = (jint(0));
	frame[4].i = (jint(0));
	LINE_NUMBER(61);
	((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor = (jref) (jobject(nullptr));
	LINE_NUMBER(64);
	frame[5].i = (-(frame[1].i));
	}
label_9:;
	{
	if ((frame[5].i) > (frame[1].i)) goto label_10;
	}
	{
	LINE_NUMBER(65);
	frame[6].i = (-(frame[1].i));
	}
label_12:;
	{
	if ((frame[6].i) > (frame[1].i)) goto label_13;
	}
	{
	LINE_NUMBER(66);
	if ((((frame[5].i) * (frame[5].i)) + ((frame[6].i) * (frame[6].i))) > (frame[1].i)) goto label_15;
	}
	{
	LINE_NUMBER(67);
	INST_IINC(2, 1);
	LINE_NUMBER(68);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, (((jfloat)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_x) + (jfloat(((frame[5].i) * (8))))), (((jfloat)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_y) + (jfloat(((frame[6].i) * (8))))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(69);
	if ((frame[7].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(71);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_21;
	}
	LINE_NUMBER(72);
	INST_IINC(3, 1);
label_21:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(76);
	INST_IINC(4, 1);
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	((mindustry_entities_comp_CrawlComp *) NULL_CHECK(sp[0].o))->F_lastDeepFloor = (jref) sp[1].o;
	}
label_23:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_26;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[1].o = (jobject)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[2].o = (jobject)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_crushDamage) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[3].o = (jobject)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float])(ctx, sp[2].o, sp[3].o);
	((func_mindustry_gen_Building_damage_mindustry_game_Team_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_damage_mindustry_game_Team_float])(ctx, sp[0].o, sp[1].o, (temp0 * temp1));
	}
label_26:;
	{
	LINE_NUMBER(85);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.025)));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(86);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_crawlDust;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[7].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, (frame[7].o));
	((func_mindustry_entities_Effect_at_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	goto label_15;
	}
label_19:;
	LINE_NUMBER(89);
	INST_IINC(3, 1);
label_15:;
	{
	LINE_NUMBER(65);
	INST_IINC(6, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(64);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(96);
	if ((floatCompare(((jfloat((frame[4].i))) / (jfloat((frame[2].i)))), (jfloat(0.75f)), 1)) >= 0) goto label_29;
	}
	{
	LINE_NUMBER(97);
	((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor = (jref) (jobject(nullptr));
	}
label_29:;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	sp[1].o = (jobject)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_crawlSlowdown;
	jfloat temp2 = (jfloat((frame[3].i))) / (jfloat((frame[2].i)));
	sp[1].o = (jobject)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp2 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_crawlSlowdownFrac)));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, temp0, temp1, temp3);
	((mindustry_entities_comp_CrawlComp *) NULL_CHECK(sp[0].o))->F_lastCrawlSlowdown = temp4;
	}
label_1:;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_segmentRot;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[1].o = (jobject)((mindustry_entities_comp_CrawlComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_clampRange_float_float_float_R_float(ctx, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_segmentMaxRot));
	((mindustry_entities_comp_CrawlComp *) NULL_CHECK(sp[0].o))->F_segmentRot = temp2;
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_entities_comp_CrawlComp *) NULL_CHECK(sp[0].o))->F_crawlTime;
	jfloat temp4 = (jfloat)((func_mindustry_entities_comp_CrawlComp_deltaLen_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_CrawlComp_deltaLen_R_float])(ctx, (frame[0].o));
	((mindustry_entities_comp_CrawlComp *) NULL_CHECK(sp[0].o))->F_crawlTime = (temp3 + temp4);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_CrawlComp[] {
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
	(void *) M_mindustry_entities_comp_CrawlComp_add,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_CrawlComp_update,
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
	(void *) M_mindustry_entities_comp_CrawlComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred,
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
	(void *) M_mindustry_entities_comp_CrawlComp_floorSpeedMultiplier_R_float,
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
	(void *) M_mindustry_entities_comp_CrawlComp_drownFloor_R_mindustry_world_blocks_environment_Floor,
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
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Unitc, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_CrawlComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_CrawlComp, F_y), "F", 0 },
	{ "speedMultiplier", &class_float, offsetof(mindustry_entities_comp_CrawlComp, F_speedMultiplier), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_CrawlComp, F_rotation), "F", 0 },
	{ "hitSize", &class_float, offsetof(mindustry_entities_comp_CrawlComp, F_hitSize), "F", 0 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_CrawlComp, F_type), "Lmindustry/type/UnitType;", 0 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_entities_comp_CrawlComp, F_team), "Lmindustry/game/Team;", 0 },
	{ "lastDeepFloor", &class_mindustry_world_blocks_environment_Floor, offsetof(mindustry_entities_comp_CrawlComp, F_lastDeepFloor), "Lmindustry/world/blocks/environment/Floor;", 128 },
	{ "lastCrawlSlowdown", &class_float, offsetof(mindustry_entities_comp_CrawlComp, F_lastCrawlSlowdown), "F", 128 },
	{ "segmentRot", &class_float, offsetof(mindustry_entities_comp_CrawlComp, F_segmentRot), "F", 128 },
	{ "crawlTime", &class_float, offsetof(mindustry_entities_comp_CrawlComp, F_crawlTime), "F", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_CrawlComp, 0, "()V", 0 },
	{ "solidity", (intptr_t) M_mindustry_entities_comp_CrawlComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred, VTABLE_mindustry_entities_comp_CrawlComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred, "()Lmindustry/entities/EntityCollisions$SolidPred;", 1 },
	{ "floorSpeedMultiplier", (intptr_t) M_mindustry_entities_comp_CrawlComp_floorSpeedMultiplier_R_float, VTABLE_mindustry_entities_comp_CrawlComp_floorSpeedMultiplier_R_float, "()F", 1 },
	{ "add", (intptr_t) M_mindustry_entities_comp_CrawlComp_add, VTABLE_mindustry_entities_comp_CrawlComp_add, "()V", 1 },
	{ "drownFloor", (intptr_t) M_mindustry_entities_comp_CrawlComp_drownFloor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_entities_comp_CrawlComp_drownFloor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_CrawlComp_update, VTABLE_mindustry_entities_comp_CrawlComp_update, "()V", 1 },
};

Class class_mindustry_entities_comp_CrawlComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/CrawlComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_CrawlComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_CrawlComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_CrawlComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_CrawlComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 339,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_CrawlComp = registerClass(&class_mindustry_entities_comp_CrawlComp);

}
