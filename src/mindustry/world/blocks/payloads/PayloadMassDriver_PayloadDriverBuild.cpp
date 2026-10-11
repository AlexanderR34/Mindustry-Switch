#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadDriverBuild.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Integer.h"
#include "mindustry/world/Block.h"
#include "arc/math/Angles.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/world/blocks/RotBlock.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadDriverState.h"
#include "mindustry/entities/Effect.h"
#include "arc/util/Tmp.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "arc/struct/Queue.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadMassDriverData.h"
#include "arc/math/Interp_PowOut.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadDriverBuild.h"
#include "java/lang/Enum.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "arc/audio/Sound.h"
#include "mindustry/world/blocks/payloads/PayloadBlock_PayloadBlockBuild.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver.h"
#include "mindustry/world/blocks/payloads/PayloadBlock.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) object;
	if (self->F_lastOther)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastOther)->clazz)->markFunction)((jobject) self->F_lastOther, mark, depth + 1);
	if (self->F_state)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_state)->clazz)->markFunction)((jobject) self->F_state, mark, depth + 1);
	if (self->F_waitingShooters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_waitingShooters)->clazz)->markFunction)((jobject) self->F_waitingShooters, mark, depth + 1);
	if (self->F_recPayload)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_recPayload)->clazz)->markFunction)((jobject) self->F_recPayload, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild(ctx);
}

void init_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_mindustry_world_blocks_payloads_PayloadMassDriver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_mindustry_world_blocks_payloads_PayloadBlock(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(133);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_link = (jint(-1));
	LINE_NUMBER(134);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation = (jfloat(90.0f));
	LINE_NUMBER(135);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter = (jfloat(0));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_charge = (jfloat(0));
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_targetSize = (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_grabWidth) * (jfloat(2)));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_curSize = ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_targetSize);
	LINE_NUMBER(137);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_payLength = (jfloat(0));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_effectDelayTimer = (jfloat(-1.0f));
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Queue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue(ctx, sp[1].o);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_waitingShooters = (jref) sp[1].o;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:currentShooter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	sp[0].o = (jobject)((func_arc_struct_Queue_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_mindustry_gen_Building, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:acceptUnitPayload", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_maxPayloadSize) * (jfloat(8.0f))), 1)) > 0) goto label_1;
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

jfloat M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_buildRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:buildRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:updateTile", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updateTile(ctx, (frame[0].o));
	LINE_NUMBER(162);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_link));
	frame[1].o = sp[0].o;
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_linkValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_linkValid_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(166);
	if (((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_charging) != 0) goto label_4;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_charge = (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_charge) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * (jfloat(10.0f))));
	LINE_NUMBER(168);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_charge), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_charge = (jfloat(0));
	}
label_4:;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_curSize), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_targetSize), (jfloat(0.05f)));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_curSize = temp0;
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_targetSize = (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_grabWidth) * (jfloat(2)));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_targetSize = temp0;
	}
label_9:;
	{
	LINE_NUMBER(178);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_effectDelayTimer), (jfloat(0)), -1)) <= 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_effectDelayTimer = (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_effectDelayTimer) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(180);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_effectDelayTimer), (jfloat(0)), 1)) > 0) goto label_15;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_15;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_lastOther;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_lastOther;
	frame[4].o = sp[0].o;
	LINE_NUMBER(182);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[4].o)))->F_turretRotation;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_length));
	frame[5].f = temp1;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[4].o)))->F_turretRotation;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_length));
	frame[6].f = temp3;
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_receiveEffect;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) - ((frame[5].f) / (jfloat(2)))), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) - ((frame[6].f) / (jfloat(2)))), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation));
	LINE_NUMBER(184);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter = (jfloat(1));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_shake;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, temp4, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_shake), (frame[0].o));
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_receiveSound;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp7 = jfloat(1);
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.2f)));
	jfloat temp9 = temp7 + temp8;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp10 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp5, temp6, temp9, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_shootSoundVolume));
	}
label_15:;
	{
	LINE_NUMBER(189);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_charging = (jint(0));
	LINE_NUMBER(191);
	if ((frame[2].i) == 0) goto label_24;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_link = temp0;
	}
label_24:;
	{
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_reloadCounter;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_edelta_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_reloadCounter = (temp0 - (temp1 / ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_reload)));
	LINE_NUMBER(197);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter), (jfloat(0)), 1)) >= 0) goto label_27;
	}
	{
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter = (jfloat(0));
	}
label_27:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(202);
	if ((frame[4].o) == nullptr) goto label_29;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild)) == 0) goto label_30;
	}
	{
	LINE_NUMBER(204);
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, (frame[4].o)));
	sp[0].o = frame[4].o;
	LINE_NUMBER(205);
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_30;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_30;
	}
	{
	jint temp0 = (jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[5].o)))->F_link;
	sp[0].o = frame[0].o;
	LINE_NUMBER(207);
	jint temp1 = (jint)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_pos_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_pos_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_30;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[2].o))->F_range));
	if (temp0 != 0) goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	}
label_29:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_37;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_accepting;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	goto label_35;
	}
label_37:;
	{
	LINE_NUMBER(217);
	if ((frame[2].i) == 0) goto label_35;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_shooting;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
label_35:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle;
	if (sp[0].o == sp[1].o) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_accepting;
	if (sp[0].o != sp[1].o) goto label_41;
	}
label_40:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_41;
	}
	{
	LINE_NUMBER(224);
	if (((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_loaded) == 0) goto label_43;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_payLength;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[1].o))->F_payloadSpeed;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_delta_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_payLength = (temp0 - (temp1 * temp2));
	LINE_NUMBER(226);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_payLength), (jfloat(0)), 1)) > 0) goto label_41;
	}
	{
	LINE_NUMBER(227);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_loaded = (jint(0));
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation;
	jfloat temp1 = ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation) + (jfloat(180.0f));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[1].o))->F_payloadRotateSpeed;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_delta_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, (temp2 * temp3));
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payRotation = temp4;
	goto label_41;
	}
label_43:;
	{
	LINE_NUMBER(231);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_effectDelayTimer), (jfloat(0)), 1)) > 0) goto label_41;
	}
	{
	LINE_NUMBER(232);
	((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_moveOutPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_moveOutPayload])(ctx, (frame[0].o));
	}
label_41:;
	{
	LINE_NUMBER(237);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), 1)) > 0) goto label_50;
	}
	LINE_NUMBER(238);
	popStackFrame(ctx);
	INST_RETURN();
label_50:;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_accepting;
	if (sp[0].o != sp[1].o) goto label_52;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_55;
	}
label_54:;
	{
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}
label_55:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_57;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_recPayload;
	sp += 1;
	if (sp[0].o != nullptr) goto label_59;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_60;
	}
label_59:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_recPayload;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_60:;
	sp -= 2;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_targetSize = sp[1].f;
label_57:;
	{
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_angleTo_arc_math_geom_Position_R_float])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_rotateSpeed) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency)));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_turretRotation = temp2;
	goto label_61;
	}
label_52:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_shooting;
	if (sp[0].o != sp[1].o) goto label_61;
	}
	{
	LINE_NUMBER(256);
	if ((frame[2].i) == 0) goto label_63;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_64;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_64;
	}
label_63:;
	{
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}
label_64:;
	{
	LINE_NUMBER(261);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[5].f = temp0;
	LINE_NUMBER(262);
	frame[6].i = (jint(0));
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[1].o))->F_payloadRotateSpeed;
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_delta_R_float])(ctx, (frame[0].o));
	jfloat temp5 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp1, temp2, (temp3 * temp4));
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payRotation = temp5;
	LINE_NUMBER(265);
	if (((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_loaded) == 0) goto label_69;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_length;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[7].f = (temp0 - (temp1 * ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_knockback)));
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_payLength;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[1].o))->F_payloadSpeed;
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_delta_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_payLength = (temp2 + (temp3 * temp4));
	LINE_NUMBER(268);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_payLength), (frame[7].f), -1)) < 0) goto label_73;
	}
	{
	LINE_NUMBER(269);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_payLength = (frame[7].f);
	LINE_NUMBER(270);
	frame[6].i = (jint(1));
	}
label_73:;
	LINE_NUMBER(272);
	goto label_76;
label_69:;
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_moveInPayload_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_moveInPayload_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_76;
	}
	{
	LINE_NUMBER(273);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_payLength = (jfloat(0));
	LINE_NUMBER(274);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_loaded = (jint(1));
	}
label_76:;
	{
	LINE_NUMBER(278);
	if ((frame[6].i) == 0) goto label_61;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_61;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_61;
	}
	{
	LINE_NUMBER(279);
	frame[7].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, (frame[1].o)));
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[7].o)))->F_waitingShooters;
	jint temp0 = (jint)((func_arc_struct_Queue_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 != 0) goto label_81;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[7].o)))->F_waitingShooters;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	}
label_81:;
	{
	LINE_NUMBER(285);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter), (jfloat(0)), 1)) > 0) goto label_61;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation;
	jfloat temp1 = frame[5].f;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_rotateSpeed) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency)));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_turretRotation = temp2;
	LINE_NUMBER(290);
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building])(ctx, (frame[7].o));
	if (sp[0].o != (frame[0].o)) goto label_61;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[7].o)))->F_state;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_accepting;
	if (sp[0].o != sp[1].o) goto label_61;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[7].o)))->F_reloadCounter), (jfloat(0)), 1)) > 0) goto label_61;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation;
	jfloat temp1 = frame[5].f;
	jfloat temp2 = jfloat(1);
	LINE_NUMBER(293);
	jint temp3 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, temp0, temp1, temp2);
	if (temp3 == 0) goto label_61;
	}
	{
	jint temp0 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[7].o)))->F_turretRotation), ((frame[5].f) + (jfloat(180.0f))), (jfloat(1)));
	if (temp0 == 0) goto label_61;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_charge;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_edelta_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_charge = (temp0 + temp1);
	LINE_NUMBER(295);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_charging = (jint(1));
	LINE_NUMBER(297);
	jfloat temp2 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_charge;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp2, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_chargeTime), -1)) < 0) goto label_61;
	}
	{
	LINE_NUMBER(298);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_length));
	frame[8].f = temp1;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_length));
	frame[9].f = temp3;
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_shootEffect;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + (frame[8].f)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + (frame[9].f)), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation));
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_smokeEffect;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation));
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_shake;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, temp4, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_shake), (frame[0].o));
	LINE_NUMBER(305);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_shootSound;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.9f)), (jfloat(1.1f)));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp8 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp5, temp6, temp7, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_shootSoundVolume));
	LINE_NUMBER(306);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_transferEffect;
	jfloat temp9 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + (frame[8].f);
	jfloat temp10 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + (frame[9].f);
	jfloat temp11 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData);
	jfloat temp12 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + (frame[8].f);
	jfloat temp13 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + (frame[9].f);
	jfloat temp14 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_x) - (frame[8].f);
	jfloat temp15 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_y) - (frame[9].f);
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	init_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData_float_float_float_float_mindustry_world_blocks_payloads_Payload(ctx, sp[1].o, temp12, temp13, temp14, temp15, sp[2].o);
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp9, temp10, temp11, sp[1].o);
	LINE_NUMBER(307);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	frame[10].o = sp[0].o;
	LINE_NUMBER(308);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_recPayload = (jref) sp[1].o;
	LINE_NUMBER(309);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_transferEffect;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_effectDelayTimer = ((jfloat)((mindustry_entities_Effect *) NULL_CHECK(sp[1].o))->F_lifetime);
	LINE_NUMBER(312);
	((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload])(ctx, (frame[7].o), (frame[0].o), (frame[10].o));
	LINE_NUMBER(313);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[7].o)))->F_lastOther = (jref) (frame[0].o);
	LINE_NUMBER(314);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[7].o)))->F_payVector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (-(frame[8].f)), (-(frame[9].f)));
	LINE_NUMBER(315);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[7].o)))->F_payRotation = ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation);
	LINE_NUMBER(316);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_payLength = ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_length);
	LINE_NUMBER(317);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[7].o)))->F_loaded = (jint(1));
	LINE_NUMBER(318);
	((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updatePayload) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updatePayload])(ctx, (frame[7].o));
	LINE_NUMBER(319);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[7].o)))->F_recPayload = (jref) (jobject(nullptr));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[7].o)))->F_waitingShooters;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_108;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[7].o)))->F_waitingShooters;
	sp[0].o = (jobject)((func_arc_struct_Queue_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_first_R_java_lang_Object])(ctx, sp[0].o);
	if (sp[0].o != (frame[0].o)) goto label_108;
	}
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[7].o)))->F_waitingShooters;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	}
label_108:;
	{
	LINE_NUMBER(324);
	sp[0].o = frame[7].o;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(327);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload = (jref) (jobject(nullptr));
	LINE_NUMBER(328);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_payLength = (jfloat(0));
	LINE_NUMBER(329);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_loaded = (jint(0));
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle;
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(331);
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter = (jfloat(1));
	}
label_61:;
	LINE_NUMBER(337);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:sense", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_progress;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 - (temp1 / ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_reload))));
	popStackFrame(ctx);
	return (jdouble(temp2));
	}
label_1:;
	{
	LINE_NUMBER(342);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updatePayload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:updatePayload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(348);
	if (((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_loaded) == 0) goto label_3;
	}
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_payLength));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_payLength));
	((func_mindustry_world_blocks_payloads_Payload_set_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_set_float_float_float, sp[0].o))(ctx, sp[0].o, temp2, (temp3 + temp4), ((jfloat)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation));
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	((func_mindustry_world_blocks_payloads_Payload_set_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_set_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), ((jfloat)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation));
	}
label_1:;
	LINE_NUMBER(354);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:draw", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation) + (jfloat(180.0f));
	jfloat temp2 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp1, (temp2 * ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_knockback)));
	frame[1].f = (temp0 + temp3);
	LINE_NUMBER(360);
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation) + (jfloat(180.0f));
	jfloat temp6 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp5, (temp6 * ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_knockback)));
	frame[2].f = (temp4 + temp7);
	frame[3].f = (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation) - (jfloat(90.0f)));
	LINE_NUMBER(362);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_baseRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(365);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_6;
	}
	{
	LINE_NUMBER(366);
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_blends_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_blends_int_R_boolean])(ctx, (frame[0].o), (frame[4].i));
	if (temp0 == 0) goto label_8;
	}
	{
	if ((frame[4].i) == ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)) goto label_8;
	}
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_inRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat((((frame[4].i) * (90)) - (180)))));
	}
label_8:;
	{
	LINE_NUMBER(365);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_outRegion;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(373);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(374);
	((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updatePayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updatePayload])(ctx, (frame[0].o));
	LINE_NUMBER(376);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_effectDelayTimer), (jfloat(0)), 1)) > 0) goto label_11;
	}
	{
	LINE_NUMBER(377);
	if (((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_loaded) == 0) goto label_15;
	}
	(sp++)->f = jfloat(35.2f);
	goto label_16;
label_15:;
	(sp++)->f = jfloat(35.0f);
label_16:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_z_float(ctx, sp[0].f);
	LINE_NUMBER(378);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	((func_mindustry_world_blocks_payloads_Payload_draw) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_draw, sp[0].o))(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(382);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.1f)));
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_topRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(385);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(50.0f)));
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 - ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))) / (jfloat(2)));
	jfloat temp2 = frame[2].f;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, (temp2 - ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))) / (jfloat(2)))), (frame[3].f));
	LINE_NUMBER(388);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation;
	jfloat temp4 = jfloat(0);
	jfloat temp5 = ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_curSize) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp3, temp4, (-(temp5 - ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_grabWidth))));
	LINE_NUMBER(389);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp6 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation;
	jfloat temp7 = ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_curSize) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = temp7 - ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_grabHeight);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp9 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp8 - ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_length)), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp6, (-temp9), (jfloat(0)));
	LINE_NUMBER(390);
	jfloat temp10 = frame[1].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp11 = temp10 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	frame[4].f = (temp11 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	jfloat temp12 = frame[2].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp13 = temp12 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	frame[5].f = (temp13 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(391);
	jfloat temp14 = frame[1].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp15 = temp14 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	frame[6].f = (temp15 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	jfloat temp16 = frame[2].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp17 = temp16 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	frame[7].f = (temp17 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_capOutlineRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(394);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_leftOutlineRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[6].f), (frame[7].f), (frame[3].f));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_rightOutlineRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[4].f), (frame[5].f), (frame[3].f));
	LINE_NUMBER(397);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_leftRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[6].f), (frame[7].f), (frame[3].f));
	LINE_NUMBER(398);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_rightRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[4].f), (frame[5].f), (frame[3].f));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_capRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(401);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(110.0f)));
	LINE_NUMBER(403);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_charge), (jfloat(0)), -1)) <= 0) goto label_35;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_linkValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_linkValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(404);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_link));
	frame[8].o = sp[0].o;
	LINE_NUMBER(406);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2Out;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_charge;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, (temp0 / ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[1].o))->F_chargeTime)));
	frame[9].f = temp1;
	frame[10].f = ((jfloat(1)) - (frame[9].f));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[11].f = (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_length) * (jfloat(1.8f)));
	frame[12].f = ((((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_curSize) / (jfloat(2))) + ((jfloat(7.0f)) * (frame[10].f)));
	LINE_NUMBER(407);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation), (frame[11].f), (frame[12].f));
	frame[13].o = sp[0].o;
	LINE_NUMBER(408);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation), (frame[11].f), (-(frame[12].f)));
	frame[14].o = sp[0].o;
	LINE_NUMBER(410);
	jfloat temp2 = (frame[9].f) * (jfloat(1.2f));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp2, sp[0].o);
	LINE_NUMBER(411);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[14].o)))->F_x)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[14].o)))->F_y)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_x)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_y)));
	LINE_NUMBER(412);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_x)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_y)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[14].o)))->F_x)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[14].o)))->F_y)));
	LINE_NUMBER(414);
	frame[15].i = (jint(0));
	}
label_47:;
	{
	if ((frame[15].i) >= (jint(4))) goto label_48;
	}
	{
	LINE_NUMBER(415);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_y), ((jfloat(0.5f)) + ((jfloat(((frame[15].i) - (jint(2))))) * (jfloat(0.1f)))));
	LINE_NUMBER(416);
	SM_arc_graphics_g2d_Draw_scl_float(ctx, ((frame[9].f) * (jfloat(1.1f))));
	LINE_NUMBER(417);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_arrow;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v3;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v3;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation));
	LINE_NUMBER(418);
	SM_arc_graphics_g2d_Draw_scl(ctx);
	LINE_NUMBER(414);
	INST_IINC(15, 1);
	goto label_47;
	}
label_48:;
	LINE_NUMBER(421);
	SM_arc_graphics_g2d_Draw_reset(ctx);
label_35:;
	LINE_NUMBER(423);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_drawConfigure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:drawConfigure", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(427);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(6.0f)), (jfloat(1)));
	frame[1].f = temp0;
	LINE_NUMBER(429);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(430);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(431);
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jfloat temp3 = (((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(2))) + (jfloat(1))) * (jfloat(8.0f))) + (frame[1].f)) - (jfloat(2));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_circles_float_float_float_arc_graphics_Color(ctx, temp1, temp2, temp3, sp[0].o);
	LINE_NUMBER(433);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_waitingShooters;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(434);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jfloat temp2 = (((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(2))) + (jfloat(1))) * (jfloat(8.0f))) + (frame[1].f)) - (jfloat(2));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_circles_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(435);
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) + (frame[1].f);
	jfloat temp8 = (jfloat(4.0f)) + (frame[1].f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float_arc_graphics_Color(ctx, temp3, temp4, temp5, temp6, temp7, temp8, sp[0].o);
	LINE_NUMBER(436);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(438);
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_linkValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_linkValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(439);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_link));
	frame[2].o = sp[0].o;
	LINE_NUMBER(440);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	jfloat temp2 = (((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(2))) + (jfloat(1))) * (jfloat(8.0f))) + (frame[1].f)) - (jfloat(2));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_circles_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(441);
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float(ctx, temp3, temp4, temp5, temp6, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) + (frame[1].f)), ((jfloat(4.0f)) + (frame[1].f)));
	}
label_10:;
	{
	LINE_NUMBER(444);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_range;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_dashCircle_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:onConfigureBuildTapped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(449);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(450);
	if (((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_link) != (jint(-1))) goto label_3;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_deselect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_deselect])(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(-1)));
	((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(455);
	jint temp0 = (jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_link;
	jint temp1 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	if (temp0 != temp1) goto label_5;
	}
	{
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(-1)));
	((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_payloads_PayloadMassDriver)) == 0) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_dst_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_range), 1)) > 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(459);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:acceptPayload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(468);
	jint temp0 = (jint)M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_maxPayloadSize) * (jfloat(8.0f))), 1)) > 0) goto label_1;
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

jbool M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_linkValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:linkValid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(472);
	if (((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_link) == (jint(-1))) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_link));
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[2].o))->F_range));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_config_R_arc_math_geom_Point2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:config", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)SM_arc_math_geom_Point2_unpack_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_link));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(488);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(489);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_link));
	LINE_NUMBER(490);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_turretRotation));
	LINE_NUMBER(491);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_state;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_ordinal_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte(temp0)));
	LINE_NUMBER(493);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter));
	LINE_NUMBER(494);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_charge));
	LINE_NUMBER(495);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_loaded));
	LINE_NUMBER(496);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK((frame[0].o)))->F_charging));
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(501);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_link = temp0;
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_turretRotation = temp1;
	LINE_NUMBER(504);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_all;
	jint temp2 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_state = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp2));
	LINE_NUMBER(506);
	if ((frame[2].i) < (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(507);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_reloadCounter = temp0;
	LINE_NUMBER(508);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_charge = temp1;
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_loaded = temp2;
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_charging = temp3;
	}
label_5:;
	LINE_NUMBER(512);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_config_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_config_R_arc_math_geom_Point2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Building_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Building_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Building_getX_R_float,
	(void *) M_mindustry_gen_Building_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_isValid_R_boolean,
	(void *) M_mindustry_gen_Building_shouldAmbientSound_R_boolean,
	(void *) M_mindustry_gen_Building_getAmbientVolume_R_float,
	(void *) M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound,
	(void *) M_mindustry_gen_Building_hitSize_R_float,
	(void *) M_mindustry_gen_Building_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Building_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_isAdded_R_boolean,
	(void *) M_mindustry_gen_Building_isLocal_R_boolean,
	(void *) M_mindustry_gen_Building_isRemote_R_boolean,
	(void *) M_mindustry_gen_Building_serialize_R_boolean,
	(void *) M_mindustry_gen_Building_classId_R_int,
	(void *) M_mindustry_gen_Building_id_R_int,
	(void *) M_mindustry_gen_Building_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_gen_Building_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onSolid_R_boolean,
	(void *) M_mindustry_gen_Building_x_R_float,
	(void *) M_mindustry_gen_Building_y_R_float,
	(void *) M_mindustry_gen_Building_tileX_R_int,
	(void *) M_mindustry_gen_Building_tileY_R_int,
	(void *) M_mindustry_gen_Building_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_set_float_float,
	(void *) M_mindustry_gen_Building_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_trns_float_float,
	(void *) M_mindustry_gen_Building_x_float,
	(void *) M_mindustry_gen_Building_y_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_Building_damagePierce_float,
	(void *) M_mindustry_gen_Building_damagePierce_float_boolean,
	(void *) M_mindustry_gen_Building_healFract_float,
	(void *) M_mindustry_gen_Building_heal_float,
	(void *) M_mindustry_gen_Building_damaged_R_boolean,
	(void *) M_mindustry_gen_Building_dead_R_boolean,
	(void *) M_mindustry_gen_Building_health_R_float,
	(void *) M_mindustry_gen_Building_healthf_R_float,
	(void *) M_mindustry_gen_Building_hitTime_R_float,
	(void *) M_mindustry_gen_Building_maxHealth_R_float,
	(void *) M_mindustry_gen_Building_clampHealth,
	(void *) M_mindustry_gen_Building_damage_float,
	(void *) M_mindustry_gen_Building_damage_float_boolean,
	(void *) M_mindustry_gen_Building_damageContinuous_float,
	(void *) M_mindustry_gen_Building_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Building_dead_boolean,
	(void *) M_mindustry_gen_Building_heal,
	(void *) M_mindustry_gen_Building_health_float,
	(void *) M_mindustry_gen_Building_hitTime_float,
	(void *) M_mindustry_gen_Building_kill,
	(void *) M_mindustry_gen_Building_killed,
	(void *) M_mindustry_gen_Building_maxHealth_float,
	(void *) M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_cheating_R_boolean,
	(void *) M_mindustry_gen_Building_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_team_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_timer_R_arc_util_Interval,
	(void *) M_mindustry_gen_Building_timer_int_float_R_boolean,
	(void *) M_mindustry_gen_Building_timer_arc_util_Interval,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_gen_Building_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_canPickup_R_boolean,
	(void *) M_mindustry_gen_Building_canResupply_R_boolean,
	(void *) M_mindustry_gen_Building_canUnload_R_boolean,
	(void *) M_mindustry_gen_Building_canWithdraw_R_boolean,
	(void *) M_mindustry_gen_Building_checkSolid_R_boolean,
	(void *) M_mindustry_gen_Building_checkSuppression_R_boolean,
	(void *) M_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_configTapped_R_boolean,
	(void *) M_mindustry_gen_Building_consumeTriggerValid_R_boolean,
	(void *) M_mindustry_gen_Building_dump_R_boolean,
	(void *) M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_inMapArea_R_boolean,
	(void *) M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isCommandable_R_boolean,
	(void *) M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isHealSuppressed_R_boolean,
	(void *) M_mindustry_gen_Building_isInsulated_R_boolean,
	(void *) M_mindustry_gen_Building_isPayload_R_boolean,
	(void *) M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_version_R_byte,
	(void *) M_mindustry_gen_Building_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_gen_Building_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_gen_Building_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_gen_Building_getPowerProduction_R_float,
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_gen_Building_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_gen_Building_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_gen_Building_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_gen_Building_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_pickedUp,
	(void *) M_mindustry_gen_Building_playDestroySound,
	(void *) M_mindustry_gen_Building_powerGraphRemoved,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item_int,
	(void *) M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle,
	(void *) M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_readBase_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_recache,
	(void *) M_mindustry_gen_Building_recentlyHealed,
	(void *) M_mindustry_gen_Building_removeFromProximity,
	(void *) M_mindustry_gen_Building_sleep,
	(void *) M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_tapped,
	(void *) M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_unitOn_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_updateConsumption,
	(void *) M_mindustry_gen_Building_updateEfficiencyMultiplier,
	(void *) M_mindustry_gen_Building_updateFogVisibility,
	(void *) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_updatePowerGraph,
	(void *) M_mindustry_gen_Building_updateProximity,
	(void *) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updateTile,
	(void *) M_mindustry_gen_Building_writeAll_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeBase_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable,
	(void *) M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence,
	(void *) M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_blends_int_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updatePayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_boolean_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveOutPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_dumpPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_hasArrived_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_buildRotation_R_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_linkValid_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_config_R_arc_math_geom_Point2,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
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
	{ "isValid", "()Z" },
	{ "shouldAmbientSound", "()Z" },
	{ "getAmbientVolume", "()F" },
	{ "getAmbientSound", "()Larc/audio/Sound;" },
	{ "hitSize", "()F" },
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
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
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
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "control", "(Lmindustry/logic/LAccess;DDDD)V" },
	{ "control", "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "setIndex__build", "(I)V" },
	{ "back", "()Lmindustry/gen/Building;" },
	{ "front", "()Lmindustry/gen/Building;" },
	{ "left", "()Lmindustry/gen/Building;" },
	{ "right", "()Lmindustry/gen/Building;" },
	{ "getCommandPosition", "()Larc/math/geom/Vec2;" },
	{ "config", "()Ljava/lang/Object;" },
	{ "getPayloads", "()Lmindustry/type/PayloadSeq;" },
	{ "findClosestEdge", "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;" },
	{ "getPayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "takePayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "onRepaired", "()V" },
	{ "placed", "()V" },
	{ "playerPlaced", "(Ljava/lang/Object;)V" },
	{ "read", "(Larc/util/io/Reads;B)V" },
	{ "create", "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "getLiquidDestination", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;" },
	{ "init", "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;" },
	{ "nearby", "(II)Lmindustry/gen/Building;" },
	{ "nearby", "(I)Lmindustry/gen/Building;" },
	{ "getCursor", "()Larc/Graphics$Cursor;" },
	{ "getDisplayIcon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getPowerConnections", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "absorbLasers", "()Z" },
	{ "acceptItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "acceptLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "acceptPayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "allowDeposit", "()Z" },
	{ "allowUpdate", "()Z" },
	{ "canBeReplaced", "(Lmindustry/world/Block;)Z" },
	{ "canConsume", "()Z" },
	{ "canControlSelect", "(Lmindustry/gen/Unit;)Z" },
	{ "canDump", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "canDumpLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "canPickup", "()Z" },
	{ "canResupply", "()Z" },
	{ "canUnload", "()Z" },
	{ "canWithdraw", "()Z" },
	{ "checkSolid", "()Z" },
	{ "checkSuppression", "()Z" },
	{ "collide", "(Lmindustry/gen/Bullet;)Z" },
	{ "collision", "(Lmindustry/gen/Bullet;)Z" },
	{ "conductsTo", "(Lmindustry/gen/Building;)Z" },
	{ "configTapped", "()Z" },
	{ "consumeTriggerValid", "()Z" },
	{ "dump", "()Z" },
	{ "dump", "(Lmindustry/type/Item;)Z" },
	{ "dumpAccumulate", "()Z" },
	{ "dumpAccumulate", "(Lmindustry/type/Item;)Z" },
	{ "dumpPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "inMapArea", "()Z" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "isCommandable", "()Z" },
	{ "isDiscovered", "(Lmindustry/game/Team;)Z" },
	{ "isHealSuppressed", "()Z" },
	{ "isInsulated", "()Z" },
	{ "isPayload", "()Z" },
	{ "moveForward", "(Lmindustry/type/Item;)Z" },
	{ "movePayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "onConfigureBuildTapped", "(Lmindustry/gen/Building;)Z" },
	{ "onConfigureTapped", "(FF)Z" },
	{ "payloadCheck", "(I)Z" },
	{ "productionValid", "()Z" },
	{ "put", "(Lmindustry/type/Item;)Z" },
	{ "shouldConsume", "()Z" },
	{ "shouldHideConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "shouldShowConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "wasRecentlyDamaged", "()Z" },
	{ "wasRecentlyHealed", "(F)Z" },
	{ "relativeTo", "(Lmindustry/gen/Building;)B" },
	{ "relativeTo", "(II)B" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeToEdge", "(Lmindustry/world/Tile;)B" },
	{ "version", "()B" },
	{ "ambientVolume", "()F" },
	{ "calculateHeat", "([F)F" },
	{ "calculateHeat", "([FLarc/struct/IntSet;)F" },
	{ "delta", "()F" },
	{ "drawrot", "()F" },
	{ "edelta", "()F" },
	{ "efficiencyScale", "()F" },
	{ "fogRadius", "()F" },
	{ "getDisplayEfficiency", "()F" },
	{ "getPowerProduction", "()F" },
	{ "getProgressIncrease", "(F)F" },
	{ "handleDamage", "(F)F" },
	{ "moveLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "moveLiquidForward", "(ZLmindustry/type/Liquid;)F" },
	{ "progress", "()F" },
	{ "rotdeg", "()F" },
	{ "timeScale", "()F" },
	{ "totalProgress", "()F" },
	{ "warmup", "()F" },
	{ "acceptStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I" },
	{ "explosionItemCap", "()I" },
	{ "getMaximumAccepted", "(Lmindustry/type/Item;)I" },
	{ "moduleBitmask", "()I" },
	{ "pos", "()I" },
	{ "removeStack", "(Lmindustry/type/Item;I)I" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "status", "()Lmindustry/world/meta/BlockStatus;" },
	{ "flowItems", "()Lmindustry/world/modules/ItemModule;" },
	{ "addPlan", "(Z)V" },
	{ "addPlan", "(ZZ)V" },
	{ "afterDestroyed", "()V" },
	{ "afterPickedUp", "()V" },
	{ "applyBoost", "(FF)V" },
	{ "applyHealSuppression", "(F)V" },
	{ "applyHealSuppression", "(FLarc/graphics/Color;)V" },
	{ "applySlowdown", "(FF)V" },
	{ "buildConfiguration", "(Larc/scene/ui/layout/Table;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;Z)V" },
	{ "checkAllowUpdate", "()V" },
	{ "configure", "(Ljava/lang/Object;)V" },
	{ "configureAny", "(Ljava/lang/Object;)V" },
	{ "configured", "(Lmindustry/gen/Unit;Ljava/lang/Object;)V" },
	{ "consume", "()V" },
	{ "created", "()V" },
	{ "damage", "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V" },
	{ "damage", "(Lmindustry/game/Team;F)V" },
	{ "deselect", "()V" },
	{ "displayBars", "(Larc/scene/ui/layout/Table;)V" },
	{ "displayConsumption", "(Larc/scene/ui/layout/Table;)V" },
	{ "draw", "()V" },
	{ "drawCached", "()V" },
	{ "drawConfigure", "()V" },
	{ "drawCracks", "()V" },
	{ "drawDisabled", "()V" },
	{ "drawItemSelection", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "drawLight", "()V" },
	{ "drawLiquidLight", "(Lmindustry/type/Liquid;F)V" },
	{ "drawSelect", "()V" },
	{ "drawStatus", "()V" },
	{ "drawTeam", "()V" },
	{ "drawTeamTop", "()V" },
	{ "dropped", "()V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;FI)V" },
	{ "eachEdge", "(Larc/func/Cons;)V" },
	{ "getStackOffset", "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V" },
	{ "handleItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)V" },
	{ "handleLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V" },
	{ "handlePayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "handleStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V" },
	{ "handleString", "(Ljava/lang/Object;)V" },
	{ "handleUnitPayload", "(Lmindustry/gen/Unit;Larc/func/Cons;)V" },
	{ "healthChanged", "()V" },
	{ "incrementDump", "(I)V" },
	{ "itemTaken", "(Lmindustry/type/Item;)V" },
	{ "noSleep", "()V" },
	{ "offload", "(Lmindustry/type/Item;)V" },
	{ "onCommand", "(Larc/math/geom/Vec2;)V" },
	{ "onConfigureClosed", "()V" },
	{ "onControlSelect", "(Lmindustry/gen/Unit;)V" },
	{ "onDeconstructed", "(Lmindustry/gen/Unit;)V" },
	{ "onDestroyed", "()V" },
	{ "onNearbyBuildAdded", "(Lmindustry/gen/Building;)V" },
	{ "onProximityAdded", "()V" },
	{ "onProximityRemoved", "()V" },
	{ "onProximityUpdate", "()V" },
	{ "onRemoved", "()V" },
	{ "overwrote", "(Larc/struct/Seq;)V" },
	{ "payloadDraw", "()V" },
	{ "pickedUp", "()V" },
	{ "playDestroySound", "()V" },
	{ "powerGraphRemoved", "()V" },
	{ "produced", "(Lmindustry/type/Item;)V" },
	{ "produced", "(Lmindustry/type/Item;I)V" },
	{ "puddleOn", "(Lmindustry/gen/Puddle;)V" },
	{ "readAll", "(Larc/util/io/Reads;B)V" },
	{ "readBase", "(Larc/util/io/Reads;)V" },
	{ "readSync", "(Larc/util/io/Reads;B)V" },
	{ "recache", "()V" },
	{ "recentlyHealed", "()V" },
	{ "removeFromProximity", "()V" },
	{ "sleep", "()V" },
	{ "splashLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "tapped", "()V" },
	{ "transferLiquid", "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V" },
	{ "unitOn", "(Lmindustry/gen/Unit;)V" },
	{ "unitOnAny", "(Lmindustry/gen/Unit;)V" },
	{ "unitRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "updateConsumption", "()V" },
	{ "updateEfficiencyMultiplier", "()V" },
	{ "updateFogVisibility", "()V" },
	{ "updateLastAccess", "(Lmindustry/gen/Player;)V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "updatePowerGraph", "()V" },
	{ "updateProximity", "()V" },
	{ "updateTableAlign", "(Larc/scene/ui/layout/Table;)V" },
	{ "updateTile", "()V" },
	{ "writeAll", "(Larc/util/io/Writes;)V" },
	{ "writeBase", "(Larc/util/io/Writes;)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "lambda$splashLiquid$0", "(Lmindustry/type/Liquid;F)V" },
	{ "lambda$onDeconstructed$0", "(FLmindustry/world/Tile;)V" },
	{ "lambda$display$6", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$9", "(Larc/struct/Bits;Ljava/lang/Runnable;)V" },
	{ "lambda$display$7", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$display$8", "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;" },
	{ "lambda$display$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$placed$0", "(Lmindustry/gen/Building;)V" },
	{ "acceptUnitPayload", "(Lmindustry/gen/Unit;)Z" },
	{ "blends", "(I)Z" },
	{ "updatePayload", "()V" },
	{ "moveInPayload", "()Z" },
	{ "moveInPayload", "(Z)Z" },
	{ "moveOutPayload", "()V" },
	{ "dumpPayload", "()V" },
	{ "hasArrived", "()Z" },
	{ "drawPayload", "()V" },
	{ "lambda$onControlSelect$0", "(Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "buildRotation", "()F" },
	{ "currentShooter", "()Lmindustry/gen/Building;" },
	{ "linkValid", "()Z" },
	{ "config", "()Larc/math/geom/Point2;" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_RotBlock, };

static FieldMetadata fields[] {
	{ "link", &class_int, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_link), "I", 1 },
	{ "turretRotation", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_turretRotation), "F", 1 },
	{ "reloadCounter", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_reloadCounter), "F", 1 },
	{ "charge", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_charge), "F", 1 },
	{ "targetSize", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_targetSize), "F", 1 },
	{ "curSize", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_curSize), "F", 1 },
	{ "payLength", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_payLength), "F", 1 },
	{ "effectDelayTimer", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_effectDelayTimer), "F", 1 },
	{ "lastOther", &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_lastOther), "Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild;", 1 },
	{ "loaded", &class_boolean, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_loaded), "Z", 1 },
	{ "charging", &class_boolean, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_charging), "Z", 1 },
	{ "state", &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_state), "Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState;", 1 },
	{ "waitingShooters", &class_arc_struct_Queue, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_waitingShooters), "Larc/struct/Queue;", 1 },
	{ "recPayload", &class_mindustry_world_blocks_payloads_Payload, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_recPayload), "Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "this$0", &class_mindustry_world_blocks_payloads_PayloadMassDriver, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild, F_this$0), "Lmindustry/world/blocks/payloads/PayloadMassDriver;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_mindustry_world_blocks_payloads_PayloadMassDriver, 0, "(Lmindustry/world/blocks/payloads/PayloadMassDriver;)V", 1 },
	{ "currentShooter", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_currentShooter_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "acceptUnitPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "buildRotation", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_buildRotation_R_float, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_buildRotation_R_float, "()F", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updateTile, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updateTile, "()V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "updatePayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updatePayload, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_updatePayload, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_draw, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_draw, "()V", 1 },
	{ "drawConfigure", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_drawConfigure, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_drawConfigure, "()V", 1 },
	{ "onConfigureBuildTapped", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "acceptPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "linkValid", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_linkValid_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_linkValid_R_boolean, "()Z", 4 },
	{ "config", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_config_R_arc_math_geom_Point2, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_config_R_arc_math_geom_Point2, "()Larc/math/geom/Point2;", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_version_R_byte, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_config_R_java_lang_Object, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_config_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild,
		.size = sizeof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadMassDriver,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 324,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild = registerClass(&class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild);

}

