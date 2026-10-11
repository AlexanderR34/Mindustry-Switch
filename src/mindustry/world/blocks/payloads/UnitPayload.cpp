#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "arc/Events.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/world/blocks/payloads/UnitPayload_invoke_arc_func_Boolf_1.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/Interp_ExpOut.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/func/Boolf.h"
#include "mindustry/game/EventType_UnitUnloadEvent.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Icon.h"
#include "arc/math/Interp.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/entities/EntityCollisions_SolidPred.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/entities/Units.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/util/io/Writes.h"

extern "C" {

jfloat SF_mindustry_world_blocks_payloads_UnitPayload_overlayDuration;

void mark_mindustry_world_blocks_payloads_UnitPayload(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_payloads_UnitPayload *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_overlayRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overlayRegion)->clazz)->markFunction)((jobject) self->F_overlayRegion, mark, depth + 1);
}

void clinit_mindustry_world_blocks_payloads_UnitPayload(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_world_blocks_payloads_UnitPayload_overlayDuration = jfloat(40.0f);
}

void init_mindustry_world_blocks_payloads_UnitPayload_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_UnitPayload(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_overlayTime = (jfloat(0));
	LINE_NUMBER(30);
	((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:showOverlay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_overlayRegion = (jref) (frame[1].o);
	LINE_NUMBER(36);
	((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_overlayTime = (jfloat(1));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:showOverlay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[1].o));
	((func_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_UnitPayload_contentEquals_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:contentEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[2].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	if (sp[0].o != sp[1].o) goto label_1;
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

void M_mindustry_world_blocks_payloads_UnitPayload_update_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_type_UnitType_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_UnitPayload_content_R_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:content", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_UnitPayload_requirements_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:requirements", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_UnitPayload_buildTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:buildTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp0 = (jfloat)((func_mindustry_type_UnitType_getBuildTime_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_getBuildTime_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_UnitPayload_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(73);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_classId_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_classId_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_write_arc_util_io_Writes])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_UnitPayload_set_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = (frame[3].f);
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_UnitPayload_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_UnitPayload_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_UnitPayload_rotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:rotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_UnitPayload_size_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_hitSize);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_UnitPayload_dump_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:dump", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jint temp0 = (jint)SM_mindustry_entities_Units_canCreate_mindustry_game_Team_mindustry_type_UnitType_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(109);
	((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_overlayTime = (jfloat(1));
	LINE_NUMBER(110);
	((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_overlayRegion = (jref) (jobject(nullptr));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_solidity_R_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_solidity_R_mindustry_entities_EntityCollisions$SolidPred])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(116);
	if ((frame[1].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(117);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_rotation), (jfloat(1)));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x)));
	frame[2].i = temp1;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)));
	frame[3].i = temp3;
	LINE_NUMBER(122);
	jint temp4 = (jint)((func_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_entities_EntityCollisions$SolidPred, INDEX_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	if (temp4 == 0) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_physicSize_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_physicSize_R_float])(ctx, sp[0].o);
	jfloat temp3 = temp2 * (jfloat(1.05f));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_UnitPayload_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_payloads_UnitPayload_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_UnitPayload_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	jint temp4 = (jint)SM_mindustry_entities_Units_count_float_float_float_arc_func_Boolf_R_int(ctx, temp0, temp1, temp3, sp[0].o);
	if (temp4 <= 0) goto label_12;
	}
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(131);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.5f)));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.5f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, sp[0].o);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_unloaded) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_unloaded])(ctx, sp[0].o);
	LINE_NUMBER(137);
	clinit_mindustry_game_EventType$UnitUnloadEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitUnloadEvent);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	init_mindustry_game_EventType$UnitUnloadEvent_mindustry_gen_Unit(ctx, sp[0].o, sp[1].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_entities_Units_notifyUnitSpawn_mindustry_gen_Unit(ctx, sp[0].o);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_UnitPayload_drawShadow_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:drawShadow", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_UnitPayload_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[1].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = (jfloat(0));
	LINE_NUMBER(158);
	SM_arc_graphics_g2d_Draw_scl_float_float(ctx, (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_type_UnitType_draw_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_draw_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = (frame[1].f);
	LINE_NUMBER(163);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_overlayTime), (jfloat(0)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(164);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(165);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(61.0f)));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_overlayRegion;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_warning;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK(sp[-1].o))->F_overlayRegion;
label_12:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(167);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_scarlet;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(168);
	jfloat temp0 = jfloat(0.8f);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_exp5Out;
	jfloat temp1 = (jfloat)((func_arc_math_Interp$ExpOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$ExpOut_apply_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_overlayTime));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 * temp1));
	LINE_NUMBER(170);
	frame[4].f = (jfloat(8.0f));
	LINE_NUMBER(171);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp2, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y), (frame[4].f), (frame[4].f));
	LINE_NUMBER(173);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_overlayTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(40.0f)))), (jfloat(0)));
	((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK(sp[0].o))->F_overlayTime = temp3;
	LINE_NUMBER(176);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	}
label_7:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_UnitPayload_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_UnitPayload_lambda$dump$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/UnitPayload:lambda$dump$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jint temp0 = (jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (temp0 != ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep)) goto label_1;
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

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_payloads_UnitPayload;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field overlayRegion
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_world_blocks_payloads_UnitPayload[] {
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
	(void *) M_mindustry_world_blocks_payloads_Payload_getX_R_float,
	(void *) M_mindustry_world_blocks_payloads_Payload_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_set_float_float_float,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_draw,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_drawShadow_float,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_size_R_float,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_x_R_float,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_y_R_float,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_requirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_buildTime_R_float,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_contentEquals_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_update_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_payloads_Payload_isDead_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_dump_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_Payload_fits_float_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_rotation_R_float,
	(void *) M_mindustry_world_blocks_payloads_Payload_destroyed,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_write_arc_util_io_Writes,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_icon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_content_R_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_world_blocks_payloads_Payload_remove,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_scene_style_TextureRegionDrawable,
	(void *) M_mindustry_world_blocks_payloads_UnitPayload_lambda$dump$0_mindustry_gen_Unit_R_boolean,
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
	{ "set", "(FFF)V" },
	{ "draw", "()V" },
	{ "drawShadow", "(F)V" },
	{ "size", "()F" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "requirements", "()[Lmindustry/type/ItemStack;" },
	{ "buildTime", "()F" },
	{ "contentEquals", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "update", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "isDead", "()Z" },
	{ "dump", "()Z" },
	{ "fits", "(F)Z" },
	{ "rotation", "()F" },
	{ "destroyed", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "content", "()Lmindustry/ctype/UnlockableContent;" },
	{ "remove", "()V" },
	{ "showOverlay", "(Larc/graphics/g2d/TextureRegion;)V" },
	{ "showOverlay", "(Larc/scene/style/TextureRegionDrawable;)V" },
	{ "lambda$dump$0", "(Lmindustry/gen/Unit;)Z" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_payloads_Payload, };

static FieldMetadata fields[] {
	{ "overlayDuration", &class_float, (intptr_t) &SF_mindustry_world_blocks_payloads_UnitPayload_overlayDuration, "F", 25 },
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_world_blocks_payloads_UnitPayload, F_unit), "Lmindustry/gen/Unit;", 1 },
	{ "overlayTime", &class_float, offsetof(mindustry_world_blocks_payloads_UnitPayload, F_overlayTime), "F", 1 },
	{ "overlayRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_payloads_UnitPayload, F_overlayRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_payloads_UnitPayload_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 1 },
	{ "showOverlay", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_graphics_g2d_TextureRegion, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "showOverlay", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_scene_style_TextureRegionDrawable, VTABLE_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_scene_style_TextureRegionDrawable, "(Larc/scene/style/TextureRegionDrawable;)V", 1 },
	{ "contentEquals", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_contentEquals_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_world_blocks_payloads_UnitPayload_contentEquals_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "update", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_update_mindustry_gen_Unit_mindustry_gen_Building, VTABLE_mindustry_world_blocks_payloads_UnitPayload_update_mindustry_gen_Unit_mindustry_gen_Building, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 1 },
	{ "content", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_content_R_mindustry_ctype_UnlockableContent, VTABLE_mindustry_world_blocks_payloads_UnitPayload_content_R_mindustry_ctype_UnlockableContent, "()Lmindustry/ctype/UnlockableContent;", 1 },
	{ "requirements", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_requirements_R_Array1_mindustry_type_ItemStack, VTABLE_mindustry_world_blocks_payloads_UnitPayload_requirements_R_Array1_mindustry_type_ItemStack, "()[Lmindustry/type/ItemStack;", 1 },
	{ "buildTime", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_buildTime_R_float, VTABLE_mindustry_world_blocks_payloads_UnitPayload_buildTime_R_float, "()F", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_payloads_UnitPayload_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "set", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_set_float_float_float, VTABLE_mindustry_world_blocks_payloads_UnitPayload_set_float_float_float, "(FFF)V", 1 },
	{ "x", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_x_R_float, VTABLE_mindustry_world_blocks_payloads_UnitPayload_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_y_R_float, VTABLE_mindustry_world_blocks_payloads_UnitPayload_y_R_float, "()F", 1 },
	{ "rotation", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_rotation_R_float, VTABLE_mindustry_world_blocks_payloads_UnitPayload_rotation_R_float, "()F", 1 },
	{ "size", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_size_R_float, VTABLE_mindustry_world_blocks_payloads_UnitPayload_size_R_float, "()F", 1 },
	{ "dump", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_dump_R_boolean, VTABLE_mindustry_world_blocks_payloads_UnitPayload_dump_R_boolean, "()Z", 1 },
	{ "drawShadow", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_drawShadow_float, VTABLE_mindustry_world_blocks_payloads_UnitPayload_drawShadow_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_draw, VTABLE_mindustry_world_blocks_payloads_UnitPayload_draw, "()V", 1 },
	{ "icon", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_icon_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_payloads_UnitPayload_icon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "lambda$dump$0", (intptr_t) M_mindustry_world_blocks_payloads_UnitPayload_lambda$dump$0_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_payloads_UnitPayload_lambda$dump$0_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 4098 },
};

Class class_mindustry_world_blocks_payloads_UnitPayload{
		.nativeName = (intptr_t) "mindustry/world/blocks/payloads/UnitPayload",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_payloads_UnitPayload),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_payloads_UnitPayload,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_payloads_UnitPayload,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_payloads_UnitPayload,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_payloads_UnitPayload = registerClass(&class_mindustry_world_blocks_payloads_UnitPayload);

}
