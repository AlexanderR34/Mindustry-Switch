#include "mindustry/world/blocks/units/UnitFactory.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Cons_8.h"
#include "java/lang/Integer.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Cons_9.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Cons_6.h"
#include "arc/func/Prov.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Cons_7.h"
#include "arc/util/Eachable.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitPlan.h"
#include "arc/graphics/Color.h"
#include "mindustry/world/consumers/ConsumeItemDynamic.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "arc/func/Floatp.h"
#include "arc/func/Boolf.h"
#include "arc/func/Floatf.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Prov_6.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Prov_7.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Prov_4.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Prov_5.h"
#include "arc/func/Cons2.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/entities/Units.h"
#include "mindustry/world/blocks/payloads/PayloadBlock.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_mindustry_world_meta_StatValue_1.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Cons_11.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Cons_10.h"
#include "mindustry/world/meta/StatValue.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/game/Rules.h"
#include "arc/func/Cons.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/units/UnitBlock.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Math.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Floatf_1.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Func_4.h"
#include "arc/util/Scaling.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Func_3.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Func_5.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Cons2_4.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Cons2_5.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Floatp_2.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Cons2_3.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Boolf_1.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/world/blocks/units/UnitFactory.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "mindustry/type/ItemStack.h"
#include "arc/audio/Sound.h"
#include "mindustry/world/blocks/units/UnitFactory_invoke_arc_func_Floatp_3.h"
#include "mindustry/ctype/Content.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_world_blocks_units_UnitFactory(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_units_UnitBlock(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_units_UnitFactory *) object;
	if (self->F_capacities)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_capacities)->clazz)->markFunction)((jobject) self->F_capacities, mark, depth + 1);
	if (self->F_plans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plans)->clazz)->markFunction)((jobject) self->F_plans, mark, depth + 1);
	if (self->F_createSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_createSound)->clazz)->markFunction)((jobject) self->F_createSound, mark, depth + 1);
}

void clinit_mindustry_world_blocks_units_UnitFactory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_units_UnitBlock(ctx);
}

void init_mindustry_world_blocks_units_UnitFactory_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	init_mindustry_world_blocks_units_UnitBlock_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(0)));
	((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_capacities = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_unitCreate;
	((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_createSound = (jref) sp[1].o;
	LINE_NUMBER(41);
	((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_createSoundVolume = (jfloat(1));
	LINE_NUMBER(45);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(46);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasPower = (jint(1));
	LINE_NUMBER(47);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(48);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(49);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurable = (jint(1));
	LINE_NUMBER(50);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_clearOnDoubleTap = (jint(1));
	LINE_NUMBER(51);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outputsPayload = (jint(1));
	LINE_NUMBER(52);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(53);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_regionRotated1 = (jint(1));
	LINE_NUMBER(54);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_commandable = (jint(1));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopUnitBuilding;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSound = (jref) sp[1].o;
	LINE_NUMBER(56);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ambientSoundVolume = (jfloat(0.09f));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_java_lang_Integer);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons2_3(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons2_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons2_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_units_UnitFactory_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_type_UnitType);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons2_4(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons2_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons2_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_units_UnitFactory_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_ai_UnitCommand);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons2_5(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons2_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons2_5);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_units_UnitFactory_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_6);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_units_UnitFactory_configClear_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory_configClear_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumeItemDynamic(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItemDynamic);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Func_3(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Func_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Func_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_world_consumers_ConsumeItemDynamic_arc_func_Func(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:init", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	((func_mindustry_world_blocks_units_UnitFactory_initCapacities) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory_initCapacities])(ctx, (frame[0].o));
	LINE_NUMBER(90);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory_afterPatch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:afterPatch", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	((func_mindustry_world_blocks_units_UnitFactory_initCapacities) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory_initCapacities])(ctx, (frame[0].o));
	LINE_NUMBER(96);
	M_mindustry_world_Block_afterPatch(ctx, (frame[0].o));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory_initCapacities(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:initCapacities", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_capacities = (jref) sp[1].o;
	LINE_NUMBER(101);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity = (10);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_plans;
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
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[2].o)))->F_requirements;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_7;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_capacities;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_capacities;
	sp[2].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[2].o))->F_id))), (((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount) * (jint(2))));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity), (((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount) * (jint(2))));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity = temp2;
	LINE_NUMBER(103);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(107);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_7);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory_checkContentArrayCapacity_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:checkContentArrayCapacity", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(114);
	M_mindustry_world_Block_checkContentArrayCapacity_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_capacities;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (frame[1].i)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_capacities;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, sp[1].o, (frame[1].i));
	((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK(sp[0].o))->F_capacities = (jref) sp[1].o;
	}
label_2:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:setBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	M_mindustry_world_Block_setBars(ctx, (frame[0].o));
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"progress"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Func_4(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Func_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Func_4);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_units_UnitFactory_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"units"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Func_5(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Func_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Func_5);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_units_UnitFactory_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitFactory_outputsItems_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:outputsItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:setStats", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_itemCapacity;
	((func_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_output;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_mindustry_world_meta_StatValue_1(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_mindustry_world_meta_StatValue_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_mindustry_world_meta_StatValue_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitFactory_icons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:icons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(3)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK((frame[0].o)))->F_outRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK((frame[0].o)))->F_topRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:drawPlanRegion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK((frame[0].o)))->F_outRegion;
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, temp3, (jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) * (90)))));
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK((frame[0].o)))->F_topRegion;
	jfloat temp4 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp5 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp4, temp5);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory_getPlanConfigs_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:getPlanConfigs", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[3].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_type_UnitType_isBanned_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_isBanned_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[3].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(208);
	goto label_1;
label_2:;
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory_lambda$setStats$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setStats$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o));
	LINE_NUMBER(155);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(186);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_units_UnitFactory_lambda$setStats$1_mindustry_world_blocks_units_UnitFactory$UnitPlan_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setStats$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_type_UnitType_isBanned_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_isBanned_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_remove;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_type_UnitType_unlockedNow_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_unlockedNow_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(164);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(170);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(182);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_lock;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_darkerGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	}
label_10:;
	LINE_NUMBER(184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_units_UnitFactory_lambda$setStats$4_mindustry_world_blocks_units_UnitFactory$UnitPlan_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setStats$4", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(172);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_requirements;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(173);
	if (((frame[2].i) % (6)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_requirements;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(178);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[3].o)))->F_item;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_displayItem_mindustry_type_Item_int_float_boolean_R_arc_scene_ui_layout_Table(ctx, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[3].o)))->F_amount), ((jfloat)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_time), (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(172);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(180);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_units_UnitFactory_lambda$setStats$3_mindustry_world_blocks_units_UnitFactory$UnitPlan_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setStats$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(165);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(167);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_time) / (jfloat(60.0f))), (jint(1)));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"unit.seconds"_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 \u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_units_UnitFactory_lambda$setStats$2_mindustry_world_blocks_units_UnitFactory$UnitPlan_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setStats$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(163);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_R_arc_scene_Element(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$3_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_mindustry_ui_Bar(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setBars$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(128);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_5);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Floatp_2(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Floatp_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Floatp_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$6_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setBars$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_useUnitCap) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp2 = (jint)SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int(ctx, sp[0].o);
	jfloat temp3 = temp1 / (jfloat(temp2));
	sp[0].f = temp3;
	sp += 1;
	goto label_2;
	}
label_3:;
	INST_FCONST(1);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$5_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setBars$5", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	{
	LINE_NUMBER(135);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_power;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$4_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setBars$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[lightgray]\ue815"_j));
	goto label_2;
label_1:;
	{
	LINE_NUMBER(130);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.unitcap"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	sp[3].o = frame[0].o;
	LINE_NUMBER(131);
	sp[3].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, sp[3].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[3].o))->F_name;
	sp[3].o = (jobject)SM_mindustry_ui_Fonts_getUnicodeStr_java_lang_String_R_java_lang_String(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	LINE_NUMBER(132);
	sp[3].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[3].o);
	sp[4].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[3].o, sp[4].o);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp2);
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	jint temp3 = jint(2);
	LINE_NUMBER(133);
	sp[3].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	jobject temp4 = sp[3].o;
	sp[3].o = sp[2].o;
	sp[4].i = temp3;
	sp += 5;
	if (temp4 != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)SM_mindustry_entities_Units_getStringCap_mindustry_game_Team_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_useUnitCap) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)SM_mindustry_entities_Units_getStringCap_mindustry_game_Team_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"\u221e"_j));
label_7:;
	{
	sp -= 6;
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[5].o;
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_2:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$0_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_mindustry_ui_Bar(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setBars$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(121);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Prov_7);
		sp[2].o = (jobject) proxy;
	}
	sp[3].o = frame[0].o;
	LINE_NUMBER(124);
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Floatp_3(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Floatp_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Floatp_3);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$2_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setBars$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	{
	LINE_NUMBER(123);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_ammo;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$1_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$setBars$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(122);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.progress"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_fraction_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_fraction_R_float])(ctx, (frame[0].o));
	sp[3].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (temp1 * (jfloat(100.0f))), (jint(0)));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_units_UnitFactory_lambda$initCapacities$0_mindustry_world_consumers_Consume(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$initCapacities$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Floatf_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_consumers_Consume *) NULL_CHECK(sp[0].o))->F_multiplier = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_units_UnitFactory_lambda$initCapacities$1_mindustry_gen_Building_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$initCapacities$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(109);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitFactory_lambda$new$5_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$new$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[1].o)))->F_currentPlan) == (jint(-1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_plans;
	jint temp0 = (jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[1].o)))->F_currentPlan;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_plans;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o))))->F_requirements;
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_mindustry_type_ItemStack(ctx);
	(sp++)->o = SF_mindustry_type_ItemStack_empty;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_units_UnitFactory_lambda$new$4_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$new$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(82);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_command = (jref) (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_units_UnitFactory_lambda$new$3_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_mindustry_ai_UnitCommand(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$new$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(81);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[0].o)))->F_command = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitFactory_lambda$new$1_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$new$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(70);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurable) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_plans;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[3].i = temp0;
	LINE_NUMBER(73);
	if (((jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[1].o)))->F_currentPlan) != (frame[3].i)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(74);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[1].o)))->F_currentPlan = (frame[3].i);
	LINE_NUMBER(75);
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[1].o)))->F_progress = (jfloat(0));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[1].o)))->F_command;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[2].o)))->F_commands;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[1].o)))->F_command;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(77);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[1].o)))->F_command = (jref) (jobject(nullptr));
	}
label_6:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_units_UnitFactory_lambda$new$2_mindustry_type_UnitType_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$new$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
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

void M_mindustry_world_blocks_units_UnitFactory_lambda$new$0_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_java_lang_Integer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(59);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurable) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[1].o)))->F_currentPlan;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	if (temp0 != temp1) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	sp += 1;
	if (temp0 < 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[0].o)))->F_plans;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
label_3:;
	INST_ICONST(-1);
	goto label_5;
label_4:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	sp++;
label_5:;
	{
	sp -= 2;
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK(sp[0].o))->F_currentPlan = sp[1].i;
	LINE_NUMBER(63);
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[1].o)))->F_progress = (jfloat(0));
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[1].o)))->F_command;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_commands;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[1].o)))->F_command;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(65);
	((mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild *) NULL_CHECK((frame[1].o)))->F_command = (jref) (jobject(nullptr));
	}
label_8:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_units_UnitFactory[] {
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
	(void *) M_mindustry_world_blocks_units_UnitFactory_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_blocks_units_UnitFactory_afterPatch,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock_load,
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
	(void *) M_mindustry_world_blocks_units_UnitFactory_setStats,
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
	(void *) M_mindustry_world_Block_drawPlace_int_int_int_boolean,
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
	(void *) M_mindustry_world_blocks_units_UnitFactory_outputsItems_R_boolean,
	(void *) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
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
	(void *) M_mindustry_world_blocks_units_UnitFactory_setBars,
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
	(void *) M_mindustry_world_blocks_units_UnitFactory_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
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
	(void *) M_mindustry_world_blocks_units_UnitFactory_icons_R_Array1_arc_graphics_g2d_TextureRegion,
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
	(void *) M_mindustry_world_blocks_units_UnitFactory_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_blocks_units_UnitFactory_getPlanConfigs_arc_struct_Seq,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock_findFactoryRegion_java_lang_String_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_units_UnitFactory_initCapacities,
	(void *) M_mindustry_world_blocks_units_UnitFactory_lambda$setStats$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_units_UnitFactory_lambda$new$5_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_blocks_units_UnitFactory_lambda$new$1_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_mindustry_type_UnitType,
	(void *) M_mindustry_world_blocks_units_UnitFactory_lambda$new$0_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_java_lang_Integer,
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
	{ "findFactoryRegion", "(Ljava/lang/String;)Larc/graphics/g2d/TextureRegion;" },
	{ "initCapacities", "()V" },
	{ "lambda$setStats$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$5", "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;)[Lmindustry/type/ItemStack;" },
	{ "lambda$new$1", "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;Lmindustry/type/UnitType;)V" },
	{ "lambda$new$0", "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;Ljava/lang/Integer;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_units_UnitFactory$UnitPlan,
	&class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild,
};

static FieldMetadata fields[] {
	{ "capacities", getArrayClass(&class_int, 1), offsetof(mindustry_world_blocks_units_UnitFactory, F_capacities), "[I", 1 },
	{ "plans", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_units_UnitFactory, F_plans), "Larc/struct/Seq;", 1 },
	{ "createSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_units_UnitFactory, F_createSound), "Larc/audio/Sound;", 1 },
	{ "createSoundVolume", &class_float, offsetof(mindustry_world_blocks_units_UnitFactory, F_createSoundVolume), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_units_UnitFactory_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_init, VTABLE_mindustry_world_blocks_units_UnitFactory_init, "()V", 1 },
	{ "afterPatch", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_afterPatch, VTABLE_mindustry_world_blocks_units_UnitFactory_afterPatch, "()V", 1 },
	{ "initCapacities", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_initCapacities, VTABLE_mindustry_world_blocks_units_UnitFactory_initCapacities, "()V", 1 },
	{ "checkContentArrayCapacity", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_checkContentArrayCapacity_int_int, VTABLE_mindustry_world_blocks_units_UnitFactory_checkContentArrayCapacity_int_int, "(II)V", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_setBars, VTABLE_mindustry_world_blocks_units_UnitFactory_setBars, "()V", 1 },
	{ "outputsItems", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_outputsItems_R_boolean, VTABLE_mindustry_world_blocks_units_UnitFactory_outputsItems_R_boolean, "()Z", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_setStats, VTABLE_mindustry_world_blocks_units_UnitFactory_setStats, "()V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_icons_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_units_UnitFactory_icons_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "drawPlanRegion", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_units_UnitFactory_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "getPlanConfigs", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_getPlanConfigs_arc_struct_Seq, VTABLE_mindustry_world_blocks_units_UnitFactory_getPlanConfigs_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "lambda$setStats$0", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_lambda$setStats$0_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_units_UnitFactory_lambda$setStats$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setStats$1", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$setStats$1_mindustry_world_blocks_units_UnitFactory$UnitPlan_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setStats$4", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$setStats$4_mindustry_world_blocks_units_UnitFactory$UnitPlan_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setStats$3", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$setStats$3_mindustry_world_blocks_units_UnitFactory$UnitPlan_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setStats$2", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$setStats$2_mindustry_world_blocks_units_UnitFactory$UnitPlan_arc_scene_ui_Image, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$setBars$3", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$3_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_mindustry_ui_Bar, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;)Lmindustry/ui/Bar;", 4106 },
	{ "lambda$setBars$6", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$6_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_float, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;)F", 4106 },
	{ "lambda$setBars$5", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$5_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$4", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$4_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_java_lang_CharSequence, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$setBars$0", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$0_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_mindustry_ui_Bar, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;)Lmindustry/ui/Bar;", 4106 },
	{ "lambda$setBars$2", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$2_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$1", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$setBars$1_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_java_lang_CharSequence, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$initCapacities$0", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$initCapacities$0_mindustry_world_consumers_Consume, 0, "(Lmindustry/world/consumers/Consume;)V", 4106 },
	{ "lambda$initCapacities$1", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$initCapacities$1_mindustry_gen_Building_R_float, 0, "(Lmindustry/gen/Building;)F", 4106 },
	{ "lambda$new$5", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_lambda$new$5_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_Array1_mindustry_type_ItemStack, VTABLE_mindustry_world_blocks_units_UnitFactory_lambda$new$5_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_R_Array1_mindustry_type_ItemStack, "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;)[Lmindustry/type/ItemStack;", 4098 },
	{ "lambda$new$4", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$new$4_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;)V", 4106 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$new$3_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_mindustry_ai_UnitCommand, 0, "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;Lmindustry/ai/UnitCommand;)V", 4106 },
	{ "lambda$new$1", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_lambda$new$1_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_mindustry_type_UnitType, VTABLE_mindustry_world_blocks_units_UnitFactory_lambda$new$1_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_mindustry_type_UnitType, "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;Lmindustry/type/UnitType;)V", 4098 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_world_blocks_units_UnitFactory_lambda$new$2_mindustry_type_UnitType_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean, 0, "(Lmindustry/type/UnitType;Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)Z", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_world_blocks_units_UnitFactory_lambda$new$0_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_java_lang_Integer, VTABLE_mindustry_world_blocks_units_UnitFactory_lambda$new$0_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild_java_lang_Integer, "(Lmindustry/world/blocks/units/UnitFactory$UnitFactoryBuild;Ljava/lang/Integer;)V", 4098 },
};

Class class_mindustry_world_blocks_units_UnitFactory{
		.nativeName = (intptr_t) "mindustry/world/blocks/units/UnitFactory",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_units_UnitBlock,
		.size = sizeof(mindustry_world_blocks_units_UnitFactory),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_units_UnitFactory,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_units_UnitFactory,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_units_UnitFactory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 195,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_units_UnitFactory = registerClass(&class_mindustry_world_blocks_units_UnitFactory);

}
