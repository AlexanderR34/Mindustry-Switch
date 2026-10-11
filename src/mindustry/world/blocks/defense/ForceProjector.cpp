#include "mindustry/world/blocks/defense/ForceProjector.h"
#include "mindustry/world/blocks/defense/ForceProjector_invoke_arc_func_Cons_10.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/content/Fx.h"
#include "mindustry/world/blocks/defense/ForceProjector.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/blocks/defense/ForceProjector_invoke_arc_func_Cons_11.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "arc/func/Floatp.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/consumers/ConsumeCoolant.h"
#include "arc/math/Mathf.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/blocks/defense/ForceProjector_invoke_arc_func_Cons_9.h"
#include "mindustry/world/blocks/defense/ForceProjector_invoke_arc_func_Cons_8.h"
#include "mindustry/world/blocks/defense/ForceProjector_invoke_arc_func_Cons_7.h"
#include "mindustry/world/blocks/defense/ForceProjector_invoke_arc_func_Cons_6.h"
#include "arc/util/Nullable.h"
#include "arc/math/geom/Intersector.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/world/blocks/defense/ForceProjector_invoke_mindustry_world_meta_StatValue_1.h"
#include "arc/struct/EnumSet.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/meta/StatValue.h"
#include "mindustry/ui/Bar.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/world/blocks/defense/ForceProjector_ForceBuild.h"
#include "arc/func/Cons.h"
#include "mindustry/world/blocks/defense/ForceProjector_invoke_arc_func_Floatp_1.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/world/meta/BlockGroup.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/blocks/defense/ForceProjector_invoke_arc_func_Func_1.h"
#include "mindustry/world/consumers/ConsumeItems.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"

extern "C" {

jobject SF_mindustry_world_blocks_defense_ForceProjector_paramBlock;
jobject SF_mindustry_world_blocks_defense_ForceProjector_paramEntity;
jobject SF_mindustry_world_blocks_defense_ForceProjector_shieldConsumer;

void mark_mindustry_world_blocks_defense_ForceProjector(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_defense_ForceProjector_paramBlock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_defense_ForceProjector_paramBlock)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_defense_ForceProjector_paramBlock, mark, depth + 1);
		if (SF_mindustry_world_blocks_defense_ForceProjector_paramEntity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_defense_ForceProjector_paramEntity)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_defense_ForceProjector_paramEntity, mark, depth + 1);
		if (SF_mindustry_world_blocks_defense_ForceProjector_shieldConsumer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_defense_ForceProjector_shieldConsumer)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_defense_ForceProjector_shieldConsumer, mark, depth + 1);
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
	auto self = (mindustry_world_blocks_defense_ForceProjector *) object;
	if (self->F_breakSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_breakSound)->clazz)->markFunction)((jobject) self->F_breakSound, mark, depth + 1);
	if (self->F_hitSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hitSound)->clazz)->markFunction)((jobject) self->F_hitSound, mark, depth + 1);
	if (self->F_absorbEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_absorbEffect)->clazz)->markFunction)((jobject) self->F_absorbEffect, mark, depth + 1);
	if (self->F_shieldBreakEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shieldBreakEffect)->clazz)->markFunction)((jobject) self->F_shieldBreakEffect, mark, depth + 1);
	if (self->F_forceShrinkEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_forceShrinkEffect)->clazz)->markFunction)((jobject) self->F_forceShrinkEffect, mark, depth + 1);
	if (self->F_topRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_topRegion)->clazz)->markFunction)((jobject) self->F_topRegion, mark, depth + 1);
	if (self->F_itemConsumer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemConsumer)->clazz)->markFunction)((jobject) self->F_itemConsumer, mark, depth + 1);
	if (self->F_coolantConsumer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_coolantConsumer)->clazz)->markFunction)((jobject) self->F_coolantConsumer, mark, depth + 1);
}

void init_mindustry_world_blocks_defense_ForceProjector_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers;
	((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers = (temp0 + (jint(1)));
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[0].o))->F_timerUse = temp0;
	LINE_NUMBER(32);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_phaseUseTime = (jfloat(350.0f));
	LINE_NUMBER(34);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_phaseRadiusBoost = (jfloat(80.0f));
	LINE_NUMBER(35);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_phaseShieldBoost = (jfloat(400.0f));
	LINE_NUMBER(36);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(101.7f));
	LINE_NUMBER(37);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_sides = (6);
	LINE_NUMBER(38);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_shieldRotation = (jfloat(0));
	LINE_NUMBER(39);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_shieldHealth = (jfloat(700.0f));
	LINE_NUMBER(40);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_cooldownNormal = (jfloat(1.75f));
	LINE_NUMBER(41);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_cooldownLiquid = (jfloat(1.5f));
	LINE_NUMBER(42);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_cooldownBrokenBase = (jfloat(0.35f));
	LINE_NUMBER(43);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_coolantConsumption = (jfloat(0.1f));
	LINE_NUMBER(44);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_consumeCoolant = (jint(1));
	LINE_NUMBER(45);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_crashDamageMultiplier = (jfloat(2));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldBreak;
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[0].o))->F_breakSound = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldHit;
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[0].o))->F_hitSound = (jref) sp[1].o;
	LINE_NUMBER(48);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_hitSoundVolume = (jfloat(0.12f));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_absorb;
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[0].o))->F_absorbEffect = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shieldBreak;
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[0].o))->F_shieldBreakEffect = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_forceShrink;
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[0].o))->F_forceShrinkEffect = (jref) sp[1].o;
	LINE_NUMBER(74);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(75);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_projectors;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(77);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasPower = (jint(1));
	LINE_NUMBER(78);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasLiquids = (jint(1));
	LINE_NUMBER(79);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled) | (jint(2)));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopShield;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSound = (jref) sp[1].o;
	LINE_NUMBER(82);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ambientSoundVolume = (jfloat(0.1f));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (jint(1)));
	jint temp3 = jint(0);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_shield;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_EnumSet_of_Array1_java_lang_Enum_R_arc_struct_EnumSet(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags = (jref) sp[1].o;
	LINE_NUMBER(85);
	if (((jint)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_consumeCoolant) == 0) goto label_32;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumeCoolant(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeCoolant);
	init_mindustry_world_consumers_ConsumeCoolant_float(ctx, sp[2].o, ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_coolantConsumption));
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[1].o))->F_coolantConsumer = (jref) sp[2].o;
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_ForceProjector_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_ForceProjector_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[2].o);
	sp[0].o = (jobject)((func_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, (jint(0)));
	}
label_32:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_ForceProjector_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	((func_mindustry_world_blocks_defense_ForceProjector_updateClipRadius_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_ForceProjector_updateClipRadius_float])(ctx, (frame[0].o), ((((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_radius) + ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_phaseRadiusBoost)) + (jfloat(3.0f))));
	LINE_NUMBER(93);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_ForceProjector_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:setBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	M_mindustry_world_Block_setBars(ctx, (frame[0].o));
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shield"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Func_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_defense_ForceProjector_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_ForceProjector_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_ForceProjector_outputsItems_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:outputsItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_ForceProjector_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:setStats", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_itemConsumer;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(111);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	((mindustry_world_meta_Stats *) NULL_CHECK(sp[0].o))->F_timePeriod = ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_phaseUseTime);
	}
label_4:;
	{
	LINE_NUMBER(112);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_shieldHealth;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_shieldHealth;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_none;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_range;
	jfloat temp1 = ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_radius) / (jfloat(8.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_blocks;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_regenerationRate;
	jfloat temp2 = ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_cooldownNormal) * (jfloat(60.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_cooldownTime;
	jfloat temp3 = jfloat((jint(((((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_shieldHealth) / ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_cooldownBrokenBase)) / (jfloat(60.0f))))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_seconds;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	LINE_NUMBER(118);
	if ((frame[1].i) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_itemConsumer;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_consumers_ConsumeItems)) == 0) goto label_10;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_consumers_ConsumeItems, (frame[3].o)));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_booster;
	((func_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_booster;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_shieldHealth;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"+{0} \u0001"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	jfloat temp0 = (jfloat)((mindustry_world_meta_Stats *) NULL_CHECK(sp[3].o))->F_timePeriod;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_phaseShieldBoost;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_phaseRadiusBoost;
	sp[3].o = (jobject)((mindustry_world_consumers_ConsumeItems *) NULL_CHECK((frame[2].o)))->F_items;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_itemBoosters_java_lang_String_float_float_float_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(ctx, sp[2].o, temp0, temp1, temp2, sp[3].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_booster;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_ForceProjector_invoke_mindustry_world_meta_StatValue_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_ForceProjector_invoke_mindustry_world_meta_StatValue_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_ForceProjector_invoke_mindustry_world_meta_StatValue_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_10:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_ForceProjector_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:drawPlace", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(154);
	M_mindustry_world_Block_drawPlace_int_int_int_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(156);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(157);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(3.0f)));
	LINE_NUMBER(158);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, ((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jint)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_sides), ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_radius), ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_shieldRotation));
	LINE_NUMBER(159);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(160);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(161);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, ((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jint)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_sides), ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_radius), ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_shieldRotation));
	LINE_NUMBER(162);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:lambda$setStats$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_getColumns_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getColumns_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:lambda$setStats$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
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
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_ForceProjector_consumesLiquid_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_ForceProjector_consumesLiquid_mindustry_type_Liquid_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 != 0) goto label_4;
	}
	goto label_1;
label_4:;
	{
	LINE_NUMBER(128);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_7);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(145);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$2_mindustry_type_Liquid_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:lambda$setStats$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(130);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_9);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(135);
	frame[3].f = ((jfloat(1)) + ((((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[1].o)))->F_heatCapacity) - (jfloat(0.4f))) * (jfloat(0.9f))));
	LINE_NUMBER(136);
	frame[4].f = (((((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_cooldownNormal) * (((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_cooldownLiquid) * (frame[3].f))) - ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_cooldownNormal)) * (jfloat(60.0f)));
	LINE_NUMBER(137);
	frame[5].f = (((((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_shieldHealth) / (((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_cooldownBrokenBase) * (((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_cooldownLiquid) * (frame[3].f)))) - (((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_shieldHealth) / ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_cooldownBrokenBase))) / (jfloat(60.0f)));
	LINE_NUMBER(139);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_10);
		proxy->F_field1 = (frame[5].f);
		proxy->F_field0 = (frame[4].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(15.0f)));
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$5_float_float_arc_scene_ui_layout_Table(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:lambda$setStats$5", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(141);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bar.regenerationrate"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (frame[0].f), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]+\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(142);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ability.stat.cooldown"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (frame[1].f), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$4_mindustry_type_Liquid_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:lambda$setStats$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(131);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(132);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_coolantConsumption) * (jfloat(60.0f))), (jint(2)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$3_mindustry_type_Liquid_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:lambda$setStats$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_boolean_R_arc_scene_Element(ctx, (frame[1].o), (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_ForceProjector_lambda$setBars$0_mindustry_world_blocks_defense_ForceProjector$ForceBuild_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:lambda$setBars$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stat.shieldhealth"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Floatp_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_java_lang_String_arc_graphics_Color_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_ForceProjector_lambda$setBars$1_mindustry_world_blocks_defense_ForceProjector$ForceBuild_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:lambda$setBars$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	if (((jint)((mindustry_world_blocks_defense_ForceProjector$ForceBuild *) NULL_CHECK((frame[1].o)))->F_broken) == 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	jfloat temp0 = (jfloat(1)) - (((jfloat)((mindustry_world_blocks_defense_ForceProjector$ForceBuild *) NULL_CHECK((frame[1].o)))->F_buildup) / (((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_shieldHealth) + (((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK((frame[0].o)))->F_phaseShieldBoost) * ((jfloat)((mindustry_world_blocks_defense_ForceProjector$ForceBuild *) NULL_CHECK((frame[1].o)))->F_phaseHeat))));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_defense_ForceProjector_lambda$static$0_mindustry_gen_Bullet(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:lambda$static$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_defense_ForceProjector_paramEntity;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_absorbable) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_absorbed) != 0) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_ForceProjector_paramBlock;
	jint temp0 = (jint)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[0].o))->F_sides;
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_ForceProjector_paramEntity;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_x;
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_ForceProjector_paramEntity;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_y;
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_ForceProjector_paramEntity;
	LINE_NUMBER(62);
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_defense_ForceProjector$ForceBuild_realRadius_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_ForceProjector$ForceBuild_realRadius_R_float])(ctx, sp[0].o);
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_ForceProjector_paramBlock;
	jint temp4 = (jint)SM_arc_math_geom_Intersector_isInRegularPolygon_int_float_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, temp3, ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[0].o))->F_shieldRotation), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp4 == 0) goto label_1;
	}
	{
	LINE_NUMBER(64);
	((func_mindustry_gen_Bullet_absorb) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_absorb])(ctx, (frame[0].o));
	LINE_NUMBER(65);
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_ForceProjector_paramBlock;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[0].o))->F_hitSound;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.1f)));
	jfloat temp4 = temp2 + temp3;
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_defense_ForceProjector_paramBlock;
	jint temp5 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp4, ((jfloat)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[1].o))->F_hitSoundVolume));
	LINE_NUMBER(66);
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_ForceProjector_paramBlock;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[0].o))->F_absorbEffect;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(67);
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_ForceProjector_paramEntity;
	((mindustry_world_blocks_defense_ForceProjector$ForceBuild *) NULL_CHECK(sp[0].o))->F_hit = (jfloat(1));
	LINE_NUMBER(68);
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_ForceProjector_paramEntity;
	jfloat temp6 = (jfloat)((mindustry_world_blocks_defense_ForceProjector$ForceBuild *) NULL_CHECK(sp[0].o))->F_buildup;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp7 = (jfloat)((func_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float])(ctx, sp[1].o, (frame[0].o));
	((mindustry_world_blocks_defense_ForceProjector$ForceBuild *) NULL_CHECK(sp[0].o))->F_buildup = (temp6 + temp7);
	}
label_1:;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_defense_ForceProjector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/ForceProjector:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	{
	LINE_NUMBER(60);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_ForceProjector_invoke_arc_func_Cons_11);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_world_blocks_defense_ForceProjector(ctx);
	SF_mindustry_world_blocks_defense_ForceProjector_shieldConsumer = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_defense_ForceProjector;
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

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field itemConsumer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[21]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field coolantConsumer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[22]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_world_blocks_defense_ForceProjector[] {
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
	(void *) M_mindustry_world_blocks_defense_ForceProjector_init,
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
	(void *) M_mindustry_world_blocks_defense_ForceProjector_setStats,
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
	(void *) M_mindustry_world_blocks_defense_ForceProjector_drawPlace_int_int_int_boolean,
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
	(void *) M_mindustry_world_blocks_defense_ForceProjector_outputsItems_R_boolean,
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
	(void *) M_mindustry_world_blocks_defense_ForceProjector_setBars,
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
	(void *) M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion,
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
	(void *) M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$2_mindustry_type_Liquid_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$4_mindustry_type_Liquid_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_defense_ForceProjector_lambda$setBars$0_mindustry_world_blocks_defense_ForceProjector$ForceBuild_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_blocks_defense_ForceProjector_lambda$setBars$1_mindustry_world_blocks_defense_ForceProjector$ForceBuild_R_float,
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
	{ "lambda$setStats$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setStats$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setStats$2", "(Lmindustry/type/Liquid;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setStats$4", "(Lmindustry/type/Liquid;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setBars$0", "(Lmindustry/world/blocks/defense/ForceProjector$ForceBuild;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$1", "(Lmindustry/world/blocks/defense/ForceProjector$ForceBuild;)F" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_defense_ForceProjector$ForceBuild,
};

static FieldMetadata fields[] {
	{ "timerUse", &class_int, offsetof(mindustry_world_blocks_defense_ForceProjector, F_timerUse), "I", 17 },
	{ "phaseUseTime", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_phaseUseTime), "F", 1 },
	{ "phaseRadiusBoost", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_phaseRadiusBoost), "F", 1 },
	{ "phaseShieldBoost", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_phaseShieldBoost), "F", 1 },
	{ "radius", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_radius), "F", 1 },
	{ "sides", &class_int, offsetof(mindustry_world_blocks_defense_ForceProjector, F_sides), "I", 1 },
	{ "shieldRotation", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_shieldRotation), "F", 1 },
	{ "shieldHealth", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_shieldHealth), "F", 1 },
	{ "cooldownNormal", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_cooldownNormal), "F", 1 },
	{ "cooldownLiquid", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_cooldownLiquid), "F", 1 },
	{ "cooldownBrokenBase", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_cooldownBrokenBase), "F", 1 },
	{ "coolantConsumption", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_coolantConsumption), "F", 1 },
	{ "consumeCoolant", &class_boolean, offsetof(mindustry_world_blocks_defense_ForceProjector, F_consumeCoolant), "Z", 1 },
	{ "crashDamageMultiplier", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_crashDamageMultiplier), "F", 1 },
	{ "breakSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_defense_ForceProjector, F_breakSound), "Larc/audio/Sound;", 1 },
	{ "hitSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_defense_ForceProjector, F_hitSound), "Larc/audio/Sound;", 1 },
	{ "hitSoundVolume", &class_float, offsetof(mindustry_world_blocks_defense_ForceProjector, F_hitSoundVolume), "F", 1 },
	{ "absorbEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_defense_ForceProjector, F_absorbEffect), "Lmindustry/entities/Effect;", 1 },
	{ "shieldBreakEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_defense_ForceProjector, F_shieldBreakEffect), "Lmindustry/entities/Effect;", 1 },
	{ "forceShrinkEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_defense_ForceProjector, F_forceShrinkEffect), "Lmindustry/entities/Effect;", 1 },
	{ "topRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_defense_ForceProjector, F_topRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "itemConsumer", &class_mindustry_world_consumers_Consume, offsetof(mindustry_world_blocks_defense_ForceProjector, F_itemConsumer), "Lmindustry/world/consumers/Consume;", 1 },
	{ "coolantConsumer", &class_mindustry_world_consumers_Consume, offsetof(mindustry_world_blocks_defense_ForceProjector, F_coolantConsumer), "Lmindustry/world/consumers/Consume;", 1 },
	{ "paramBlock", &class_mindustry_world_blocks_defense_ForceProjector, (intptr_t) &SF_mindustry_world_blocks_defense_ForceProjector_paramBlock, "Lmindustry/world/blocks/defense/ForceProjector;", 12 },
	{ "paramEntity", &class_mindustry_world_blocks_defense_ForceProjector$ForceBuild, (intptr_t) &SF_mindustry_world_blocks_defense_ForceProjector_paramEntity, "Lmindustry/world/blocks/defense/ForceProjector$ForceBuild;", 12 },
	{ "shieldConsumer", &class_arc_func_Cons, (intptr_t) &SF_mindustry_world_blocks_defense_ForceProjector_shieldConsumer, "Larc/func/Cons;", 28 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_ForceProjector_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_defense_ForceProjector_init, VTABLE_mindustry_world_blocks_defense_ForceProjector_init, "()V", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_blocks_defense_ForceProjector_setBars, VTABLE_mindustry_world_blocks_defense_ForceProjector_setBars, "()V", 1 },
	{ "outputsItems", (intptr_t) M_mindustry_world_blocks_defense_ForceProjector_outputsItems_R_boolean, VTABLE_mindustry_world_blocks_defense_ForceProjector_outputsItems_R_boolean, "()Z", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_defense_ForceProjector_setStats, VTABLE_mindustry_world_blocks_defense_ForceProjector_setStats, "()V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_defense_ForceProjector_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_defense_ForceProjector_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "lambda$setStats$0", (intptr_t) M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$0_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setStats$1", (intptr_t) M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$1_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setStats$2", (intptr_t) M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$2_mindustry_type_Liquid_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$2_mindustry_type_Liquid_arc_scene_ui_layout_Table, "(Lmindustry/type/Liquid;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setStats$5", (intptr_t) SM_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$5_float_float_arc_scene_ui_layout_Table, 0, "(FFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$setStats$4", (intptr_t) M_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$4_mindustry_type_Liquid_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$4_mindustry_type_Liquid_arc_scene_ui_layout_Table, "(Lmindustry/type/Liquid;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setStats$3", (intptr_t) SM_mindustry_world_blocks_defense_ForceProjector_lambda$setStats$3_mindustry_type_Liquid_arc_scene_ui_Image, 0, "(Lmindustry/type/Liquid;Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$setBars$0", (intptr_t) M_mindustry_world_blocks_defense_ForceProjector_lambda$setBars$0_mindustry_world_blocks_defense_ForceProjector$ForceBuild_R_mindustry_ui_Bar, VTABLE_mindustry_world_blocks_defense_ForceProjector_lambda$setBars$0_mindustry_world_blocks_defense_ForceProjector$ForceBuild_R_mindustry_ui_Bar, "(Lmindustry/world/blocks/defense/ForceProjector$ForceBuild;)Lmindustry/ui/Bar;", 4098 },
	{ "lambda$setBars$1", (intptr_t) M_mindustry_world_blocks_defense_ForceProjector_lambda$setBars$1_mindustry_world_blocks_defense_ForceProjector$ForceBuild_R_float, VTABLE_mindustry_world_blocks_defense_ForceProjector_lambda$setBars$1_mindustry_world_blocks_defense_ForceProjector$ForceBuild_R_float, "(Lmindustry/world/blocks/defense/ForceProjector$ForceBuild;)F", 4098 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_world_blocks_defense_ForceProjector_lambda$static$0_mindustry_gen_Bullet, 0, "(Lmindustry/gen/Bullet;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_defense_ForceProjector, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_defense_ForceProjector{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/ForceProjector",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_defense_ForceProjector),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_ForceProjector,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_ForceProjector,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_ForceProjector,
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
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 195,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_ForceProjector = registerClass(&class_mindustry_world_blocks_defense_ForceProjector);

}
