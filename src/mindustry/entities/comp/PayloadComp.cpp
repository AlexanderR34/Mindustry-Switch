#include "mindustry/entities/comp/PayloadComp.h"
#include "arc/Events.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/entities/comp/PayloadComp_invoke_arc_func_Boolf_1.h"
#include "mindustry/entities/comp/PayloadComp_invoke_arc_func_Boolf_0.h"
#include "mindustry/logic/Settable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/game/EventType_PickupEvent.h"
#include "mindustry/content/Fx.h"
#include "mindustry/entities/comp/PayloadComp_invoke_arc_func_Boolf_2.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/func/Boolf.h"
#include "mindustry/gen/Shieldc.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/entities/comp/PayloadComp_invoke_arc_func_Cons_0.h"
#include "mindustry/gen/Weaponsc.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/entities/Units.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/comp/PayloadComp_invoke_arc_func_Floatf_0.h"
#include "java/lang/String.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Teamc.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/scene/Group.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/game/EventType_PayloadDropEvent.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/entities/comp/PayloadComp.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/world/Build.h"

extern "C" {


void mark_mindustry_entities_comp_PayloadComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_PayloadComp *) object;
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_payloads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_payloads)->clazz)->markFunction)((jobject) self->F_payloads, mark, depth + 1);
	if (self->F_payloadPower)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_payloadPower)->clazz)->markFunction)((jobject) self->F_payloadPower, mark, depth + 1);
}

void clinit_mindustry_entities_comp_PayloadComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_PayloadComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PayloadComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_comp_PayloadComp *) NULL_CHECK(sp[0].o))->F_payloads = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PayloadComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloadPower;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloadPower;
	((func_mindustry_world_blocks_power_PowerGraph_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_clear])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_Payload, sp[0].o));
	LINE_NUMBER(41);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_6;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_BuildPayload, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloadPower;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_entities_comp_PayloadComp *) NULL_CHECK(sp[0].o))->F_payloadPower = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph = (jref) (jobject(nullptr));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloadPower;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[3].o)))->F_build;
	((func_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	LINE_NUMBER(48);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloadPower;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloadPower;
	((func_mindustry_world_blocks_power_PowerGraph_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_update])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_Payload, sp[0].o));
	LINE_NUMBER(55);
	((func_mindustry_world_blocks_payloads_Payload_set_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_set_float_float_float, (frame[2].o)))(ctx, (frame[2].o), ((jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(56);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_world_blocks_payloads_Payload_update_mindustry_gen_Unit_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_update_mindustry_gen_Unit_mindustry_gen_Building, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (jobject(nullptr)));
	LINE_NUMBER(57);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_PayloadComp_invoke_arc_func_Boolf_0(ctx);
		auto proxy = (mindustry_entities_comp_PayloadComp_invoke_arc_func_Boolf_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_PayloadComp_invoke_arc_func_Boolf_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PayloadComp_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_Payload, sp[0].o));
	LINE_NUMBER(65);
	((func_mindustry_world_blocks_payloads_Payload_remove) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_remove, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(66);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PayloadComp_destroy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:destroy", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitPayloadsExplode) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_PayloadComp_invoke_arc_func_Cons_0(ctx);
		auto proxy = (mindustry_entities_comp_PayloadComp_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_PayloadComp_invoke_arc_func_Cons_0);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_PayloadComp_payloadUsed_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:payloadUsed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_PayloadComp_invoke_arc_func_Floatf_0(ctx);
		auto proxy = (mindustry_entities_comp_PayloadComp_invoke_arc_func_Floatf_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_PayloadComp_invoke_arc_func_Floatf_0);
		sp[1].o = (jobject) proxy;
	}
	jfloat temp0 = (jfloat)((func_arc_struct_Seq_sumf_arc_func_Floatf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sumf_arc_func_Floatf_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PayloadComp_canPickup_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:canPickup", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_pickupUnits) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_PayloadComp_payloadUsed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_payloadUsed_R_float])(ctx, (frame[0].o));
	jfloat temp1 = temp0 + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize));
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(temp1, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_payloadCapacity) + (jfloat(1,000000e-03f))), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PayloadComp_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isAI_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowedInPayloads) == 0) goto label_1;
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

jbool M_mindustry_entities_comp_PayloadComp_canPickup_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:canPickup", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_PayloadComp_payloadUsed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_payloadUsed_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp1 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jfloat temp2 = temp0 + (jfloat((((temp1 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)) * (8)) * (8))));
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(temp2, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_payloadCapacity) + (jfloat(1,000000e-03f))), 1)) > 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canPickup_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_canPickup_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_mindustry_entities_comp_PayloadComp_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:canPickupPayload", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_PayloadComp_payloadUsed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_payloadUsed_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp3 = temp0 + (temp1 * temp2);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(temp3, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_payloadCapacity) + (jfloat(1,000000e-03f))), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_pickupUnits) != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_payloads_UnitPayload)) != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PayloadComp_hasPayload_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:hasPayload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
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

void M_mindustry_entities_comp_PayloadComp_addPayload_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:addPayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PayloadComp_pickup_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:pickup", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isAdded_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(101);
	((func_mindustry_gen_Unit_remove) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_remove])(ctx, (frame[1].o));
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_payloads_UnitPayload(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_UnitPayload);
	init_mindustry_world_blocks_payloads_UnitPayload_mindustry_gen_Unit(ctx, sp[1].o, (frame[1].o));
	((func_mindustry_entities_comp_PayloadComp_addPayload_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_addPayload_mindustry_world_blocks_payloads_Payload])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitPickup;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(104);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(105);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_clearRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_clearRemovedEntity_int])(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_id));
	}
label_5:;
	{
	LINE_NUMBER(107);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_payloadPickup;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Position, sp[1].o);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.9f)), (jfloat(1.1f)));
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(108);
	clinit_mindustry_game_EventType$PickupEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PickupEvent);
	sp[1].o = (jobject)((func_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	init_mindustry_game_EventType$PickupEvent_mindustry_gen_Unit_mindustry_gen_Unit(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PayloadComp_pickup_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:pickup", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	((func_mindustry_gen_Building_pickedUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pickedUp])(ctx, (frame[1].o));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, sp[0].o);
	LINE_NUMBER(114);
	((func_mindustry_gen_Building_afterPickedUp) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_afterPickedUp])(ctx, (frame[1].o));
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_payloads_BuildPayload(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_BuildPayload);
	init_mindustry_world_blocks_payloads_BuildPayload_mindustry_gen_Building(ctx, sp[1].o, (frame[1].o));
	((func_mindustry_entities_comp_PayloadComp_addPayload_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_addPayload_mindustry_world_blocks_payloads_Payload])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(116);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitPickup;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(117);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_payloadPickup;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_R_int])(ctx, sp[0].o, (checkCast(ctx, &class_arc_math_geom_Position, sp[1].o)));
	LINE_NUMBER(118);
	clinit_mindustry_game_EventType$PickupEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PickupEvent);
	sp[1].o = (jobject)((func_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	init_mindustry_game_EventType$PickupEvent_mindustry_gen_Unit_mindustry_gen_Building(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PayloadComp_dropLastPayload_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:dropLastPayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_Payload, sp[0].o));
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_mindustry_entities_comp_PayloadComp_tryDropPayload_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_tryDropPayload_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PayloadComp_tryDropPayload_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:tryDropPayload", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_mindustry_entities_comp_PayloadComp_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(137);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[1].o)));
	LINE_NUMBER(138);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[3].o)))->F_unit;
	((func_mindustry_core_NetClient_clearRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_clearRemovedEntity_int])(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_id));
	}
label_2:;
	{
	LINE_NUMBER(142);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(143);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitDrop;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((func_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(145);
	((func_mindustry_entities_comp_PayloadComp_playPayloadDropSound_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_playPayloadDropSound_mindustry_world_blocks_payloads_Payload])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(149);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_9;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_BuildPayload, (frame[1].o)));
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_mindustry_entities_comp_PayloadComp_dropBlock_mindustry_world_blocks_payloads_BuildPayload_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_dropBlock_mindustry_world_blocks_payloads_BuildPayload_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(151);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_11;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[1].o)));
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_mindustry_entities_comp_PayloadComp_dropUnit_mindustry_world_blocks_payloads_UnitPayload_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_dropUnit_mindustry_world_blocks_payloads_UnitPayload_R_boolean])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}
label_11:;
	{
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PayloadComp_canDropPayload_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:canDropPayload", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_Payload, sp[0].o));
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_mindustry_entities_comp_PayloadComp_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(163);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(165);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_5;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_BuildPayload, (frame[1].o)));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[3].o)))->F_build;
	frame[5].o = sp[0].o;
	LINE_NUMBER(167);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp0 - ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset)));
	frame[6].i = temp1;
	jfloat temp2 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp2 - ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset)));
	frame[7].i = temp3;
	LINE_NUMBER(168);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(169);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_team;
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_R_boolean(ctx, sp[0].o, sp[1].o, (frame[6].i), (frame[7].i), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_rotation), (jint(0)));
	if (temp0 == 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(170);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_13;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[1].o)));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[4].o)))->F_unit;
	frame[5].o = sp[0].o;
	LINE_NUMBER(172);
	sp[0].o = frame[5].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x)));
	jfloat temp2 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)));
	jint temp4 = (jint)((func_mindustry_gen_Unit_canPass_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canPass_int_int_R_boolean])(ctx, sp[0].o, temp1, temp3);
	if (temp4 == 0) goto label_16;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_physicSize_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_physicSize_R_float])(ctx, (frame[5].o));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_PayloadComp_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_entities_comp_PayloadComp_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_entities_comp_PayloadComp_invoke_arc_func_Boolf_1);
		sp[0].o = (jobject) proxy;
	}
	jint temp3 = (jint)SM_mindustry_entities_Units_count_float_float_float_arc_func_Boolf_R_int(ctx, temp0, temp1, temp2, sp[0].o);
	if (temp3 > (jint(1))) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PayloadComp_dropUnit_mindustry_world_blocks_payloads_UnitPayload_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:dropUnit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[1].o)))->F_unit;
	frame[2].o = sp[0].o;
	LINE_NUMBER(181);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(185);
	sp[0].o = frame[2].o;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp2 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x)));
	jfloat temp3 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp4 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)));
	jint temp5 = (jint)((func_mindustry_gen_Unit_canPass_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canPass_int_int_R_boolean])(ctx, sp[0].o, temp2, temp4);
	if (temp5 == 0) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_physicSize_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_physicSize_R_float])(ctx, (frame[2].o));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_PayloadComp_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_entities_comp_PayloadComp_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_entities_comp_PayloadComp_invoke_arc_func_Boolf_2);
		sp[0].o = (jobject) proxy;
	}
	jint temp3 = (jint)SM_mindustry_entities_Units_count_float_float_float_arc_func_Boolf_R_int(ctx, temp0, temp1, temp2, sp[0].o);
	if (temp3 <= (jint(1))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(189);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitDrop;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(192);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(194);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)));
	LINE_NUMBER(195);
	((func_mindustry_gen_Unit_rotation_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_rotation_float])(ctx, (frame[2].o), ((jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(197);
	sp[0].o = frame[2].o;
	jint temp3 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_id = temp3;
	LINE_NUMBER(199);
	jint temp4 = (jint)((func_mindustry_gen_Unit_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isAdded_R_boolean])(ctx, (frame[2].o));
	if (temp4 != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	}
label_10:;
	{
	LINE_NUMBER(200);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[2].o));
	LINE_NUMBER(201);
	((func_mindustry_gen_Unit_unloaded) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_unloaded])(ctx, (frame[2].o));
	LINE_NUMBER(202);
	clinit_mindustry_game_EventType$PayloadDropEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PayloadDropEvent);
	sp[1].o = (jobject)((func_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	init_mindustry_game_EventType$PayloadDropEvent_mindustry_gen_Unit_mindustry_gen_Unit(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (frame[2].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(203);
	((func_mindustry_entities_comp_PayloadComp_playPayloadDropSound_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_playPayloadDropSound_mindustry_world_blocks_payloads_Payload])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PayloadComp_dropBlock_mindustry_world_blocks_payloads_BuildPayload_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:dropBlock", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[1].o)))->F_build;
	frame[2].o = sp[0].o;
	LINE_NUMBER(211);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp0 - ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset)));
	frame[3].i = temp1;
	jfloat temp2 = (jfloat)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp2 - ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset)));
	frame[4].i = temp3;
	LINE_NUMBER(212);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(213);
	if ((frame[5].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_R_boolean(ctx, sp[0].o, sp[1].o, (frame[3].i), (frame[4].i), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_rotation), (jint(0)));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(214);
	((func_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile_int])(ctx, (frame[1].o), (frame[5].o), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_rotation));
	LINE_NUMBER(215);
	clinit_mindustry_game_EventType$PayloadDropEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PayloadDropEvent);
	sp[1].o = (jobject)((func_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	init_mindustry_game_EventType$PayloadDropEvent_mindustry_gen_Unit_mindustry_gen_Building(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (frame[2].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_mindustry_entities_comp_PayloadComp_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_getControllerName_R_java_lang_String])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[1].o)))->F_build;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PayloadComp_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_getControllerName_R_java_lang_String])(ctx, (frame[0].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_lastAccessed = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(221);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitDrop;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_placeEffect;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[5].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))));
	LINE_NUMBER(223);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_placeSound;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_R_int])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PayloadComp_playPayloadDropSound_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:playPayloadDropSound", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(232);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, (frame[1].o)))(ctx, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(12.0f)), 1)) > 0) goto label_1;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_payloadDrop1;
	goto label_2;
label_1:;
	{
	LINE_NUMBER(233);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, (frame[1].o)))(ctx, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(20.0f)), 1)) > 0) goto label_3;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_payloadDrop2;
	goto label_2;
label_3:;
	LINE_NUMBER(234);
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_payloadDrop3;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(235);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PayloadComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Position, sp[1].o);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.9f)), (jfloat(1.1f)));
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PayloadComp_contentInfo_arc_scene_ui_layout_Table_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:contentInfo", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(239);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(242);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	frame[5].f = (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)));
	LINE_NUMBER(244);
	if ((floatCompare((((frame[2].f) * (frame[5].f)) + ((frame[4].f) * (frame[5].f))), (frame[3].f), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(245);
	frame[4].f = (((frame[3].f) - ((frame[2].f) * (frame[5].f))) / (frame[5].f));
	}
label_5:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_entities_comp_PayloadComp *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_Payload, sp[0].o));
	LINE_NUMBER(249);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_world_blocks_payloads_Payload_icon_R_arc_graphics_g2d_TextureRegion) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_icon_R_arc_graphics_g2d_TextureRegion, (frame[7].o)))(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[4].f));
	LINE_NUMBER(250);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_comp_PayloadComp_lambda$dropUnit$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:lambda$dropUnit$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PayloadComp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(14.0f)), -1)) <= 0) goto label_1;
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

jbool SM_mindustry_entities_comp_PayloadComp_lambda$canDropPayload$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:lambda$canDropPayload$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PayloadComp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(14.0f)), -1)) <= 0) goto label_1;
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

jfloat SM_mindustry_entities_comp_PayloadComp_lambda$payloadUsed$0_mindustry_world_blocks_payloads_Payload_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PayloadComp:lambda$payloadUsed$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PayloadComp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(75);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_comp_PayloadComp;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field payloadPower
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
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

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_comp_PayloadComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PayloadComp_remove,
	(void *) M_mindustry_entities_comp_PayloadComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	(void *) M_mindustry_entities_comp_PayloadComp_destroy,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PayloadComp_payloadUsed_R_float,
	(void *) M_mindustry_entities_comp_PayloadComp_canPickup_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_comp_PayloadComp_canPickup_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_comp_PayloadComp_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_entities_comp_PayloadComp_hasPayload_R_boolean,
	(void *) M_mindustry_entities_comp_PayloadComp_addPayload_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_entities_comp_PayloadComp_pickup_mindustry_gen_Unit,
	(void *) M_mindustry_entities_comp_PayloadComp_pickup_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_PayloadComp_dropLastPayload_R_boolean,
	(void *) M_mindustry_entities_comp_PayloadComp_tryDropPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_entities_comp_PayloadComp_canDropPayload_R_boolean,
	(void *) M_mindustry_entities_comp_PayloadComp_dropUnit_mindustry_world_blocks_payloads_UnitPayload_R_boolean,
	(void *) M_mindustry_entities_comp_PayloadComp_dropBlock_mindustry_world_blocks_payloads_BuildPayload_R_boolean,
	(void *) M_mindustry_entities_comp_PayloadComp_playPayloadDropSound_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_entities_comp_PayloadComp_contentInfo_arc_scene_ui_layout_Table_float_float,
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
	{ "payloadUsed", "()F" },
	{ "canPickup", "(Lmindustry/gen/Unit;)Z" },
	{ "canPickup", "(Lmindustry/gen/Building;)Z" },
	{ "canPickupPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "hasPayload", "()Z" },
	{ "addPayload", "(Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "pickup", "(Lmindustry/gen/Unit;)V" },
	{ "pickup", "(Lmindustry/gen/Building;)V" },
	{ "dropLastPayload", "()Z" },
	{ "tryDropPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "canDropPayload", "()Z" },
	{ "dropUnit", "(Lmindustry/world/blocks/payloads/UnitPayload;)Z" },
	{ "dropBlock", "(Lmindustry/world/blocks/payloads/BuildPayload;)Z" },
	{ "playPayloadDropSound", "(Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "contentInfo", "(Larc/scene/ui/layout/Table;FF)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Unitc, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_PayloadComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_PayloadComp, F_y), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_PayloadComp, F_rotation), "F", 0 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_entities_comp_PayloadComp, F_team), "Lmindustry/game/Team;", 0 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_PayloadComp, F_type), "Lmindustry/type/UnitType;", 0 },
	{ "payloads", &class_arc_struct_Seq, offsetof(mindustry_entities_comp_PayloadComp, F_payloads), "Larc/struct/Seq;", 0 },
	{ "payloadPower", &class_mindustry_world_blocks_power_PowerGraph, offsetof(mindustry_entities_comp_PayloadComp, F_payloadPower), "Lmindustry/world/blocks/power/PowerGraph;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_PayloadComp, 0, "()V", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_PayloadComp_update, VTABLE_mindustry_entities_comp_PayloadComp_update, "()V", 1 },
	{ "remove", (intptr_t) M_mindustry_entities_comp_PayloadComp_remove, VTABLE_mindustry_entities_comp_PayloadComp_remove, "()V", 1 },
	{ "destroy", (intptr_t) M_mindustry_entities_comp_PayloadComp_destroy, VTABLE_mindustry_entities_comp_PayloadComp_destroy, "()V", 1 },
	{ "payloadUsed", (intptr_t) M_mindustry_entities_comp_PayloadComp_payloadUsed_R_float, VTABLE_mindustry_entities_comp_PayloadComp_payloadUsed_R_float, "()F", 0 },
	{ "canPickup", (intptr_t) M_mindustry_entities_comp_PayloadComp_canPickup_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_entities_comp_PayloadComp_canPickup_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 0 },
	{ "canPickup", (intptr_t) M_mindustry_entities_comp_PayloadComp_canPickup_mindustry_gen_Building_R_boolean, VTABLE_mindustry_entities_comp_PayloadComp_canPickup_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 0 },
	{ "canPickupPayload", (intptr_t) M_mindustry_entities_comp_PayloadComp_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_entities_comp_PayloadComp_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/world/blocks/payloads/Payload;)Z", 0 },
	{ "hasPayload", (intptr_t) M_mindustry_entities_comp_PayloadComp_hasPayload_R_boolean, VTABLE_mindustry_entities_comp_PayloadComp_hasPayload_R_boolean, "()Z", 0 },
	{ "addPayload", (intptr_t) M_mindustry_entities_comp_PayloadComp_addPayload_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_entities_comp_PayloadComp_addPayload_mindustry_world_blocks_payloads_Payload, "(Lmindustry/world/blocks/payloads/Payload;)V", 0 },
	{ "pickup", (intptr_t) M_mindustry_entities_comp_PayloadComp_pickup_mindustry_gen_Unit, VTABLE_mindustry_entities_comp_PayloadComp_pickup_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 0 },
	{ "pickup", (intptr_t) M_mindustry_entities_comp_PayloadComp_pickup_mindustry_gen_Building, VTABLE_mindustry_entities_comp_PayloadComp_pickup_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 0 },
	{ "dropLastPayload", (intptr_t) M_mindustry_entities_comp_PayloadComp_dropLastPayload_R_boolean, VTABLE_mindustry_entities_comp_PayloadComp_dropLastPayload_R_boolean, "()Z", 0 },
	{ "tryDropPayload", (intptr_t) M_mindustry_entities_comp_PayloadComp_tryDropPayload_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_entities_comp_PayloadComp_tryDropPayload_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/world/blocks/payloads/Payload;)Z", 0 },
	{ "canDropPayload", (intptr_t) M_mindustry_entities_comp_PayloadComp_canDropPayload_R_boolean, VTABLE_mindustry_entities_comp_PayloadComp_canDropPayload_R_boolean, "()Z", 0 },
	{ "dropUnit", (intptr_t) M_mindustry_entities_comp_PayloadComp_dropUnit_mindustry_world_blocks_payloads_UnitPayload_R_boolean, VTABLE_mindustry_entities_comp_PayloadComp_dropUnit_mindustry_world_blocks_payloads_UnitPayload_R_boolean, "(Lmindustry/world/blocks/payloads/UnitPayload;)Z", 0 },
	{ "dropBlock", (intptr_t) M_mindustry_entities_comp_PayloadComp_dropBlock_mindustry_world_blocks_payloads_BuildPayload_R_boolean, VTABLE_mindustry_entities_comp_PayloadComp_dropBlock_mindustry_world_blocks_payloads_BuildPayload_R_boolean, "(Lmindustry/world/blocks/payloads/BuildPayload;)Z", 0 },
	{ "playPayloadDropSound", (intptr_t) M_mindustry_entities_comp_PayloadComp_playPayloadDropSound_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_entities_comp_PayloadComp_playPayloadDropSound_mindustry_world_blocks_payloads_Payload, "(Lmindustry/world/blocks/payloads/Payload;)V", 0 },
	{ "contentInfo", (intptr_t) M_mindustry_entities_comp_PayloadComp_contentInfo_arc_scene_ui_layout_Table_float_float, VTABLE_mindustry_entities_comp_PayloadComp_contentInfo_arc_scene_ui_layout_Table_float_float, "(Larc/scene/ui/layout/Table;FF)V", 0 },
	{ "lambda$dropUnit$0", (intptr_t) SM_mindustry_entities_comp_PayloadComp_lambda$dropUnit$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$canDropPayload$0", (intptr_t) SM_mindustry_entities_comp_PayloadComp_lambda$canDropPayload$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$payloadUsed$0", (intptr_t) SM_mindustry_entities_comp_PayloadComp_lambda$payloadUsed$0_mindustry_world_blocks_payloads_Payload_R_float, 0, "(Lmindustry/world/blocks/payloads/Payload;)F", 4106 },
};

Class class_mindustry_entities_comp_PayloadComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/PayloadComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_PayloadComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_PayloadComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_PayloadComp,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_PayloadComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 354,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_PayloadComp = registerClass(&class_mindustry_entities_comp_PayloadComp);

}
