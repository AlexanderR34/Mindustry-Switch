#include "mindustry/type/StatusEffect.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/type/StatusEffect_invoke_arc_func_Boolf_1.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/world/meta/Stat.h"
#include "mindustry/graphics/MultiPacker.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/entities/units/StatusEntry.h"
#include "mindustry/graphics/MultiPacker_PageType.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Teamc.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/type/StatusEffect_invoke_java_lang_Runnable_1.h"
#include "mindustry/type/StatusEffect.h"
#include "arc/util/Time.h"
#include "mindustry/type/StatusEffect_invoke_mindustry_type_StatusEffect_TransitionHandler_1.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/type/StatusEffect_TransitionHandler.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Player.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/game/Team.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_type_StatusEffect(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ctype_UnlockableContent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_StatusEffect *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_applyEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applyEffect)->clazz)->markFunction)((jobject) self->F_applyEffect, mark, depth + 1);
	if (self->F_applyColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applyColor)->clazz)->markFunction)((jobject) self->F_applyColor, mark, depth + 1);
	if (self->F_affinities)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_affinities)->clazz)->markFunction)((jobject) self->F_affinities, mark, depth + 1);
	if (self->F_opposites)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_opposites)->clazz)->markFunction)((jobject) self->F_opposites, mark, depth + 1);
	if (self->F_transitions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transitions)->clazz)->markFunction)((jobject) self->F_transitions, mark, depth + 1);
	if (self->F_initblock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initblock)->clazz)->markFunction)((jobject) self->F_initblock, mark, depth + 1);
}

void clinit_mindustry_type_StatusEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_UnlockableContent(ctx);
}

void init_mindustry_type_StatusEffect_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_StatusEffect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	init_mindustry_ctype_UnlockableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(19);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damageMultiplier = (jfloat(1));
	LINE_NUMBER(21);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_healthMultiplier = (jfloat(1));
	LINE_NUMBER(23);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_speedMultiplier = (jfloat(1));
	LINE_NUMBER(25);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_reloadMultiplier = (jfloat(1));
	LINE_NUMBER(27);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(29);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_dragMultiplier = (jfloat(1));
	LINE_NUMBER(31);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_transitionDamage = (jfloat(0));
	LINE_NUMBER(33);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_disarm = (jint(0));
	LINE_NUMBER(41);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_intervalDamagePierce = (jint(0));
	LINE_NUMBER(43);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_effectChance = (jfloat(0.15f));
	LINE_NUMBER(51);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_dynamic = (jint(0));
	LINE_NUMBER(53);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_show = (jint(1));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_applyEffect = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_applyColor = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_affinities = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_opposites = (jref) sp[1].o;
	LINE_NUMBER(69);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_outline = (jint(1));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_transitions = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_StatusEffect_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_type_StatusEffect_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_type_StatusEffect_invoke_java_lang_Runnable_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_initblock = (jref) sp[1].o;
	LINE_NUMBER(77);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_allDatabaseTabs = (jint(1));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:init", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	M_mindustry_ctype_Content_init(ctx, (frame[0].o));
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_initblock;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_initblock;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_init_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_initblock = (jref) (frame[1].o);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_StatusEffect_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:isHidden", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_show) != 0) goto label_2;
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

void M_mindustry_type_StatusEffect_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:setStats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damageMultiplier), (jfloat(1)), -1)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_damageMultiplier;
	((func_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damageMultiplier));
	}
label_1:;
	{
	LINE_NUMBER(100);
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_healthMultiplier), (jfloat(1)), -1)) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_healthMultiplier;
	((func_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_healthMultiplier));
	}
label_2:;
	{
	LINE_NUMBER(101);
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_speedMultiplier), (jfloat(1)), -1)) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_speedMultiplier;
	((func_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_speedMultiplier));
	}
label_3:;
	{
	LINE_NUMBER(102);
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_reloadMultiplier), (jfloat(1)), -1)) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_reloadMultiplier;
	((func_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_reloadMultiplier));
	}
label_4:;
	{
	LINE_NUMBER(103);
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier), (jfloat(1)), -1)) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_buildSpeedMultiplier;
	((func_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier));
	}
label_5:;
	{
	LINE_NUMBER(104);
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damage), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_damage;
	jfloat temp0 = ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damage) * (jfloat(60.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_6:;
	{
	LINE_NUMBER(105);
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damage), (jfloat(0)), 1)) >= 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_healing;
	jfloat temp0 = (-((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damage)) * (jfloat(60.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_7:;
	{
	LINE_NUMBER(107);
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_intervalDamageTime), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_intervalDamage), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_damage;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_intervalDamage));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_frequency;
	jfloat temp0 = (jfloat(60.0f)) / ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_intervalDamageTime);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_8:;
	{
	LINE_NUMBER(112);
	frame[1].i = (jint(0));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_opposites;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[0].o));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_opposites;
	sp[2].o = (jobject)((func_mindustry_type_StatusEffect_emoji_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_StatusEffect_emoji_R_java_lang_String])(ctx, (frame[3].o));
	sp[3].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[3].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, sp[3].o);
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(116);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(118);
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_reactive) == 0) goto label_16;
	}
	{
	LINE_NUMBER(119);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_type_StatusEffect_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_type_StatusEffect_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_type_StatusEffect_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[0].o));
	LINE_NUMBER(120);
	if ((frame[2].o) == nullptr) goto label_16;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[2].o)))->F_transitionDamage), (jfloat(0)), -1)) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_reactive;
	sp[2].o = (jobject)((func_mindustry_type_StatusEffect_emoji_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_StatusEffect_emoji_R_java_lang_String])(ctx, (frame[2].o));
	sp[3].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[2].o));
	jint temp0 = jint(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[2].o)))->F_transitionDamage));
	clinit_mindustry_world_meta_Stat(ctx);
	sp[4].o = (jobject)SF_mindustry_world_meta_Stat_damage;
	sp[4].o = (jobject)((func_mindustry_world_meta_Stat_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_world_meta_Stat_localized_R_java_lang_String])(ctx, sp[4].o);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001 / [accent]\u0001[lightgray] \u0001"_j.string, 4, sp[2].o, sp[3].o, boxInteger(ctx, temp0), sp[4].o);
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(122);
	frame[1].i = (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(127);
	if ((frame[1].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_affinities;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[0].o));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_affinities;
	sp[2].o = (jobject)((func_mindustry_type_StatusEffect_emoji_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_StatusEffect_emoji_R_java_lang_String])(ctx, (frame[3].o));
	sp[3].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[3].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, sp[3].o);
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(130);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_affinities;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_21;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_transitionDamage), (jfloat(0)), -1)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_affinities;
	jint temp0 = jint(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_transitionDamage));
	clinit_mindustry_world_meta_Stat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_Stat_damage;
	sp[2].o = (jobject)((func_mindustry_world_meta_Stat_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_Stat_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"/ [accent]\u0001 \u0001"_j.string, 2, boxInteger(ctx, temp0), sp[2].o);
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_21:;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_StatusEffect_showUnlock_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:showUnlock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(146);
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damage), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(147);
	((func_mindustry_gen_Unit_damageContinuousPierce_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_damageContinuousPierce_float])(ctx, (frame[1].o), ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damage));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(148);
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damage), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(149);
	((func_mindustry_gen_Unit_heal_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_heal_float])(ctx, (frame[1].o), (((jfloat(-1.0f)) * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damage)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	}
label_3:;
	{
	LINE_NUMBER(152);
	if ((floatCompare(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_intervalDamageTime), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = frame[2].o;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_damageTime = (((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_damageTime) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(154);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_damageTime), ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_intervalDamageTime), -1)) < 0) goto label_5;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[2].o;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_damageTime = (fmodf(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_damageTime), ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_intervalDamageTime)));
	LINE_NUMBER(156);
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_intervalDamagePierce) == 0) goto label_10;
	}
	{
	LINE_NUMBER(157);
	((func_mindustry_gen_Unit_damagePierce_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_damagePierce_float])(ctx, (frame[1].o), ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_intervalDamage));
	goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(159);
	((func_mindustry_gen_Unit_damage_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_damage_float])(ctx, (frame[1].o), ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_intervalDamage));
	}
label_5:;
	{
	LINE_NUMBER(164);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_effect;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_effectChance))));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(165);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_hitSize) / (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_effect;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp4 = temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp5 = jfloat(0);
	sp[1].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_color;
	jobject temp6 = sp[1].o;
	sp[1].f = temp2;
	sp[2].f = temp4;
	sp[3].f = temp5;
	sp[4].o = temp6;
	sp += 5;
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_parentizeEffect) == 0) goto label_15;
	}
	INST_ALOAD(1);
	goto label_16;
label_15:;
	INST_ACONST_NULL();
label_16:;
	POP_N(6); // Pop method args
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o, sp[5].o);
label_12:;
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:onRemoved", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_trans_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:trans", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_transitions;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_affinity_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:affinity", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_affinities;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[1].o)))->F_affinities;
	jint temp1 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(182);
	((func_mindustry_type_StatusEffect_trans_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_StatusEffect_trans_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_opposite_Array1_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:opposite", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(187);
	((func_mindustry_type_StatusEffect_handleOpposite_mindustry_type_StatusEffect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_StatusEffect_handleOpposite_mindustry_type_StatusEffect])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(188);
	((func_mindustry_type_StatusEffect_handleOpposite_mindustry_type_StatusEffect) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_StatusEffect_handleOpposite_mindustry_type_StatusEffect])(ctx, (frame[5].o), (frame[0].o));
	LINE_NUMBER(186);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(190);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_handleOpposite_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:handleOpposite", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_opposites;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_StatusEffect_invoke_mindustry_type_StatusEffect$TransitionHandler_1(ctx);
		auto proxy = (mindustry_type_StatusEffect_invoke_mindustry_type_StatusEffect$TransitionHandler_1 *) gcAlloc(ctx, &class_mindustry_type_StatusEffect_invoke_mindustry_type_StatusEffect$TransitionHandler_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_type_StatusEffect_trans_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_trans_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_draw_mindustry_gen_Unit_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:draw", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(204);
	((func_mindustry_type_StatusEffect_draw_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_StatusEffect_draw_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:draw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_StatusEffect_reactsWith_mindustry_type_StatusEffect_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:reactsWith", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_transitions;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_StatusEffect_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:applyTransition", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_transitions;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_StatusEffect$TransitionHandler, sp[0].o));
	LINE_NUMBER(223);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(224);
	((func_mindustry_type_StatusEffect$TransitionHandler_handle_mindustry_gen_Unit_mindustry_entities_units_StatusEntry_float) resolveInterfaceMethod(ctx, &class_mindustry_type_StatusEffect$TransitionHandler, INDEX_mindustry_type_StatusEffect$TransitionHandler_handle_mindustry_gen_Unit_mindustry_entities_units_StatusEntry_float, (frame[5].o)))(ctx, (frame[5].o), (frame[1].o), (frame[3].o), (frame[4].f));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:applied", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(231);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_applyExtend) == 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_applyEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = jfloat(0);
	sp[1].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_applyColor;
	jobject temp3 = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp[4].o = temp3;
	sp += 5;
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_parentizeApplyEffect) == 0) goto label_3;
	}
	INST_ALOAD(1);
	goto label_4;
label_3:;
	INST_ACONST_NULL();
label_4:;
	POP_N(6); // Pop method args
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o, sp[5].o);
label_2:;
	LINE_NUMBER(232);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_StatusEffect_createIcons_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:createIcons", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(238);
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_outline) == 0) goto label_2;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_ui;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	jint temp0 = jint(0);
	clinit_mindustry_graphics_Pal(ctx);
	sp[4].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((func_mindustry_type_StatusEffect_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, sp[4].o, (jint(3)));
	}
label_2:;
	LINE_NUMBER(241);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_StatusEffect_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_StatusEffect_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_status;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_type_StatusEffect_lambda$handleOpposite$0_mindustry_type_StatusEffect_mindustry_gen_Unit_mindustry_entities_units_StatusEntry_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:lambda$handleOpposite$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_StatusEffect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(195);
	sp[0].o = frame[2].o;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_time) - ((frame[3].f) * (jfloat(0.5f))));
	LINE_NUMBER(196);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_time), (jfloat(0)), 1)) > 0) goto label_2;
	}
	{
	LINE_NUMBER(197);
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_time = (frame[3].f);
	LINE_NUMBER(198);
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_effect = (jref) (frame[0].o);
	}
label_2:;
	LINE_NUMBER(200);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_StatusEffect_lambda$setStats$0_mindustry_type_StatusEffect_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/StatusEffect:lambda$setStats$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[1].o)))->F_affinities;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_type_StatusEffect_lambda$new$0(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/type/StatusEffect:lambda$new$0", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_type_StatusEffect(ctx);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_type_StatusEffect[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_StatusEffect_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_type_StatusEffect_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_type_StatusEffect_init,
	(void *) M_mindustry_ctype_UnlockableContent_postInit,
	(void *) M_mindustry_ctype_UnlockableContent_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_type_StatusEffect_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_StatusEffect_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_type_StatusEffect_isHidden_R_boolean,
	(void *) M_mindustry_type_StatusEffect_showUnlock_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_type_StatusEffect_init_java_lang_Runnable,
	(void *) M_mindustry_type_StatusEffect_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry,
	(void *) M_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_type_StatusEffect_trans_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler,
	(void *) M_mindustry_type_StatusEffect_affinity_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler,
	(void *) M_mindustry_type_StatusEffect_opposite_Array1_mindustry_type_StatusEffect,
	(void *) M_mindustry_type_StatusEffect_handleOpposite_mindustry_type_StatusEffect,
	(void *) M_mindustry_type_StatusEffect_draw_mindustry_gen_Unit_float,
	(void *) M_mindustry_type_StatusEffect_draw_mindustry_gen_Unit,
	(void *) M_mindustry_type_StatusEffect_reactsWith_mindustry_type_StatusEffect_R_boolean,
	(void *) M_mindustry_type_StatusEffect_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean,
	(void *) M_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean,
	(void *) M_mindustry_type_StatusEffect_lambda$setStats$0_mindustry_type_StatusEffect_R_boolean,
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
	{ "init", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Lmindustry/gen/Unit;Lmindustry/entities/units/StatusEntry;)V" },
	{ "onRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "trans", "(Lmindustry/type/StatusEffect;Lmindustry/type/StatusEffect$TransitionHandler;)V" },
	{ "affinity", "(Lmindustry/type/StatusEffect;Lmindustry/type/StatusEffect$TransitionHandler;)V" },
	{ "opposite", "([Lmindustry/type/StatusEffect;)V" },
	{ "handleOpposite", "(Lmindustry/type/StatusEffect;)V" },
	{ "draw", "(Lmindustry/gen/Unit;F)V" },
	{ "draw", "(Lmindustry/gen/Unit;)V" },
	{ "reactsWith", "(Lmindustry/type/StatusEffect;)Z" },
	{ "applyTransition", "(Lmindustry/gen/Unit;Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;F)Z" },
	{ "applied", "(Lmindustry/gen/Unit;FZ)V" },
	{ "lambda$setStats$0", "(Lmindustry/type/StatusEffect;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_type_StatusEffect$TransitionHandler,
};

static FieldMetadata fields[] {
	{ "damageMultiplier", &class_float, offsetof(mindustry_type_StatusEffect, F_damageMultiplier), "F", 1 },
	{ "healthMultiplier", &class_float, offsetof(mindustry_type_StatusEffect, F_healthMultiplier), "F", 1 },
	{ "speedMultiplier", &class_float, offsetof(mindustry_type_StatusEffect, F_speedMultiplier), "F", 1 },
	{ "reloadMultiplier", &class_float, offsetof(mindustry_type_StatusEffect, F_reloadMultiplier), "F", 1 },
	{ "buildSpeedMultiplier", &class_float, offsetof(mindustry_type_StatusEffect, F_buildSpeedMultiplier), "F", 1 },
	{ "dragMultiplier", &class_float, offsetof(mindustry_type_StatusEffect, F_dragMultiplier), "F", 1 },
	{ "transitionDamage", &class_float, offsetof(mindustry_type_StatusEffect, F_transitionDamage), "F", 1 },
	{ "disarm", &class_boolean, offsetof(mindustry_type_StatusEffect, F_disarm), "Z", 1 },
	{ "damage", &class_float, offsetof(mindustry_type_StatusEffect, F_damage), "F", 1 },
	{ "intervalDamageTime", &class_float, offsetof(mindustry_type_StatusEffect, F_intervalDamageTime), "F", 1 },
	{ "intervalDamage", &class_float, offsetof(mindustry_type_StatusEffect, F_intervalDamage), "F", 1 },
	{ "intervalDamagePierce", &class_boolean, offsetof(mindustry_type_StatusEffect, F_intervalDamagePierce), "Z", 1 },
	{ "effectChance", &class_float, offsetof(mindustry_type_StatusEffect, F_effectChance), "F", 1 },
	{ "parentizeEffect", &class_boolean, offsetof(mindustry_type_StatusEffect, F_parentizeEffect), "Z", 1 },
	{ "permanent", &class_boolean, offsetof(mindustry_type_StatusEffect, F_permanent), "Z", 1 },
	{ "reactive", &class_boolean, offsetof(mindustry_type_StatusEffect, F_reactive), "Z", 1 },
	{ "dynamic", &class_boolean, offsetof(mindustry_type_StatusEffect, F_dynamic), "Z", 1 },
	{ "show", &class_boolean, offsetof(mindustry_type_StatusEffect, F_show), "Z", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_type_StatusEffect, F_color), "Larc/graphics/Color;", 1 },
	{ "effect", &class_mindustry_entities_Effect, offsetof(mindustry_type_StatusEffect, F_effect), "Lmindustry/entities/Effect;", 1 },
	{ "applyEffect", &class_mindustry_entities_Effect, offsetof(mindustry_type_StatusEffect, F_applyEffect), "Lmindustry/entities/Effect;", 1 },
	{ "applyExtend", &class_boolean, offsetof(mindustry_type_StatusEffect, F_applyExtend), "Z", 1 },
	{ "applyColor", &class_arc_graphics_Color, offsetof(mindustry_type_StatusEffect, F_applyColor), "Larc/graphics/Color;", 1 },
	{ "parentizeApplyEffect", &class_boolean, offsetof(mindustry_type_StatusEffect, F_parentizeApplyEffect), "Z", 1 },
	{ "affinities", &class_arc_struct_ObjectSet, offsetof(mindustry_type_StatusEffect, F_affinities), "Larc/struct/ObjectSet;", 1 },
	{ "opposites", &class_arc_struct_ObjectSet, offsetof(mindustry_type_StatusEffect, F_opposites), "Larc/struct/ObjectSet;", 1 },
	{ "outline", &class_boolean, offsetof(mindustry_type_StatusEffect, F_outline), "Z", 1 },
	{ "transitions", &class_arc_struct_ObjectMap, offsetof(mindustry_type_StatusEffect, F_transitions), "Larc/struct/ObjectMap;", 4 },
	{ "initblock", &class_java_lang_Runnable, offsetof(mindustry_type_StatusEffect, F_initblock), "Ljava/lang/Runnable;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_StatusEffect_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "init", (intptr_t) M_mindustry_type_StatusEffect_init, VTABLE_mindustry_type_StatusEffect_init, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_type_StatusEffect_init_java_lang_Runnable, VTABLE_mindustry_type_StatusEffect_init_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "isHidden", (intptr_t) M_mindustry_type_StatusEffect_isHidden_R_boolean, VTABLE_mindustry_type_StatusEffect_isHidden_R_boolean, "()Z", 1 },
	{ "setStats", (intptr_t) M_mindustry_type_StatusEffect_setStats, VTABLE_mindustry_type_StatusEffect_setStats, "()V", 1 },
	{ "showUnlock", (intptr_t) M_mindustry_type_StatusEffect_showUnlock_R_boolean, VTABLE_mindustry_type_StatusEffect_showUnlock_R_boolean, "()Z", 1 },
	{ "update", (intptr_t) M_mindustry_type_StatusEffect_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry, VTABLE_mindustry_type_StatusEffect_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry, "(Lmindustry/gen/Unit;Lmindustry/entities/units/StatusEntry;)V", 1 },
	{ "onRemoved", (intptr_t) M_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit, VTABLE_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "trans", (intptr_t) M_mindustry_type_StatusEffect_trans_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler, VTABLE_mindustry_type_StatusEffect_trans_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler, "(Lmindustry/type/StatusEffect;Lmindustry/type/StatusEffect$TransitionHandler;)V", 1 },
	{ "affinity", (intptr_t) M_mindustry_type_StatusEffect_affinity_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler, VTABLE_mindustry_type_StatusEffect_affinity_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler, "(Lmindustry/type/StatusEffect;Lmindustry/type/StatusEffect$TransitionHandler;)V", 1 },
	{ "opposite", (intptr_t) M_mindustry_type_StatusEffect_opposite_Array1_mindustry_type_StatusEffect, VTABLE_mindustry_type_StatusEffect_opposite_Array1_mindustry_type_StatusEffect, "([Lmindustry/type/StatusEffect;)V", 129 },
	{ "handleOpposite", (intptr_t) M_mindustry_type_StatusEffect_handleOpposite_mindustry_type_StatusEffect, VTABLE_mindustry_type_StatusEffect_handleOpposite_mindustry_type_StatusEffect, "(Lmindustry/type/StatusEffect;)V", 4 },
	{ "draw", (intptr_t) M_mindustry_type_StatusEffect_draw_mindustry_gen_Unit_float, VTABLE_mindustry_type_StatusEffect_draw_mindustry_gen_Unit_float, "(Lmindustry/gen/Unit;F)V", 1 },
	{ "draw", (intptr_t) M_mindustry_type_StatusEffect_draw_mindustry_gen_Unit, VTABLE_mindustry_type_StatusEffect_draw_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "reactsWith", (intptr_t) M_mindustry_type_StatusEffect_reactsWith_mindustry_type_StatusEffect_R_boolean, VTABLE_mindustry_type_StatusEffect_reactsWith_mindustry_type_StatusEffect_R_boolean, "(Lmindustry/type/StatusEffect;)Z", 1 },
	{ "applyTransition", (intptr_t) M_mindustry_type_StatusEffect_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean, VTABLE_mindustry_type_StatusEffect_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean, "(Lmindustry/gen/Unit;Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;F)Z", 1 },
	{ "applied", (intptr_t) M_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean, VTABLE_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean, "(Lmindustry/gen/Unit;FZ)V", 1 },
	{ "createIcons", (intptr_t) M_mindustry_type_StatusEffect_createIcons_mindustry_graphics_MultiPacker, VTABLE_mindustry_type_StatusEffect_createIcons_mindustry_graphics_MultiPacker, "(Lmindustry/graphics/MultiPacker;)V", 1 },
	{ "toString", (intptr_t) M_mindustry_type_StatusEffect_toString_R_java_lang_String, VTABLE_mindustry_type_StatusEffect_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getContentType", (intptr_t) M_mindustry_type_StatusEffect_getContentType_R_mindustry_ctype_ContentType, VTABLE_mindustry_type_StatusEffect_getContentType_R_mindustry_ctype_ContentType, "()Lmindustry/ctype/ContentType;", 1 },
	{ "lambda$handleOpposite$0", (intptr_t) SM_mindustry_type_StatusEffect_lambda$handleOpposite$0_mindustry_type_StatusEffect_mindustry_gen_Unit_mindustry_entities_units_StatusEntry_float, 0, "(Lmindustry/type/StatusEffect;Lmindustry/gen/Unit;Lmindustry/entities/units/StatusEntry;F)V", 4106 },
	{ "lambda$setStats$0", (intptr_t) M_mindustry_type_StatusEffect_lambda$setStats$0_mindustry_type_StatusEffect_R_boolean, VTABLE_mindustry_type_StatusEffect_lambda$setStats$0_mindustry_type_StatusEffect_R_boolean, "(Lmindustry/type/StatusEffect;)Z", 4098 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_type_StatusEffect_lambda$new$0, 0, "()V", 4106 },
};

Class class_mindustry_type_StatusEffect{
		.nativeName = (intptr_t) "mindustry/type/StatusEffect",
		.parentClass = (intptr_t) &class_mindustry_ctype_UnlockableContent,
		.size = sizeof(mindustry_type_StatusEffect),
		.classVtable = (intptr_t) vtable_mindustry_type_StatusEffect,
		.staticInitializer = (intptr_t) clinit_mindustry_type_StatusEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_StatusEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 29,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 67,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_StatusEffect = registerClass(&class_mindustry_type_StatusEffect);

}
