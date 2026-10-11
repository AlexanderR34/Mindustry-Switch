#include "mindustry/world/blocks/production/Drill.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/struct/ObjectFloatMap.h"
#include "arc/util/Eachable.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/content/Fx.h"
#include "mindustry/world/blocks/production/Drill_invoke_arc_func_Floatp_1.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Floatp.h"
#include "arc/func/Boolf.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/world/blocks/production/Drill_DrillBuild.h"
#include "mindustry/world/blocks/production/Drill_invoke_arc_func_Func_1.h"
#include "mindustry/world/consumers/ConsumeLiquidBase.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/blocks/production/Drill_invoke_java_util_Comparator_1.h"
#include "arc/struct/ObjectIntMap_Keys.h"
#include "arc/struct/EnumSet.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "java/lang/Boolean.h"
#include "mindustry/world/meta/StatValue.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/world/meta/BlockGroup.h"
#include "mindustry/world/blocks/production/Drill.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/blocks/production/Drill_invoke_arc_func_Boolf_4.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/world/blocks/production/Drill_invoke_arc_func_Boolf_5.h"
#include "mindustry/world/blocks/production/Drill_invoke_arc_func_Boolf_6.h"
#include "mindustry/world/blocks/production/Drill_invoke_arc_func_Boolf_7.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Pal.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/blocks/production/Drill_invoke_arc_func_Prov_3.h"
#include "mindustry/world/blocks/production/Drill_invoke_arc_func_Prov_2.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_world_blocks_production_Drill(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_Block(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_production_Drill *) object;
	if (self->F_oreCount)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_oreCount)->clazz)->markFunction)((jobject) self->F_oreCount, mark, depth + 1);
	if (self->F_itemArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemArray)->clazz)->markFunction)((jobject) self->F_itemArray, mark, depth + 1);
	if (self->F_blockedItem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockedItem)->clazz)->markFunction)((jobject) self->F_blockedItem, mark, depth + 1);
	if (self->F_blockedItems)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockedItems)->clazz)->markFunction)((jobject) self->F_blockedItems, mark, depth + 1);
	if (self->F_returnItem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_returnItem)->clazz)->markFunction)((jobject) self->F_returnItem, mark, depth + 1);
	if (self->F_drillEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drillEffect)->clazz)->markFunction)((jobject) self->F_drillEffect, mark, depth + 1);
	if (self->F_updateEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updateEffect)->clazz)->markFunction)((jobject) self->F_updateEffect, mark, depth + 1);
	if (self->F_drillMultipliers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drillMultipliers)->clazz)->markFunction)((jobject) self->F_drillMultipliers, mark, depth + 1);
	if (self->F_heatColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heatColor)->clazz)->markFunction)((jobject) self->F_heatColor, mark, depth + 1);
	if (self->F_rimRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rimRegion)->clazz)->markFunction)((jobject) self->F_rimRegion, mark, depth + 1);
	if (self->F_rotatorRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rotatorRegion)->clazz)->markFunction)((jobject) self->F_rotatorRegion, mark, depth + 1);
	if (self->F_topRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_topRegion)->clazz)->markFunction)((jobject) self->F_topRegion, mark, depth + 1);
	if (self->F_itemRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemRegion)->clazz)->markFunction)((jobject) self->F_itemRegion, mark, depth + 1);
}

void clinit_mindustry_world_blocks_production_Drill(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
}

void init_mindustry_world_blocks_production_Drill_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_Drill(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(28);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_hardnessDrillMultiplier = (jfloat(50.0f));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_oreCount = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_itemArray = (jref) sp[1].o;
	LINE_NUMBER(36);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drillTime = (jfloat(300.0f));
	LINE_NUMBER(38);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_liquidBoostIntensity = (jfloat(1.6f));
	LINE_NUMBER(40);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_warmupSpeed = (jfloat(0.015f));
	LINE_NUMBER(51);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drawMineItem = (jint(1));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_mine;
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_drillEffect = (jref) sp[1].o;
	LINE_NUMBER(55);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drillEffectRnd = (jfloat(-1.0f));
	LINE_NUMBER(57);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drillEffectChance = (jfloat(0.02f));
	LINE_NUMBER(59);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(2));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_pulverizeSmall;
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_updateEffect = (jref) sp[1].o;
	LINE_NUMBER(63);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_updateEffectChance = (jfloat(0.02f));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap(ctx, sp[1].o);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_drillMultipliers = (jref) sp[1].o;
	LINE_NUMBER(68);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drawRim = (jint(0));
	LINE_NUMBER(69);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drawSpinSprite = (jint(1));
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ff5512"_j))));
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(78);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(79);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_drills;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(81);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasLiquids = (jint(1));
	LINE_NUMBER(82);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopDrill;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSound = (jref) sp[1].o;
	LINE_NUMBER(84);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ambientSoundVolume = (jfloat(0.019f));
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled) | (jint(2)));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_drill;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_EnumSet_of_Array1_java_lang_Enum_R_arc_struct_EnumSet(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags = (jref) sp[1].o;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_Drill_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_blockedItems;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_blockedItem;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_Item, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_blockedItem;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_blockedItems = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(96);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drillEffectRnd), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drillEffectRnd = (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_4:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_Drill_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:drawPlanConfig", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(101);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_worldContext) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(103);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(105);
	((func_mindustry_world_blocks_production_Drill_countOre_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_Drill_countOre_mindustry_world_Tile])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_returnItem;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	if (((jint)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drawMineItem) != 0) goto label_6;
	}
label_5:;
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_returnItem;
	sp[0].o = (jobject)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_tint_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_itemRegion;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(110);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_Drill_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:setBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	M_mindustry_world_Block_setBars(ctx, (frame[0].o));
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"drillspeed"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_Drill_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_world_blocks_production_Drill_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_Drill_invoke_arc_func_Func_1);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_production_Drill_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_Drill_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_production_Drill_getDrop_mindustry_world_Tile_R_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:getDrop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_production_Drill_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:canPlaceOn", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(127);
	jint temp0 = (jint)((func_mindustry_world_blocks_production_Drill_isMultiblock_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_Drill_isMultiblock_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_world_blocks_production_Drill(ctx);
	sp[2].o = (jobject)SF_mindustry_world_Block_tempTiles;
	sp[0].o = (jobject)((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(129);
	jint temp0 = (jint)((func_mindustry_world_blocks_production_Drill_canMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_Drill_canMine_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[5].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	LINE_NUMBER(132);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((func_mindustry_world_blocks_production_Drill_canMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_Drill_canMine_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_Drill_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:drawPlace", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(141);
	M_mindustry_world_Block_drawPlace_int_int_int_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(144);
	if ((frame[5].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(146);
	((func_mindustry_world_blocks_production_Drill_countOre_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_Drill_countOre_mindustry_world_Tile])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_returnItem;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bar.drillspeed"_j));
	jfloat temp0 = jfloat(60.0f);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_returnItem;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_production_Drill_getDrillTime_mindustry_type_Item_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_blocks_production_Drill_getDrillTime_mindustry_type_Item_R_float])(ctx, sp[3].o, sp[4].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_formatFloat_java_lang_String_float_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_formatFloat_java_lang_String_float_int_R_java_lang_String])(ctx, sp[1].o, sp[2].o, ((temp0 / temp1) * (jfloat(((jint)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_returnCount)))), (jint(2)));
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_production_Drill_drawPlaceText_java_lang_String_int_int_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_Drill_drawPlaceText_java_lang_String_int_int_boolean_R_float])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[4].i));
	frame[6].f = temp2;
	LINE_NUMBER(150);
	frame[7].f = ((((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)) - ((frame[6].f) / (jfloat(2)))) - (jfloat(4.0f)));
	frame[8].f = ((((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)) + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))) / (jfloat(2)))) + (jfloat(5.0f)));
	frame[9].f = (jfloat(6.0f));
	LINE_NUMBER(151);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_darkGray;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_returnItem;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (frame[7].f), ((frame[8].f) - (jfloat(1))), (frame[9].f), (frame[9].f));
	LINE_NUMBER(153);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_returnItem;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (frame[7].f), (frame[8].f), (frame[9].f), (frame[9].f));
	LINE_NUMBER(156);
	if (((jint)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drawMineItem) == 0) goto label_15;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_returnItem;
	sp[0].o = (jobject)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_itemRegion;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[5].o));
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[5].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)));
	LINE_NUMBER(159);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_15:;
	LINE_NUMBER(161);
	goto label_19;
label_5:;
	{
	LINE_NUMBER(162);
	sp[0].o = frame[5].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_world_blocks_production_Drill(ctx);
	sp[2].o = (jobject)SF_mindustry_world_Block_tempTiles;
	sp[0].o = (jobject)((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(163);
	if ((frame[6].o) != nullptr) goto label_21;
	}
	INST_ACONST_NULL();
	goto label_22;
label_21:;
	INST_ALOAD(6);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, sp[0].o);
	sp++;
label_22:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(164);
	if ((frame[7].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bar.drilltierreq"_j))));
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_production_Drill_drawPlaceText_java_lang_String_int_int_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_Drill_drawPlaceText_java_lang_String_int_int_boolean_R_float])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[4].i));
	}
label_19:;
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_production_Drill_getDrillTime_mindustry_type_Item_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:getDrillTime", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	jfloat temp0 = ((jfloat)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drillTime) + (((jfloat)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_hardnessDrillMultiplier) * (jfloat(((jint)((mindustry_type_Item *) NULL_CHECK((frame[1].o)))->F_hardness))));
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drillMultipliers;
	jfloat temp1 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, sp[0].o, (frame[1].o), (jfloat(1)));
	popStackFrame(ctx);
	return (temp0 / temp1);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_Drill_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:setStats", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_drillTier;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drillTime;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_hardnessDrillMultiplier;
	jfloat temp2 = jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)));
	sp[2].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drillMultipliers;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_drillables_float_float_float_arc_struct_ObjectFloatMap_arc_func_Boolf_R_mindustry_world_meta_StatValue(ctx, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_drillSpeed;
	jfloat temp3 = (((jfloat(60.0f)) / ((jfloat)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_drillTime)) * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_itemsSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	LINE_NUMBER(183);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_liquidBoostIntensity), (jfloat(1)), -1)) == 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_world_blocks_production_Drill_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_Drill_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_consumers_ConsumeLiquidBase)) == 0) goto label_4;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquidBase, (frame[2].o)));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_booster;
	((func_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_booster;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_timesSpeed;
	LINE_NUMBER(186);
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"{0}\u0001"_j.string, 1, sp[2].o);
	jfloat temp0 = (jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[1].o)))->F_amount;
	jfloat temp1 = ((jfloat)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_liquidBoostIntensity) * ((jfloat)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_liquidBoostIntensity);
	jint temp2 = jint(0);
	sp[3].o = frame[1].o;
	LINE_NUMBER(188);
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_Drill_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	LINE_NUMBER(186);
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_speedBoosters_java_lang_String_float_float_boolean_arc_func_Boolf_R_mindustry_world_meta_StatValue(ctx, sp[2].o, temp0, temp1, temp2, sp[3].o);
	LINE_NUMBER(185);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_4:;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_production_Drill_icons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:icons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(3)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_rotatorRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_topRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_Drill_countOre_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:countOre", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(199);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_returnItem = (jref) (jobject(nullptr));
	LINE_NUMBER(200);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_returnCount = (jint(0));
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_oreCount;
	((func_arc_struct_ObjectIntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_itemArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(205);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_world_blocks_production_Drill(ctx);
	sp[2].o = (jobject)SF_mindustry_world_Block_tempTiles;
	sp[0].o = (jobject)((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_mindustry_world_blocks_production_Drill_canMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_Drill_canMine_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_oreCount;
	sp[1].o = (jobject)((func_mindustry_world_blocks_production_Drill_getDrop_mindustry_world_Tile_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_Drill_getDrop_mindustry_world_Tile_R_mindustry_type_Item])(ctx, (frame[0].o), (frame[3].o));
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(1)));
	}
label_8:;
	LINE_NUMBER(209);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_oreCount;
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap_keys_R_arc_struct_ObjectIntMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_keys_R_arc_struct_ObjectIntMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap$Keys_iterator_R_arc_struct_ObjectIntMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap$Keys_iterator_R_arc_struct_ObjectIntMap$Keys])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_itemArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(213);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_itemArray;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_Drill_invoke_java_util_Comparator_1(ctx);
		auto proxy = (mindustry_world_blocks_production_Drill_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_Drill_invoke_java_util_Comparator_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_itemArray;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_15;
	}
	LINE_NUMBER(224);
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_itemArray;
	sp[1].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_returnItem = (jref) (checkCast(ctx, &class_mindustry_type_Item, sp[1].o));
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_oreCount;
	sp[2].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_itemArray;
	sp[2].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[2].o);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[1].o, (checkCast(ctx, &class_mindustry_type_Item, sp[2].o)), (jint(0)));
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_returnCount = temp0;
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_production_Drill_canMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:canMine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(232);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(234);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[2].o)))->F_hardness) > ((jint)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_tier)) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_blockedItems;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_blockedItems;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_4;
	}
label_5:;
	INST_ICONST(1);
	goto label_6;
label_4:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_world_blocks_production_Drill_access$000_mindustry_world_blocks_production_Drill_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_Drill(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_timerDump);
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_production_Drill_lambda$countOre$0_mindustry_type_Item_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:lambda$countOre$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(216);
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[1].o)))->F_lowPriority) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[2].o)))->F_lowPriority) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 2;
	jint temp0 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, sp[0].i, sp[1].i);
	frame[3].i = temp0;
	LINE_NUMBER(217);
	if ((frame[3].i) == 0) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_oreCount;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_oreCount;
	jint temp1 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	jint temp2 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, temp0, temp1);
	frame[4].i = temp2;
	LINE_NUMBER(219);
	if ((frame[4].i) == 0) goto label_8;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(220);
	jint temp0 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_production_Drill_lambda$setStats$1_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:lambda$setStats$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_Drill(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(183);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_consumers_ConsumeLiquidBase)) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_booster) == 0) goto label_1;
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

jbool M_mindustry_world_blocks_production_Drill_lambda$setStats$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:lambda$setStats$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(179);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(178);
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[1].o)));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[2].o)))->F_wallOre) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_itemDrop;
	if (((jint)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_hardness) > ((jint)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_tier)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_blockedItems;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_blockedItems;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_itemDrop;
	LINE_NUMBER(179);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
label_4:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
label_6:;
	INST_ICONST(1);
	goto label_7;
label_1:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_production_Drill_lambda$drawPlace$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:lambda$drawPlace$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[1].o));
	if (((jint)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_hardness) > ((jint)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_tier)) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_blockedItems;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_Drill *) NULL_CHECK((frame[0].o)))->F_blockedItems;
	sp[1].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
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

jobject SM_mindustry_world_blocks_production_Drill_lambda$setBars$0_mindustry_world_blocks_production_Drill$DrillBuild_R_mindustry_ui_Bar(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:lambda$setBars$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_Drill(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(118);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_Drill_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_world_blocks_production_Drill_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_Drill_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_Drill_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_world_blocks_production_Drill_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_Drill_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_Drill_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_world_blocks_production_Drill_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_Drill_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_production_Drill_lambda$setBars$3_mindustry_world_blocks_production_Drill$DrillBuild_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:lambda$setBars$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_Drill(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_production_Drill$DrillBuild *) NULL_CHECK((frame[0].o)))->F_warmup);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_production_Drill_lambda$setBars$2_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:lambda$setBars$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_Drill(ctx);
	{
	LINE_NUMBER(118);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_ammo;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_production_Drill_lambda$setBars$1_mindustry_world_blocks_production_Drill$DrillBuild_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/Drill:lambda$setBars$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_Drill(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(118);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.drillspeed"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jfloat temp1 = ((jfloat)((mindustry_world_blocks_production_Drill$DrillBuild *) NULL_CHECK((frame[0].o)))->F_lastDrillSpeed) * (jfloat(60.0f));
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_production_Drill$DrillBuild_timeScale_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_Drill$DrillBuild_timeScale_R_float])(ctx, (frame[0].o));
	sp[3].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, (temp1 * temp2), (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_production_Drill;
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

	{ // Field blockedItem
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field blockedItems
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field returnItem
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_world_blocks_production_Drill[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_blocks_production_Drill_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_Block_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_blocks_production_Drill_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_Block_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_Block_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_production_Drill_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_Block_outputsItems_R_boolean,
	(void *) M_mindustry_world_blocks_production_Drill_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_blocks_production_Drill_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_production_Drill_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_production_Drill_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_Block_reinitializeConsumers,
	(void *) M_mindustry_world_Block_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_production_Drill_getDrop_mindustry_world_Tile_R_mindustry_type_Item,
	(void *) M_mindustry_world_blocks_production_Drill_getDrillTime_mindustry_type_Item_R_float,
	(void *) M_mindustry_world_blocks_production_Drill_countOre_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_production_Drill_canMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_blocks_production_Drill_lambda$countOre$0_mindustry_type_Item_mindustry_type_Item_R_int,
	(void *) M_mindustry_world_blocks_production_Drill_lambda$setStats$0_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_production_Drill_lambda$drawPlace$0_mindustry_world_Tile_R_boolean,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
	{ "getDrop", "(Lmindustry/world/Tile;)Lmindustry/type/Item;" },
	{ "getDrillTime", "(Lmindustry/type/Item;)F" },
	{ "countOre", "(Lmindustry/world/Tile;)V" },
	{ "canMine", "(Lmindustry/world/Tile;)Z" },
	{ "lambda$countOre$0", "(Lmindustry/type/Item;Lmindustry/type/Item;)I" },
	{ "lambda$setStats$0", "(Lmindustry/world/Block;)Z" },
	{ "lambda$drawPlace$0", "(Lmindustry/world/Tile;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_production_Drill$DrillBuild,
};

static FieldMetadata fields[] {
	{ "hardnessDrillMultiplier", &class_float, offsetof(mindustry_world_blocks_production_Drill, F_hardnessDrillMultiplier), "F", 1 },
	{ "oreCount", &class_arc_struct_ObjectIntMap, offsetof(mindustry_world_blocks_production_Drill, F_oreCount), "Larc/struct/ObjectIntMap;", 20 },
	{ "itemArray", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_production_Drill, F_itemArray), "Larc/struct/Seq;", 20 },
	{ "tier", &class_int, offsetof(mindustry_world_blocks_production_Drill, F_tier), "I", 1 },
	{ "drillTime", &class_float, offsetof(mindustry_world_blocks_production_Drill, F_drillTime), "F", 1 },
	{ "liquidBoostIntensity", &class_float, offsetof(mindustry_world_blocks_production_Drill, F_liquidBoostIntensity), "F", 1 },
	{ "warmupSpeed", &class_float, offsetof(mindustry_world_blocks_production_Drill, F_warmupSpeed), "F", 1 },
	{ "blockedItem", &class_mindustry_type_Item, offsetof(mindustry_world_blocks_production_Drill, F_blockedItem), "Lmindustry/type/Item;", 1 },
	{ "blockedItems", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_production_Drill, F_blockedItems), "Larc/struct/Seq;", 1 },
	{ "returnItem", &class_mindustry_type_Item, offsetof(mindustry_world_blocks_production_Drill, F_returnItem), "Lmindustry/type/Item;", 4 },
	{ "returnCount", &class_int, offsetof(mindustry_world_blocks_production_Drill, F_returnCount), "I", 4 },
	{ "drawMineItem", &class_boolean, offsetof(mindustry_world_blocks_production_Drill, F_drawMineItem), "Z", 1 },
	{ "drillEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_production_Drill, F_drillEffect), "Lmindustry/entities/Effect;", 1 },
	{ "drillEffectRnd", &class_float, offsetof(mindustry_world_blocks_production_Drill, F_drillEffectRnd), "F", 1 },
	{ "drillEffectChance", &class_float, offsetof(mindustry_world_blocks_production_Drill, F_drillEffectChance), "F", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_world_blocks_production_Drill, F_rotateSpeed), "F", 1 },
	{ "updateEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_production_Drill, F_updateEffect), "Lmindustry/entities/Effect;", 1 },
	{ "updateEffectChance", &class_float, offsetof(mindustry_world_blocks_production_Drill, F_updateEffectChance), "F", 1 },
	{ "drillMultipliers", &class_arc_struct_ObjectFloatMap, offsetof(mindustry_world_blocks_production_Drill, F_drillMultipliers), "Larc/struct/ObjectFloatMap;", 1 },
	{ "drawRim", &class_boolean, offsetof(mindustry_world_blocks_production_Drill, F_drawRim), "Z", 1 },
	{ "drawSpinSprite", &class_boolean, offsetof(mindustry_world_blocks_production_Drill, F_drawSpinSprite), "Z", 1 },
	{ "heatColor", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_production_Drill, F_heatColor), "Larc/graphics/Color;", 1 },
	{ "rimRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_production_Drill, F_rimRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "rotatorRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_production_Drill, F_rotatorRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "topRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_production_Drill, F_topRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "itemRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_production_Drill, F_itemRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_production_Drill_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_production_Drill_init, VTABLE_mindustry_world_blocks_production_Drill_init, "()V", 1 },
	{ "drawPlanConfig", (intptr_t) M_mindustry_world_blocks_production_Drill_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_production_Drill_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_blocks_production_Drill_setBars, VTABLE_mindustry_world_blocks_production_Drill_setBars, "()V", 1 },
	{ "getDrop", (intptr_t) M_mindustry_world_blocks_production_Drill_getDrop_mindustry_world_Tile_R_mindustry_type_Item, VTABLE_mindustry_world_blocks_production_Drill_getDrop_mindustry_world_Tile_R_mindustry_type_Item, "(Lmindustry/world/Tile;)Lmindustry/type/Item;", 1 },
	{ "canPlaceOn", (intptr_t) M_mindustry_world_blocks_production_Drill_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean, VTABLE_mindustry_world_blocks_production_Drill_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean, "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_production_Drill_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_production_Drill_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "getDrillTime", (intptr_t) M_mindustry_world_blocks_production_Drill_getDrillTime_mindustry_type_Item_R_float, VTABLE_mindustry_world_blocks_production_Drill_getDrillTime_mindustry_type_Item_R_float, "(Lmindustry/type/Item;)F", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_production_Drill_setStats, VTABLE_mindustry_world_blocks_production_Drill_setStats, "()V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_blocks_production_Drill_icons_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_production_Drill_icons_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "countOre", (intptr_t) M_mindustry_world_blocks_production_Drill_countOre_mindustry_world_Tile, VTABLE_mindustry_world_blocks_production_Drill_countOre_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 4 },
	{ "canMine", (intptr_t) M_mindustry_world_blocks_production_Drill_canMine_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_production_Drill_canMine_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "access$000", (intptr_t) SM_mindustry_world_blocks_production_Drill_access$000_mindustry_world_blocks_production_Drill_R_int, 0, "(Lmindustry/world/blocks/production/Drill;)I", 4104 },
	{ "lambda$countOre$0", (intptr_t) M_mindustry_world_blocks_production_Drill_lambda$countOre$0_mindustry_type_Item_mindustry_type_Item_R_int, VTABLE_mindustry_world_blocks_production_Drill_lambda$countOre$0_mindustry_type_Item_mindustry_type_Item_R_int, "(Lmindustry/type/Item;Lmindustry/type/Item;)I", 4098 },
	{ "lambda$setStats$1", (intptr_t) SM_mindustry_world_blocks_production_Drill_lambda$setStats$1_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$setStats$0", (intptr_t) M_mindustry_world_blocks_production_Drill_lambda$setStats$0_mindustry_world_Block_R_boolean, VTABLE_mindustry_world_blocks_production_Drill_lambda$setStats$0_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 4098 },
	{ "lambda$drawPlace$0", (intptr_t) M_mindustry_world_blocks_production_Drill_lambda$drawPlace$0_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_production_Drill_lambda$drawPlace$0_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 4098 },
	{ "lambda$setBars$0", (intptr_t) SM_mindustry_world_blocks_production_Drill_lambda$setBars$0_mindustry_world_blocks_production_Drill$DrillBuild_R_mindustry_ui_Bar, 0, "(Lmindustry/world/blocks/production/Drill$DrillBuild;)Lmindustry/ui/Bar;", 4106 },
	{ "lambda$setBars$3", (intptr_t) SM_mindustry_world_blocks_production_Drill_lambda$setBars$3_mindustry_world_blocks_production_Drill$DrillBuild_R_float, 0, "(Lmindustry/world/blocks/production/Drill$DrillBuild;)F", 4106 },
	{ "lambda$setBars$2", (intptr_t) SM_mindustry_world_blocks_production_Drill_lambda$setBars$2_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$1", (intptr_t) SM_mindustry_world_blocks_production_Drill_lambda$setBars$1_mindustry_world_blocks_production_Drill$DrillBuild_R_java_lang_CharSequence, 0, "(Lmindustry/world/blocks/production/Drill$DrillBuild;)Ljava/lang/CharSequence;", 4106 },
};

Class class_mindustry_world_blocks_production_Drill{
		.nativeName = (intptr_t) "mindustry/world/blocks/production/Drill",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_production_Drill),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_production_Drill,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_production_Drill,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_production_Drill,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 196,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_production_Drill = registerClass(&class_mindustry_world_blocks_production_Drill);

}
