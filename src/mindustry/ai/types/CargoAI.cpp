#include "mindustry/ai/types/CargoAI.h"
#include "mindustry/ai/types/CargoAI_invoke_arc_func_Boolf_2.h"
#include "mindustry/ai/types/CargoAI_invoke_arc_func_Boolf_3.h"
#include "mindustry/ai/types/CargoAI_invoke_arc_func_Floatf_2.h"
#include "mindustry/ai/types/CargoAI_invoke_arc_func_Floatf_3.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/func/Intf.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "arc/func/Boolf.h"
#include "java/lang/Math.h"
#include "arc/func/Floatf.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Structs.h"
#include "mindustry/ai/types/CargoAI_invoke_arc_func_Intf_1.h"
#include "mindustry/type/Item.h"
#include "mindustry/gen/BuildingTetherc.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "arc/util/Interval.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/ai/types/CargoAI.h"
#include "mindustry/game/Team.h"
#include "mindustry/gen/Call.h"
#include "mindustry/Vars.h"
#include "mindustry/world/blocks/units/UnitCargoUnloadPoint_UnitCargoUnloadPointBuild.h"

extern "C" {

jobject SF_mindustry_ai_types_CargoAI_orderedItems;
jobject SF_mindustry_ai_types_CargoAI_targets;
jfloat SF_mindustry_ai_types_CargoAI_emptyWaitTime;
jfloat SF_mindustry_ai_types_CargoAI_dropSpacing;
jfloat SF_mindustry_ai_types_CargoAI_transferRange;
jfloat SF_mindustry_ai_types_CargoAI_moveRange;
jfloat SF_mindustry_ai_types_CargoAI_moveSmoothing;

void mark_mindustry_ai_types_CargoAI(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_types_CargoAI_orderedItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_types_CargoAI_orderedItems)->clazz)->markFunction)((jobject) SF_mindustry_ai_types_CargoAI_orderedItems, mark, depth + 1);
		if (SF_mindustry_ai_types_CargoAI_targets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_types_CargoAI_targets)->clazz)->markFunction)((jobject) SF_mindustry_ai_types_CargoAI_targets, mark, depth + 1);
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
	auto self = (mindustry_ai_types_CargoAI *) object;
	if (self->F_unloadTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unloadTarget)->clazz)->markFunction)((jobject) self->F_unloadTarget, mark, depth + 1);
	if (self->F_itemTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemTarget)->clazz)->markFunction)((jobject) self->F_itemTarget, mark, depth + 1);
}

void init_mindustry_ai_types_CargoAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CargoAI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_CargoAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_mindustry_entities_units_AIController(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_noDestTimer = (jfloat(0));
	LINE_NUMBER(24);
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_targetIndex = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CargoAI_updateMovement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CargoAI:updateMovement", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_BuildingTetherc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_BuildingTetherc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_BuildingTetherc_building_R_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BuildingTetherc, INDEX_mindustry_gen_BuildingTetherc_building_R_mindustry_gen_Building, (frame[1].o)))(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_mindustry_gen_BuildingTetherc_building_R_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BuildingTetherc, INDEX_mindustry_gen_BuildingTetherc_building_R_mindustry_gen_Building, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	if (sp[0].o != nullptr) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_hasItem_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hasItem_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(36);
	((func_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float_float])(ctx, (frame[0].o), (frame[2].o), (clinit_mindustry_ai_types_CargoAI(ctx), (jfloat)SF_mindustry_ai_types_CargoAI_moveRange), (clinit_mindustry_ai_types_CargoAI(ctx), (jfloat)SF_mindustry_ai_types_CargoAI_moveSmoothing));
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, (frame[2].o), (clinit_mindustry_ai_types_CargoAI(ctx), (jfloat)SF_mindustry_ai_types_CargoAI_transferRange));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(40);
	jint temp0 = (jint)((func_mindustry_ai_types_CargoAI_retarget_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CargoAI_retarget_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(41);
	((func_mindustry_ai_types_CargoAI_findAnyTarget_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CargoAI_findAnyTarget_mindustry_gen_Building])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_itemTarget;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp0 = (jint)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_itemCapacity;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	sp[3].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_itemTarget;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[2].o, sp[3].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_gen_Call_takeItems_mindustry_gen_Building_mindustry_type_Item_int_mindustry_gen_Unit(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(53);
	jint temp0 = (jint)((func_mindustry_ai_types_CargoAI_retarget_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_CargoAI_retarget_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_ai_types_CargoAI_findDropTarget_mindustry_type_Item_int_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CargoAI_findDropTarget_mindustry_type_Item_int_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jobject(nullptr)));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_clearItem) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_clearItem])(ctx, sp[0].o);
	goto label_9;
	}
label_14:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild *) NULL_CHECK(sp[0].o))->F_item;
	sp[1].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_itemTarget;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	jint temp0 = (jint)((func_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_isPayload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_isPayload_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(65);
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}
label_20:;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	((func_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, (clinit_mindustry_ai_types_CargoAI(ctx), (jfloat)SF_mindustry_ai_types_CargoAI_moveRange), (clinit_mindustry_ai_types_CargoAI(ctx), (jfloat)SF_mindustry_ai_types_CargoAI_moveSmoothing));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (clinit_mindustry_ai_types_CargoAI(ctx), (jfloat)SF_mindustry_ai_types_CargoAI_transferRange));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(1)), (clinit_mindustry_ai_types_CargoAI(ctx), (jfloat)SF_mindustry_ai_types_CargoAI_dropSpacing));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[2].o))->F_amount;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	frame[3].i = temp1;
	LINE_NUMBER(76);
	if ((frame[3].i) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, sp[1].o);
	jint temp0 = frame[3].i;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	}
label_25:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_hasItem_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hasItem_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_ai_types_CargoAI *) NULL_CHECK(sp[0].o))->F_noDestTimer) + (clinit_mindustry_ai_types_CargoAI(ctx), (jfloat)SF_mindustry_ai_types_CargoAI_dropSpacing);
	((mindustry_ai_types_CargoAI *) NULL_CHECK(sp[0].o))->F_noDestTimer = temp0;
	if ((floatCompare(temp0, (clinit_mindustry_ai_types_CargoAI(ctx), (jfloat)SF_mindustry_ai_types_CargoAI_emptyWaitTime), -1)) < 0) goto label_9;
	}
label_27:;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, sp[2].o);
	jint temp0 = (jint)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_targetIndex;
	sp[3].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	jint temp1 = (jint)((func_mindustry_ai_types_CargoAI_findDropTarget_mindustry_type_Item_int_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_types_CargoAI_findDropTarget_mindustry_type_Item_int_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int])(ctx, sp[1].o, sp[2].o, temp0, sp[3].o);
	((mindustry_ai_types_CargoAI *) NULL_CHECK(sp[0].o))->F_targetIndex = temp1;
	LINE_NUMBER(86);
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_noDestTimer = (jfloat(0));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_clearItem) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_clearItem])(ctx, sp[0].o);
	}
label_9:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_ai_types_CargoAI_findDropTarget_mindustry_type_Item_int_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CargoAI:findDropTarget", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(101);
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(102);
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_itemTarget = (jref) (frame[1].o);
	LINE_NUMBER(105);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_indexer;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_team;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[3].o = (jobject)SF_mindustry_world_meta_BlockFlag_unitCargoUnloadPoint;
	sp[1].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_CargoAI_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ai_types_CargoAI_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ai_types_CargoAI_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(107);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(110);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[4].i;
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(111);
	jint temp0 = ((frame[4].i) + (frame[2].i)) + (jint(1));
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	frame[5].i = (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	LINE_NUMBER(112);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild, sp[0].o));
	LINE_NUMBER(114);
	if (((jint)((mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild *) NULL_CHECK((frame[6].o)))->F_stale) != 0) goto label_10;
	}
	{
	LINE_NUMBER(115);
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget = (jref) (frame[6].o);
	LINE_NUMBER(116);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_10:;
	{
	LINE_NUMBER(110);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (jint(0)));
	((mindustry_ai_types_CargoAI *) NULL_CHECK(sp[0].o))->F_unloadTarget = (jref) (checkCast(ctx, &class_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild, sp[1].o));
	LINE_NUMBER(123);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CargoAI_findAnyTarget_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CargoAI:findAnyTarget", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(129);
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_itemTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(132);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_unitCargoUnloadPoint;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(136);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_orderedItems;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (jint(0));
	LINE_NUMBER(137);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[4].o));
	if (temp0 <= 0) goto label_9;
	}
	{
	LINE_NUMBER(139);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_orderedItems;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	}
label_9:;
	LINE_NUMBER(141);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(144);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_orderedItems;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_CargoAI_invoke_arc_func_Floatf_2(ctx);
		auto proxy = (mindustry_ai_types_CargoAI_invoke_arc_func_Floatf_2 *) gcAlloc(ctx, &class_mindustry_ai_types_CargoAI_invoke_arc_func_Floatf_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(149);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_orderedItems;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(150);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_CargoAI_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ai_types_CargoAI_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ai_types_CargoAI_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(152);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_17;
	}
	{
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_itemTarget = (jref) (frame[5].o);
	}
label_17:;
	{
	LINE_NUMBER(154);
	frame[6].i = (jint(0));
	}
label_18:;
	{
	jint temp0 = frame[6].i;
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_19;
	}
	{
	LINE_NUMBER(155);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	jint temp0 = (frame[6].i) + ((jint)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_targetIndex);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild, sp[0].o));
	LINE_NUMBER(157);
	frame[3].o = (frame[7].o);
	LINE_NUMBER(159);
	if (((jint)((mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild *) NULL_CHECK((frame[7].o)))->F_stale) != 0) goto label_23;
	}
	{
	LINE_NUMBER(160);
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget = (jref) (frame[7].o);
	LINE_NUMBER(161);
	goto label_14;
	}
label_23:;
	{
	LINE_NUMBER(154);
	INST_IINC(6, 1);
	goto label_18;
	}
label_19:;
	LINE_NUMBER(164);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget;
	if (sp[0].o != nullptr) goto label_26;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_26;
	{
	LINE_NUMBER(168);
	((mindustry_ai_types_CargoAI *) NULL_CHECK((frame[0].o)))->F_unloadTarget = (jref) (frame[3].o);
	}
label_26:;
	{
	LINE_NUMBER(171);
	clinit_mindustry_ai_types_CargoAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_CargoAI_targets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_CargoAI_sortTargets_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CargoAI:sortTargets", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_CargoAI_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_ai_types_CargoAI_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_ai_types_CargoAI_invoke_arc_func_Intf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_CargoAI_invoke_arc_func_Floatf_3(ctx);
		auto proxy = (mindustry_ai_types_CargoAI_invoke_arc_func_Floatf_3 *) gcAlloc(ctx, &class_mindustry_ai_types_CargoAI_invoke_arc_func_Floatf_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(ctx, sp[2].o);
	sp[1].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ai_types_CargoAI_lambda$sortTargets$1_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CargoAI:lambda$sortTargets$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_dst2_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ai_types_CargoAI_lambda$sortTargets$0_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CargoAI:lambda$sortTargets$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_CargoAI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_types_CargoAI_lambda$findAnyTarget$1_mindustry_type_Item_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CargoAI:lambda$findAnyTarget$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_CargoAI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild *) NULL_CHECK((frame[1].o)))->F_item;
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

jfloat SM_mindustry_ai_types_CargoAI_lambda$findAnyTarget$0_mindustry_gen_Building_mindustry_type_Item_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CargoAI:lambda$findAnyTarget$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_CargoAI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (jfloat((-temp0)));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_types_CargoAI_lambda$findDropTarget$0_mindustry_type_Item_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CargoAI:lambda$findDropTarget$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_CargoAI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild *) NULL_CHECK((frame[1].o)))->F_item;
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

void clinit_mindustry_ai_types_CargoAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_AIController(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/CargoAI:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_CargoAI(ctx);
	{
	LINE_NUMBER(15);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ai_types_CargoAI(ctx);
	SF_mindustry_ai_types_CargoAI_orderedItems = sp[0].o;
	LINE_NUMBER(16);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ai_types_CargoAI(ctx);
	SF_mindustry_ai_types_CargoAI_targets = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_ai_types_CargoAI(ctx);
	SF_mindustry_ai_types_CargoAI_emptyWaitTime = (jfloat(120.0f));
	clinit_mindustry_ai_types_CargoAI(ctx);
	SF_mindustry_ai_types_CargoAI_dropSpacing = (jfloat(90.0f));
	LINE_NUMBER(19);
	clinit_mindustry_ai_types_CargoAI(ctx);
	SF_mindustry_ai_types_CargoAI_transferRange = (jfloat(20.0f));
	clinit_mindustry_ai_types_CargoAI(ctx);
	SF_mindustry_ai_types_CargoAI_moveRange = (jfloat(6.0f));
	clinit_mindustry_ai_types_CargoAI(ctx);
	SF_mindustry_ai_types_CargoAI_moveSmoothing = (jfloat(20.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_types_CargoAI;
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

	{ // Field unloadTarget
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field itemTarget
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_ai_types_CargoAI[] {
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
	(void *) M_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_units_UnitController_isValidController_R_boolean,
	(void *) M_mindustry_entities_units_AIController_isLogicControllable_R_boolean,
	(void *) M_mindustry_entities_units_AIController_updateUnit,
	(void *) M_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_AIController_afterRead_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_AIController_resetTimers,
	(void *) M_mindustry_entities_units_AIController_hasStance_mindustry_ai_UnitStance_R_boolean,
	(void *) M_mindustry_entities_units_AIController_stanceChanged,
	(void *) M_mindustry_entities_units_AIController_keepState_R_boolean,
	(void *) M_mindustry_entities_units_AIController_stopShooting,
	(void *) M_mindustry_entities_units_AIController_fallback_R_mindustry_entities_units_AIController,
	(void *) M_mindustry_entities_units_AIController_useFallback_R_boolean,
	(void *) M_mindustry_entities_units_AIController_updateVisuals,
	(void *) M_mindustry_ai_types_CargoAI_updateMovement,
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
	(void *) M_mindustry_entities_units_AIController_shouldFire_R_boolean,
	(void *) M_mindustry_entities_units_AIController_shouldShoot_R_boolean,
	(void *) M_mindustry_entities_units_AIController_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_retarget_R_boolean,
	(void *) M_mindustry_entities_units_AIController_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_commandTarget_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_commandPosition_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_units_AIController_init,
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
	(void *) M_mindustry_ai_types_CargoAI_findDropTarget_mindustry_type_Item_int_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int,
	(void *) M_mindustry_ai_types_CargoAI_findAnyTarget_mindustry_gen_Building,
	(void *) M_mindustry_ai_types_CargoAI_sortTargets_arc_struct_Seq,
	(void *) M_mindustry_ai_types_CargoAI_lambda$sortTargets$1_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_float,
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
	{ "findDropTarget", "(Lmindustry/type/Item;ILmindustry/world/blocks/units/UnitCargoUnloadPoint$UnitCargoUnloadPointBuild;)I" },
	{ "findAnyTarget", "(Lmindustry/gen/Building;)V" },
	{ "sortTargets", "(Larc/struct/Seq;)V" },
	{ "lambda$sortTargets$1", "(Lmindustry/world/blocks/units/UnitCargoUnloadPoint$UnitCargoUnloadPointBuild;)F" },
};

static FieldMetadata fields[] {
	{ "orderedItems", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_types_CargoAI_orderedItems, "Larc/struct/Seq;", 8 },
	{ "targets", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_types_CargoAI_targets, "Larc/struct/Seq;", 8 },
	{ "emptyWaitTime", &class_float, (intptr_t) &SF_mindustry_ai_types_CargoAI_emptyWaitTime, "F", 9 },
	{ "dropSpacing", &class_float, (intptr_t) &SF_mindustry_ai_types_CargoAI_dropSpacing, "F", 9 },
	{ "transferRange", &class_float, (intptr_t) &SF_mindustry_ai_types_CargoAI_transferRange, "F", 9 },
	{ "moveRange", &class_float, (intptr_t) &SF_mindustry_ai_types_CargoAI_moveRange, "F", 9 },
	{ "moveSmoothing", &class_float, (intptr_t) &SF_mindustry_ai_types_CargoAI_moveSmoothing, "F", 9 },
	{ "unloadTarget", &class_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild, offsetof(mindustry_ai_types_CargoAI, F_unloadTarget), "Lmindustry/world/blocks/units/UnitCargoUnloadPoint$UnitCargoUnloadPointBuild;", 1 },
	{ "itemTarget", &class_mindustry_type_Item, offsetof(mindustry_ai_types_CargoAI, F_itemTarget), "Lmindustry/type/Item;", 1 },
	{ "noDestTimer", &class_float, offsetof(mindustry_ai_types_CargoAI, F_noDestTimer), "F", 1 },
	{ "targetIndex", &class_int, offsetof(mindustry_ai_types_CargoAI, F_targetIndex), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_CargoAI, 0, "()V", 1 },
	{ "updateMovement", (intptr_t) M_mindustry_ai_types_CargoAI_updateMovement, VTABLE_mindustry_ai_types_CargoAI_updateMovement, "()V", 1 },
	{ "findDropTarget", (intptr_t) M_mindustry_ai_types_CargoAI_findDropTarget_mindustry_type_Item_int_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int, VTABLE_mindustry_ai_types_CargoAI_findDropTarget_mindustry_type_Item_int_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int, "(Lmindustry/type/Item;ILmindustry/world/blocks/units/UnitCargoUnloadPoint$UnitCargoUnloadPointBuild;)I", 1 },
	{ "findAnyTarget", (intptr_t) M_mindustry_ai_types_CargoAI_findAnyTarget_mindustry_gen_Building, VTABLE_mindustry_ai_types_CargoAI_findAnyTarget_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "sortTargets", (intptr_t) M_mindustry_ai_types_CargoAI_sortTargets_arc_struct_Seq, VTABLE_mindustry_ai_types_CargoAI_sortTargets_arc_struct_Seq, "(Larc/struct/Seq;)V", 0 },
	{ "lambda$sortTargets$1", (intptr_t) M_mindustry_ai_types_CargoAI_lambda$sortTargets$1_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_float, VTABLE_mindustry_ai_types_CargoAI_lambda$sortTargets$1_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_float, "(Lmindustry/world/blocks/units/UnitCargoUnloadPoint$UnitCargoUnloadPointBuild;)F", 4098 },
	{ "lambda$sortTargets$0", (intptr_t) SM_mindustry_ai_types_CargoAI_lambda$sortTargets$0_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int, 0, "(Lmindustry/world/blocks/units/UnitCargoUnloadPoint$UnitCargoUnloadPointBuild;)I", 4106 },
	{ "lambda$findAnyTarget$1", (intptr_t) SM_mindustry_ai_types_CargoAI_lambda$findAnyTarget$1_mindustry_type_Item_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_boolean, 0, "(Lmindustry/type/Item;Lmindustry/world/blocks/units/UnitCargoUnloadPoint$UnitCargoUnloadPointBuild;)Z", 4106 },
	{ "lambda$findAnyTarget$0", (intptr_t) SM_mindustry_ai_types_CargoAI_lambda$findAnyTarget$0_mindustry_gen_Building_mindustry_type_Item_R_float, 0, "(Lmindustry/gen/Building;Lmindustry/type/Item;)F", 4106 },
	{ "lambda$findDropTarget$0", (intptr_t) SM_mindustry_ai_types_CargoAI_lambda$findDropTarget$0_mindustry_type_Item_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_boolean, 0, "(Lmindustry/type/Item;Lmindustry/world/blocks/units/UnitCargoUnloadPoint$UnitCargoUnloadPointBuild;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_types_CargoAI, 0, "()V", 8 },
};

Class class_mindustry_ai_types_CargoAI{
		.nativeName = (intptr_t) "mindustry/ai/types/CargoAI",
		.parentClass = (intptr_t) &class_mindustry_entities_units_AIController,
		.size = sizeof(mindustry_ai_types_CargoAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_CargoAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_CargoAI,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_types_CargoAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 65,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_CargoAI = registerClass(&class_mindustry_ai_types_CargoAI);

}
