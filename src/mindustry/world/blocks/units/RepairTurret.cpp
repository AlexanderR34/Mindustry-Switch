#include "mindustry/world/blocks/units/RepairTurret.h"
#include "arc/math/Angles.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/world/blocks/units/RepairTurret.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ctype/MappableContent.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/consumers/ConsumeCoolant.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowIn.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "arc/struct/EnumSet.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/meta/StatValue.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/world/consumers/ConsumePower.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/units/RepairTurret_RepairPointBuild.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/world/meta/BlockGroup.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/world/blocks/units/RepairTurret_invoke_arc_func_Boolf_2.h"
#include "mindustry/world/blocks/units/RepairTurret_invoke_arc_func_Boolf_3.h"
#include "mindustry/graphics/Pal.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/game/Team.h"

extern "C" {

jobject SF_mindustry_world_blocks_units_RepairTurret_rect;
jobject SF_mindustry_world_blocks_units_RepairTurret_rand;

void mark_mindustry_world_blocks_units_RepairTurret(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_units_RepairTurret_rect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_units_RepairTurret_rect)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_units_RepairTurret_rect, mark, depth + 1);
		if (SF_mindustry_world_blocks_units_RepairTurret_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_units_RepairTurret_rand)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_units_RepairTurret_rand, mark, depth + 1);
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
	auto self = (mindustry_world_blocks_units_RepairTurret *) object;
	if (self->F_coolEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_coolEffect)->clazz)->markFunction)((jobject) self->F_coolEffect, mark, depth + 1);
	if (self->F_baseRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_baseRegion)->clazz)->markFunction)((jobject) self->F_baseRegion, mark, depth + 1);
	if (self->F_laser)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laser)->clazz)->markFunction)((jobject) self->F_laser, mark, depth + 1);
	if (self->F_laserEnd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserEnd)->clazz)->markFunction)((jobject) self->F_laserEnd, mark, depth + 1);
	if (self->F_laserTop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserTop)->clazz)->markFunction)((jobject) self->F_laserTop, mark, depth + 1);
	if (self->F_laserTopEnd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserTopEnd)->clazz)->markFunction)((jobject) self->F_laserTopEnd, mark, depth + 1);
	if (self->F_laserColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserColor)->clazz)->markFunction)((jobject) self->F_laserColor, mark, depth + 1);
	if (self->F_laserTopColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserTopColor)->clazz)->markFunction)((jobject) self->F_laserTopColor, mark, depth + 1);
}

void init_mindustry_world_blocks_units_RepairTurret_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/RepairTurret:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_RepairTurret(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers;
	((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers = (temp0 + (jint(1)));
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK(sp[0].o))->F_timerTarget = temp0;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp3 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers;
	((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers = (temp3 + (jint(1)));
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK(sp[0].o))->F_timerEffect = temp3;
	LINE_NUMBER(32);
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_repairRadius = (jfloat(50.0f));
	LINE_NUMBER(33);
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_repairSpeed = (jfloat(0.3f));
	LINE_NUMBER(35);
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_length = (jfloat(5.0f));
	LINE_NUMBER(36);
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_beamWidth = (jfloat(1));
	LINE_NUMBER(37);
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_pulseRadius = (jfloat(6.0f));
	LINE_NUMBER(38);
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_pulseStroke = (jfloat(2));
	LINE_NUMBER(39);
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_acceptCoolant = (jint(0));
	LINE_NUMBER(41);
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_coolantUse = (jfloat(0.5f));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_fuelburn;
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK(sp[0].o))->F_coolEffect = (jref) sp[1].o;
	LINE_NUMBER(45);
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_coolantMultiplier = (jfloat(1));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"98ffa9"_j))));
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK(sp[0].o))->F_laserColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK(sp[0].o))->F_laserTopColor = (jref) sp[1].o;
	LINE_NUMBER(57);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(58);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (jint(1)));
	jint temp6 = jint(0);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_repair;
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_EnumSet_of_Array1_java_lang_Enum_R_arc_struct_EnumSet(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags = (jref) sp[1].o;
	LINE_NUMBER(60);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasPower = (jint(1));
	LINE_NUMBER(61);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlineIcon = (jint(1));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_projectors;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled) | (jint(2)));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_beamHeal;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSound = (jref) sp[1].o;
	LINE_NUMBER(67);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ambientSoundVolume = (jfloat(1));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_RepairTurret_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/RepairTurret:setStats", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_range;
	jfloat temp0 = ((jfloat)((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_repairRadius) / (jfloat(8.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_blocks;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_repairSpeed;
	jfloat temp1 = ((jfloat)((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_repairSpeed) * (jfloat(60.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	LINE_NUMBER(76);
	if (((jint)((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_acceptCoolant) == 0) goto label_4;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_booster;
	((func_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_booster;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"bar.strength"_j))));
	jfloat temp0 = (jfloat)((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_coolantUse;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_coolantMultiplier;
	jint temp2 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_RepairTurret_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_world_blocks_units_RepairTurret_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_RepairTurret_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_speedBoosters_java_lang_String_float_float_boolean_arc_func_Boolf_R_mindustry_world_meta_StatValue(ctx, sp[2].o, temp0, temp1, temp2, sp[3].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_4:;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_RepairTurret_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/RepairTurret:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	if (((jint)((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_acceptCoolant) == 0) goto label_1;
	}
	{
	LINE_NUMBER(85);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasLiquids = (jint(1));
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumeCoolant(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeCoolant);
	init_mindustry_world_consumers_ConsumeCoolant_float(ctx, sp[1].o, ((jfloat)((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_coolantUse));
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_RepairTurret_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_RepairTurret_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeCoolant_optional_boolean_boolean_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_world_consumers_ConsumeCoolant, sp[0].o)))->vtable)[VTABLE_mindustry_world_consumers_ConsumeCoolant_optional_boolean_boolean_R_mindustry_world_consumers_Consume])(ctx, (checkCast(ctx, &class_mindustry_world_consumers_ConsumeCoolant, sp[0].o)), (jint(1)), (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_powerUse;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_RepairTurret_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_world_blocks_units_RepairTurret_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_RepairTurret_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_RepairTurret_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_RepairTurret_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(90);
	((func_mindustry_world_blocks_units_RepairTurret_updateClipRadius_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_RepairTurret_updateClipRadius_float])(ctx, (frame[0].o), (((jfloat)((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_repairRadius) + (jfloat(8.0f))));
	LINE_NUMBER(91);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_RepairTurret_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/RepairTurret:drawPlace", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(96);
	M_mindustry_world_Block_drawPlace_int_int_int_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(98);
	jfloat temp0 = (jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp1 = (jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp2 = (jfloat)((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_repairRadius;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_dashCircle_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_RepairTurret_icons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/RepairTurret:icons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(2)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK((frame[0].o)))->F_baseRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_units_RepairTurret_drawBeam_float_float_float_float_int_mindustry_entities_Sized_mindustry_game_Team_float_float_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_graphics_Color_arc_graphics_Color_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jobject param5, jobject param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jobject param11, jobject param12, jobject param13, jobject param14, jobject param15, jobject param16, jobject param17, jobject param18) {
	jtype frame[31];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/RepairTurret:drawBeam", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_RepairTurret(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	frame[11].o = param11;
	frame[12].o = param12;
	frame[13].o = param13;
	frame[14].o = param14;
	frame[15].o = param15;
	frame[16].o = param16;
	frame[17].o = param17;
	frame[18].o = param18;
	{
	LINE_NUMBER(111);
	clinit_mindustry_world_blocks_units_RepairTurret(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_units_RepairTurret_rand;
	jint temp0 = frame[4].i;
	sp[1].i = temp0;
	sp += 2;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Entityc)) == 0) goto label_1;
	}
	{
	frame[19].o = (checkCast(ctx, &class_mindustry_gen_Entityc, (frame[5].o)));
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[19].o)))(ctx, (frame[19].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 3;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong((sp[1].i + sp[2].i))));
	LINE_NUMBER(113);
	if ((frame[5].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(115);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[2].f), (frame[3].f));
	frame[19].f = (temp0 + temp1);
	LINE_NUMBER(116);
	jfloat temp2 = frame[1].f;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[2].f), (frame[3].f));
	frame[20].f = (temp2 + temp3);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, (frame[11].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[19].f), (frame[20].f));
	LINE_NUMBER(119);
	sp[0].o = frame[11].o;
	jfloat temp4 = jfloat(2);
	jfloat temp5 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[11].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp6);
	LINE_NUMBER(121);
	sp[0].o = frame[11].o;
	sp[1].o = frame[12].o;
	clinit_mindustry_world_blocks_units_RepairTurret(ctx);
	sp[2].o = (jobject)SF_mindustry_world_blocks_units_RepairTurret_rand;
	jfloat temp7 = jfloat(360.0f);
	LINE_NUMBER(122);
	jfloat temp8 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[2].o, temp7);
	jfloat temp9 = temp8 + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / (jfloat(2)));
	clinit_arc_util_Time(ctx);
	jfloat temp10 = (jfloat)SF_arc_util_Time_time;
	clinit_mindustry_world_blocks_units_RepairTurret(ctx);
	sp[2].o = (jobject)SF_mindustry_world_blocks_units_RepairTurret_rand;
	jfloat temp11 = jfloat(200.0f);
	LINE_NUMBER(123);
	jfloat temp12 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[2].o, temp11);
	jfloat temp13 = temp10 + temp12;
	jfloat temp14 = jfloat(55.0f);
	clinit_mindustry_world_blocks_units_RepairTurret(ctx);
	sp[2].o = (jobject)SF_mindustry_world_blocks_units_RepairTurret_rand;
	jfloat temp15 = (jfloat)((func_mindustry_entities_Sized_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Sized, INDEX_mindustry_entities_Sized_hitSize_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp16 = temp15 * (jfloat(0.2f));
	jfloat temp17 = (jfloat)((func_mindustry_entities_Sized_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Sized, INDEX_mindustry_entities_Sized_hitSize_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp18 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[2].o, temp16, (temp17 * (jfloat(0.45f))));
	jfloat temp19 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, temp13, temp14, temp18);
	LINE_NUMBER(121);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp9, temp19);
	LINE_NUMBER(124);
	sp += 2;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Rotc)) == 0) goto label_15;
	}
	{
	frame[21].o = (checkCast(ctx, &class_mindustry_gen_Rotc, (frame[5].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[21].o)))(ctx, (frame[21].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_17;
	}
label_15:;
	INST_FCONST(0);
label_17:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].f);
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, (frame[11].o), (frame[19].f), (frame[20].f));
	}
label_5:;
	{
	LINE_NUMBER(129);
	if ((floatCompare((frame[7].f), (jfloat(1,000000e-02f)), -1)) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(131);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[2].f), (frame[3].f));
	frame[19].f = (temp0 + temp1);
	LINE_NUMBER(132);
	jfloat temp2 = frame[1].f;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[2].f), (frame[3].f));
	frame[20].f = (temp2 + temp3);
	LINE_NUMBER(134);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(116.0f)));
	LINE_NUMBER(136);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[13].o));
	LINE_NUMBER(138);
	jfloat temp4 = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / (jfloat(85.0f));
	clinit_mindustry_world_blocks_units_RepairTurret(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_units_RepairTurret_rand;
	jfloat temp5 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(1)));
	frame[21].f = (fmodf((temp4 + temp5), (jfloat(1))));
	LINE_NUMBER(140);
	jfloat temp6 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5In;
	jfloat temp7 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[21].f));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp6 - temp7));
	LINE_NUMBER(141);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((frame[7].f) * (frame[8].f)));
	LINE_NUMBER(142);
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_y), ((jfloat(1)) + ((frame[21].f) * (frame[9].f))));
	LINE_NUMBER(144);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[13].o));
	LINE_NUMBER(145);
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[15].o), (frame[16].o), (frame[19].f), (frame[20].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_y), ((frame[7].f) * (frame[10].f)));
	LINE_NUMBER(146);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(116.1f)));
	LINE_NUMBER(147);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[14].o));
	LINE_NUMBER(148);
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[17].o), (frame[18].o), (frame[19].f), (frame[20].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_y), ((frame[7].f) * (frame[10].f)));
	LINE_NUMBER(149);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_20:;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_units_RepairTurret_lambda$init$0_mindustry_world_blocks_units_RepairTurret$RepairPointBuild_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/RepairTurret:lambda$init$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_RepairTurret(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_world_blocks_units_RepairTurret$RepairPointBuild *) NULL_CHECK((frame[0].o)))->F_target;
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

void clinit_mindustry_world_blocks_units_RepairTurret(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/RepairTurret:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_RepairTurret(ctx);
	{
	LINE_NUMBER(26);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_world_blocks_units_RepairTurret(ctx);
	SF_mindustry_world_blocks_units_RepairTurret_rect = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_mindustry_world_blocks_units_RepairTurret(ctx);
	SF_mindustry_world_blocks_units_RepairTurret_rand = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_units_RepairTurret[] {
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
	(void *) M_mindustry_world_blocks_units_RepairTurret_init,
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
	(void *) M_mindustry_world_blocks_units_RepairTurret_setStats,
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
	(void *) M_mindustry_world_blocks_units_RepairTurret_drawPlace_int_int_int_boolean,
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
	(void *) M_mindustry_world_Block_setBars,
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
	(void *) M_mindustry_world_blocks_units_RepairTurret_icons_R_Array1_arc_graphics_g2d_TextureRegion,
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
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_units_RepairTurret$RepairPointBuild,
};

static FieldMetadata fields[] {
	{ "rect", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_world_blocks_units_RepairTurret_rect, "Larc/math/geom/Rect;", 24 },
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_mindustry_world_blocks_units_RepairTurret_rand, "Larc/math/Rand;", 24 },
	{ "timerTarget", &class_int, offsetof(mindustry_world_blocks_units_RepairTurret, F_timerTarget), "I", 1 },
	{ "timerEffect", &class_int, offsetof(mindustry_world_blocks_units_RepairTurret, F_timerEffect), "I", 1 },
	{ "repairRadius", &class_float, offsetof(mindustry_world_blocks_units_RepairTurret, F_repairRadius), "F", 1 },
	{ "repairSpeed", &class_float, offsetof(mindustry_world_blocks_units_RepairTurret, F_repairSpeed), "F", 1 },
	{ "powerUse", &class_float, offsetof(mindustry_world_blocks_units_RepairTurret, F_powerUse), "F", 1 },
	{ "length", &class_float, offsetof(mindustry_world_blocks_units_RepairTurret, F_length), "F", 1 },
	{ "beamWidth", &class_float, offsetof(mindustry_world_blocks_units_RepairTurret, F_beamWidth), "F", 1 },
	{ "pulseRadius", &class_float, offsetof(mindustry_world_blocks_units_RepairTurret, F_pulseRadius), "F", 1 },
	{ "pulseStroke", &class_float, offsetof(mindustry_world_blocks_units_RepairTurret, F_pulseStroke), "F", 1 },
	{ "acceptCoolant", &class_boolean, offsetof(mindustry_world_blocks_units_RepairTurret, F_acceptCoolant), "Z", 1 },
	{ "coolantUse", &class_float, offsetof(mindustry_world_blocks_units_RepairTurret, F_coolantUse), "F", 1 },
	{ "coolEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_units_RepairTurret, F_coolEffect), "Lmindustry/entities/Effect;", 1 },
	{ "coolantMultiplier", &class_float, offsetof(mindustry_world_blocks_units_RepairTurret, F_coolantMultiplier), "F", 1 },
	{ "baseRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_units_RepairTurret, F_baseRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laser", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_units_RepairTurret, F_laser), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserEnd", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_units_RepairTurret, F_laserEnd), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserTop", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_units_RepairTurret, F_laserTop), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserTopEnd", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_units_RepairTurret, F_laserTopEnd), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserColor", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_units_RepairTurret, F_laserColor), "Larc/graphics/Color;", 1 },
	{ "laserTopColor", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_units_RepairTurret, F_laserTopColor), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_units_RepairTurret_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_units_RepairTurret_setStats, VTABLE_mindustry_world_blocks_units_RepairTurret_setStats, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_units_RepairTurret_init, VTABLE_mindustry_world_blocks_units_RepairTurret_init, "()V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_units_RepairTurret_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_units_RepairTurret_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_blocks_units_RepairTurret_icons_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_units_RepairTurret_icons_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "drawBeam", (intptr_t) SM_mindustry_world_blocks_units_RepairTurret_drawBeam_float_float_float_float_int_mindustry_entities_Sized_mindustry_game_Team_float_float_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_graphics_Color_arc_graphics_Color_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion, 0, "(FFFFILmindustry/entities/Sized;Lmindustry/game/Team;FFFFLarc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/graphics/Color;Larc/graphics/Color;Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/TextureRegion;)V", 9 },
	{ "lambda$init$0", (intptr_t) SM_mindustry_world_blocks_units_RepairTurret_lambda$init$0_mindustry_world_blocks_units_RepairTurret$RepairPointBuild_R_boolean, 0, "(Lmindustry/world/blocks/units/RepairTurret$RepairPointBuild;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_units_RepairTurret, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_units_RepairTurret{
		.nativeName = (intptr_t) "mindustry/world/blocks/units/RepairTurret",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_units_RepairTurret),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_units_RepairTurret,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_units_RepairTurret,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_units_RepairTurret,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 22,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 189,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_units_RepairTurret = registerClass(&class_mindustry_world_blocks_units_RepairTurret);

}
