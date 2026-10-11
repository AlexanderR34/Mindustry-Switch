#include "mindustry/ai/types/CommandAI.h"
#include "arc/math/Angles.h"
#include "mindustry/entities/Sized.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/ai/ControlPathfinder_PathfindResult.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "mindustry/ai/UnitStance.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/struct/Bits.h"
#include "mindustry/gen/Payloadc.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "mindustry/entities/Units.h"
#include "mindustry/ai/ItemUnitStance.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/ai/types/CommandAI_invoke_arc_func_Boolf_6.h"
#include "mindustry/ai/types/CommandAI_invoke_arc_func_Boolf_8.h"
#include "mindustry/ai/types/CommandAI_invoke_arc_func_Boolf_7.h"
#include "mindustry/ai/UnitGroup.h"
#include "mindustry/ai/types/CommandAI_invoke_arc_func_Boolf_9.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/ai/ControlPathfinder.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/TargetDummyUnit.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/game/Teams.h"
#include "mindustry/ai/types/CommandAI_invoke_arc_func_Boolf_11.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/ai/types/CommandAI_invoke_arc_func_Boolf_10.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"

extern "C" {

jint SF_mindustry_ai_types_CommandAI_maxCommandQueueSize;
jint SF_mindustry_ai_types_CommandAI_avoidInterval;
jobject SF_mindustry_ai_types_CommandAI_moveTarget;
jobject SF_mindustry_ai_types_CommandAI_offsetedDestination;
jobject SF_mindustry_ai_types_CommandAI_currentDestination;
jobject SF_mindustry_ai_types_CommandAI_tmpPayload;
jint SF_mindustry_ai_types_CommandAI_transferStateNone;
jint SF_mindustry_ai_types_CommandAI_transferStateLoad;
jint SF_mindustry_ai_types_CommandAI_transferStateUnload;

void mark_mindustry_ai_types_CommandAI(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_types_CommandAI_moveTarget)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_types_CommandAI_moveTarget)->clazz)->markFunction)((jobject) SF_mindustry_ai_types_CommandAI_moveTarget, mark, depth + 1);
		if (SF_mindustry_ai_types_CommandAI_offsetedDestination)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_types_CommandAI_offsetedDestination)->clazz)->markFunction)((jobject) SF_mindustry_ai_types_CommandAI_offsetedDestination, mark, depth + 1);
		if (SF_mindustry_ai_types_CommandAI_currentDestination)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_types_CommandAI_currentDestination)->clazz)->markFunction)((jobject) SF_mindustry_ai_types_CommandAI_currentDestination, mark, depth + 1);
		if (SF_mindustry_ai_types_CommandAI_tmpPayload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_types_CommandAI_tmpPayload)->clazz)->markFunction)((jobject) SF_mindustry_ai_types_CommandAI_tmpPayload, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_units_AIController(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_types_CommandAI *) object;
	if (self->F_commandQueue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commandQueue)->clazz)->markFunction)((jobject) self->F_commandQueue, mark, depth + 1);
	if (self->F_targetPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetPos)->clazz)->markFunction)((jobject) self->F_targetPos, mark, depth + 1);
	if (self->F_targetBuild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetBuild)->clazz)->markFunction)((jobject) self->F_targetBuild, mark, depth + 1);
	if (self->F_attackTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attackTarget)->clazz)->markFunction)((jobject) self->F_attackTarget, mark, depth + 1);
	if (self->F_group)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_group)->clazz)->markFunction)((jobject) self->F_group, mark, depth + 1);
	if (self->F_unreachableBuildings)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unreachableBuildings)->clazz)->markFunction)((jobject) self->F_unreachableBuildings, mark, depth + 1);
	if (self->F_lastTargetPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTargetPos)->clazz)->markFunction)((jobject) self->F_lastTargetPos, mark, depth + 1);
	if (self->F_command)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_command)->clazz)->markFunction)((jobject) self->F_command, mark, depth + 1);
	if (self->F_stances)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stances)->clazz)->markFunction)((jobject) self->F_stances, mark, depth + 1);
	if (self->F_commandController)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commandController)->clazz)->markFunction)((jobject) self->F_commandController, mark, depth + 1);
	if (self->F_lastCommand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastCommand)->clazz)->markFunction)((jobject) self->F_lastCommand, mark, depth + 1);
}

void init_mindustry_ai_types_CommandAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_CommandAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_mindustry_entities_units_AIController(ctx, (frame[0].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(5)));
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_commandQueue = (jref) sp[1].o;
	LINE_NUMBER(30);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_groupIndex = (jint(0));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (8));
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_unreachableBuildings = (jref) sp[1].o;
	LINE_NUMBER(34);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_readAttackTarget = (jint(-1));
	LINE_NUMBER(41);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_transferState = (jint(0));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq])(ctx, sp[2].o);
	init_arc_struct_Bits_int(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[2].o))->F_size));
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_stances = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:currentCommand", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_mindustry_ai_UnitCommand(ctx);
	(sp++)->o = SF_mindustry_ai_UnitCommand_moveCommand;
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[-1].o))->F_command;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:command", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_commands;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_clearBuilding) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_clearBuilding])(ctx, sp[0].o);
	LINE_NUMBER(62);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command = (jref) (frame[1].o);
	}
label_1:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:hasStance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_stances;
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	if (temp0 == 0) goto label_1;
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

void M_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:setStance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(72);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(73);
	((func_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance])(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(75);
	((func_mindustry_ai_types_CommandAI_disableStance_mindustry_ai_UnitStance) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_disableStance_mindustry_ai_UnitStance])(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:setStance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[1].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_stop;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_stances;
	sp[1].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[1].o)))->F_incompatibleStanceBits;
	((func_arc_struct_Bits_andNot_arc_struct_Bits) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_andNot_arc_struct_Bits])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_stances;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	LINE_NUMBER(85);
	((func_mindustry_ai_types_CommandAI_stanceChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_stanceChanged])(ctx, (frame[0].o));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_disableStance_mindustry_ai_UnitStance(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:disableStance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_stances;
	((func_arc_struct_Bits_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	LINE_NUMBER(90);
	((func_mindustry_ai_types_CommandAI_stanceChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_stanceChanged])(ctx, (frame[0].o));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_stanceChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:stanceChanged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandController;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandController;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ai_types_CommandAI)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandController;
	((func_mindustry_entities_units_AIController_stanceChanged) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_stanceChanged])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_defaultCommand;
	sp += 1;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_commands;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_commands;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_defaultCommand;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_moveCommand;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_CommandAI_isLogicControllable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:isLogicControllable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasCommand_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasCommand_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool M_mindustry_ai_types_CommandAI_isAttacking_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:isAttacking", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp0 + (jfloat(10.0f))));
	if (temp1 == 0) goto label_1;
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

void M_mindustry_ai_types_CommandAI_updateUnit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:updateUnit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_mineCommand;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_mineAuto;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_mindustry_ai_ItemUnitStance_all_R_arc_struct_Seq(ctx);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_mineAuto;
	((func_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_pursueTarget;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_patrol;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	((func_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_3:;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_patrol;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_pursueTarget;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	((func_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_5:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_7);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_commands;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_defaultCommand;
	sp += 1;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_commands;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[0].o);
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_defaultCommand;
	sp += 1;
	}
label_14:;
	sp -= 2;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
label_11:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	frame[1].o = sp[0].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_lastCommand;
	if (sp[0].o == (frame[1].o)) goto label_16;
	}
	{
	LINE_NUMBER(150);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_lastCommand = (jref) (frame[1].o);
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_19;
	}
	INST_ACONST_NULL();
	goto label_20;
label_19:;
	{
	sp[0].o = (jobject)((mindustry_ai_UnitCommand *) NULL_CHECK((frame[1].o)))->F_controller;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_mindustry_entities_units_AIController, sp[0].o);
	sp += 1;
	}
label_20:;
	sp -= 2;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_commandController = (jref) sp[1].o;
label_16:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandController;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandController;
	sp[0].o = (jobject)((func_mindustry_entities_units_AIController_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == sp[1].o) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandController;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_entities_units_AIController_unit_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_unit_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	}
label_23:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandController;
	((func_mindustry_entities_units_AIController_updateUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_updateUnit])(ctx, sp[0].o);
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(159);
	((func_mindustry_ai_types_CommandAI_defaultBehavior) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_defaultBehavior])(ctx, (frame[0].o));
	LINE_NUMBER(160);
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_shouldBoost_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_shouldBoost_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_26;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_29;
	}
label_28:;
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_patrol;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 == 0) goto label_30;
	}
label_29:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_updateBoosting_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_updateBoosting_boolean])(ctx, sp[0].o, (jint(0)));
	goto label_24;
	}
label_30:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_updateBoosting_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_updateBoosting_boolean_boolean])(ctx, sp[0].o, (jint(1)), (jint(1)));
	goto label_24;
	}
label_26:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_updateBoosting_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_updateBoosting_boolean])(ctx, sp[0].o, (jint(0)));
	}
label_24:;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_CommandAI_shouldBoost_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:shouldBoost", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_boost;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_enterPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_clearCommands(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:clearCommands", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(180);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos = (jref) (jobject(nullptr));
	LINE_NUMBER(181);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_tryPickupUnit_mindustry_gen_Payloadc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:tryPickupUnit", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jfloat temp2 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_hitSize) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_8);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(186);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_gen_Call_pickedUnitPayload_mindustry_gen_Unit_mindustry_gen_Unit(ctx, sp[0].o, (frame[2].o));
	}
label_2:;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ai_types_CommandAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:findMainTarget", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_autoFindTarget) != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_patrol;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[1].o);
	jint temp3 = (jint)((func_mindustry_ai_types_CommandAI_nearAttackTarget_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_nearAttackTarget_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2);
	if (temp3 != 0) goto label_1;
	}
	{
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)M_mindustry_entities_units_AIController_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_defaultBehavior(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:defaultBehavior", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Payloadc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[2].o)));
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_payloadPickupCooldown = (((jfloat)((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_payloadPickupCooldown) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_unloadPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_gen_Call_payloadDropped_mindustry_gen_Unit_float_float(ctx, sp[0].o, temp0, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y));
	}
label_4:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_loadUnitsCommand;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(211);
	((func_mindustry_ai_types_CommandAI_tryPickupUnit_mindustry_gen_Payloadc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_tryPickupUnit_mindustry_gen_Payloadc])(ctx, (frame[0].o), (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_loadBlocksCommand;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (jfloat(1)));
	if (temp0 == 0) goto label_1;
	}
label_8:;
	{
	LINE_NUMBER(216);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y));
	frame[2].o = sp[0].o;
	LINE_NUMBER(218);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(221);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_gen_Call_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean(ctx, sp[0].o, (frame[2].o), (jint(0)));
	goto label_1;
	}
label_12:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_hidden;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canPickup_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_canPickup_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_gen_Call_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(231);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_enterPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowedInPayloads) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildOn_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildOn_R_mindustry_gen_Building])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_15;
	}
	goto label_17;
label_16:;
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetBuild;
	if (sp[0].o == nullptr) goto label_15;
	}
label_17:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o != nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildOn_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildOn_R_mindustry_gen_Building])(ctx, sp[0].o);
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[-1].o))->F_targetBuild;
label_19:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(233);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(234);
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CommandAI_tmpPayload;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(235);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_types_CommandAI_tmpPayload;
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_gen_Call_unitEnteredPayload_mindustry_gen_Unit_mindustry_gen_Building(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}
label_15:;
	{
	LINE_NUMBER(242);
	((func_mindustry_ai_types_CommandAI_updateVisuals) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_updateVisuals])(ctx, (frame[0].o));
	LINE_NUMBER(243);
	((func_mindustry_ai_types_CommandAI_updateTargeting) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_updateTargeting])(ctx, (frame[0].o));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_invalid_mindustry_gen_Teamc_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_invalid_mindustry_gen_Teamc_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(246);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(247);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos = (jref) (jobject(nullptr));
	}
label_27:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o != nullptr) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o != nullptr) goto label_30;
	}
	{
	LINE_NUMBER(252);
	((func_mindustry_ai_types_CommandAI_finishPath) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_finishPath])(ctx, (frame[0].o));
	}
label_30:;
	{
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_ram;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o != nullptr) goto label_35;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_targetPos = (jref) sp[1].o;
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_lastTargetPos = (jref) sp[1].o;
	}
label_35:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	frame[3].o = sp[1].o;
	sp += 1;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_TargetDummyUnit)) == 0) goto label_38;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_TargetDummyUnit, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_TargetDummyUnit *) NULL_CHECK((frame[2].o)))->F_building;
	if (sp[0].o == nullptr) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_TargetDummyUnit *) NULL_CHECK((frame[2].o)))->F_building;
	sp += 1;
	goto label_40;
	}
label_38:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[-1].o))->F_attackTarget;
label_40:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(265);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Building)) == 0) goto label_33;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_pathCostId) == (jint(2))) goto label_33;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_33;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_9);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(267);
	if ((frame[3].o) == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].o));
	}
label_33:;
	{
	LINE_NUMBER(273);
	frame[2].i = (jint(0));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	frame[3].f = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_range) - (jfloat(10.0f)));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_48;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[3].f));
	if (temp0 == 0) goto label_48;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_48;
	INST_ICONST(1);
	goto label_49;
label_48:;
	INST_ICONST(0);
label_49:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_51;
	}
	{
	LINE_NUMBER(279);
	frame[5].i = (jint(1));
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_54;
	}
	INST_ICONST(1);
	goto label_55;
label_54:;
	INST_ICONST(0);
label_55:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(281);
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CommandAI_currentDestination;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[2].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[1].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_targetBuild = (jref) sp[1].o;
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_59;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetBuild;
	if (sp[0].o == nullptr) goto label_59;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetBuild;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_59;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetBuild;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_acceptsUnitPayloads) == 0) goto label_59;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_pathCostId) == (jint(2))) goto label_59;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_59;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetBuild;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_10);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(285);
	if ((frame[7].o) == nullptr) goto label_59;
	}
	{
	LINE_NUMBER(286);
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CommandAI_currentDestination;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[7].o));
	}
label_59:;
	{
	LINE_NUMBER(290);
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CommandAI_moveTarget;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_currentDestination;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(292);
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_currentDestination;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_group;
	if (sp[0].o == nullptr) goto label_65;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_group;
	if (((jint)((mindustry_ai_UnitGroup *) NULL_CHECK(sp[0].o))->F_valid) == 0) goto label_65;
	}
	{
	jint temp0 = (jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_groupIndex;
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_group;
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK(sp[0].o))->F_units;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_65;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_enterPayloadCommand;
	if (sp[0].o == sp[1].o) goto label_65;
	}
	{
	LINE_NUMBER(296);
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_group;
	sp[1].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK(sp[1].o))->F_positions;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_groupIndex) * (jint(2))));
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_group;
	sp[1].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK(sp[1].o))->F_positions;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_groupIndex) * (jint(2))) + (jint(1))))));
	}
label_65:;
	{
	LINE_NUMBER(299);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	frame[7].o = sp[0].o;
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_patrol;
	LINE_NUMBER(302);
	jint temp1 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp1 == 0) goto label_69;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_pursueTarget;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_69;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_69;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range) - (jfloat(2))));
	if (temp0 == 0) goto label_69;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_circleTarget) == 0) goto label_70;
	}
label_69:;
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_enterPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_71;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_currentDestination;
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(303);
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_70;
	}
label_71:;
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_73;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_circleTarget) != 0) goto label_73;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size) * (8)))) / (jfloat(2))) * (jfloat(0.9f))));
	if (temp0 != 0) goto label_70;
	}
label_73:;
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_loopPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_74;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	jfloat temp0 = jfloat(10.0f);
	LINE_NUMBER(304);
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 == 0) goto label_74;
	}
label_70:;
	{
	LINE_NUMBER(306);
	frame[5].i = (jint(0));
	}
label_74:;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_76;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_76;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(2)), (jfloat(10.0f)));
	if (temp0 == 0) goto label_78;
	}
	{
	LINE_NUMBER(311);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_rotation;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_hitSize) / (jfloat(2))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[9].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_hitSize) / (jfloat(2)));
	LINE_NUMBER(313);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(7.0f)), (frame[9].f));
	frame[10].f = temp1;
	LINE_NUMBER(314);
	frame[11].f = (jfloat(4.0f));
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x)) - ((frame[10].f) / (jfloat(2)));
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp3 = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_y)) - ((frame[10].f) / (jfloat(2)));
	jfloat temp4 = frame[10].f;
	jfloat temp5 = frame[10].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_ai_types_CommandAI_invoke_arc_func_Boolf_11);
		proxy->F_field1 = (frame[11].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp6 = (jint)SM_mindustry_entities_Units_nearbyCheck_float_float_float_float_arc_func_Boolf_R_boolean(ctx, temp2, temp3, temp4, temp5, sp[1].o);
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_blockingUnit = temp6;
	}
label_78:;
	{
	LINE_NUMBER(325);
	frame[8].f = (jfloat(300.0f));
	LINE_NUMBER(327);
	if (((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_blockingUnit) == 0) goto label_85;
	}
	{
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_timeSpentBlocked = (((jfloat)((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_timeSpentBlocked) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(330);
	if ((floatCompare(((jfloat)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_timeSpentBlocked), ((frame[8].f) * (jfloat(2))), -1)) < 0) goto label_88;
	}
	{
	LINE_NUMBER(331);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_timeSpentBlocked = (jfloat(0));
	goto label_88;
	}
label_85:;
	{
	LINE_NUMBER(334);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_timeSpentBlocked = (jfloat(0));
	}
label_88:;
	{
	LINE_NUMBER(337);
	frame[9].i = (jint(0));
	LINE_NUMBER(341);
	if ((frame[4].i) == 0) goto label_91;
	}
	{
	LINE_NUMBER(342);
	frame[5].i = (jint(1));
	LINE_NUMBER(343);
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CommandAI_moveTarget;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	goto label_94;
	}
label_91:;
	{
	LINE_NUMBER(345);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[3].o = (jobject)SF_mindustry_ai_types_CommandAI_currentDestination;
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(347);
	frame[9].i = ((jint)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[10].o)))->F_unreachable);
	LINE_NUMBER(348);
	jint temp0 = frame[5].i;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[10].o)))->F_move) == 0) goto label_97;
	}
	{
	if (((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_blockingUnit) == 0) goto label_98;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_timeSpentBlocked), (frame[8].f), -1)) <= 0) goto label_97;
	}
label_98:;
	INST_ICONST(1);
	goto label_99;
label_97:;
	INST_ICONST(0);
label_99:;
	{
	sp -= 2;
	frame[5].i = (sp[0].i & sp[1].i);
	LINE_NUMBER(349);
	if (((jint)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[10].o)))->F_move) == 0) goto label_101;
	}
	{
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CommandAI_moveTarget;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[10].o)))->F_dest;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_101:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_naval) == 0) goto label_94;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[10].o)))->F_next;
	if (sp[0].o == nullptr) goto label_94;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[10].o)))->F_next;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[10].o)))->F_next;
	jint temp1 = (jint)((func_mindustry_gen_Unit_canPass_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canPass_int_int_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	if (temp1 != 0) goto label_94;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_94;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_types_CommandAI_moveTarget;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_types_CommandAI_moveTarget;
	sp[1].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	if (sp[0].o != sp[1].o) goto label_94;
	}
	{
	LINE_NUMBER(353);
	frame[5].i = (jint(0));
	}
label_94:;
	{
	LINE_NUMBER(358);
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CommandAI_moveTarget;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_tileX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_tileX_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat((temp0 * (8)));
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp2 = (jint)((func_mindustry_gen_Unit_tileY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_tileY_R_int])(ctx, sp[1].o);
	jint temp3 = (jint)((func_arc_math_geom_Vec2_epsilonEquals_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_epsilonEquals_float_float_R_boolean])(ctx, sp[0].o, temp1, (jfloat((temp2 * (8)))));
	frame[2].i = temp3;
	LINE_NUMBER(360);
	jint temp4 = frame[6].i;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_moveTarget;
	jint temp5 = (jint)((func_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean])(ctx, sp[0].o, sp[1].o, (jfloat(4.1f)));
	frame[6].i = (temp4 & temp5);
	LINE_NUMBER(363);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	jint temp6 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp6 == 0) goto label_105;
	}
	INST_ILOAD(9);
	if ((--sp)->i != 0) goto label_106;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	jint temp2 = (jint)((func_mindustry_gen_Unit_isPathImpassable_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isPathImpassable_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	if (temp2 == 0) goto label_105;
	}
label_106:;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	frame[11].o = sp[0].o;
	if ((isInstance(ctx, (frame[11].o), &class_mindustry_gen_Building)) == 0) goto label_107;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[11].o)));
	LINE_NUMBER(365);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_unreachableBuildings;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[10].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_addUnique_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addUnique_int_R_boolean])(ctx, sp[0].o, temp0);
	}
label_107:;
	{
	LINE_NUMBER(367);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(368);
	((func_mindustry_ai_types_CommandAI_finishPath) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_finishPath])(ctx, (frame[0].o));
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}
label_105:;
	LINE_NUMBER(371);
	goto label_111;
label_76:;
	{
	LINE_NUMBER(372);
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CommandAI_moveTarget;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_111:;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_loopPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_112;
	}
	{
	LINE_NUMBER(376);
	frame[2].i = (jint(1));
	}
label_112:;
	{
	LINE_NUMBER(379);
	if ((frame[5].i) == 0) goto label_114;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_circleTarget) == 0) goto label_116;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_116;
	}
	{
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	((mindustry_entities_units_AIController *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	((func_mindustry_ai_types_CommandAI_circleAttack_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_circleAttack_float])(ctx, sp[0].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_circleTargetRadius));
	goto label_114;
	}
label_116:;
	{
	LINE_NUMBER(384);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_moveTarget;
	LINE_NUMBER(385);
	sp += 2;
	if ((frame[4].i) == 0) goto label_120;
	}
	INST_FLOAD(3);
	goto label_121;
label_120:;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_122;
	}
	INST_FCONST(0);
	goto label_121;
label_122:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_123;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_123;
	INST_FLOAD(3);
	goto label_121;
label_123:;
	INST_FCONST(0);
label_121:;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_124;
	}
	(sp++)->f = jfloat(40.0f);
	goto label_125;
label_124:;
	(sp++)->f = jfloat(100.0f);
label_125:;
	{
	jint temp0 = jint(0);
	sp[0].o = jobject(nullptr);
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp[1].o = temp1;
	sp += 2;
	if ((frame[6].i) != 0) goto label_126;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_127;
label_126:;
	INST_ICONST(1);
	goto label_128;
label_127:;
	INST_ICONST(0);
label_128:;
	LINE_NUMBER(384);
	POP_N(7); // Pop method args
	((func_mindustry_ai_types_CommandAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean])(ctx, sp[0].o, sp[1].o, sp[2].f, sp[3].f, sp[4].i, sp[5].o, sp[6].i);
label_114:;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_129;
	}
	{
	if (((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_stopAtTarget) == 0) goto label_129;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((frame[3].f) - (jfloat(1))));
	if (temp0 == 0) goto label_129;
	}
	{
	LINE_NUMBER(394);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget = (jref) (jobject(nullptr));
	}
label_129:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_131;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_131;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_circleTarget) == 0) goto label_132;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) == 0) goto label_131;
	}
label_132:;
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_133;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range));
	if (temp0 != 0) goto label_131;
	}
label_133:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	((func_mindustry_gen_Unit_lookAt_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	goto label_134;
	}
label_131:;
	{
	LINE_NUMBER(400);
	((func_mindustry_ai_types_CommandAI_faceTarget) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_faceTarget])(ctx, (frame[0].o));
	}
label_134:;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o != nullptr) goto label_135;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	sp[2].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	sp += 2;
	if (((jint)((mindustry_ai_UnitCommand *) NULL_CHECK(sp[0].o))->F_exactArrival) == 0) goto label_136;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_136;
	}
	INST_FCONST(1);
	goto label_137;
label_136:;
	{
	jfloat temp0 = jfloat(5.0f);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_hitSize) / (jfloat(2))));
	sp[0].f = temp1;
	sp += 1;
	}
label_137:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].f);
	sp++;
	if ((--sp)->i != 0) goto label_138;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) != 0) goto label_135;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) == 0) goto label_135;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_rotateMoveFirst) != 0) goto label_135;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	if (((jint)((mindustry_ai_UnitCommand *) NULL_CHECK(sp[0].o))->F_exactArrival) != 0) goto label_135;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	LINE_NUMBER(406);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation));
	if ((floatCompare(temp1, (jfloat(60.0f)), -1)) <= 0) goto label_135;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	jfloat temp0 = jfloat(50.0f);
	jfloat temp1 = jfloat(360.0f);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jfloat temp2 = temp1 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_rotateSpeed);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jfloat temp3 = (temp2 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_speed)) / (jfloat(6.2831855f));
	LINE_NUMBER(407);
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp3);
	jint temp5 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp4);
	if (temp5 == 0) goto label_135;
	}
label_138:;
	{
	LINE_NUMBER(408);
	((func_mindustry_ai_types_CommandAI_finishPath) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_finishPath])(ctx, (frame[0].o));
	}
label_135:;
	{
	LINE_NUMBER(411);
	if (((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_stopWhenInRange) == 0) goto label_141;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_141;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CommandAI_offsetedDestination;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((frame[3].f) * (jfloat(0.9f))));
	if (temp0 == 0) goto label_141;
	}
	{
	LINE_NUMBER(412);
	((func_mindustry_ai_types_CommandAI_finishPath) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_finishPath])(ctx, (frame[0].o));
	LINE_NUMBER(413);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_stopWhenInRange = (jint(0));
	}
label_141:;
	LINE_NUMBER(416);
	goto label_144;
label_51:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_144;
	}
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_circleTarget) == 0) goto label_146;
	}
	{
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_shouldFire_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_shouldFire_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_146;
	}
	{
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	((func_mindustry_ai_types_CommandAI_circleAttack_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_circleAttack_float])(ctx, sp[0].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_circleTargetRadius));
	goto label_144;
	}
label_146:;
	{
	LINE_NUMBER(420);
	((func_mindustry_ai_types_CommandAI_faceTarget) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_faceTarget])(ctx, (frame[0].o));
	}
label_144:;
	LINE_NUMBER(423);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_finishPath(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:finishPath", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_enterPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_acceptsUnitPayloads) == 0) goto label_1;
	}
	LINE_NUMBER(428);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(431);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_loopPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Payloadc)) == 0) goto label_3;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[2].o)));
	LINE_NUMBER(433);
	if (((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_transferState) != 0) goto label_5;
	}
	{
	LINE_NUMBER(434);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_7;
	}
	INST_ICONST(2);
	goto label_8;
label_7:;
	INST_ICONST(1);
label_8:;
	sp -= 2;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_transferState = sp[1].i;
label_5:;
	{
	LINE_NUMBER(437);
	if ((floatCompare(((jfloat)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_payloadPickupCooldown), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(439);
	if (((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_transferState) != (jint(2))) goto label_10;
	}
	{
	LINE_NUMBER(441);
	frame[2].i = (jint(-1));
	}
label_12:;
	{
	LINE_NUMBER(442);
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_13;
	}
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(444);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_gen_Call_payloadDropped_mindustry_gen_Unit_float_float(ctx, sp[0].o, temp0, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(448);
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_16;
	}
	LINE_NUMBER(449);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
	{
	LINE_NUMBER(451);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_payloadPickupCooldown = (jfloat(60.0f));
	LINE_NUMBER(452);
	goto label_19;
	}
label_10:;
	{
	if (((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_transferState) != (jint(1))) goto label_19;
	}
	{
	LINE_NUMBER(454);
	frame[2].i = (jint(-1));
	}
label_21:;
	{
	LINE_NUMBER(455);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_22;
	}
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(457);
	((func_mindustry_ai_types_CommandAI_tryPickupUnit_mindustry_gen_Payloadc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_tryPickupUnit_mindustry_gen_Payloadc])(ctx, (frame[0].o), (frame[1].o));
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(461);
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_25;
	}
	LINE_NUMBER(462);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
	{
	LINE_NUMBER(464);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_payloadPickupCooldown = (jfloat(60.0f));
	}
label_19:;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_3;
	}
	LINE_NUMBER(469);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(473);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_transferState = (jint(0));
	LINE_NUMBER(475);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	frame[1].o = sp[0].o;
	LINE_NUMBER(476);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos = (jref) (jobject(nullptr));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_31;
	}
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	frame[2].o = (checkCast(ctx, &class_arc_math_geom_Position, sp[0].o));
	LINE_NUMBER(480);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Teamc)) == 0) goto label_34;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Teamc, (frame[2].o)));
	LINE_NUMBER(481);
	((func_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean])(ctx, (frame[0].o), (frame[3].o), ((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_stopAtTarget));
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(482);
	if ((isInstance(ctx, (frame[2].o), &class_arc_math_geom_Vec2)) == 0) goto label_36;
	}
	{
	frame[4].o = (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[2].o)));
	LINE_NUMBER(483);
	((func_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[4].o));
	}
label_36:;
	{
	LINE_NUMBER(486);
	if ((frame[1].o) == nullptr) goto label_38;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_patrol;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_loopPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_38:;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_group;
	if (sp[0].o == nullptr) goto label_40;
	}
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_group;
	jint temp0 = (jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_groupIndex;
	sp[1].i = temp0;
	sp += 2;
	if ((isInstance(ctx, (frame[2].o), &class_arc_math_geom_Vec2)) == 0) goto label_42;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[2].o)));
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_44;
	}
label_42:;
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	sp += 1;
	}
label_44:;
	POP_N(3); // Pop method args
	((func_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].i, sp[2].o);
label_40:;
	LINE_NUMBER(494);
	goto label_45;
label_31:;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_group;
	if (sp[0].o == nullptr) goto label_45;
	}
	{
	LINE_NUMBER(496);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_group = (jref) (jobject(nullptr));
	}
label_45:;
	LINE_NUMBER(499);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_removed_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:removed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(503);
	((func_mindustry_ai_types_CommandAI_clearCommands) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_clearCommands])(ctx, (frame[0].o));
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_commandQueue_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:commandQueue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(508);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Teamc)) == 0) goto label_3;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Teamc, (frame[1].o)));
	LINE_NUMBER(509);
	((func_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean])(ctx, (frame[0].o), (frame[2].o), ((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_stopAtTarget));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(510);
	if ((isInstance(ctx, (frame[1].o), &class_arc_math_geom_Vec2)) == 0) goto label_5;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o)));
	LINE_NUMBER(511);
	((func_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[3].o));
	}
label_5:;
	goto label_7;
label_1:;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) >= (50)) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_7:;
	LINE_NUMBER(516);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_afterRead_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:afterRead", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(520);
	if (((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_readAttackTarget) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(521);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[1].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[1].o, ((jint)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_readAttackTarget));
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_attackTarget = (jref) (checkCast(ctx, &class_mindustry_gen_Teamc, sp[1].o));
	LINE_NUMBER(522);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_readAttackTarget = (jint(-1));
	}
label_1:;
	LINE_NUMBER(524);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_CommandAI_shouldFire_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:shouldFire", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_holdFire;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
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

void M_mindustry_ai_types_CommandAI_hit_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:hit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_owner;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Bullet)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_owner;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Teamc)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Teamc, (frame[4].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unit)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(537);
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[2].o)));
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jint temp0 = (jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_targetAir;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jint temp1 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_targetGround));
	if (temp1 == 0) goto label_1;
	}
label_4:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(3)), (jfloat(600.0f)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(538);
	((func_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(540);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_CommandAI_keepState_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:keepState", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_types_CommandAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:findTarget", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(549);
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_nearAttackTarget_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_nearAttackTarget_float_float_float_R_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)M_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	jint temp0 = (jint)SM_mindustry_entities_Units_isHittable_mindustry_gen_Posc_boolean_boolean_R_boolean(ctx, sp[0].o, (frame[4].i), (frame[5].i));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	sp += 1;
	goto label_2;
	}
label_3:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_CommandAI_nearAttackTarget_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:nearAttackTarget", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (frame[3].f) + (jfloat(3.0f));
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	frame[5].o = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp += 4;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_entities_Sized)) == 0) goto label_2;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_Sized, (frame[5].o)));
	jfloat temp0 = (jfloat)((func_mindustry_entities_Sized_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Sized, INDEX_mindustry_entities_Sized_hitSize_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jfloat temp1 = temp0 / (jfloat(2));
	sp[0].f = temp1;
	sp += 1;
	goto label_4;
	}
label_2:;
	INST_FCONST(0);
label_4:;
	{
	sp -= 5;
	jint temp0 = (jint)((func_arc_math_geom_Position_within_float_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_within_float_float_float_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].f, sp[2].f, (sp[3].f + sp[4].f));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_CommandAI_retarget_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:retarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == nullptr) goto label_1;
	}
	(sp++)->f = jfloat(10.0f);
	goto label_2;
label_1:;
	(sp++)->f = jfloat(20.0f);
label_2:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, sp[1].i, sp[2].f);
	sp++;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_CommandAI_hasCommand_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:hasCommand", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_1;
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

void M_mindustry_ai_types_CommandAI_setupLastPos(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:setupLastPos", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(567);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_lastTargetPos = (jref) sp[1].o;
	LINE_NUMBER(568);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:commandPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(572);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(574);
	((func_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(575);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandController;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandController;
	((func_mindustry_entities_units_AIController_commandPosition_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_commandPosition_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	}
label_3:;
	LINE_NUMBER(578);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:commandPosition", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(581);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(584);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2])(ctx, (frame[1].o));
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[1].o))->F_lastTargetPos = (jref) sp[2].o;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_targetPos = (jref) sp[2].o;
	LINE_NUMBER(585);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_command;
	if (((jint)((mindustry_ai_UnitCommand *) NULL_CHECK(sp[0].o))->F_snapToBuilding) == 0) goto label_3;
	}
	{
	LINE_NUMBER(586);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	frame[3].o = sp[0].o;
	LINE_NUMBER(587);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(588);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].o));
	}
label_3:;
	{
	LINE_NUMBER(591);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(592);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_stopWhenInRange = (frame[2].i);
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:commandTarget", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(597);
	((func_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(598);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandController;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_commandController;
	((func_mindustry_entities_units_AIController_commandTarget_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_commandTarget_mindustry_gen_Teamc])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(601);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:commandTarget", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(604);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_attackTarget = (jref) (frame[1].o);
	LINE_NUMBER(605);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_stopAtTarget = (frame[2].i);
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_CommandAI_lambda$defaultBehavior$0_float_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:lambda$defaultBehavior$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(320);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitSize) / (jfloat(2));
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (temp0 + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_hitSize) / (jfloat(2)))) + (frame[1].f);
	LINE_NUMBER(316);
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp1);
	if (temp2 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[4].o)));
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_targetPos;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	LINE_NUMBER(318);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_dst2_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_dst2_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, temp1, 1)) >= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_rotation;
	jfloat temp2 = jfloat(15.0f);
	LINE_NUMBER(320);
	jint temp3 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, temp0, temp1, temp2);
	if (temp3 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	LINE_NUMBER(322);
	jint temp0 = (jint)((func_mindustry_gen_Unit_tileX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_tileX_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Unit_tileY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_tileY_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)((func_mindustry_gen_Unit_tileX_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_tileX_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_mindustry_gen_Unit_tileY_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_tileY_R_int])(ctx, (frame[2].o));
	jint temp4 = (jint)SM_mindustry_ai_ControlPathfinder_isNearObstacle_mindustry_gen_Unit_int_int_int_int_R_boolean(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	if (temp4 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_8;
label_1:;
	INST_ICONST(0);
label_8:;
	LINE_NUMBER(320);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_CommandAI_lambda$tryPickupUnit$0_mindustry_gen_Payloadc_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:lambda$tryPickupUnit$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isAI_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitSize;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp0 + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_hitSize)));
	if (temp1 == 0) goto label_1;
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

jbool SM_mindustry_ai_types_CommandAI_lambda$updateUnit$0_arc_math_geom_Position_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:lambda$updateUnit$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_CommandAI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(139);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Healthc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[0].o)));
	jint temp0 = (jint)((func_mindustry_gen_Healthc_isValid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_isValid_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
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

void clinit_mindustry_ai_types_CommandAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_AIController(ctx);
	SF_mindustry_ai_types_CommandAI_maxCommandQueueSize = jint(50);
	SF_mindustry_ai_types_CommandAI_avoidInterval = jint(10);
	SF_mindustry_ai_types_CommandAI_transferStateNone = jint(0);
	SF_mindustry_ai_types_CommandAI_transferStateLoad = jint(1);
	SF_mindustry_ai_types_CommandAI_transferStateUnload = jint(2);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CommandAI:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_CommandAI(ctx);
	{
	LINE_NUMBER(20);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_ai_types_CommandAI(ctx);
	SF_mindustry_ai_types_CommandAI_moveTarget = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_ai_types_CommandAI(ctx);
	SF_mindustry_ai_types_CommandAI_offsetedDestination = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_ai_types_CommandAI(ctx);
	SF_mindustry_ai_types_CommandAI_currentDestination = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_world_blocks_payloads_UnitPayload(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_UnitPayload);
	init_mindustry_world_blocks_payloads_UnitPayload_mindustry_gen_Unit(ctx, sp[0].o, (jobject(nullptr)));
	clinit_mindustry_ai_types_CommandAI(ctx);
	SF_mindustry_ai_types_CommandAI_tmpPayload = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_types_CommandAI;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field targetPos
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field targetBuild
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field attackTarget
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field group
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field commandController
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[26]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field lastCommand
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[27]->F_annotations = (intptr_t) annotationArray;
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

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ai_types_CommandAI[] {
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
	(void *) M_mindustry_entities_units_AIController_unit_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_AIController_unit_R_mindustry_gen_Unit,
	(void *) M_mindustry_ai_types_CommandAI_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_units_UnitController_isValidController_R_boolean,
	(void *) M_mindustry_ai_types_CommandAI_isLogicControllable_R_boolean,
	(void *) M_mindustry_ai_types_CommandAI_updateUnit,
	(void *) M_mindustry_ai_types_CommandAI_removed_mindustry_gen_Unit,
	(void *) M_mindustry_ai_types_CommandAI_afterRead_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_AIController_resetTimers,
	(void *) M_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean,
	(void *) M_mindustry_ai_types_CommandAI_stanceChanged,
	(void *) M_mindustry_ai_types_CommandAI_keepState_R_boolean,
	(void *) M_mindustry_entities_units_AIController_stopShooting,
	(void *) M_mindustry_entities_units_AIController_fallback_R_mindustry_entities_units_AIController,
	(void *) M_mindustry_entities_units_AIController_useFallback_R_boolean,
	(void *) M_mindustry_entities_units_AIController_updateVisuals,
	(void *) M_mindustry_entities_units_AIController_updateMovement,
	(void *) M_mindustry_entities_units_AIController_updateTargeting,
	(void *) M_mindustry_entities_units_AIController_faceTarget,
	(void *) M_mindustry_entities_units_AIController_faceMovement,
	(void *) M_mindustry_entities_units_AIController_invalid_mindustry_gen_Teamc_R_boolean,
	(void *) M_mindustry_entities_units_AIController_pathfind_int,
	(void *) M_mindustry_entities_units_AIController_pathfind_int_boolean,
	(void *) M_mindustry_entities_units_AIController_pathfind_int_boolean_boolean,
	(void *) M_mindustry_entities_units_AIController_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_units_AIController_targetInvalidated,
	(void *) M_mindustry_entities_units_AIController_updateWeapons,
	(void *) M_mindustry_entities_units_AIController_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean,
	(void *) M_mindustry_ai_types_CommandAI_shouldFire_R_boolean,
	(void *) M_mindustry_entities_units_AIController_shouldShoot_R_boolean,
	(void *) M_mindustry_entities_units_AIController_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_ai_types_CommandAI_retarget_R_boolean,
	(void *) M_mindustry_ai_types_CommandAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_ai_types_CommandAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc,
	(void *) M_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2,
	(void *) M_mindustry_ai_types_CommandAI_init,
	(void *) M_mindustry_entities_units_AIController_getClosestSpawner_R_mindustry_world_Tile,
	(void *) M_mindustry_entities_units_AIController_unloadPayloads,
	(void *) M_mindustry_entities_units_AIController_circleAttack_float,
	(void *) M_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float,
	(void *) M_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float_float,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean,
	(void *) M_mindustry_entities_units_AIController_prefSpeed_R_float,
	(void *) M_mindustry_entities_units_AIController_lambda$target$1_boolean_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand,
	(void *) M_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand,
	(void *) M_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance_boolean,
	(void *) M_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance,
	(void *) M_mindustry_ai_types_CommandAI_disableStance_mindustry_ai_UnitStance,
	(void *) M_mindustry_ai_types_CommandAI_isAttacking_R_boolean,
	(void *) M_mindustry_ai_types_CommandAI_shouldBoost_R_boolean,
	(void *) M_mindustry_ai_types_CommandAI_clearCommands,
	(void *) M_mindustry_ai_types_CommandAI_tryPickupUnit_mindustry_gen_Payloadc,
	(void *) M_mindustry_ai_types_CommandAI_defaultBehavior,
	(void *) M_mindustry_ai_types_CommandAI_finishPath,
	(void *) M_mindustry_ai_types_CommandAI_commandQueue_arc_math_geom_Position,
	(void *) M_mindustry_ai_types_CommandAI_nearAttackTarget_float_float_float_R_boolean,
	(void *) M_mindustry_ai_types_CommandAI_hasCommand_R_boolean,
	(void *) M_mindustry_ai_types_CommandAI_setupLastPos,
	(void *) M_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2_boolean,
	(void *) M_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean,
	(void *) M_mindustry_ai_types_CommandAI_lambda$defaultBehavior$0_float_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_ai_types_CommandAI_lambda$tryPickupUnit$0_mindustry_gen_Payloadc_mindustry_gen_Unit_R_boolean,
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
	{ "unit", "(Lmindustry/gen/Unit;)V" },
	{ "unit", "()Lmindustry/gen/Unit;" },
	{ "hit", "(Lmindustry/gen/Bullet;)V" },
	{ "isValidController", "()Z" },
	{ "isLogicControllable", "()Z" },
	{ "updateUnit", "()V" },
	{ "removed", "(Lmindustry/gen/Unit;)V" },
	{ "afterRead", "(Lmindustry/gen/Unit;)V" },
	{ "resetTimers", "()V" },
	{ "hasStance", "(Lmindustry/ai/UnitStance;)Z" },
	{ "stanceChanged", "()V" },
	{ "keepState", "()Z" },
	{ "stopShooting", "()V" },
	{ "fallback", "()Lmindustry/entities/units/AIController;" },
	{ "useFallback", "()Z" },
	{ "updateVisuals", "()V" },
	{ "updateMovement", "()V" },
	{ "updateTargeting", "()V" },
	{ "faceTarget", "()V" },
	{ "faceMovement", "()V" },
	{ "invalid", "(Lmindustry/gen/Teamc;)Z" },
	{ "pathfind", "(I)V" },
	{ "pathfind", "(IZ)V" },
	{ "pathfind", "(IZZ)V" },
	{ "alterPathfind", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "targetInvalidated", "()V" },
	{ "updateWeapons", "()V" },
	{ "checkTarget", "(Lmindustry/gen/Teamc;FFF)Z" },
	{ "shouldFire", "()Z" },
	{ "shouldShoot", "()Z" },
	{ "targetFlag", "(FFLmindustry/world/meta/BlockFlag;Z)Lmindustry/gen/Teamc;" },
	{ "targetFlagActive", "(FFLmindustry/world/meta/BlockFlag;Z)Lmindustry/gen/Teamc;" },
	{ "target", "(FFFZZ)Lmindustry/gen/Teamc;" },
	{ "retarget", "()Z" },
	{ "findMainTarget", "(FFFZZ)Lmindustry/gen/Teamc;" },
	{ "findTarget", "(FFFZZ)Lmindustry/gen/Teamc;" },
	{ "commandTarget", "(Lmindustry/gen/Teamc;)V" },
	{ "commandPosition", "(Larc/math/geom/Vec2;)V" },
	{ "init", "()V" },
	{ "getClosestSpawner", "()Lmindustry/world/Tile;" },
	{ "unloadPayloads", "()V" },
	{ "circleAttack", "(F)V" },
	{ "circle", "(Larc/math/geom/Position;F)V" },
	{ "circle", "(Larc/math/geom/Position;FF)V" },
	{ "moveTo", "(Larc/math/geom/Position;F)V" },
	{ "moveTo", "(Larc/math/geom/Position;FF)V" },
	{ "moveTo", "(Larc/math/geom/Position;FFZLarc/math/geom/Vec2;)V" },
	{ "moveTo", "(Larc/math/geom/Position;FFZLarc/math/geom/Vec2;Z)V" },
	{ "prefSpeed", "()F" },
	{ "lambda$target$1", "(ZLmindustry/gen/Building;)Z" },
	{ "currentCommand", "()Lmindustry/ai/UnitCommand;" },
	{ "command", "(Lmindustry/ai/UnitCommand;)V" },
	{ "setStance", "(Lmindustry/ai/UnitStance;Z)V" },
	{ "setStance", "(Lmindustry/ai/UnitStance;)V" },
	{ "disableStance", "(Lmindustry/ai/UnitStance;)V" },
	{ "isAttacking", "()Z" },
	{ "shouldBoost", "()Z" },
	{ "clearCommands", "()V" },
	{ "tryPickupUnit", "(Lmindustry/gen/Payloadc;)V" },
	{ "defaultBehavior", "()V" },
	{ "finishPath", "()V" },
	{ "commandQueue", "(Larc/math/geom/Position;)V" },
	{ "nearAttackTarget", "(FFF)Z" },
	{ "hasCommand", "()Z" },
	{ "setupLastPos", "()V" },
	{ "commandPosition", "(Larc/math/geom/Vec2;Z)V" },
	{ "commandTarget", "(Lmindustry/gen/Teamc;Z)V" },
	{ "lambda$defaultBehavior$0", "(FLmindustry/gen/Unit;)Z" },
	{ "lambda$tryPickupUnit$0", "(Lmindustry/gen/Payloadc;Lmindustry/gen/Unit;)Z" },
};

static FieldMetadata fields[] {
	{ "maxCommandQueueSize", &class_int, (intptr_t) &SF_mindustry_ai_types_CommandAI_maxCommandQueueSize, "I", 28 },
	{ "avoidInterval", &class_int, (intptr_t) &SF_mindustry_ai_types_CommandAI_avoidInterval, "I", 28 },
	{ "moveTarget", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_ai_types_CommandAI_moveTarget, "Larc/math/geom/Vec2;", 28 },
	{ "offsetedDestination", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_ai_types_CommandAI_offsetedDestination, "Larc/math/geom/Vec2;", 28 },
	{ "currentDestination", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_ai_types_CommandAI_currentDestination, "Larc/math/geom/Vec2;", 28 },
	{ "tmpPayload", &class_mindustry_world_blocks_payloads_UnitPayload, (intptr_t) &SF_mindustry_ai_types_CommandAI_tmpPayload, "Lmindustry/world/blocks/payloads/UnitPayload;", 28 },
	{ "transferStateNone", &class_int, (intptr_t) &SF_mindustry_ai_types_CommandAI_transferStateNone, "I", 28 },
	{ "transferStateLoad", &class_int, (intptr_t) &SF_mindustry_ai_types_CommandAI_transferStateLoad, "I", 28 },
	{ "transferStateUnload", &class_int, (intptr_t) &SF_mindustry_ai_types_CommandAI_transferStateUnload, "I", 28 },
	{ "commandQueue", &class_arc_struct_Seq, offsetof(mindustry_ai_types_CommandAI, F_commandQueue), "Larc/struct/Seq;", 1 },
	{ "targetPos", &class_arc_math_geom_Vec2, offsetof(mindustry_ai_types_CommandAI, F_targetPos), "Larc/math/geom/Vec2;", 1 },
	{ "targetBuild", &class_mindustry_gen_Building, offsetof(mindustry_ai_types_CommandAI, F_targetBuild), "Lmindustry/gen/Building;", 1 },
	{ "attackTarget", &class_mindustry_gen_Teamc, offsetof(mindustry_ai_types_CommandAI, F_attackTarget), "Lmindustry/gen/Teamc;", 1 },
	{ "group", &class_mindustry_ai_UnitGroup, offsetof(mindustry_ai_types_CommandAI, F_group), "Lmindustry/ai/UnitGroup;", 1 },
	{ "groupIndex", &class_int, offsetof(mindustry_ai_types_CommandAI, F_groupIndex), "I", 1 },
	{ "unreachableBuildings", &class_arc_struct_IntSeq, offsetof(mindustry_ai_types_CommandAI, F_unreachableBuildings), "Larc/struct/IntSeq;", 1 },
	{ "readAttackTarget", &class_int, offsetof(mindustry_ai_types_CommandAI, F_readAttackTarget), "I", 1 },
	{ "stopAtTarget", &class_boolean, offsetof(mindustry_ai_types_CommandAI, F_stopAtTarget), "Z", 4 },
	{ "stopWhenInRange", &class_boolean, offsetof(mindustry_ai_types_CommandAI, F_stopWhenInRange), "Z", 4 },
	{ "lastTargetPos", &class_arc_math_geom_Vec2, offsetof(mindustry_ai_types_CommandAI, F_lastTargetPos), "Larc/math/geom/Vec2;", 4 },
	{ "blockingUnit", &class_boolean, offsetof(mindustry_ai_types_CommandAI, F_blockingUnit), "Z", 4 },
	{ "timeSpentBlocked", &class_float, offsetof(mindustry_ai_types_CommandAI, F_timeSpentBlocked), "F", 4 },
	{ "payloadPickupCooldown", &class_float, offsetof(mindustry_ai_types_CommandAI, F_payloadPickupCooldown), "F", 4 },
	{ "transferState", &class_int, offsetof(mindustry_ai_types_CommandAI, F_transferState), "I", 4 },
	{ "command", &class_mindustry_ai_UnitCommand, offsetof(mindustry_ai_types_CommandAI, F_command), "Lmindustry/ai/UnitCommand;", 1 },
	{ "stances", &class_arc_struct_Bits, offsetof(mindustry_ai_types_CommandAI, F_stances), "Larc/struct/Bits;", 1 },
	{ "commandController", &class_mindustry_entities_units_AIController, offsetof(mindustry_ai_types_CommandAI, F_commandController), "Lmindustry/entities/units/AIController;", 4 },
	{ "lastCommand", &class_mindustry_ai_UnitCommand, offsetof(mindustry_ai_types_CommandAI, F_lastCommand), "Lmindustry/ai/UnitCommand;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_CommandAI, 0, "()V", 1 },
	{ "currentCommand", (intptr_t) M_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand, VTABLE_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand, "()Lmindustry/ai/UnitCommand;", 1 },
	{ "command", (intptr_t) M_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand, VTABLE_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand, "(Lmindustry/ai/UnitCommand;)V", 1 },
	{ "hasStance", (intptr_t) M_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean, VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean, "(Lmindustry/ai/UnitStance;)Z", 1 },
	{ "setStance", (intptr_t) M_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance_boolean, VTABLE_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance_boolean, "(Lmindustry/ai/UnitStance;Z)V", 1 },
	{ "setStance", (intptr_t) M_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance, VTABLE_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance, "(Lmindustry/ai/UnitStance;)V", 1 },
	{ "disableStance", (intptr_t) M_mindustry_ai_types_CommandAI_disableStance_mindustry_ai_UnitStance, VTABLE_mindustry_ai_types_CommandAI_disableStance_mindustry_ai_UnitStance, "(Lmindustry/ai/UnitStance;)V", 1 },
	{ "stanceChanged", (intptr_t) M_mindustry_ai_types_CommandAI_stanceChanged, VTABLE_mindustry_ai_types_CommandAI_stanceChanged, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_ai_types_CommandAI_init, VTABLE_mindustry_ai_types_CommandAI_init, "()V", 1 },
	{ "isLogicControllable", (intptr_t) M_mindustry_ai_types_CommandAI_isLogicControllable_R_boolean, VTABLE_mindustry_ai_types_CommandAI_isLogicControllable_R_boolean, "()Z", 1 },
	{ "isAttacking", (intptr_t) M_mindustry_ai_types_CommandAI_isAttacking_R_boolean, VTABLE_mindustry_ai_types_CommandAI_isAttacking_R_boolean, "()Z", 1 },
	{ "updateUnit", (intptr_t) M_mindustry_ai_types_CommandAI_updateUnit, VTABLE_mindustry_ai_types_CommandAI_updateUnit, "()V", 1 },
	{ "shouldBoost", (intptr_t) M_mindustry_ai_types_CommandAI_shouldBoost_R_boolean, VTABLE_mindustry_ai_types_CommandAI_shouldBoost_R_boolean, "()Z", 4 },
	{ "clearCommands", (intptr_t) M_mindustry_ai_types_CommandAI_clearCommands, VTABLE_mindustry_ai_types_CommandAI_clearCommands, "()V", 1 },
	{ "tryPickupUnit", (intptr_t) M_mindustry_ai_types_CommandAI_tryPickupUnit_mindustry_gen_Payloadc, VTABLE_mindustry_ai_types_CommandAI_tryPickupUnit_mindustry_gen_Payloadc, "(Lmindustry/gen/Payloadc;)V", 0 },
	{ "findMainTarget", (intptr_t) M_mindustry_ai_types_CommandAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_ai_types_CommandAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(FFFZZ)Lmindustry/gen/Teamc;", 1 },
	{ "defaultBehavior", (intptr_t) M_mindustry_ai_types_CommandAI_defaultBehavior, VTABLE_mindustry_ai_types_CommandAI_defaultBehavior, "()V", 1 },
	{ "finishPath", (intptr_t) M_mindustry_ai_types_CommandAI_finishPath, VTABLE_mindustry_ai_types_CommandAI_finishPath, "()V", 0 },
	{ "removed", (intptr_t) M_mindustry_ai_types_CommandAI_removed_mindustry_gen_Unit, VTABLE_mindustry_ai_types_CommandAI_removed_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "commandQueue", (intptr_t) M_mindustry_ai_types_CommandAI_commandQueue_arc_math_geom_Position, VTABLE_mindustry_ai_types_CommandAI_commandQueue_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_ai_types_CommandAI_afterRead_mindustry_gen_Unit, VTABLE_mindustry_ai_types_CommandAI_afterRead_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "shouldFire", (intptr_t) M_mindustry_ai_types_CommandAI_shouldFire_R_boolean, VTABLE_mindustry_ai_types_CommandAI_shouldFire_R_boolean, "()Z", 1 },
	{ "hit", (intptr_t) M_mindustry_ai_types_CommandAI_hit_mindustry_gen_Bullet, VTABLE_mindustry_ai_types_CommandAI_hit_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "keepState", (intptr_t) M_mindustry_ai_types_CommandAI_keepState_R_boolean, VTABLE_mindustry_ai_types_CommandAI_keepState_R_boolean, "()Z", 1 },
	{ "findTarget", (intptr_t) M_mindustry_ai_types_CommandAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_ai_types_CommandAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(FFFZZ)Lmindustry/gen/Teamc;", 1 },
	{ "nearAttackTarget", (intptr_t) M_mindustry_ai_types_CommandAI_nearAttackTarget_float_float_float_R_boolean, VTABLE_mindustry_ai_types_CommandAI_nearAttackTarget_float_float_float_R_boolean, "(FFF)Z", 1 },
	{ "retarget", (intptr_t) M_mindustry_ai_types_CommandAI_retarget_R_boolean, VTABLE_mindustry_ai_types_CommandAI_retarget_R_boolean, "()Z", 1 },
	{ "hasCommand", (intptr_t) M_mindustry_ai_types_CommandAI_hasCommand_R_boolean, VTABLE_mindustry_ai_types_CommandAI_hasCommand_R_boolean, "()Z", 1 },
	{ "setupLastPos", (intptr_t) M_mindustry_ai_types_CommandAI_setupLastPos, VTABLE_mindustry_ai_types_CommandAI_setupLastPos, "()V", 1 },
	{ "commandPosition", (intptr_t) M_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2, VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "commandPosition", (intptr_t) M_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2_boolean, VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2_boolean, "(Larc/math/geom/Vec2;Z)V", 1 },
	{ "commandTarget", (intptr_t) M_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc, VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc, "(Lmindustry/gen/Teamc;)V", 1 },
	{ "commandTarget", (intptr_t) M_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean, VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean, "(Lmindustry/gen/Teamc;Z)V", 1 },
	{ "lambda$defaultBehavior$0", (intptr_t) M_mindustry_ai_types_CommandAI_lambda$defaultBehavior$0_float_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_ai_types_CommandAI_lambda$defaultBehavior$0_float_mindustry_gen_Unit_R_boolean, "(FLmindustry/gen/Unit;)Z", 4098 },
	{ "lambda$tryPickupUnit$0", (intptr_t) M_mindustry_ai_types_CommandAI_lambda$tryPickupUnit$0_mindustry_gen_Payloadc_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_ai_types_CommandAI_lambda$tryPickupUnit$0_mindustry_gen_Payloadc_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Payloadc;Lmindustry/gen/Unit;)Z", 4098 },
	{ "lambda$updateUnit$0", (intptr_t) SM_mindustry_ai_types_CommandAI_lambda$updateUnit$0_arc_math_geom_Position_R_boolean, 0, "(Larc/math/geom/Position;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_types_CommandAI, 0, "()V", 8 },
};

Class class_mindustry_ai_types_CommandAI{
		.nativeName = (intptr_t) "mindustry/ai/types/CommandAI",
		.parentClass = (intptr_t) &class_mindustry_entities_units_AIController,
		.size = sizeof(mindustry_ai_types_CommandAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_CommandAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_CommandAI,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_types_CommandAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 80,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_CommandAI = registerClass(&class_mindustry_ai_types_CommandAI);

}
