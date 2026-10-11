#include "mindustry/ai/types/MinerAI.h"
#include "mindustry/ai/ItemUnitStance.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/func/Boolf.h"
#include "arc/func/Floatf.h"
#include "mindustry/ai/UnitStance.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/ai/types/MinerAI.h"
#include "mindustry/ai/types/MinerAI_invoke_arc_func_Floatf_3.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/type/Item.h"
#include "mindustry/ai/types/MinerAI_invoke_arc_func_Floatf_2.h"
#include "arc/util/Interval.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/ai/types/MinerAI_invoke_arc_func_Boolf_3.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/ai/types/MinerAI_invoke_arc_func_Boolf_2.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"

extern "C" {


void mark_mindustry_ai_types_MinerAI(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_ai_types_MinerAI *) object;
	if (self->F_targetItem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetItem)->clazz)->markFunction)((jobject) self->F_targetItem, mark, depth + 1);
	if (self->F_ore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ore)->clazz)->markFunction)((jobject) self->F_ore, mark, depth + 1);
}

void clinit_mindustry_ai_types_MinerAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_AIController(ctx);
}

void init_mindustry_ai_types_MinerAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/MinerAI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_MinerAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_entities_units_AIController(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_mining = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_MinerAI_stanceChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/MinerAI:stanceChanged", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_targetItem;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[2].o)));
	sp[0].o = frame[1].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_mineAuto;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_targetItem;
	sp[1].o = (jobject)SM_mindustry_ai_ItemUnitStance_getByItem_mindustry_type_Item_R_mindustry_ai_ItemUnitStance(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(19);
	((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_mining = (jint(0));
	LINE_NUMBER(20);
	((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_targetItem = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_MinerAI_updateMovement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/MinerAI:updateMovement", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_canMine_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canMine_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_mineTile;
	jint temp0 = (jint)((func_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_mineTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_mineTile_mindustry_world_Tile])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_4:;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_6;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[4].o)));
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_8;
	}
label_6:;
	INST_ACONST_NULL();
label_8:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(36);
	if (((jint)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_mining) == 0) goto label_10;
	}
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(1)), (jfloat(240.0f)));
	if (temp0 != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_targetItem;
	if (sp[0].o != nullptr) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(38);
	if ((frame[2].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_mineAuto;
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_MinerAI_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ai_types_MinerAI_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ai_types_MinerAI_invoke_arc_func_Boolf_2);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_MinerAI_invoke_arc_func_Floatf_2(ctx);
		auto proxy = (mindustry_ai_types_MinerAI_invoke_arc_func_Floatf_2 *) gcAlloc(ctx, &class_mindustry_ai_types_MinerAI_invoke_arc_func_Floatf_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_ai_types_MinerAI *) NULL_CHECK(sp[0].o))->F_targetItem = (jref) (checkCast(ctx, &class_mindustry_type_Item, sp[1].o));
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_mineItems;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_MinerAI_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ai_types_MinerAI_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ai_types_MinerAI_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_MinerAI_invoke_arc_func_Floatf_3(ctx);
		auto proxy = (mindustry_ai_types_MinerAI_invoke_arc_func_Floatf_3 *) gcAlloc(ctx, &class_mindustry_ai_types_MinerAI_invoke_arc_func_Floatf_3);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_ai_types_MinerAI *) NULL_CHECK(sp[0].o))->F_targetItem = (jref) (checkCast(ctx, &class_mindustry_type_Item, sp[1].o));
	}
label_13:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_targetItem;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_targetItem;
	jint temp0 = jint(1);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	if (temp1 != 0) goto label_16;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_clearItem) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_clearItem])(ctx, sp[0].o);
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}
label_16:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount;
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (temp0 >= ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_targetItem;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_targetItem;
	jint temp0 = (jint)((func_mindustry_gen_Unit_acceptsItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_acceptsItem_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(54);
	((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_mining = (jint(0));
	goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(2)), (jfloat(60.0f)));
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_targetItem;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(57);
	((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_ore = (jref) (jobject(nullptr));
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineFloor) == 0) goto label_26;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_indexer;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	sp[2].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_targetItem;
	sp[1].o = (jobject)((func_mindustry_ai_BlockIndexer_findClosestOre_float_float_mindustry_type_Item_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_findClosestOre_float_float_mindustry_type_Item_R_mindustry_world_Tile])(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((mindustry_ai_types_MinerAI *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	}
label_26:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_ore;
	if (sp[0].o != nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineWalls) == 0) goto label_23;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_indexer;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	sp[2].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_targetItem;
	sp[1].o = (jobject)((func_mindustry_ai_BlockIndexer_findClosestWallOre_float_float_mindustry_type_Item_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_findClosestWallOre_float_float_mindustry_type_Item_R_mindustry_world_Tile])(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((mindustry_ai_types_MinerAI *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	}
label_23:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_ore;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_ore;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	((func_mindustry_ai_types_MinerAI_moveTo_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_MinerAI_moveTo_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_mineRange) / (jfloat(2))), (jfloat(20.0f)));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_ore;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_mineRange));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_ore;
	jint temp0 = (jint)((func_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_ore;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	goto label_22;
	}
label_10:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack;
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) != 0) goto label_31;
	}
	{
	LINE_NUMBER(74);
	((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_mining = (jint(1));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}
label_31:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range));
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_stack;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[2].o))->F_amount;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	if (temp1 <= 0) goto label_36;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_stack;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[2].o))->F_amount;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, temp0, temp1, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y), (frame[1].o));
	}
label_36:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_clearItem) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_clearItem])(ctx, sp[0].o);
	LINE_NUMBER(84);
	((mindustry_ai_types_MinerAI *) NULL_CHECK((frame[0].o)))->F_mining = (jint(1));
	}
label_34:;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	((func_mindustry_ai_types_MinerAI_circle_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_MinerAI_circle_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range) / (jfloat(1.8f))));
	}
label_22:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) != 0) goto label_39;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	sp += 1;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_boostWhenMining) != 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_isDuct) != 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_damageTaken), (jfloat(0)), -1)) > 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_42;
	}
label_41:;
	INST_ICONST(1);
	goto label_43;
label_42:;
	INST_ICONST(0);
label_43:;
	POP_N(2); // Pop method args
	((func_mindustry_gen_Unit_updateBoosting_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_updateBoosting_boolean])(ctx, sp[0].o, sp[1].i);
label_39:;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_types_MinerAI_lambda$updateMovement$3_mindustry_gen_Building_mindustry_type_Item_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/MinerAI:lambda$updateMovement$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_MinerAI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_MinerAI_lambda$updateMovement$2_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/MinerAI:lambda$updateMovement$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineFloor) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineWalls) == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_canMine_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canMine_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_types_MinerAI_lambda$updateMovement$1_mindustry_gen_Building_mindustry_type_Item_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/MinerAI:lambda$updateMovement$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_MinerAI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_MinerAI_lambda$updateMovement$0_mindustry_ai_types_CommandAI_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/MinerAI:lambda$updateMovement$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineFloor) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineWalls) == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_canMine_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canMine_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_ai_ItemUnitStance_getByItem_mindustry_type_Item_R_mindustry_ai_ItemUnitStance(ctx, (frame[2].o));
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_types_MinerAI[] {
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
	(void *) M_mindustry_ai_types_MinerAI_stanceChanged,
	(void *) M_mindustry_entities_units_AIController_keepState_R_boolean,
	(void *) M_mindustry_entities_units_AIController_stopShooting,
	(void *) M_mindustry_entities_units_AIController_fallback_R_mindustry_entities_units_AIController,
	(void *) M_mindustry_entities_units_AIController_useFallback_R_boolean,
	(void *) M_mindustry_entities_units_AIController_updateVisuals,
	(void *) M_mindustry_ai_types_MinerAI_updateMovement,
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
	(void *) M_mindustry_ai_types_MinerAI_lambda$updateMovement$2_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_ai_types_MinerAI_lambda$updateMovement$0_mindustry_ai_types_CommandAI_mindustry_type_Item_R_boolean,
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
	{ "lambda$updateMovement$2", "(Lmindustry/type/Item;)Z" },
	{ "lambda$updateMovement$0", "(Lmindustry/ai/types/CommandAI;Lmindustry/type/Item;)Z" },
};

static FieldMetadata fields[] {
	{ "mining", &class_boolean, offsetof(mindustry_ai_types_MinerAI, F_mining), "Z", 1 },
	{ "targetItem", &class_mindustry_type_Item, offsetof(mindustry_ai_types_MinerAI, F_targetItem), "Lmindustry/type/Item;", 1 },
	{ "ore", &class_mindustry_world_Tile, offsetof(mindustry_ai_types_MinerAI, F_ore), "Lmindustry/world/Tile;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_MinerAI, 0, "()V", 1 },
	{ "stanceChanged", (intptr_t) M_mindustry_ai_types_MinerAI_stanceChanged, VTABLE_mindustry_ai_types_MinerAI_stanceChanged, "()V", 1 },
	{ "updateMovement", (intptr_t) M_mindustry_ai_types_MinerAI_updateMovement, VTABLE_mindustry_ai_types_MinerAI_updateMovement, "()V", 1 },
	{ "lambda$updateMovement$3", (intptr_t) SM_mindustry_ai_types_MinerAI_lambda$updateMovement$3_mindustry_gen_Building_mindustry_type_Item_R_float, 0, "(Lmindustry/gen/Building;Lmindustry/type/Item;)F", 4106 },
	{ "lambda$updateMovement$2", (intptr_t) M_mindustry_ai_types_MinerAI_lambda$updateMovement$2_mindustry_type_Item_R_boolean, VTABLE_mindustry_ai_types_MinerAI_lambda$updateMovement$2_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 4098 },
	{ "lambda$updateMovement$1", (intptr_t) SM_mindustry_ai_types_MinerAI_lambda$updateMovement$1_mindustry_gen_Building_mindustry_type_Item_R_float, 0, "(Lmindustry/gen/Building;Lmindustry/type/Item;)F", 4106 },
	{ "lambda$updateMovement$0", (intptr_t) M_mindustry_ai_types_MinerAI_lambda$updateMovement$0_mindustry_ai_types_CommandAI_mindustry_type_Item_R_boolean, VTABLE_mindustry_ai_types_MinerAI_lambda$updateMovement$0_mindustry_ai_types_CommandAI_mindustry_type_Item_R_boolean, "(Lmindustry/ai/types/CommandAI;Lmindustry/type/Item;)Z", 4098 },
};

Class class_mindustry_ai_types_MinerAI{
		.nativeName = (intptr_t) "mindustry/ai/types/MinerAI",
		.parentClass = (intptr_t) &class_mindustry_entities_units_AIController,
		.size = sizeof(mindustry_ai_types_MinerAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_MinerAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_MinerAI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_types_MinerAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_MinerAI = registerClass(&class_mindustry_ai_types_MinerAI);

}
