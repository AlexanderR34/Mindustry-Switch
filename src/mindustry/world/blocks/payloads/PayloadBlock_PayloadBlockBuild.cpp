#include "mindustry/world/blocks/payloads/PayloadBlock_PayloadBlockBuild.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/math/Angles.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "arc/util/Tmp.h"
#include "mindustry/world/blocks/payloads/PayloadBlock_PayloadBlockBuild_invoke_arc_func_Cons_1.h"
#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/blocks/payloads/PayloadBlock_PayloadBlockBuild.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/world/blocks/payloads/PayloadBlock.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_gen_Building(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) object;
	if (self->F_payload)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_payload)->clazz)->markFunction)((jobject) self->F_payload, mark, depth + 1);
	if (self->F_payVector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_payVector)->clazz)->markFunction)((jobject) self->F_payVector, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_mindustry_world_blocks_payloads_PayloadBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payVector = (jref) sp[1].o;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:acceptUnitPayload", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_canControlSelect_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:canControlSelect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_spawnedByCore) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowedInPayloads) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(107);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size) * (8)))) * (jfloat(0.7f))) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize) / (jfloat(2)))));
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o != (frame[0].o)) goto label_5;
	}
	INST_ICONST(1);
	goto label_4;
label_5:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onControlSelect_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:onControlSelect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	frame[2].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x);
	frame[3].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat(((-((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size)) * (8)))) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat(((-((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size)) * (8)))) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))));
	LINE_NUMBER(115);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:acceptPayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_1;
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

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:handlePayload", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(125);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[2].o)));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[3].o)))->F_unit;
	frame[4].o = sp[0].o;
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[5].f = (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) * (jfloat(0.7f))) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_hitSize) / (jfloat(2))));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (-(frame[5].f)), (-(frame[5].f)), (frame[5].f), (frame[5].f));
	LINE_NUMBER(129);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat(((-((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size)) * (8)))) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat(((-((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size)) * (8)))) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))));
	}
label_6:;
	{
	LINE_NUMBER(133);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload = (jref) (frame[2].o);
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_rotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payRotation = temp0;
	LINE_NUMBER(136);
	((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload])(ctx, (frame[0].o));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_getPayload_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:getPayload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_pickedUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:pickedUp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_carried = (jint(1));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawTeamTop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:drawTeamTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_carried = (jint(0));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_takePayload_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:takePayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	frame[1].o = sp[0].o;
	LINE_NUMBER(157);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload = (jref) (jobject(nullptr));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onRemoved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:onRemoved", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	M_mindustry_gen_Building_onRemoved(ctx, (frame[0].o));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	if (((jint)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_carried) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_Payload_dump_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_dump_R_boolean, sp[0].o))(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(165);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:updateTile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	((func_mindustry_world_blocks_payloads_Payload_update_mindustry_gen_Unit_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_update_mindustry_gen_Unit_mindustry_gen_Building, sp[0].o))(ctx, sp[0].o, (jobject(nullptr)), (frame[0].o));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_Payload_isDead_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_isDead_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(172);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:onDestroyed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	((func_mindustry_world_blocks_payloads_Payload_destroyed) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_destroyed, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(180);
	M_mindustry_gen_Building_onDestroyed(ctx, (frame[0].o));
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_blends_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:blends", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(184);
	jint temp0 = (jint)SM_mindustry_world_blocks_payloads_PayloadBlock_blends_mindustry_gen_Building_int_R_boolean(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:updatePayload", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	((func_mindustry_world_blocks_payloads_Payload_set_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_set_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), ((jfloat)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation));
	}
label_1:;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:moveInPayload", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_boolean_R_boolean])(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:moveInPayload", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(202);
	((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload])(ctx, (frame[0].o));
	LINE_NUMBER(204);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jobject temp1 = sp[1].o;
	sp[1].f = temp0;
	sp += 2;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(temp1))->F_rotate) == 0) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_rotdeg_R_float])(ctx, (frame[0].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	(sp++)->f = jfloat(90.0f);
label_6:;
	{
	sp -= 3;
	sp[3].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[3].o))->F_payloadRotateSpeed;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_delta_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (temp0 * temp1));
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payRotation = temp2;
	}
label_3:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec2_ZERO;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[2].o))->F_payloadSpeed;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_delta_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (temp0 * temp1));
	LINE_NUMBER(209);
	jint temp2 = (jint)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_hasArrived_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_hasArrived_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveOutPayload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:moveOutPayload", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(215);
	((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload])(ctx, (frame[0].o));
	LINE_NUMBER(217);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_rotdeg_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_rotdeg_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[1].o))->F_payloadRotateSpeed;
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_delta_R_float])(ctx, (frame[0].o));
	jfloat temp5 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp1, temp2, (temp3 * temp4));
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payRotation = temp5;
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[2].o))->F_payloadSpeed;
	jfloat temp7 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_delta_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (temp6 * temp7));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_front_R_mindustry_gen_Building])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(223);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
label_7:;
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(224);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPayload) != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_acceptsPayload) == 0) goto label_11;
	}
label_12:;
	INST_ICONST(1);
	goto label_13;
label_11:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(226);
	if ((frame[3].i) == 0) goto label_15;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_15;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp0 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_world_blocks_payloads_PayloadBlock_pushOutput_mindustry_world_blocks_payloads_Payload_float(ctx, sp[0].o, (temp0 - (temp1 / ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))))));
	}
label_15:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	jint temp0 = (jint)((func_arc_math_geom_Vec2_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, (frame[1].o), (jfloat(1,000000e-03f)));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat(((-((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size)) * (8)))) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat(((-((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size)) * (8)))) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))));
	LINE_NUMBER(233);
	if ((frame[4].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(235);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload = (jref) (jobject(nullptr));
	goto label_17;
	}
label_20:;
	{
	LINE_NUMBER(237);
	if ((frame[3].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(238);
	((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_dumpPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_dumpPayload])(ctx, (frame[0].o));
	}
label_17:;
	LINE_NUMBER(241);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_dumpPayload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:dumpPayload", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_rotation_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp0, (jfloat(0.1f)));
	frame[1].f = temp1;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_rotation_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp2, (jfloat(0.1f)));
	frame[2].f = temp3;
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_x_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp5 = temp4 + (frame[1].f);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp6 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_y_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp7 = temp6 + (frame[2].f);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp8 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_rotation_R_float, sp[1].o))(ctx, sp[1].o);
	((func_mindustry_world_blocks_payloads_Payload_set_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_set_float_float_float, sp[0].o))(ctx, sp[0].o, temp5, temp7, temp8);
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jint temp9 = (jint)((func_mindustry_world_blocks_payloads_Payload_dump_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_dump_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp9 == 0) goto label_4;
	}
	{
	LINE_NUMBER(249);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload = (jref) (jobject(nullptr));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_x_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp1 = temp0 - (frame[1].f);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_y_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp3 = temp2 - (frame[2].f);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_rotation_R_float, sp[1].o))(ctx, sp[1].o);
	((func_mindustry_world_blocks_payloads_Payload_set_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_set_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, temp3, temp4);
	}
label_6:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_hasArrived_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:hasArrived", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isZero_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_isZero_float_R_boolean])(ctx, sp[0].o, (jfloat(1,000000e-02f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawPayload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:drawPayload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(261);
	((func_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload])(ctx, (frame[0].o));
	LINE_NUMBER(263);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.0f)));
	LINE_NUMBER(264);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	((func_mindustry_world_blocks_payloads_Payload_draw) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_draw, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(266);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:sense", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[2].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_DCONST(1);
	popStackFrame(ctx);
	INST_DRETURN();
label_1:;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_3;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_BuildPayload, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
	INST_DCONST(1);
	popStackFrame(ctx);
	INST_DRETURN();
label_3:;
	{
	LINE_NUMBER(272);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(277);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(279);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(280);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(281);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	SM_mindustry_world_blocks_payloads_Payload_write_mindustry_world_blocks_payloads_Payload_arc_util_io_Writes(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(287);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payRotation = temp2;
	LINE_NUMBER(291);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_world_blocks_payloads_Payload_read_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payload = (jref) sp[1].o;
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild:lambda$onControlSelect$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field payload
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild[] {
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
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double,
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
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
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
	(void *) M_mindustry_gen_Building_version_R_byte,
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
	(void *) M_mindustry_gen_Building_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_blends_int_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_boolean_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveOutPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_dumpPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_hasArrived_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload,
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
};

static FieldMetadata fields[] {
	{ "payload", &class_mindustry_world_blocks_payloads_Payload, offsetof(mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild, F_payload), "Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "payVector", &class_arc_math_geom_Vec2, offsetof(mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild, F_payVector), "Larc/math/geom/Vec2;", 1 },
	{ "payRotation", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild, F_payRotation), "F", 1 },
	{ "carried", &class_boolean, offsetof(mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild, F_carried), "Z", 1 },
	{ "this$0", &class_mindustry_world_blocks_payloads_PayloadBlock, offsetof(mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild, F_this$0), "Lmindustry/world/blocks/payloads/PayloadBlock;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_mindustry_world_blocks_payloads_PayloadBlock, 0, "(Lmindustry/world/blocks/payloads/PayloadBlock;)V", 1 },
	{ "acceptUnitPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "canControlSelect", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_canControlSelect_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_canControlSelect_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "onControlSelect", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onControlSelect_mindustry_gen_Unit, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onControlSelect_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "acceptPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "handlePayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V", 1 },
	{ "getPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_getPayload_R_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_getPayload_R_mindustry_world_blocks_payloads_Payload, "()Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "pickedUp", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_pickedUp, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_pickedUp, "()V", 1 },
	{ "drawTeamTop", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawTeamTop, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawTeamTop, "()V", 1 },
	{ "takePayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_takePayload_R_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_takePayload_R_mindustry_world_blocks_payloads_Payload, "()Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "onRemoved", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onRemoved, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onRemoved, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updateTile, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updateTile, "()V", 1 },
	{ "onDestroyed", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onDestroyed, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onDestroyed, "()V", 1 },
	{ "blends", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_blends_int_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_blends_int_R_boolean, "(I)Z", 1 },
	{ "updatePayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload, "()V", 1 },
	{ "moveInPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_R_boolean, "()Z", 1 },
	{ "moveInPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_boolean_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_boolean_R_boolean, "(Z)Z", 1 },
	{ "moveOutPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveOutPayload, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveOutPayload, "()V", 1 },
	{ "dumpPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_dumpPayload, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_dumpPayload, "()V", 1 },
	{ "hasArrived", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_hasArrived_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_hasArrived_R_boolean, "()Z", 1 },
	{ "drawPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawPayload, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawPayload, "()V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_sense_mindustry_ctype_Content_R_double, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$onControlSelect$0", (intptr_t) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload, "(Lmindustry/world/blocks/payloads/Payload;)V", 4098 },
};

Class class_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/payloads/PayloadBlock$PayloadBlockBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadBlock,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 320,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild = registerClass(&class_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild);

}

