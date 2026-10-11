#include "mindustry/entities/comp/WaterMoveComp.h"
#include "mindustry/world/Block.h"
#include "arc/math/Angles.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/entities/comp/WaterMoveComp.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/entities/comp/WaterMoveComp_invoke_mindustry_entities_EntityCollisions_SolidPred_0.h"
#include "mindustry/logic/Settable.h"
#include "mindustry/gen/Velc.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/entities/EntityCollisions.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Shieldc.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Teamc.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/entities/EntityCollisions_SolidPred.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Weaponsc.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/graphics/Trail.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_entities_comp_WaterMoveComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_WaterMoveComp *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_tleft)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tleft)->clazz)->markFunction)((jobject) self->F_tleft, mark, depth + 1);
	if (self->F_tright)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tright)->clazz)->markFunction)((jobject) self->F_tright, mark, depth + 1);
	if (self->F_trailColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_trailColor)->clazz)->markFunction)((jobject) self->F_trailColor, mark, depth + 1);
}

void clinit_mindustry_entities_comp_WaterMoveComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_WaterMoveComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WaterMoveComp:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_WaterMoveComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Trail(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_Trail);
	init_mindustry_graphics_Trail_int(ctx, sp[1].o, (jint(1)));
	((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK(sp[0].o))->F_tleft = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Trail(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_Trail);
	init_mindustry_graphics_Trail_int(ctx, sp[1].o, (jint(1)));
	((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK(sp[0].o))->F_tright = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_water;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_mapColor;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(1.5f)));
	((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK(sp[0].o))->F_trailColor = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WaterMoveComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WaterMoveComp:update", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_mindustry_entities_comp_WaterMoveComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WaterMoveComp_isFlying_R_boolean])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(30);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(31);
	if ((frame[2].i) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_tleft;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK(sp[-1].o))->F_tright;
label_6:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_length = ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_trailLength);
	LINE_NUMBER(34);
	if ((frame[2].i) != 0) goto label_9;
	}
	INST_ICONST(-1);
	goto label_10;
label_9:;
	INST_ICONST(1);
label_10:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(35);
	jfloat temp0 = ((jfloat)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f));
	sp[0].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_waveTrailX) * (jfloat((frame[4].i)));
	sp[0].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_waveTrailY));
	frame[5].f = (temp2 + ((jfloat)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_x));
	jfloat temp3 = ((jfloat)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f));
	sp[0].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp4 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_waveTrailX) * (jfloat((frame[4].i)));
	sp[0].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, temp3, temp4, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_waveTrailY));
	frame[6].f = (temp5 + ((jfloat)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(36);
	sp[0].o = frame[3].o;
	jfloat temp6 = frame[5].f;
	jfloat temp7 = frame[6].f;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_floorWorld_float_float_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_floorWorld_float_float_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o, (frame[5].f), (frame[6].f));
	jobject temp8 = sp[1].o;
	sp[1].f = temp6;
	sp[2].f = temp7;
	sp += 3;
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(temp8))->F_isLiquid) == 0) goto label_14;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_14;
	INST_FCONST(1);
	goto label_15;
label_14:;
	INST_FCONST(0);
label_15:;
	{
	sp -= 4;
	((func_mindustry_graphics_Trail_update_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_update_float_float_float])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
	LINE_NUMBER(30);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WaterMoveComp_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WaterMoveComp:add", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_tleft;
	((func_mindustry_graphics_Trail_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_clear])(ctx, sp[0].o);
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_tright;
	((func_mindustry_graphics_Trail_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_clear])(ctx, sp[0].o);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WaterMoveComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WaterMoveComp:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[1].f = temp0;
	LINE_NUMBER(51);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(20.0f)));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_mindustry_entities_comp_WaterMoveComp_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WaterMoveComp_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_WaterMoveComp_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WaterMoveComp_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(54);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_mapColor;
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_black;
	jint temp0 = (jint)((func_arc_graphics_Color_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_equals_java_lang_Object_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp += 1;
	if (temp0 == 0) goto label_6;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_water;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_mapColor;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((mindustry_world_Block *) NULL_CHECK(sp[-1].o))->F_mapColor;
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(1.5f)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_trailColor;
	sp[1].o = frame[3].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * (jfloat(0.04f))));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_tleft;
	sp[1].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_trailColor;
	sp[2].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_graphics_Trail_draw_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_draw_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_trailScl));
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_tright;
	sp[1].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_trailColor;
	sp[2].o = (jobject)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_graphics_Trail_draw_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_draw_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_trailScl));
	LINE_NUMBER(60);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[1].f));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_WaterMoveComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WaterMoveComp:solidity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)((func_mindustry_entities_comp_WaterMoveComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WaterMoveComp_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_WaterMoveComp_ignoreSolids_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WaterMoveComp_ignoreSolids_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_WaterMoveComp_invoke_mindustry_entities_EntityCollisions$SolidPred_0(ctx);
		auto proxy = (mindustry_entities_comp_WaterMoveComp_invoke_mindustry_entities_EntityCollisions$SolidPred_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_WaterMoveComp_invoke_mindustry_entities_EntityCollisions$SolidPred_0);
		PUSH_OBJECT((jobject) proxy);
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_WaterMoveComp_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WaterMoveComp:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)((func_mindustry_entities_comp_WaterMoveComp_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WaterMoveComp_tileX_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_entities_comp_WaterMoveComp_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WaterMoveComp_tileY_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)SM_mindustry_entities_EntityCollisions_waterSolid_int_int_R_boolean(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_WaterMoveComp_floorSpeedMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WaterMoveComp:floorSpeedMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_mindustry_entities_comp_WaterMoveComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WaterMoveComp_isFlying_R_boolean])(ctx, (frame[0].o));
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
	sp->o = (jobject)((func_mindustry_entities_comp_WaterMoveComp_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_WaterMoveComp_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(78);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_shallow) == 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	(sp++)->f = jfloat(1.3f);
label_5:;
	{
	sp -= 1;
	popStackFrame(ctx);
	return (sp[0].f * ((jfloat)((mindustry_entities_comp_WaterMoveComp *) NULL_CHECK((frame[0].o)))->F_speedMultiplier));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_WaterMoveComp_onLiquid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WaterMoveComp:onLiquid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_mindustry_entities_comp_WaterMoveComp_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WaterMoveComp_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(83);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_WaterMoveComp[] {
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
	(void *) M_mindustry_entities_comp_WaterMoveComp_add,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_WaterMoveComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_WaterMoveComp_onSolid_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_WaterMoveComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_WaterMoveComp_draw,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	(void *) M_mindustry_entities_comp_WaterMoveComp_floorSpeedMultiplier_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_WaterMoveComp_onLiquid_R_boolean,
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
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
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
	{ "onLiquid", "()Z" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_gen_Velc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Unitc, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_WaterMoveComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_WaterMoveComp, F_y), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_WaterMoveComp, F_rotation), "F", 0 },
	{ "speedMultiplier", &class_float, offsetof(mindustry_entities_comp_WaterMoveComp, F_speedMultiplier), "F", 0 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_WaterMoveComp, F_type), "Lmindustry/type/UnitType;", 0 },
	{ "tleft", &class_mindustry_graphics_Trail, offsetof(mindustry_entities_comp_WaterMoveComp, F_tleft), "Lmindustry/graphics/Trail;", 130 },
	{ "tright", &class_mindustry_graphics_Trail, offsetof(mindustry_entities_comp_WaterMoveComp, F_tright), "Lmindustry/graphics/Trail;", 130 },
	{ "trailColor", &class_arc_graphics_Color, offsetof(mindustry_entities_comp_WaterMoveComp, F_trailColor), "Larc/graphics/Color;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_WaterMoveComp, 0, "()V", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_WaterMoveComp_update, VTABLE_mindustry_entities_comp_WaterMoveComp_update, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_entities_comp_WaterMoveComp_add, VTABLE_mindustry_entities_comp_WaterMoveComp_add, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_WaterMoveComp_draw, VTABLE_mindustry_entities_comp_WaterMoveComp_draw, "()V", 1 },
	{ "solidity", (intptr_t) M_mindustry_entities_comp_WaterMoveComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred, VTABLE_mindustry_entities_comp_WaterMoveComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred, "()Lmindustry/entities/EntityCollisions$SolidPred;", 1 },
	{ "onSolid", (intptr_t) M_mindustry_entities_comp_WaterMoveComp_onSolid_R_boolean, VTABLE_mindustry_entities_comp_WaterMoveComp_onSolid_R_boolean, "()Z", 1 },
	{ "floorSpeedMultiplier", (intptr_t) M_mindustry_entities_comp_WaterMoveComp_floorSpeedMultiplier_R_float, VTABLE_mindustry_entities_comp_WaterMoveComp_floorSpeedMultiplier_R_float, "()F", 1 },
	{ "onLiquid", (intptr_t) M_mindustry_entities_comp_WaterMoveComp_onLiquid_R_boolean, VTABLE_mindustry_entities_comp_WaterMoveComp_onLiquid_R_boolean, "()Z", 1 },
};

Class class_mindustry_entities_comp_WaterMoveComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/WaterMoveComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_WaterMoveComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_WaterMoveComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_WaterMoveComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_WaterMoveComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 340,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_WaterMoveComp = registerClass(&class_mindustry_entities_comp_WaterMoveComp);

}
