#include "mindustry/world/blocks/payloads/PayloadRouter_PayloadRouterBuild.h"
#include "mindustry/world/blocks/payloads/PayloadRouter_PayloadRouterBuild_invoke_arc_func_Cons_1.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/world/blocks/payloads/PayloadConveyor.h"
#include "mindustry/world/blocks/payloads/PayloadRouter_PayloadRouterBuild.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/world/blocks/payloads/PayloadRouter_PayloadRouterBuild_invoke_arc_func_Prov_1.h"
#include "mindustry/world/blocks/ItemSelection.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/blocks/payloads/PayloadRouter_PayloadRouterBuild_invoke_arc_func_Boolf_2.h"
#include "arc/util/Time.h"
#include "java/lang/Enum.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "mindustry/world/blocks/payloads/PayloadRouter.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/blocks/payloads/PayloadRouter_PayloadRouterBuild_invoke_arc_func_Boolf_3.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/world/blocks/payloads/PayloadConveyor_PayloadConveyorBuild.h"
#include "mindustry/Vars.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) object;
	if (self->F_sorted)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sorted)->clazz)->markFunction)((jobject) self->F_sorted, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild(ctx);
}

void init_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_mindustry_world_blocks_payloads_PayloadRouter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_mindustry_world_blocks_payloads_PayloadConveyor(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(68);
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_controlTime = (jfloat(-1.0f));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:add", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	M_mindustry_gen_Building_add(ctx, (frame[0].o));
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_rotdeg_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK(sp[0].o))->F_smoothRot = temp0;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_pickNext(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:pickNext", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_controlTime), (jfloat(0)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(78);
	if (((jint)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_matches) == 0) goto label_3;
	}
	{
	LINE_NUMBER(80);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation = ((jint)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_recDir);
	LINE_NUMBER(81);
	((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onProximityUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onProximityUpdate])(ctx, (frame[0].o));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(83);
	frame[1].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(85);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation = ((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(1))) % (jint(4)));
	LINE_NUMBER(87);
	if (((jint)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_matches) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_sorted;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) != ((jint)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_recDir)) goto label_9;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation = (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation) + (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(90);
	((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onProximityUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onProximityUpdate])(ctx, (frame[0].o));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild)) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild)) != 0) goto label_12;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	((func_mindustry_gen_Building_updateTile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_updateTile])(ctx, sp[0].o);
	}
label_12:;
	{
	LINE_NUMBER(98);
	if (((jint)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blocked) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_15;
	}
label_14:;
	{
	INST_IINC(1, 1);
	if ((frame[1].i) < (jint(4))) goto label_7;
	}
label_15:;
	LINE_NUMBER(99);
	goto label_6;
label_1:;
	{
	LINE_NUMBER(101);
	((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onProximityUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onProximityUpdate])(ctx, (frame[0].o));
	}
label_6:;
	LINE_NUMBER(103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_control_mindustry_logic_LAccess_double_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:control", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	frame[8].d = param4;
	{
	LINE_NUMBER(107);
	M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double(ctx, (frame[0].o), (frame[1].o), (frame[2].d), (frame[4].d), (frame[6].d), (frame[8].d));
	LINE_NUMBER(108);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_config;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(109);
	frame[10].i = ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (jint((frame[2].d))), (jint(4)));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(112);
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_controlTime = (jfloat(360.0f));
	LINE_NUMBER(113);
	if ((frame[10].i) == ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)) goto label_2;
	}
	{
	LINE_NUMBER(114);
	((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onProximityUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onProximityUpdate])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onControlSelect_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:onControlSelect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onControlSelect_mindustry_gen_Unit(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(123);
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_recDir = ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(124);
	((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_checkMatch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_checkMatch])(ctx, (frame[0].o));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:handlePayload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(129);
	M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(130);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_controlTime), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte])(ctx, (frame[1].o), (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_5:;
	sp -= 2;
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK(sp[0].o))->F_recDir = sp[1].i;
label_2:;
	{
	LINE_NUMBER(133);
	((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_checkMatch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_checkMatch])(ctx, (frame[0].o));
	LINE_NUMBER(134);
	((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_pickNext) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_pickNext])(ctx, (frame[0].o));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_checkMatch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:checkMatch", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	LINE_NUMBER(139);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_sorted;
	sp += 1;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_BuildPayload, (frame[3].o)));
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_sorted;
	if (sp[0].o == sp[1].o) goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_5;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_sorted;
	if (sp[0].o != sp[1].o) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	goto label_7;
label_5:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK(sp[0].o))->F_matches = sp[1].i;
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_payloads_PayloadRouter *) NULL_CHECK(sp[0].o))->F_invert) == 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_matches) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	sp -= 2;
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK(sp[0].o))->F_matches = sp[1].i;
label_9:;
	LINE_NUMBER(143);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_moveFailed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:moveFailed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_pickNext) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_pickNext])(ctx, (frame[0].o));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:updateTile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updateTile(ctx, (frame[0].o));
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK(sp[0].o))->F_controlTime = (((jfloat)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK(sp[0].o))->F_controlTime) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_smoothRot;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_rotdeg_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_slerpDelta_float_float_float_R_float(ctx, temp0, temp1, (jfloat(0.2f)));
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK(sp[0].o))->F_smoothRot = temp2;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:drawSelect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_sorted;
	((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_drawItemSelection_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_drawItemSelection_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(167);
	frame[1].f = (jfloat(0.8f));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_fract_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_fract_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp1 - (jfloat(0.5f))));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((temp0 - (temp2 * (jfloat(2)))) / (frame[1].f)), (jfloat(0)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, temp3);
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[0].o))->F_topRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_smoothRot));
	LINE_NUMBER(171);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter *) NULL_CHECK(sp[0].o))->F_overRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(175);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.0f)));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	((func_mindustry_world_blocks_payloads_Payload_draw) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_draw, sp[0].o))(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(180);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:buildConfiguration", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	LINE_NUMBER(185);
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[2].o);
	sp[3].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[2].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, sp[2].o);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_content;
	LINE_NUMBER(186);
	sp[3].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[3].o);
	sp[4].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[5].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) sp[4].o;
		sp[4].o = (jobject) proxy;
	}
	sp[3].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[3].o, sp[4].o);
	sp[3].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, sp[3].o);
	sp[2].o = (jobject)((func_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	LINE_NUMBER(184);
	SM_mindustry_world_blocks_ItemSelection_buildTable_mindustry_world_Block_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_sorted;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(202);
	M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(203);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_sorted;
	sp += 1;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ICONST(-1);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_sorted;
	sp[0].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(204);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_sorted;
	sp += 1;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_ICONST(-1);
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_sorted;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(205);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK((frame[0].o)))->F_recDir));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(210);
	M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(211);
	if ((frame[2].i) < (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(212);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(213);
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[4].i = temp1;
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].i) != (jint(-1))) goto label_6;
	}
	INST_ACONST_NULL();
	goto label_7;
label_6:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))), (frame[4].i));
	sp[0].o = checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o);
	sp += 1;
	}
label_7:;
	{
	sp -= 2;
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK(sp[0].o))->F_sorted = (jref) sp[1].o;
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild *) NULL_CHECK(sp[0].o))->F_recDir = temp0;
	LINE_NUMBER(216);
	((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_checkMatch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_checkMatch])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_lambda$buildConfiguration$0_R_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild:lambda$buildConfiguration$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_config_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_config_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field sorted
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild[] {
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
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_gen_Building_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_sense_mindustry_ctype_Content_R_double,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_canControlSelect_mindustry_gen_Unit_R_boolean,
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
	(void *) M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_buildConfiguration_arc_scene_ui_layout_Table,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onProximityUpdate,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_payloadDraw,
	(void *) M_mindustry_gen_Building_pickedUp,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_unitOn_mindustry_gen_Unit,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_checkBlocked,
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_moveFailed,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moved,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_drawBottom,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_time_R_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updatePayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_blends_int_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_clipRegion_arc_math_geom_Rect_arc_math_geom_Rect_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_curStep_R_int,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_pickNext,
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_checkMatch,
	(void *) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_lambda$buildConfiguration$0_R_mindustry_ctype_UnlockableContent,
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
	{ "checkBlocked", "()V" },
	{ "moveFailed", "()V" },
	{ "moved", "()V" },
	{ "drawBottom", "()V" },
	{ "time", "()F" },
	{ "updatePayload", "()V" },
	{ "blends", "(I)Z" },
	{ "clipRegion", "(Larc/math/geom/Rect;Larc/math/geom/Rect;Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;" },
	{ "curStep", "()I" },
	{ "fract", "()F" },
	{ "lambda$onControlSelect$0", "(Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "pickNext", "()V" },
	{ "checkMatch", "()V" },
	{ "lambda$buildConfiguration$0", "()Lmindustry/ctype/UnlockableContent;" },
};

static FieldMetadata fields[] {
	{ "sorted", &class_mindustry_ctype_UnlockableContent, offsetof(mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild, F_sorted), "Lmindustry/ctype/UnlockableContent;", 1 },
	{ "recDir", &class_int, offsetof(mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild, F_recDir), "I", 1 },
	{ "matches", &class_boolean, offsetof(mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild, F_matches), "Z", 1 },
	{ "smoothRot", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild, F_smoothRot), "F", 1 },
	{ "controlTime", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild, F_controlTime), "F", 1 },
	{ "this$0", &class_mindustry_world_blocks_payloads_PayloadRouter, offsetof(mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild, F_this$0), "Lmindustry/world/blocks/payloads/PayloadRouter;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_mindustry_world_blocks_payloads_PayloadRouter, 0, "(Lmindustry/world/blocks/payloads/PayloadRouter;)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_add, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_add, "()V", 1 },
	{ "pickNext", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_pickNext, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_pickNext, "()V", 1 },
	{ "control", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_control_mindustry_logic_LAccess_double_double_double_double, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_control_mindustry_logic_LAccess_double_double_double_double, "(Lmindustry/logic/LAccess;DDDD)V", 1 },
	{ "onControlSelect", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onControlSelect_mindustry_gen_Unit, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_onControlSelect_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "handlePayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V", 1 },
	{ "checkMatch", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_checkMatch, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_checkMatch, "()V", 1 },
	{ "moveFailed", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_moveFailed, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_moveFailed, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_updateTile, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_updateTile, "()V", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_drawSelect, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_drawSelect, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_draw, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_draw, "()V", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_config_R_java_lang_Object, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_config_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_version_R_byte, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$buildConfiguration$0", (intptr_t) M_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_lambda$buildConfiguration$0_R_mindustry_ctype_UnlockableContent, VTABLE_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild_lambda$buildConfiguration$0_R_mindustry_ctype_UnlockableContent, "()Lmindustry/ctype/UnlockableContent;", 4098 },
};

Class class_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/payloads/PayloadRouter$PayloadRouterBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild,
		.size = sizeof(mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadRouter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 324,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild = registerClass(&class_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild);

}

