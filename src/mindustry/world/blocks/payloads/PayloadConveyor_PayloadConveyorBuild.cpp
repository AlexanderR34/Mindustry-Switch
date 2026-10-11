#include "mindustry/world/blocks/payloads/PayloadConveyor_PayloadConveyorBuild.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/world/blocks/payloads/PayloadConveyor.h"
#include "mindustry/world/blocks/payloads/PayloadConveyor_PayloadConveyorBuild_invoke_arc_func_Cons_1.h"
#include "mindustry/gen/Physicsc.h"
#include "arc/util/Tmp.h"
#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/Interp.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "arc/util/io/Reads.h"
#include "arc/math/geom/Intersector.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/world/blocks/payloads/PayloadBlock.h"
#include "mindustry/game/Team.h"
#include "mindustry/world/blocks/payloads/PayloadConveyor_PayloadConveyorBuild.h"
#include "arc/util/io/Writes.h"

extern "C" {

static inline mindustry_world_blocks_payloads_PayloadConveyor* getPayloadConveyor(jobject self) {
	if (!self) return nullptr;
	auto pb = (mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild*)self;
	if (pb->F_this$0) return (mindustry_world_blocks_payloads_PayloadConveyor*)pb->F_this$0;
	if (((mindustry_gen_Building*)self)->F_block) {
		pb->F_this$0 = (jref)((mindustry_gen_Building*)self)->F_block;
		return (mindustry_world_blocks_payloads_PayloadConveyor*)pb->F_this$0;
	}
	return nullptr;
}


void mark_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) object;
	if (self->F_item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_item)->clazz)->markFunction)((jobject) self->F_item, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_mindustry_world_blocks_payloads_PayloadConveyor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(82);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_step = (jint(-1));
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_stepAccepted = (jint(-1));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_canControlSelect_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:canControlSelect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowedInPayloads) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_spawnedByCore) != 0) goto label_1;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize) / (jfloat(8.0f));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[0].o))->F_payloadLimit), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onControlSelect_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:onControlSelect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_takePayload_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:takePayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	frame[1].o = sp[0].o;
	LINE_NUMBER(97);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item = (jref) (jobject(nullptr));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onProximityUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:onProximityUpdate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	auto pConveyor = getPayloadConveyor(self);
	LINE_NUMBER(103);
	M_mindustry_gen_Building_onProximityUpdate(ctx, (frame[0].o));
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	jint temp0 = (jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)getPayloadConveyor(frame[0].o);
	if (!sp[1].o) {
		popStackFrame(ctx);
		return;
	}
	jint temp1 = temp0 * ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) / (jint(2))) + (jint(1)));
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	jint temp2 = (jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)getPayloadConveyor(frame[0].o);
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_nearby_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_nearby_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp1, (temp2 * ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) / (jint(2))) + (jint(1)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(107);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)getPayloadConveyor(frame[0].o);
	if (temp0 != ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(109);
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_tileX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_tileX_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	jint temp1 = (jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)getPayloadConveyor(frame[0].o);
	jint temp2 = temp0 + (temp1 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	jint temp3 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[1].o));
	if (temp2 != temp3) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_tileY_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	jint temp1 = (jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)getPayloadConveyor(frame[0].o);
	jint temp2 = temp0 + (temp1 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	jint temp3 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[1].o));
	if (temp2 == temp3) goto label_6;
	}
label_4:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)getPayloadConveyor(frame[0].o);
	if (temp0 <= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	if ((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) % (jint(2))) != 0) goto label_7;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(114);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, temp0);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp2 = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8);
	sp[0].o = (jobject)getPayloadConveyor(frame[0].o);
	if ((floatCompare(temp1, ((jfloat((temp2 - (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8))))) / (jfloat(2))), 1)) > 0) goto label_3;
	}
	goto label_6;
label_7:;
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(115);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, temp0);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp2 = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8);
	sp[0].o = (jobject)getPayloadConveyor(frame[0].o);
	if ((floatCompare(temp1, ((jfloat((temp2 - (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8))))) / (jfloat(2))), 1)) > 0) goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(117);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next = (jref) (frame[1].o);
	goto label_10;
	}
label_3:;
	{
	LINE_NUMBER(119);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next = (jref) (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(121);
	((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_checkBlocked) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_checkBlocked])(ctx, (frame[0].o));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_checkBlocked(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:checkBlocked", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	jint temp0 = jint(1);
	sp[0].o = (jobject)getPayloadConveyor(frame[0].o);
	if (!sp[0].o) {
		popStackFrame(ctx);
		return;
	}
	frame[1].i = (temp0 + (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	jint temp1 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[1].i);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[1].i)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPayload) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_acceptsPayload) == 0) goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	jint temp0 = (jint)((func_mindustry_gen_Building_payloadCheck_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_payloadCheck_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK(sp[0].o))->F_blocked = sp[1].i;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_getPayload_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:getPayload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:updateTile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	((func_mindustry_world_blocks_payloads_Payload_update_mindustry_gen_Unit_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_update_mindustry_gen_Unit_mindustry_gen_Building, sp[0].o))(ctx, sp[0].o, (jobject(nullptr)), (frame[0].o));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_Payload_isDead_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_isDead_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(140);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(144);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_5;
	}
	{
	LINE_NUMBER(145);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastInterp = ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_curInterp);
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK(sp[0].o))->F_curInterp = temp0;
	LINE_NUMBER(148);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastInterp), ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_curInterp), -1)) <= 0) goto label_9;
	}
	{
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastInterp = (jfloat(0));
	}
label_9:;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_time_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_time_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK(sp[0].o))->F_progress = (fmodf(temp0, ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[1].o))->F_moveTime)));
	}
label_5:;
	{
	LINE_NUMBER(152);
	((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updatePayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updatePayload])(ctx, (frame[0].o));
	LINE_NUMBER(154);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_11;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_progress;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_world_blocks_payloads_PayloadBlock_pushOutput_mindustry_world_blocks_payloads_Payload_float(ctx, sp[0].o, (temp0 / ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[1].o))->F_moveTime)));
	}
label_12:;
	{
	LINE_NUMBER(161);
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_curStep_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_curStep_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(162);
	if ((frame[1].i) <= ((jint)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_step)) goto label_15;
	}
	{
	LINE_NUMBER(163);
	if (((jint)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_step) == (jint(-1))) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(164);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_step = (frame[1].i);
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o == nullptr) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(167);
	if ((frame[2].i) == 0) goto label_24;
	}
	{
	if (((jint)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_stepAccepted) == (frame[1].i)) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(168);
	((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_checkBlocked) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_checkBlocked])(ctx, (frame[0].o));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	((func_mindustry_gen_Building_updateTile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_updateTile])(ctx, sp[0].o);
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	((func_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(177);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item = (jref) (jobject(nullptr));
	LINE_NUMBER(178);
	((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moved) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moved])(ctx, (frame[0].o));
	goto label_24;
	}
label_27:;
	{
	LINE_NUMBER(180);
	if (((jint)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blocked) != 0) goto label_24;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_Payload_dump_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_dump_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(183);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item = (jref) (jobject(nullptr));
	LINE_NUMBER(184);
	((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moved) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moved])(ctx, (frame[0].o));
	LINE_NUMBER(185);
	SM_mindustry_core_NetServer_syncBuilding_mindustry_gen_Building(ctx, (frame[0].o));
	}
label_24:;
	{
	LINE_NUMBER(190);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(191);
	((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moveFailed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moveFailed])(ctx, (frame[0].o));
	}
label_15:;
	LINE_NUMBER(194);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moveFailed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:moveFailed", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(198);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:moved", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(202);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_drawBottom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:drawBottom", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:onDestroyed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	((func_mindustry_world_blocks_payloads_Payload_destroyed) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_destroyed, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(211);
	M_mindustry_gen_Building_onDestroyed(ctx, (frame[0].o));
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:draw", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(216);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(218);
	frame[1].f = (jfloat(0.8f));
	LINE_NUMBER(220);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp1 - (jfloat(0.5f))));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((temp0 - (temp2 * (jfloat(2)))) / (frame[1].f)), (jfloat(0)));
	frame[2].f = temp3;
	LINE_NUMBER(221);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (frame[2].f));
	LINE_NUMBER(223);
	jint temp4 = 8;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[3].f = (jfloat((temp4 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))));
	LINE_NUMBER(224);
	jfloat temp5 = frame[3].f;
	jfloat temp6 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float])(ctx, (frame[0].o));
	frame[4].f = (temp5 * temp6);
	jfloat temp7 = frame[3].f;
	jfloat temp8 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float])(ctx, (frame[0].o));
	frame[5].f = (temp7 * (temp8 - (jfloat(1))));
	jfloat temp9 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_rotdeg_R_float])(ctx, (frame[0].o));
	frame[6].f = temp9;
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	sp[1].o = (jobject)((func_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_r2;
	sp[2].o = (jobject)((func_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect])(ctx, sp[2].o, (frame[4].f), (jfloat(0)));
	sp[3].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[3].o))->F_topRegion;
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_clipRegion_arc_math_geom_Rect_arc_math_geom_Rect_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_clipRegion_arc_math_geom_Rect_arc_math_geom_Rect_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(228);
	jfloat temp10 = frame[3].f;
	jfloat temp11 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[7].o)))->F_width));
	jfloat temp12 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[7].o));
	frame[8].f = ((temp10 - (temp11 * temp12)) * (jfloat(0.5f)));
	LINE_NUMBER(229);
	jfloat temp13 = frame[3].f;
	jfloat temp14 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[7].o)))->F_height));
	jfloat temp15 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[7].o));
	frame[9].f = ((temp13 - (temp14 * temp15)) * (jfloat(0.5f)));
	LINE_NUMBER(230);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[8].f), (frame[9].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(231);
	sp[0].o = frame[7].o;
	jfloat temp16 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp17 = temp16 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp18 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp17, (temp18 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (frame[6].f));
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	sp[1].o = (jobject)((func_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_r2;
	sp[2].o = (jobject)((func_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect])(ctx, sp[2].o, (frame[5].f), (jfloat(0)));
	sp[3].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[3].o))->F_topRegion;
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_clipRegion_arc_math_geom_Rect_arc_math_geom_Rect_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_clipRegion_arc_math_geom_Rect_arc_math_geom_Rect_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(235);
	jfloat temp19 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[7].o)))->F_width));
	jfloat temp20 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[7].o));
	frame[10].f = (((temp19 * temp20) - (frame[3].f)) * (jfloat(0.5f)));
	LINE_NUMBER(236);
	jfloat temp21 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[7].o)))->F_height));
	jfloat temp22 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[7].o));
	frame[11].f = (((temp21 * temp22) - (frame[3].f)) * (jfloat(0.5f)));
	LINE_NUMBER(237);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].f), (frame[11].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(238);
	sp[0].o = frame[7].o;
	jfloat temp23 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp24 = temp23 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp25 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp24, (temp25 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (frame[6].f));
	LINE_NUMBER(240);
	frame[12].i = (jint(0));
	}
label_19:;
	{
	if ((frame[12].i) >= (jint(4))) goto label_20;
	}
	{
	LINE_NUMBER(241);
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_blends_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_blends_int_R_boolean])(ctx, (frame[0].o), (frame[12].i));
	if (temp0 == 0) goto label_22;
	}
	{
	if ((frame[12].i) == ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)) goto label_22;
	}
	{
	LINE_NUMBER(242);
	jfloat temp0 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5In;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, temp1);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 - temp2));
	LINE_NUMBER(244);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].f), (frame[11].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat((((frame[12].i) * (90)) + (180)))));
	LINE_NUMBER(245);
	sp[0].o = frame[7].o;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp4 = temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp4, (temp5 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (jfloat((((frame[12].i) * (90)) + (180)))));
	}
label_22:;
	{
	LINE_NUMBER(240);
	INST_IINC(12, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(249);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(251);
	frame[12].i = (jint(0));
	}
label_27:;
	{
	if ((frame[12].i) >= (jint(4))) goto label_28;
	}
	{
	LINE_NUMBER(252);
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_blends_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_blends_int_R_boolean])(ctx, (frame[0].o), (frame[12].i));
	if (temp0 != 0) goto label_30;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[0].o))->F_edgeRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(((frame[12].i) * (90)))));
	}
label_30:;
	{
	LINE_NUMBER(251);
	INST_IINC(12, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(257);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.0f)));
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	((func_mindustry_world_blocks_payloads_Payload_draw) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_draw, sp[0].o))(ctx, sp[0].o);
	}
label_33:;
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_payloadDraw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:payloadDraw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_time_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:time", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_unitOn_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:unitOn", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[0].o))->F_pushUnits) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastInterp), (jfloat(0)), -1)) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(278);
	jfloat temp0 = ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_curInterp) - ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastInterp);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[2].f = ((temp0 * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)))) * (jfloat(8.0f)));
	LINE_NUMBER(279);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_rotdeg_R_float])(ctx, (frame[0].o));
	jfloat temp2 = frame[2].f;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (temp2 * ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[1].o))->F_moveForce)));
	jfloat temp3 = jfloat(1);
	jfloat temp4 = (jfloat)((func_mindustry_gen_Unit_mass_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_mass_R_float])(ctx, (frame[1].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, (jfloat(201.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp3 / temp5));
	LINE_NUMBER(280);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp6 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_gen_Unit_move_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_move_float_float])(ctx, sp[0].o, temp6, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:acceptPayload", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[1].o))->F_payloadLimit;
	LINE_NUMBER(286);
	jint temp1 = (jint)((func_mindustry_world_blocks_payloads_Payload_fits_float_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_fits_float_R_boolean, sp[0].o))(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_1;
	}
	{
	if ((frame[1].o) == (frame[0].o)) goto label_3;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_progress), (jfloat(5.0f)), 1)) > 0) goto label_1;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(285);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:handlePayload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(292);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[2].o);
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_curStep_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_curStep_R_int])(ctx, (frame[0].o));
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK(sp[0].o))->F_stepAccepted = temp0;
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != (frame[0].o)) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_rotdeg_R_float])(ctx, (frame[0].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[0].o));
	sp[0].f = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK(sp[0].o))->F_itemRotation = sp[1].f;
	LINE_NUMBER(295);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_animation = (jfloat(0));
	LINE_NUMBER(297);
	((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updatePayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updatePayload])(ctx, (frame[0].o));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:sense", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
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
	LINE_NUMBER(303);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
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
	LINE_NUMBER(304);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onRemoved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:onRemoved", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	M_mindustry_gen_Building_onRemoved(ctx, (frame[0].o));
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_Payload_dump_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_dump_R_boolean, sp[0].o))(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(311);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(315);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(317);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	LINE_NUMBER(318);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_itemRotation));
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	SM_mindustry_world_blocks_payloads_Payload_write_mindustry_world_blocks_payloads_Payload_arc_util_io_Writes(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(324);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK(sp[0].o))->F_itemRotation = temp1;
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_world_blocks_payloads_Payload_read_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK(sp[0].o))->F_item = (jref) sp[1].o;
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updatePayload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:updatePayload", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(334);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_animation;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_animation), (jfloat(0.8f)), (jfloat(0.15f)));
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK(sp[0].o))->F_animation = temp0;
	}
label_3:;
	{
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_animation;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK(sp[0].o))->F_animation = temp2;
	LINE_NUMBER(340);
	frame[1].f = ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_animation);
	LINE_NUMBER(341);
	jfloat temp3 = (jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_itemRotation;
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_rotdeg_R_float])(ctx, (frame[0].o));
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_slerp_float_float_float_R_float(ctx, temp3, temp4, (frame[1].f));
	frame[2].f = temp5;
	LINE_NUMBER(343);
	if ((floatCompare((frame[1].f), (jfloat(0.5f)), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(344);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_itemRotation) + (jfloat(180.0f));
	jfloat temp1 = ((jfloat(0.5f)) - (frame[1].f)) * (jfloat(8.0f));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (temp1 * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size)))));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(346);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_rotdeg_R_float])(ctx, (frame[0].o));
	jfloat temp1 = ((frame[1].f) - (jfloat(0.5f))) * (jfloat(8.0f));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (temp1 * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size)))));
	}
label_10:;
	{
	LINE_NUMBER(349);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[3].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[4].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(351);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item;
	((func_mindustry_world_blocks_payloads_Payload_set_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_set_float_float_float, sp[0].o))(ctx, sp[0].o, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + (frame[3].f)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + (frame[4].f)), (frame[2].f));
	}
label_1:;
	LINE_NUMBER(353);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_blends_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:blends", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(356);
	if ((frame[1].i) != ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)) goto label_1;
	}
	{
	LINE_NUMBER(357);
	if (((jint)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blocked) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(359);
	jint temp0 = (jint)SM_mindustry_world_blocks_payloads_PayloadBlock_blends_mindustry_gen_Building_int_R_boolean(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_clipRegion_arc_math_geom_Rect_arc_math_geom_Rect_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:clipRegion", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(363);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r3;
	frame[4].o = sp[0].o;
	LINE_NUMBER(365);
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectRectangles_arc_math_geom_Rect_arc_math_geom_Rect_arc_math_geom_Rect_R_boolean(ctx, (frame[1].o), (frame[2].o), (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(367);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(368);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(369);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[6].o)))->F_scale = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_scale);
	LINE_NUMBER(371);
	if ((frame[5].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(372);
	frame[7].f = (((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_u2) - ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_u));
	LINE_NUMBER(373);
	frame[8].f = (((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_v2) - ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_v));
	LINE_NUMBER(374);
	frame[9].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_u);
	frame[10].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_v);
	LINE_NUMBER(375);
	frame[11].f = ((((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_x) - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_x)) / ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_width)) * (frame[7].f)) + (frame[9].f));
	LINE_NUMBER(376);
	frame[12].f = ((((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_y) - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_y)) / ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_height)) * (frame[8].f)) + (frame[10].f));
	LINE_NUMBER(377);
	frame[13].f = ((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_width) / ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_width)) * (frame[7].f));
	frame[14].f = ((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_height) / ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_height)) * (frame[8].f));
	LINE_NUMBER(379);
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, (frame[6].o), (frame[11].f), (frame[12].f), ((frame[11].f) + (frame[13].f)), ((frame[12].f) + (frame[14].f)));
	LINE_NUMBER(380);
	goto label_17;
	}
label_6:;
	{
	LINE_NUMBER(381);
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, (frame[6].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	}
label_17:;
	{
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_curStep_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:curStep", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_time_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_time_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return (jint((temp0 / ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[0].o))->F_moveTime))));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:fract", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[0].o))->F_interp;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_progress;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, (temp0 / ((jfloat)((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[1].o))->F_moveTime)));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild:lambda$onControlSelect$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	((mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field item
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

	{ // Field next
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild[] {
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
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_draw,
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
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onControlSelect_mindustry_gen_Unit,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moveFailed,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moved,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_drawBottom,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_time_R_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updatePayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_blends_int_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_clipRegion_arc_math_geom_Rect_arc_math_geom_Rect_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_curStep_R_int,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload,
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
};

static FieldMetadata fields[] {
	{ "item", &class_mindustry_world_blocks_payloads_Payload, offsetof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild, F_item), "Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "progress", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild, F_progress), "F", 1 },
	{ "itemRotation", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild, F_itemRotation), "F", 1 },
	{ "animation", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild, F_animation), "F", 1 },
	{ "curInterp", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild, F_curInterp), "F", 1 },
	{ "lastInterp", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild, F_lastInterp), "F", 1 },
	{ "next", &class_mindustry_gen_Building, offsetof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild, F_next), "Lmindustry/gen/Building;", 1 },
	{ "blocked", &class_boolean, offsetof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild, F_blocked), "Z", 1 },
	{ "step", &class_int, offsetof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild, F_step), "I", 1 },
	{ "stepAccepted", &class_int, offsetof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild, F_stepAccepted), "I", 1 },
	{ "this$0", &class_mindustry_world_blocks_payloads_PayloadConveyor, offsetof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild, F_this$0), "Lmindustry/world/blocks/payloads/PayloadConveyor;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_mindustry_world_blocks_payloads_PayloadConveyor, 0, "(Lmindustry/world/blocks/payloads/PayloadConveyor;)V", 1 },
	{ "canControlSelect", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_canControlSelect_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_canControlSelect_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "onControlSelect", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onControlSelect_mindustry_gen_Unit, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onControlSelect_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "takePayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_takePayload_R_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_takePayload_R_mindustry_world_blocks_payloads_Payload, "()Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "onProximityUpdate", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onProximityUpdate, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onProximityUpdate, "()V", 1 },
	{ "checkBlocked", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_checkBlocked, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_checkBlocked, "()V", 0 },
	{ "getPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_getPayload_R_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_getPayload_R_mindustry_world_blocks_payloads_Payload, "()Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updateTile, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updateTile, "()V", 1 },
	{ "moveFailed", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moveFailed, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moveFailed, "()V", 1 },
	{ "moved", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moved, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_moved, "()V", 1 },
	{ "drawBottom", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_drawBottom, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_drawBottom, "()V", 1 },
	{ "onDestroyed", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onDestroyed, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onDestroyed, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_draw, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_draw, "()V", 1 },
	{ "payloadDraw", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_payloadDraw, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_payloadDraw, "()V", 1 },
	{ "time", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_time_R_float, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_time_R_float, "()F", 1 },
	{ "unitOn", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_unitOn_mindustry_gen_Unit, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_unitOn_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "acceptPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "handlePayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_sense_mindustry_ctype_Content_R_double, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1 },
	{ "onRemoved", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onRemoved, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_onRemoved, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "updatePayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updatePayload, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_updatePayload, "()V", 1 },
	{ "blends", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_blends_int_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_blends_int_R_boolean, "(I)Z", 4 },
	{ "clipRegion", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_clipRegion_arc_math_geom_Rect_arc_math_geom_Rect_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_clipRegion_arc_math_geom_Rect_arc_math_geom_Rect_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, "(Larc/math/geom/Rect;Larc/math/geom/Rect;Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;", 4 },
	{ "curStep", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_curStep_R_int, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_curStep_R_int, "()I", 1 },
	{ "fract", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_fract_R_float, "()F", 1 },
	{ "lambda$onControlSelect$0", (intptr_t) M_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload, "(Lmindustry/world/blocks/payloads/Payload;)V", 4098 },
};

Class class_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/payloads/PayloadConveyor$PayloadConveyorBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadConveyor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 321,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild = registerClass(&class_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild);

}

