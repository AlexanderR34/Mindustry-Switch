#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild.h"
#include "arc/func/Prov.h"
#include "arc/graphics/Color.h"
#include "mindustry/world/consumers/ConsumeItemDynamic.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "arc/func/Intc.h"
#include "mindustry/content/Fx.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "arc/util/Time.h"
#include "mindustry/gen/BuildingTetherc.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Prov_1.h"
#include "mindustry/world/blocks/payloads/PayloadBlock.h"
#include "mindustry/io/TypeIO.h"
#include "arc/util/io/Writes.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/EventType_UnitCreateEvent.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/world/consumers/ConsumePayloadDynamic.h"
#include "mindustry/type/PayloadStack.h"
#include "mindustry/world/blocks/units/UnitAssembler_YeetData.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/type/UnitType.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/type/ItemStack.h"
#include "arc/audio/Sound.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/Vars.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Intc_3.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/meta/BlockStatus.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/entities/EntityCollisions.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Intc_2.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/gen/Entityc.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_mindustry_entities_EntityCollisions_SolidPred_1.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Floatf_1.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Boolf_10.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Boolf_11.h"
#include "arc/util/Structs.h"
#include "mindustry/graphics/Shaders.h"
#include "mindustry/ai/types/AssemblerAI.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/Units.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Cons_2.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Cons_3.h"
#include "mindustry/world/blocks/units/UnitAssemblerModule_UnitAssemblerModuleBuild.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Boolf_6.h"
#include "mindustry/gen/Groups.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_java_lang_Runnable_2.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_java_lang_Runnable_3.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Boolf_7.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Boolf_8.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild_invoke_arc_func_Boolf_9.h"
#include "mindustry/graphics/Shaders_BlockBuildShader.h"
#include "mindustry/type/PayloadSeq.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/world/blocks/units/UnitAssembler_AssemblerUnitPlan.h"
#include "java/lang/Math.h"
#include "mindustry/world/blocks/units/UnitAssembler.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/entities/EntityCollisions_SolidPred.h"
#include "java/lang/CharSequence.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "mindustry/world/blocks/payloads/PayloadBlock_PayloadBlockBuild.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"

extern "C" {


void mark_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) object;
	if (self->F_readUnits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_readUnits)->clazz)->markFunction)((jobject) self->F_readUnits, mark, depth + 1);
	if (self->F_whenSyncedUnits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_whenSyncedUnits)->clazz)->markFunction)((jobject) self->F_whenSyncedUnits, mark, depth + 1);
	if (self->F_commandPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commandPos)->clazz)->markFunction)((jobject) self->F_commandPos, mark, depth + 1);
	if (self->F_units)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_units)->clazz)->markFunction)((jobject) self->F_units, mark, depth + 1);
	if (self->F_modules)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_modules)->clazz)->markFunction)((jobject) self->F_modules, mark, depth + 1);
	if (self->F_blocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blocks)->clazz)->markFunction)((jobject) self->F_blocks, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild(ctx);
}

void init_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_mindustry_world_blocks_units_UnitAssembler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(319);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_mindustry_world_blocks_payloads_PayloadBlock(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_readUnits = (jref) sp[1].o;
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_whenSyncedUnits = (jref) sp[1].o;
	LINE_NUMBER(325);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_units = (jref) sp[1].o;
	LINE_NUMBER(326);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_modules = (jref) sp[1].o;
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_PayloadSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_PayloadSeq);
	init_mindustry_type_PayloadSeq(ctx, sp[1].o);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_blocks = (jref) sp[1].o;
	LINE_NUMBER(329);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_invalidWarmup = (jfloat(0));
	LINE_NUMBER(330);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_currentTier = (jint(0));
	LINE_NUMBER(331);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_lastTier = (-2);
	LINE_NUMBER(332);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_wasOccupied = (jint(0));
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:getUnitSpawn", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	jint temp0 = 8;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_areaSize;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[1].f = ((jfloat((temp0 * (temp1 + ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))))) / (jfloat(2)));
	LINE_NUMBER(338);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp3 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	frame[2].f = (temp2 + ((jfloat(temp3)) * (frame[1].f)));
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp5 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	frame[3].f = (temp4 + ((jfloat(temp5)) * (frame[1].f)));
	LINE_NUMBER(339);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v4;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_moduleFits_mindustry_world_Block_float_float_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:moduleFits", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(344);
	jfloat temp0 = frame[2].f;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (frame[4].i));
	frame[5].f = (temp0 + (((jfloat(temp1)) * (((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size))) / (jfloat(2))) + (jfloat(0.5f)))) * (jfloat(8.0f))));
	LINE_NUMBER(345);
	jfloat temp2 = frame[3].f;
	jint temp3 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[4].i));
	frame[6].f = (temp2 + (((jfloat(temp3)) * (((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size))) / (jfloat(2))) + (jfloat(0.5f)))) * (jfloat(8.0f))));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(349);
	jint temp4 = (jint)SM_mindustry_world_Tile_relativeTo_float_float_float_float_R_int(ctx, (frame[2].f), (frame[3].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_y));
	if (temp4 == (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(353);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[5].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_x)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[6].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_y)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[8].f = temp2;
	LINE_NUMBER(354);
	jfloat temp3 = frame[8].f;
	jint temp4 = 8;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp5 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, temp3, (((jfloat((temp4 * ((jint)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_areaSize)))) / (jfloat(2))) - (jfloat(4.0f))));
	popStackFrame(ctx);
	return temp5;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_updateModules_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:updateModules", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_modules;
	jint temp0 = (jint)((func_arc_struct_Seq_addUnique_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addUnique_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(359);
	((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkTier) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkTier])(ctx, (frame[0].o));
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_removeModule_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:removeModule", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_modules;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(364);
	((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkTier) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkTier])(ctx, (frame[0].o));
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkTier(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:checkTier", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_modules;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Floatf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(369);
	frame[1].i = (jint(0));
	LINE_NUMBER(370);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_modules;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_modules;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild, sp[0].o));
	LINE_NUMBER(372);
	jint temp0 = (jint)((func_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild_tier_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild_tier_R_int])(ctx, (frame[3].o));
	if (temp0 == (frame[1].i)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild_tier_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild_tier_R_int])(ctx, (frame[3].o));
	if (temp0 != ((frame[1].i) + (jint(1)))) goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(373);
	jint temp0 = (jint)((func_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild_tier_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild_tier_R_int])(ctx, (frame[3].o));
	frame[1].i = temp0;
	LINE_NUMBER(370);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(380);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_currentTier = (frame[1].i);
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_unit_R_mindustry_type_UnitType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:unit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK(sp[0].o))->F_unit;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:plan", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_plans;
	jint temp0 = (jint)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_currentTier;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[1].o))->F_plans;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:shouldConsume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(395);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_wasOccupied) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK(sp[1].o))->F_unit;
	jint temp0 = (jint)SM_mindustry_entities_Units_canCreate_mindustry_game_Team_mindustry_type_UnitType_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_consPayload;
	jfloat temp0 = (jfloat)((func_mindustry_world_consumers_ConsumePayloadDynamic_efficiency_mindustry_gen_Building_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_efficiency_mindustry_gen_Building_R_float])(ctx, sp[0].o, (frame[0].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_consItem;
	jfloat temp0 = (jfloat)((func_mindustry_world_consumers_ConsumeItemDynamic_efficiency_mindustry_gen_Building_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_ConsumeItemDynamic_efficiency_mindustry_gen_Building_R_float])(ctx, sp[0].o, (frame[0].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_activateUnitFactories_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_activateUnitFactories_R_boolean])(ctx, sp[0].o);
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

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:drawSelect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(400);
	M_mindustry_gen_Building_drawSelect(ctx, (frame[0].o));
	LINE_NUMBER(401);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_modules;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild, sp[0].o));
	LINE_NUMBER(402);
	sp[0].o = frame[2].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_selected_mindustry_gen_Building_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(403);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(405);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_remove;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_invalidWarmup));
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	sp[1].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler_getRect_arc_math_geom_Rect_float_float_int_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler_getRect_arc_math_geom_Rect_float_float_int_R_arc_math_geom_Rect])(ctx, sp[1].o, sp[2].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	SM_mindustry_graphics_Drawf_dashRect_arc_graphics_Color_arc_math_geom_Rect(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:display", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(410);
	M_mindustry_gen_Building_display_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(412);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(415);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(429);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:updateTile", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_readUnits;
	jint temp0 = (jint)((func_arc_struct_IntSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(436);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_readUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Intc_2(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Intc_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Intc_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(442);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_readUnits;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(445);
	if (((jint)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_lastTier) == ((jint)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_currentTier)) goto label_5;
	}
	{
	LINE_NUMBER(446);
	if ((floatCompare((jfloat(((jint)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_lastTier))), (jfloat(0)), -1)) < 0) goto label_7;
	}
	{
	LINE_NUMBER(447);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_progress = (jfloat(0));
	}
label_7:;
	{
	LINE_NUMBER(450);
	sp[0].o = frame[0].o;
	LINE_NUMBER(451);
	sp += 1;
	if (((jint)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_lastTier) != (-2)) goto label_10;
	}
	INST_ICONST(-1);
	goto label_11;
label_10:;
	INST_ALOAD(0);
	sp[-1].i = ((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[-1].o))->F_currentTier;
label_11:;
	sp -= 2;
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_lastTier = sp[1].i;
label_5:;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_dronesCreated)) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_whenSyncedUnits;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_whenSyncedUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Intc_3(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Intc_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Intc_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(467);
	jint temp0 = (jint)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_allowUpdate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_allowUpdate_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(468);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_progress = (jfloat(0));
	LINE_NUMBER(469);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(470);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(473);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_19;
	}
	INST_FCONST(0);
	goto label_20;
label_19:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_21;
	}
	INST_FCONST(1);
	goto label_20;
label_21:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	jfloat temp0 = (jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status;
	sp[0].f = temp0;
	sp += 1;
	}
label_20:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare((frame[1].f), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_23;
	}
	INST_FCONST(1);
	goto label_24;
label_23:;
	INST_FCONST(0);
label_24:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.1f)));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_powerWarmup = temp0;
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_droneWarmup;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	jint temp2 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jobject temp3 = sp[1].o;
	sp[1].f = temp1;
	sp += 2;
	if (temp2 >= ((jint)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(temp3))->F_dronesCreated)) goto label_26;
	}
	INST_FLOAD(1);
	goto label_27;
label_26:;
	INST_FCONST(0);
label_27:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.1f)));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_droneWarmup = temp0;
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_totalDroneProgress;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_droneWarmup;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_delta_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_totalDroneProgress = (temp1 + (temp2 * temp3));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	jint temp4 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp4 >= ((jint)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_dronesCreated)) goto label_30;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_30;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_droneProgress;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_delta_R_float])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	jfloat temp3 = (temp1 * temp2) * (frame[1].f);
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = temp0 + (temp3 / ((jfloat)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[1].o))->F_droneConstructTime));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_droneProgress = temp4;
	if ((floatCompare(temp4, (jfloat(1)), -1)) < 0) goto label_30;
	}
	{
	LINE_NUMBER(479);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_30;
	}
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_droneType;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[2].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ai_types_AssemblerAI)) == 0) goto label_34;
	}
	{
	LINE_NUMBER(484);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_BuildingTetherc)) == 0) goto label_36;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_BuildingTetherc, (frame[2].o)));
	LINE_NUMBER(485);
	((func_mindustry_gen_BuildingTetherc_building_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BuildingTetherc, INDEX_mindustry_gen_BuildingTetherc_building_mindustry_gen_Building, (frame[3].o)))(ctx, (frame[3].o), (frame[0].o));
	}
label_36:;
	{
	LINE_NUMBER(487);
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, (frame[2].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(488);
	((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_rotation = (jfloat(90.0f));
	LINE_NUMBER(489);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[2].o));
	LINE_NUMBER(490);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(491);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_gen_Call_assemblerDroneSpawned_mindustry_world_Tile_int(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_id));
	goto label_30;
	}
label_34:;
	{
	LINE_NUMBER(493);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_droneProgress = (jfloat(0));
	}
label_30:;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 < ((jint)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_dronesCreated)) goto label_42;
	}
	{
	LINE_NUMBER(499);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_droneProgress = (jfloat(0));
	}
label_42:;
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(504);
	jint temp0 = (jint)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_moveInPayload_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_moveInPayload_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_45;
	}
	{
	if (((jint)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_wasOccupied) != 0) goto label_45;
	}
	{
	LINE_NUMBER(505);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_yeetPayload_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_yeetPayload_mindustry_world_blocks_payloads_Payload])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(506);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload = (jref) (jobject(nullptr));
	}
label_45:;
	{
	LINE_NUMBER(510);
	frame[3].i = (jint(0));
	}
label_48:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_49;
	}
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(512);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_ai_types_AssemblerAI, sp[0].o));
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_ai_types_AssemblerAI *) NULL_CHECK((frame[5].o)))->F_targetPos;
	jfloat temp0 = ((jfloat((frame[3].i))) * (jfloat(90.0f))) + (jfloat(45.0f));
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((((jfloat(((jint)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[1].o))->F_areaSize))) / (jfloat(2))) * (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt2)) * (jfloat(8.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(515);
	((mindustry_ai_types_AssemblerAI *) NULL_CHECK((frame[5].o)))->F_targetAngle = ((((jfloat((frame[3].i))) * (jfloat(90.0f))) + (jfloat(45.0f))) + (jfloat(180.0f)));
	LINE_NUMBER(510);
	INST_IINC(3, 1);
	goto label_48;
	}
label_49:;
	{
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkSolid_arc_math_geom_Vec2_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkSolid_arc_math_geom_Vec2_boolean_R_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(0)));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_wasOccupied = temp0;
	LINE_NUMBER(519);
	jint temp1 = (jint)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkSolid_arc_math_geom_Vec2_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkSolid_arc_math_geom_Vec2_boolean_R_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	frame[3].i = temp1;
	LINE_NUMBER(520);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_7);
		sp[1].o = (jobject) proxy;
	}
	jint temp2 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[4].f = (temp3 / (jfloat(((jint)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_dronesCreated))));
	LINE_NUMBER(522);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_sameTypeWarmup;
	sp[1].f = temp4;
	sp += 2;
	if (((jint)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_wasOccupied) == 0) goto label_58;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_58;
	INST_FCONST(0);
	goto label_59;
label_58:;
	INST_FCONST(1);
label_59:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.1f)));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_sameTypeWarmup = temp0;
	LINE_NUMBER(523);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_invalidWarmup;
	sp[1].f = temp1;
	sp += 2;
	if ((frame[3].i) == 0) goto label_61;
	}
	INST_FCONST(1);
	goto label_62;
label_61:;
	INST_FCONST(0);
label_62:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.1f)));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_invalidWarmup = temp0;
	LINE_NUMBER(525);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(528);
	if (((jint)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_wasOccupied) != 0) goto label_65;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_65;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[5].o)))->F_unit;
	jint temp0 = (jint)SM_mindustry_entities_Units_canCreate_mindustry_game_Team_mindustry_type_UnitType_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_65;
	}
	{
	LINE_NUMBER(529);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_warmup), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0.1f)));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_warmup = temp0;
	LINE_NUMBER(531);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_progress;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_edelta_R_float])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp3 = (jfloat)((func_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	jfloat temp4 = temp1 + (((temp2 * temp3) * (frame[4].f)) / ((jfloat)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[5].o)))->F_time));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_progress = temp4;
	if ((floatCompare(temp4, (jfloat(1)), -1)) < 0) goto label_68;
	}
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_gen_Call_assemblerUnitSpawned_mindustry_world_Tile(ctx, sp[0].o);
	goto label_68;
	}
label_65:;
	{
	LINE_NUMBER(535);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_warmup), (jfloat(0)), (jfloat(0.1f)));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_warmup = temp0;
	}
label_68:;
	LINE_NUMBER(537);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_droneSpawned_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:droneSpawned", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(540);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(541);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_droneProgress = (jfloat(0));
	LINE_NUMBER(542);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_whenSyncedUnits;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[1].i));
	}
label_3:;
	LINE_NUMBER(545);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_spawned(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:spawned", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(549);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(550);
	((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_consume) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_consume])(ctx, (frame[0].o));
	LINE_NUMBER(552);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(553);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_isCommandable_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI])(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	((func_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(556);
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(1,000000e-03f)));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(1,000000e-03f)));
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, sp[0].o, temp2, (temp3 + temp4));
	LINE_NUMBER(557);
	sp[0].o = frame[3].o;
	jfloat temp5 = (jfloat)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float])(ctx, (frame[0].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	LINE_NUMBER(558);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildOn_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_buildOn_R_mindustry_gen_Building])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(560);
	clinit_mindustry_world_blocks_payloads_UnitPayload(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_UnitPayload);
	init_mindustry_world_blocks_payloads_UnitPayload_mindustry_gen_Unit(ctx, sp[0].o, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(561);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, (frame[4].o), (frame[4].o), (frame[5].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(562);
	((func_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload])(ctx, (frame[4].o), (frame[4].o), (frame[5].o));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(563);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(564);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[3].o));
	LINE_NUMBER(565);
	SM_mindustry_entities_Units_notifyUnitSpawn_mindustry_gen_Unit(ctx, (frame[3].o));
	}
label_13:;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_createSound;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y;
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.06f)));
	jfloat temp4 = temp2 + temp3;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp5 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp4, ((jfloat)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[1].o))->F_createSoundVolume));
	LINE_NUMBER(570);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_progress = (jfloat(0));
	LINE_NUMBER(571);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitAssemble;
	jfloat temp6 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp7 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y;
	jfloat temp8 = (jfloat)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float])(ctx, (frame[0].o));
	jfloat temp9 = temp8 - (jfloat(90.0f));
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp6, temp7, temp9, sp[1].o);
	LINE_NUMBER(572);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_blocks;
	((func_mindustry_type_PayloadSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(574);
	clinit_mindustry_game_EventType$UnitCreateEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitCreateEvent);
	init_mindustry_game_EventType$UnitCreateEvent_mindustry_gen_Unit_mindustry_gen_Building(ctx, sp[0].o, (frame[3].o), (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(575);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(582);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	if ((frame[1].i) >= (jint(4))) goto label_3;
	}
	{
	LINE_NUMBER(583);
	jint temp0 = (jint)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_blends_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_blends_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 == 0) goto label_5;
	}
	{
	if ((frame[1].i) == ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)) goto label_5;
	}
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_inRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat((((frame[1].i) * (90)) - (180)))));
	}
label_5:;
	{
	LINE_NUMBER(582);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(588);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) < (jint(2))) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_sideRegion2;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_sideRegion1;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(590);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.0f)));
	LINE_NUMBER(592);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payRotation = temp3;
	LINE_NUMBER(593);
	((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_drawPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_drawPayload])(ctx, (frame[0].o));
	LINE_NUMBER(595);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.1f)));
	LINE_NUMBER(597);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_topRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(599);
	jint temp4 = (jint)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_isPayload_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_isPayload_R_boolean])(ctx, (frame[0].o));
	if (temp4 == 0) goto label_15;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(602);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_droneWarmup), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(603);
	jfloat temp0 = jfloat(35.2f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(609);
	frame[2].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	frame[3].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(611);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(614);
	jfloat temp0 = jfloat(40.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_java_lang_Runnable_3);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(629);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(631);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(122.0f)));
	LINE_NUMBER(634);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_remove;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_invalidWarmup));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(635);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_powerWarmup), ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_sameTypeWarmup));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, temp1);
	LINE_NUMBER(636);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[4].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, temp3, (temp4 - (jfloat(90.0f))));
	LINE_NUMBER(639);
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat(1)) - ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_invalidWarmup)), ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_warmup));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, temp5);
	LINE_NUMBER(642);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_29:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(643);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_mindustry_ai_types_AssemblerAI_inPosition_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_ai_types_AssemblerAI, sp[0].o)))->vtable)[VTABLE_mindustry_ai_types_AssemblerAI_inPosition_R_boolean])(ctx, (checkCast(ctx, &class_mindustry_ai_types_AssemblerAI, sp[0].o)));
	if (temp0 != 0) goto label_32;
	}
	goto label_29;
label_32:;
	{
	LINE_NUMBER(646);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_rotation;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_type;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildBeamOffset));
	frame[7].f = (temp0 + temp2);
	LINE_NUMBER(647);
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_y;
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_rotation;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_type;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp4, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildBeamOffset));
	frame[8].f = (temp3 + temp5);
	LINE_NUMBER(649);
	jfloat temp6 = frame[7].f;
	jfloat temp7 = frame[8].f;
	jfloat temp8 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp9 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[4].o)))->F_unit;
	SM_mindustry_graphics_Drawf_buildBeam_float_float_float_float_float(ctx, temp6, temp7, temp8, temp9, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hitSize) / (jfloat(2))));
	LINE_NUMBER(650);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(653);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[4].o)))->F_unit;
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, temp0, temp1, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hitSize) / (jfloat(2))));
	LINE_NUMBER(655);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(657);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(122.0f)));
	LINE_NUMBER(659);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[5].f = ((jfloat((((jint)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_areaSize) * (8)))) / (jfloat(2)));
	LINE_NUMBER(662);
	jfloat temp2 = jfloat(2);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp2, sp[0].o);
	LINE_NUMBER(663);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_powerWarmup));
	LINE_NUMBER(664);
	SM_mindustry_graphics_Drawf_dashRectBasic_float_float_float_float(ctx, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[5].f)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[5].f)), ((frame[5].f) * (jfloat(2))), ((frame[5].f) * (jfloat(2))));
	LINE_NUMBER(666);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(668);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[4].o)))->F_unit;
	frame[6].f = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hitSize) + (jfloat(9.0f)));
	LINE_NUMBER(670);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_invalidWarmup), (jfloat(0)), -1)) <= 0) goto label_45;
	}
	{
	LINE_NUMBER(672);
	jfloat temp0 = jfloat(2);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c3;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_remove;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_invalidWarmup));
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_invalidWarmup));
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(673);
	SM_mindustry_graphics_Drawf_dashSquareBasic_float_float_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[6].f));
	}
label_45:;
	{
	LINE_NUMBER(676);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(677);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkSolid_arc_math_geom_Vec2_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:checkSolid", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(680);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(681);
	frame[4].f = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_hitSize) * (jfloat(1.4f)));
	LINE_NUMBER(682);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_flying) != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_collisions;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_hitSize));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_mindustry_entities_EntityCollisions$SolidPred_1(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_mindustry_entities_EntityCollisions$SolidPred_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_mindustry_entities_EntityCollisions$SolidPred_1);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_entities_EntityCollisions_overlapsTile_arc_math_geom_Rect_mindustry_entities_EntityCollisions$SolidPred_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityCollisions_overlapsTile_arc_math_geom_Rect_mindustry_entities_EntityCollisions$SolidPred_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_4;
	}
label_3:;
	{
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((frame[4].f) / (jfloat(2)));
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((frame[4].f) / (jfloat(2)));
	jfloat temp2 = frame[4].f;
	jfloat temp3 = frame[4].f;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_8);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (frame[2].i);
		sp[0].o = (jobject) proxy;
	}
	LINE_NUMBER(683);
	jint temp4 = (jint)SM_mindustry_entities_Units_anyEntities_float_float_float_float_arc_func_Boolf_R_boolean(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	if (temp4 == 0) goto label_6;
	}
label_4:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	LINE_NUMBER(682);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_ready_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:ready", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(689);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_wasOccupied) != 0) goto label_1;
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

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_yeetPayload_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:yeetPayload", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(694);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[1].o = (jobject)((func_mindustry_world_blocks_payloads_Payload_content_R_mindustry_ctype_UnlockableContent) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_content_R_mindustry_ctype_UnlockableContent, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_add_mindustry_ctype_UnlockableContent_int])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(695);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	frame[3].f = temp0;
	LINE_NUMBER(696);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_shootPayloadDriver;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_x_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_y_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp1, temp2, (frame[3].f));
	LINE_NUMBER(697);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_payloadDeposit;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_x_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_y_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp5 = frame[3].f;
	clinit_mindustry_world_blocks_units_UnitAssembler$YeetData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$YeetData);
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2])(ctx, (frame[2].o));
	sp[3].o = (jobject)((func_mindustry_world_blocks_payloads_Payload_content_R_mindustry_ctype_UnlockableContent) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_content_R_mindustry_ctype_UnlockableContent, (frame[1].o)))(ctx, (frame[1].o));
	init_mindustry_world_blocks_units_UnitAssembler$YeetData_arc_math_geom_Vec2_mindustry_ctype_UnlockableContent(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp3, temp4, temp5, sp[1].o);
	LINE_NUMBER(698);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_shootPayload;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp7 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp8 = jfloat(1);
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.1f)));
	jint temp10 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp6, temp7, (temp8 + temp9), (jfloat(1)));
	LINE_NUMBER(699);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_status_R_mindustry_world_meta_BlockStatus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:status", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_activateUnitFactories_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_activateUnitFactories_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_world_meta_BlockStatus(ctx);
	(sp++)->o = SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(709);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_progress;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	popStackFrame(ctx);
	return (jdouble(((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_progress)));
	}
label_1:;
	{
	LINE_NUMBER(710);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:acceptUnitPayload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(716);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[2].o)))->F_requirements;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_9);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getPayloads_R_mindustry_type_PayloadSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:getPayloads", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_blocks;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:acceptPayload", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(727);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(728);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild)) == 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[3].o)))->F_requirements;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_10);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(729);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_5;
label_3:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(728);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getMaximumAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:getMaximumAccepted", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(736);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_capacities;
	jfloat temp0 = jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id))));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	jint temp2 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp0 * temp1));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:acceptItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(741);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK(sp[0].o))->F_itemReq;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[2].o));
	jint temp1 = (jint)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 >= temp1) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(742);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK(sp[0].o))->F_itemReq;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Boolf_11);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(741);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getCommandPosition_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:getCommandPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_onCommand_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:onCommand", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(752);
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_commandPos = (jref) (frame[1].o);
	LINE_NUMBER(753);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(757);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(762);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(764);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	LINE_NUMBER(765);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(766);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(767);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_id));
	LINE_NUMBER(768);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(770);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_blocks;
	((func_mindustry_type_PayloadSeq_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_write_arc_util_io_Writes])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(771);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	SM_mindustry_io_TypeIO_writeVecNullable_arc_util_io_Writes_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(772);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(776);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(777);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	LINE_NUMBER(778);
	jint temp1 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(779);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_readUnits;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(780);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_readUnits;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(780);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_whenSyncedUnits;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(785);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_blocks;
	((func_mindustry_type_PayloadSeq_read_arc_util_io_Reads) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_read_arc_util_io_Reads])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(786);
	if ((frame[2].i) < (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(787);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVecNullable_arc_util_io_Reads_R_arc_math_geom_Vec2(ctx, (frame[1].o));
	((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK(sp[0].o))->F_commandPos = (jref) sp[1].o;
	}
label_11:;
	LINE_NUMBER(789);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$acceptItem$0_mindustry_type_Item_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$acceptItem$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
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

jbool M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$acceptPayload$0_mindustry_world_blocks_payloads_Payload_mindustry_gen_Building_mindustry_type_PayloadStack_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$acceptPayload$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(729);
	sp[0].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[3].o)))->F_item;
	sp[1].o = (jobject)((func_mindustry_world_blocks_payloads_Payload_content_R_mindustry_ctype_UnlockableContent) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_content_R_mindustry_ctype_UnlockableContent, (frame[1].o)))(ctx, (frame[1].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[1].o = frame[1].o;
	LINE_NUMBER(730);
	sp[1].o = (jobject)((func_mindustry_world_blocks_payloads_Payload_content_R_mindustry_ctype_UnlockableContent) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_content_R_mindustry_ctype_UnlockableContent, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[3].o)))->F_amount));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp1 * temp2));
	LINE_NUMBER(731);
	sp[0].i = temp0;
	sp[1].i = temp3;
	sp += 2;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild)) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_Payload_contentEquals_mindustry_world_blocks_payloads_Payload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_contentEquals_mindustry_world_blocks_payloads_Payload_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	INST_ISUB();
	sp -= 2; if (sp[0].i >= sp[1].i) goto label_1;
	INST_ICONST(1);
	goto label_6;
label_1:;
	INST_ICONST(0);
label_6:;
	LINE_NUMBER(729);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$acceptUnitPayload$0_mindustry_gen_Unit_mindustry_type_PayloadStack_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$acceptUnitPayload$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(716);
	sp[0].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[2].o)))->F_item;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_type_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_type_R_mindustry_type_UnitType])(ctx, (frame[1].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[1].o = frame[1].o;
	LINE_NUMBER(717);
	sp[1].o = (jobject)((func_mindustry_gen_Unit_type_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_type_R_mindustry_type_UnitType])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[2].o)))->F_amount));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp1 * temp2));
	if (temp0 >= temp3) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(716);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$checkSolid$0_boolean_mindustry_type_UnitType_mindustry_gen_Unit_R_boolean(jcontext ctx, jbool param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$checkSolid$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(683);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	if (sp[0].o == (frame[1].o)) goto label_2;
	}
label_1:;
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_spawnedByCore) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep) == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_allowLegStep) != 0) goto label_4;
	}
label_3:;
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_flying) == 0) goto label_5;
	}
	{
	sp[0].o = frame[2].o;
	LINE_NUMBER(684);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
label_5:;
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_flying) != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
label_4:;
	INST_ICONST(1);
	goto label_7;
label_2:;
	INST_ICONST(0);
label_7:;
	LINE_NUMBER(683);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$draw$1_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$draw$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(615);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_warmup));
	LINE_NUMBER(617);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_fullIcon;
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(618);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_time = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	LINE_NUMBER(619);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_alpha = ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_warmup);
	LINE_NUMBER(621);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_progress) + (jfloat(0.05f))));
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	LINE_NUMBER(623);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, temp2, (temp3 - (jfloat(90.0f))));
	LINE_NUMBER(624);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(625);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(626);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_alpha = (jfloat(1));
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$draw$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$draw$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(604);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[1].o))->F_droneType;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_fullIcon;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(0)), ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_droneProgress), ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_droneWarmup), ((jfloat)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_totalDroneProgress), (jfloat(14.0f)));
	LINE_NUMBER(605);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$3_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$updateTile$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_ai_types_AssemblerAI_inPosition_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_ai_types_AssemblerAI, sp[0].o)))->vtable)[VTABLE_mindustry_ai_types_AssemblerAI_inPosition_R_boolean])(ctx, (checkCast(ctx, &class_mindustry_ai_types_AssemblerAI, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$2_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$updateTile$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(464);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ai_types_AssemblerAI)) != 0) goto label_2;
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

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$updateTile$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(457);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(458);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	jint temp0 = (jint)((func_arc_struct_Seq_addUnique_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addUnique_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	}
label_2:;
	LINE_NUMBER(461);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$0_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$updateTile$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(437);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(438);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_2:;
	LINE_NUMBER(441);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$display$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$display$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(418);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(419);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_modules;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild *) NULL_CHECK((frame[0].o)))->F_modules;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild, sp[0].o));
	LINE_NUMBER(421);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	goto label_8;
label_7:;
	{
	LINE_NUMBER(423);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(425);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(419);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(428);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$display$1_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$display$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_type_UnitType_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_emoji_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_localizedName;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[accent] -> []\u0001 \u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$checkTier$0_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild:lambda$checkTier$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(368);
	jint temp0 = (jint)((func_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild_tier_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild_tier_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field commandPos
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild[] {
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
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
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
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_status_R_mindustry_world_meta_BlockStatus,
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
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_drawSelect,
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
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_onCommand_arc_math_geom_Vec2,
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
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_blends_int_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_boolean_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveOutPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_dumpPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_hasArrived_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_moduleFits_mindustry_world_Block_float_float_int_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_updateModules_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_removeModule_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkTier,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_unit_R_mindustry_type_UnitType,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_droneSpawned_int,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_spawned,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkSolid_arc_math_geom_Vec2_boolean_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_ready_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_yeetPayload_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$acceptPayload$0_mindustry_world_blocks_payloads_Payload_mindustry_gen_Building_mindustry_type_PayloadStack_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$acceptUnitPayload$0_mindustry_gen_Unit_mindustry_type_PayloadStack_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$draw$1_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_float_float,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$draw$0,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$1_int,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$0_int,
	(void *) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$display$1_R_java_lang_CharSequence,
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
	{ "getUnitSpawn", "()Larc/math/geom/Vec2;" },
	{ "moduleFits", "(Lmindustry/world/Block;FFI)Z" },
	{ "updateModules", "(Lmindustry/world/blocks/units/UnitAssemblerModule$UnitAssemblerModuleBuild;)V" },
	{ "removeModule", "(Lmindustry/world/blocks/units/UnitAssemblerModule$UnitAssemblerModuleBuild;)V" },
	{ "checkTier", "()V" },
	{ "unit", "()Lmindustry/type/UnitType;" },
	{ "plan", "()Lmindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan;" },
	{ "droneSpawned", "(I)V" },
	{ "spawned", "()V" },
	{ "checkSolid", "(Larc/math/geom/Vec2;Z)Z" },
	{ "ready", "()Z" },
	{ "yeetPayload", "(Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "lambda$acceptPayload$0", "(Lmindustry/world/blocks/payloads/Payload;Lmindustry/gen/Building;Lmindustry/type/PayloadStack;)Z" },
	{ "lambda$acceptUnitPayload$0", "(Lmindustry/gen/Unit;Lmindustry/type/PayloadStack;)Z" },
	{ "lambda$draw$1", "(Lmindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan;FF)V" },
	{ "lambda$draw$0", "()V" },
	{ "lambda$updateTile$1", "(I)V" },
	{ "lambda$updateTile$0", "(I)V" },
	{ "lambda$display$1", "()Ljava/lang/CharSequence;" },
};

static FieldMetadata fields[] {
	{ "readUnits", &class_arc_struct_IntSeq, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_readUnits), "Larc/struct/IntSeq;", 4 },
	{ "whenSyncedUnits", &class_arc_struct_IntSeq, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_whenSyncedUnits), "Larc/struct/IntSeq;", 4 },
	{ "commandPos", &class_arc_math_geom_Vec2, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_commandPos), "Larc/math/geom/Vec2;", 1 },
	{ "units", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_units), "Larc/struct/Seq;", 1 },
	{ "modules", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_modules), "Larc/struct/Seq;", 1 },
	{ "blocks", &class_mindustry_type_PayloadSeq, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_blocks), "Lmindustry/type/PayloadSeq;", 1 },
	{ "progress", &class_float, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_progress), "F", 1 },
	{ "warmup", &class_float, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_warmup), "F", 1 },
	{ "droneWarmup", &class_float, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_droneWarmup), "F", 1 },
	{ "powerWarmup", &class_float, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_powerWarmup), "F", 1 },
	{ "sameTypeWarmup", &class_float, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_sameTypeWarmup), "F", 1 },
	{ "invalidWarmup", &class_float, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_invalidWarmup), "F", 1 },
	{ "currentTier", &class_int, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_currentTier), "I", 1 },
	{ "lastTier", &class_int, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_lastTier), "I", 1 },
	{ "wasOccupied", &class_boolean, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_wasOccupied), "Z", 1 },
	{ "droneProgress", &class_float, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_droneProgress), "F", 1 },
	{ "totalDroneProgress", &class_float, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_totalDroneProgress), "F", 1 },
	{ "this$0", &class_mindustry_world_blocks_units_UnitAssembler, offsetof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild, F_this$0), "Lmindustry/world/blocks/units/UnitAssembler;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_mindustry_world_blocks_units_UnitAssembler, 0, "(Lmindustry/world/blocks/units/UnitAssembler;)V", 1 },
	{ "getUnitSpawn", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getUnitSpawn_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "moduleFits", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_moduleFits_mindustry_world_Block_float_float_int_R_boolean, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_moduleFits_mindustry_world_Block_float_float_int_R_boolean, "(Lmindustry/world/Block;FFI)Z", 1 },
	{ "updateModules", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_updateModules_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_updateModules_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild, "(Lmindustry/world/blocks/units/UnitAssemblerModule$UnitAssemblerModuleBuild;)V", 1 },
	{ "removeModule", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_removeModule_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_removeModule_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild, "(Lmindustry/world/blocks/units/UnitAssemblerModule$UnitAssemblerModuleBuild;)V", 1 },
	{ "checkTier", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkTier, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkTier, "()V", 1 },
	{ "unit", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_unit_R_mindustry_type_UnitType, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_unit_R_mindustry_type_UnitType, "()Lmindustry/type/UnitType;", 1 },
	{ "plan", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_plan_R_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan, "()Lmindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan;", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_shouldConsume_R_boolean, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_shouldConsume_R_boolean, "()Z", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_drawSelect, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_drawSelect, "()V", 1 },
	{ "display", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_display_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_updateTile, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_updateTile, "()V", 1 },
	{ "droneSpawned", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_droneSpawned_int, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_droneSpawned_int, "(I)V", 1 },
	{ "spawned", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_spawned, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_spawned, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_draw, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_draw, "()V", 1 },
	{ "checkSolid", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkSolid_arc_math_geom_Vec2_boolean_R_boolean, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_checkSolid_arc_math_geom_Vec2_boolean_R_boolean, "(Larc/math/geom/Vec2;Z)Z", 1 },
	{ "ready", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_ready_R_boolean, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_ready_R_boolean, "()Z", 1 },
	{ "yeetPayload", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_yeetPayload_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_yeetPayload_mindustry_world_blocks_payloads_Payload, "(Lmindustry/world/blocks/payloads/Payload;)V", 1 },
	{ "status", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_status_R_mindustry_world_meta_BlockStatus, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_status_R_mindustry_world_meta_BlockStatus, "()Lmindustry/world/meta/BlockStatus;", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "acceptUnitPayload", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "getPayloads", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getPayloads_R_mindustry_type_PayloadSeq, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getPayloads_R_mindustry_type_PayloadSeq, "()Lmindustry/type/PayloadSeq;", 1 },
	{ "acceptPayload", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "getMaximumAccepted", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getMaximumAccepted_mindustry_type_Item_R_int, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getMaximumAccepted_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "getCommandPosition", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getCommandPosition_R_arc_math_geom_Vec2, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_getCommandPosition_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "onCommand", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_onCommand_arc_math_geom_Vec2, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_onCommand_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_version_R_byte, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$acceptItem$0", (intptr_t) SM_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$acceptItem$0_mindustry_type_Item_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/type/Item;Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$acceptPayload$0", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$acceptPayload$0_mindustry_world_blocks_payloads_Payload_mindustry_gen_Building_mindustry_type_PayloadStack_R_boolean, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$acceptPayload$0_mindustry_world_blocks_payloads_Payload_mindustry_gen_Building_mindustry_type_PayloadStack_R_boolean, "(Lmindustry/world/blocks/payloads/Payload;Lmindustry/gen/Building;Lmindustry/type/PayloadStack;)Z", 4098 },
	{ "lambda$acceptUnitPayload$0", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$acceptUnitPayload$0_mindustry_gen_Unit_mindustry_type_PayloadStack_R_boolean, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$acceptUnitPayload$0_mindustry_gen_Unit_mindustry_type_PayloadStack_R_boolean, "(Lmindustry/gen/Unit;Lmindustry/type/PayloadStack;)Z", 4098 },
	{ "lambda$checkSolid$0", (intptr_t) SM_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$checkSolid$0_boolean_mindustry_type_UnitType_mindustry_gen_Unit_R_boolean, 0, "(ZLmindustry/type/UnitType;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$draw$1", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$draw$1_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_float_float, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$draw$1_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_float_float, "(Lmindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan;FF)V", 4098 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$draw$0, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$draw$0, "()V", 4098 },
	{ "lambda$updateTile$3", (intptr_t) SM_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$3_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$updateTile$2", (intptr_t) SM_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$2_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$updateTile$1", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$1_int, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$1_int, "(I)V", 4098 },
	{ "lambda$updateTile$0", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$0_int, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$updateTile$0_int, "(I)V", 4098 },
	{ "lambda$display$0", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$display$0_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$display$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$display$1", (intptr_t) M_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$display$1_R_java_lang_CharSequence, VTABLE_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$display$1_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 4098 },
	{ "lambda$checkTier$0", (intptr_t) SM_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild_lambda$checkTier$0_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild_R_float, 0, "(Lmindustry/world/blocks/units/UnitAssemblerModule$UnitAssemblerModuleBuild;)F", 4106 },
};

Class class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/units/UnitAssembler$UnitAssemblerBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild,
		.size = sizeof(mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_units_UnitAssembler,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 339,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild = registerClass(&class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild);

}

