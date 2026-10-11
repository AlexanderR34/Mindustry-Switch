#include "mindustry/world/blocks/production/WallCrafter.h"
#include "arc/func/Prov.h"
#include "mindustry/world/meta/Attribute.h"
#include "arc/util/Eachable.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "arc/util/I18NBundle.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Floatp.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/production/WallCrafter_WallCrafterBuild.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/world/consumers/ConsumeLiquidBase.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/content/Items.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/blocks/production/WallCrafter_invoke_arc_func_Func_1.h"
#include "arc/struct/EnumSet.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/meta/StatValue.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/world/blocks/production/WallCrafter_invoke_arc_func_Boolf_4.h"
#include "mindustry/world/blocks/production/WallCrafter_invoke_arc_func_Boolf_5.h"
#include "arc/func/Cons.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/production/WallCrafter.h"
#include "mindustry/world/blocks/production/WallCrafter_invoke_arc_func_Floatp_1.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/world/blocks/Attributes.h"
#include "java/lang/CharSequence.h"
#include "mindustry/world/blocks/production/WallCrafter_invoke_arc_func_Prov_3.h"
#include "arc/util/Strings.h"
#include "mindustry/world/blocks/production/WallCrafter_invoke_arc_func_Prov_2.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/world/blocks/production/WallCrafter_invoke_arc_func_Boolf_3.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/consumers/ConsumeItems.h"
#include "java/util/Objects.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jint SF_mindustry_world_blocks_production_WallCrafter_idx;

void mark_mindustry_world_blocks_production_WallCrafter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_production_WallCrafter *) object;
	if (self->F_topRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_topRegion)->clazz)->markFunction)((jobject) self->F_topRegion, mark, depth + 1);
	if (self->F_rotatorBottomRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rotatorBottomRegion)->clazz)->markFunction)((jobject) self->F_rotatorBottomRegion, mark, depth + 1);
	if (self->F_rotatorRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rotatorRegion)->clazz)->markFunction)((jobject) self->F_rotatorRegion, mark, depth + 1);
	if (self->F_updateEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updateEffect)->clazz)->markFunction)((jobject) self->F_updateEffect, mark, depth + 1);
	if (self->F_attribute)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attribute)->clazz)->markFunction)((jobject) self->F_attribute, mark, depth + 1);
	if (self->F_output)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_output)->clazz)->markFunction)((jobject) self->F_output, mark, depth + 1);
	if (self->F_itemConsumer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemConsumer)->clazz)->markFunction)((jobject) self->F_itemConsumer, mark, depth + 1);
}

void init_mindustry_world_blocks_production_WallCrafter_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_WallCrafter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(33);
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_drillTime = (jfloat(150.0f));
	LINE_NUMBER(35);
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_liquidBoostIntensity = (jfloat(1.6f));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_mineWallSmall;
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK(sp[0].o))->F_updateEffect = (jref) sp[1].o;
	LINE_NUMBER(38);
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_updateEffectChance = (jfloat(0.02f));
	LINE_NUMBER(39);
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(2));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_sand;
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK(sp[0].o))->F_attribute = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_sand;
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK(sp[0].o))->F_output = (jref) sp[1].o;
	LINE_NUMBER(45);
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_boostItemUseTime = (jfloat(120.0f));
	LINE_NUMBER(47);
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_itemBoostIntensity = (jfloat(1.6f));
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers;
	((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers = (temp0 + (jint(1)));
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK(sp[0].o))->F_timerUse = temp0;
	LINE_NUMBER(56);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(57);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(58);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(59);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(60);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ignoreLineRotation = (jint(1));
	LINE_NUMBER(61);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_regionRotated1 = (jint(1));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled) | (jint(2)));
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (jint(1)));
	jint temp3 = jint(0);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_drill;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_EnumSet_of_Array1_java_lang_Enum_R_arc_struct_EnumSet(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags = (jref) sp[1].o;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_WallCrafter_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:setBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	M_mindustry_world_Block_setBars(ctx, (frame[0].o));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"drillspeed"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Func_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_production_WallCrafter_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_WallCrafter_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_WallCrafter_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:setStats", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_output;
	sp[2].o = (jobject)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_output;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Item])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_tiles;
	sp[2].o = (jobject)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_attribute;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_boolean_boolean_R_mindustry_world_meta_StatValue(ctx, sp[2].o, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_floating), (jfloat(1)), (jint(1)), (jint(0)));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_drillSpeed;
	jfloat temp0 = ((jfloat(60.0f)) / ((jfloat)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_drillTime)) * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_itemsSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_itemConsumer;
	if (sp[0].o == nullptr) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(85);
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	((mindustry_world_meta_Stats *) NULL_CHECK(sp[0].o))->F_timePeriod = ((jfloat)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_boostItemUseTime);
	}
label_8:;
	{
	LINE_NUMBER(87);
	if ((frame[1].i) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_itemConsumer;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_consumers_ConsumeItems)) == 0) goto label_9;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_consumers_ConsumeItems, (frame[3].o)));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_booster;
	((func_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_booster;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_timesSpeed;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"{0}\u0001"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	jfloat temp0 = (jfloat)((mindustry_world_meta_Stats *) NULL_CHECK(sp[3].o))->F_timePeriod;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_itemBoostIntensity;
	jfloat temp2 = jfloat(0);
	sp[3].o = (jobject)((mindustry_world_consumers_ConsumeItems *) NULL_CHECK((frame[2].o)))->F_items;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_itemBoosters_java_lang_String_float_float_float_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(ctx, sp[2].o, temp0, temp1, temp2, sp[3].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_9:;
	{
	LINE_NUMBER(92);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_liquidBoostIntensity), (jfloat(1)), -1)) == 0) goto label_12;
	}
	{
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_world_blocks_production_WallCrafter_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_WallCrafter_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_consumers_ConsumeLiquidBase)) == 0) goto label_12;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquidBase, (frame[3].o)));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_booster;
	((func_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_booster;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_timesSpeed;
	LINE_NUMBER(95);
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"{0}\u0001"_j.string, 1, sp[2].o);
	jfloat temp0 = (jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[2].o)))->F_amount;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_liquidBoostIntensity;
	jint temp2 = jint(0);
	sp[3].o = frame[2].o;
	LINE_NUMBER(97);
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Boolf_4);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	LINE_NUMBER(95);
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_speedBoosters_java_lang_String_float_float_boolean_arc_func_Boolf_R_mindustry_world_meta_StatValue(ctx, sp[2].o, temp0, temp1, temp2, sp[3].o);
	LINE_NUMBER(94);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_12:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_WallCrafter_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Boolf_5);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_mindustry_world_blocks_production_WallCrafter_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_production_WallCrafter_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume])(ctx, sp[1].o, sp[2].o);
	sp += 1;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK(sp[0].o))->F_hasLiquidBooster = sp[1].i;
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_production_WallCrafter_outputsItems_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:outputsItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_production_WallCrafter_rotatedOutput_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:rotatedOutput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_production_WallCrafter_icons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:icons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(2)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_topRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_WallCrafter_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:drawPlanRegion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_topRegion;
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, temp3, (jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) * (90)))));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_WallCrafter_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:drawPlace", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(132);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_production_WallCrafter_getEfficiency_int_int_int_arc_func_Cons_arc_func_Intc2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_WallCrafter_getEfficiency_int_int_int_arc_func_Cons_arc_func_Intc2_R_float])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (jobject(nullptr)), (jobject(nullptr)));
	frame[5].f = temp0;
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_formatFloat_java_lang_String_float_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_formatFloat_java_lang_String_float_int_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bar.drillspeed"_j))), (((jfloat(60.0f)) / ((jfloat)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_drillTime)) * (frame[5].f)), (jint(2)));
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_production_WallCrafter_drawPlaceText_java_lang_String_int_int_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_WallCrafter_drawPlaceText_java_lang_String_int_int_boolean_R_float])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[4].i));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_production_WallCrafter_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:canPlaceOn", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(138);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_production_WallCrafter_getEfficiency_int_int_int_arc_func_Cons_arc_func_Intc2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_WallCrafter_getEfficiency_int_int_int_arc_func_Cons_arc_func_Intc2_R_float])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y), (frame[3].i), (jobject(nullptr)), (jobject(nullptr)));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
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

jfloat M_mindustry_world_blocks_production_WallCrafter_getEfficiency_int_int_int_arc_func_Cons_arc_func_Intc2_R_float(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:getEfficiency", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(142);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(143);
	frame[7].i = ((frame[1].i) - ((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))) / (jint(2))));
	frame[8].i = ((frame[2].i) - ((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))) / (jint(2))));
	frame[9].i = ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(145);
	frame[10].i = (jint(0));
	}
label_5:;
	{
	if ((frame[10].i) >= ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(146);
	frame[11].i = (jint(0));
	frame[12].i = (jint(0));
	LINE_NUMBER(148);
	switch((frame[3].i)) {
		case 0: goto label_10;
		case 1: goto label_11;
		case 2: goto label_12;
		case 3: goto label_13;
		default: goto label_14;
	}
	}
label_10:;
	{
	LINE_NUMBER(150);
	frame[11].i = ((frame[7].i) + (frame[9].i));
	LINE_NUMBER(151);
	frame[12].i = ((frame[8].i) + (frame[10].i));
	LINE_NUMBER(152);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(154);
	frame[11].i = ((frame[7].i) + (frame[10].i));
	LINE_NUMBER(155);
	frame[12].i = ((frame[8].i) + (frame[9].i));
	LINE_NUMBER(156);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(158);
	frame[11].i = ((frame[7].i) - (jint(1)));
	LINE_NUMBER(159);
	frame[12].i = ((frame[8].i) + (frame[10].i));
	LINE_NUMBER(160);
	goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(162);
	frame[11].i = ((frame[7].i) + (frame[10].i));
	LINE_NUMBER(163);
	frame[12].i = ((frame[8].i) - (jint(1)));
	}
label_14:;
	{
	LINE_NUMBER(167);
	if ((frame[5].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(168);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[11].i), (frame[12].i));
	}
label_22:;
	{
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[11].i), (frame[12].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(172);
	if ((frame[13].o) == nullptr) goto label_25;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[13].o));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[13].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_attributes;
	sp[1].o = (jobject)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_attribute;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, sp[1].o);
	frame[14].f = temp0;
	LINE_NUMBER(174);
	frame[6].f = ((frame[6].f) + (frame[14].f));
	LINE_NUMBER(175);
	if ((floatCompare((frame[14].f), (jfloat(0)), -1)) <= 0) goto label_25;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_25;
	{
	LINE_NUMBER(176);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[13].o));
	}
label_25:;
	{
	LINE_NUMBER(145);
	INST_IINC(10, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (frame[6].f);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_world_blocks_production_WallCrafter_access$000_mindustry_world_blocks_production_WallCrafter_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_WallCrafter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_timerDump);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_production_WallCrafter_lambda$init$0_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:lambda$init$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_WallCrafter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(106);
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

jbool SM_mindustry_world_blocks_production_WallCrafter_lambda$setStats$0_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:lambda$setStats$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_WallCrafter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(92);
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

jobject M_mindustry_world_blocks_production_WallCrafter_lambda$setBars$0_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:lambda$setBars$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Prov_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_production_WallCrafter_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_production_WallCrafter_lambda$setBars$3_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:lambda$setBars$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_WallCrafter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_production_WallCrafter$WallCrafterBuild *) NULL_CHECK((frame[0].o)))->F_warmup);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_production_WallCrafter_lambda$setBars$2_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:lambda$setBars$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_WallCrafter(ctx);
	{
	LINE_NUMBER(72);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_ammo;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_production_WallCrafter_lambda$setBars$1_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:lambda$setBars$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.drillspeed"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, ((((jfloat)((mindustry_world_blocks_production_WallCrafter$WallCrafterBuild *) NULL_CHECK((frame[1].o)))->F_lastEfficiency) * (jfloat(60.0f))) / ((jfloat)((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK((frame[0].o)))->F_drillTime)), (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_production_WallCrafter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/WallCrafter:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_WallCrafter(ctx);
	{
	LINE_NUMBER(26);
	clinit_mindustry_world_blocks_production_WallCrafter(ctx);
	SF_mindustry_world_blocks_production_WallCrafter_idx = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_production_WallCrafter;
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

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field itemConsumer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

void *vtable_mindustry_world_blocks_production_WallCrafter[] {
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
	(void *) M_mindustry_world_blocks_production_WallCrafter_init,
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
	(void *) M_mindustry_world_blocks_production_WallCrafter_setStats,
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
	(void *) M_mindustry_world_blocks_production_WallCrafter_drawPlace_int_int_int_boolean,
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
	(void *) M_mindustry_world_blocks_production_WallCrafter_outputsItems_R_boolean,
	(void *) M_mindustry_world_blocks_production_WallCrafter_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_blocks_production_WallCrafter_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_blocks_production_WallCrafter_setBars,
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
	(void *) M_mindustry_world_blocks_production_WallCrafter_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
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
	(void *) M_mindustry_world_blocks_production_WallCrafter_icons_R_Array1_arc_graphics_g2d_TextureRegion,
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
	(void *) M_mindustry_world_blocks_production_WallCrafter_getEfficiency_int_int_int_arc_func_Cons_arc_func_Intc2_R_float,
	(void *) M_mindustry_world_blocks_production_WallCrafter_lambda$setBars$0_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_blocks_production_WallCrafter_lambda$setBars$1_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild_R_java_lang_CharSequence,
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
	{ "getEfficiency", "(IIILarc/func/Cons;Larc/func/Intc2;)F" },
	{ "lambda$setBars$0", "(Lmindustry/world/blocks/production/WallCrafter$WallCrafterBuild;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$1", "(Lmindustry/world/blocks/production/WallCrafter$WallCrafterBuild;)Ljava/lang/CharSequence;" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild,
};

static FieldMetadata fields[] {
	{ "idx", &class_int, (intptr_t) &SF_mindustry_world_blocks_production_WallCrafter_idx, "I", 8 },
	{ "topRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_production_WallCrafter, F_topRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "rotatorBottomRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_production_WallCrafter, F_rotatorBottomRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "rotatorRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_production_WallCrafter, F_rotatorRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "drillTime", &class_float, offsetof(mindustry_world_blocks_production_WallCrafter, F_drillTime), "F", 1 },
	{ "liquidBoostIntensity", &class_float, offsetof(mindustry_world_blocks_production_WallCrafter, F_liquidBoostIntensity), "F", 1 },
	{ "updateEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_production_WallCrafter, F_updateEffect), "Lmindustry/entities/Effect;", 1 },
	{ "updateEffectChance", &class_float, offsetof(mindustry_world_blocks_production_WallCrafter, F_updateEffectChance), "F", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_world_blocks_production_WallCrafter, F_rotateSpeed), "F", 1 },
	{ "attribute", &class_mindustry_world_meta_Attribute, offsetof(mindustry_world_blocks_production_WallCrafter, F_attribute), "Lmindustry/world/meta/Attribute;", 1 },
	{ "output", &class_mindustry_type_Item, offsetof(mindustry_world_blocks_production_WallCrafter, F_output), "Lmindustry/type/Item;", 1 },
	{ "boostItemUseTime", &class_float, offsetof(mindustry_world_blocks_production_WallCrafter, F_boostItemUseTime), "F", 1 },
	{ "itemBoostIntensity", &class_float, offsetof(mindustry_world_blocks_production_WallCrafter, F_itemBoostIntensity), "F", 1 },
	{ "itemConsumer", &class_mindustry_world_consumers_Consume, offsetof(mindustry_world_blocks_production_WallCrafter, F_itemConsumer), "Lmindustry/world/consumers/Consume;", 1 },
	{ "hasLiquidBooster", &class_boolean, offsetof(mindustry_world_blocks_production_WallCrafter, F_hasLiquidBooster), "Z", 1 },
	{ "timerUse", &class_int, offsetof(mindustry_world_blocks_production_WallCrafter, F_timerUse), "I", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_production_WallCrafter_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_setBars, VTABLE_mindustry_world_blocks_production_WallCrafter_setBars, "()V", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_setStats, VTABLE_mindustry_world_blocks_production_WallCrafter_setStats, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_init, VTABLE_mindustry_world_blocks_production_WallCrafter_init, "()V", 1 },
	{ "outputsItems", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_outputsItems_R_boolean, VTABLE_mindustry_world_blocks_production_WallCrafter_outputsItems_R_boolean, "()Z", 1 },
	{ "rotatedOutput", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_rotatedOutput_int_int_R_boolean, VTABLE_mindustry_world_blocks_production_WallCrafter_rotatedOutput_int_int_R_boolean, "(II)Z", 1 },
	{ "icons", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_icons_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_production_WallCrafter_icons_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "drawPlanRegion", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_production_WallCrafter_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_production_WallCrafter_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "canPlaceOn", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean, VTABLE_mindustry_world_blocks_production_WallCrafter_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean, "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z", 1 },
	{ "getEfficiency", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_getEfficiency_int_int_int_arc_func_Cons_arc_func_Intc2_R_float, VTABLE_mindustry_world_blocks_production_WallCrafter_getEfficiency_int_int_int_arc_func_Cons_arc_func_Intc2_R_float, "(IIILarc/func/Cons;Larc/func/Intc2;)F", 0 },
	{ "access$000", (intptr_t) SM_mindustry_world_blocks_production_WallCrafter_access$000_mindustry_world_blocks_production_WallCrafter_R_int, 0, "(Lmindustry/world/blocks/production/WallCrafter;)I", 4104 },
	{ "lambda$init$0", (intptr_t) SM_mindustry_world_blocks_production_WallCrafter_lambda$init$0_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$setStats$0", (intptr_t) SM_mindustry_world_blocks_production_WallCrafter_lambda$setStats$0_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$setBars$0", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_lambda$setBars$0_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild_R_mindustry_ui_Bar, VTABLE_mindustry_world_blocks_production_WallCrafter_lambda$setBars$0_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild_R_mindustry_ui_Bar, "(Lmindustry/world/blocks/production/WallCrafter$WallCrafterBuild;)Lmindustry/ui/Bar;", 4098 },
	{ "lambda$setBars$3", (intptr_t) SM_mindustry_world_blocks_production_WallCrafter_lambda$setBars$3_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild_R_float, 0, "(Lmindustry/world/blocks/production/WallCrafter$WallCrafterBuild;)F", 4106 },
	{ "lambda$setBars$2", (intptr_t) SM_mindustry_world_blocks_production_WallCrafter_lambda$setBars$2_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$1", (intptr_t) M_mindustry_world_blocks_production_WallCrafter_lambda$setBars$1_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild_R_java_lang_CharSequence, VTABLE_mindustry_world_blocks_production_WallCrafter_lambda$setBars$1_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild_R_java_lang_CharSequence, "(Lmindustry/world/blocks/production/WallCrafter$WallCrafterBuild;)Ljava/lang/CharSequence;", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_production_WallCrafter, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_production_WallCrafter{
		.nativeName = (intptr_t) "mindustry/world/blocks/production/WallCrafter",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_production_WallCrafter),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_production_WallCrafter,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_production_WallCrafter,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_production_WallCrafter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 192,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_production_WallCrafter = registerClass(&class_mindustry_world_blocks_production_WallCrafter);

}
