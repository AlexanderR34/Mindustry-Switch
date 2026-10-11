#include "mindustry/entities/comp/StatusComp.h"
#include "mindustry/entities/comp/StatusComp_invoke_arc_func_Boolf_2.h"
#include "mindustry/entities/comp/StatusComp_invoke_arc_func_Prov_1.h"
#include "mindustry/entities/comp/StatusComp_invoke_arc_func_Prov_0.h"
#include "arc/func/Prov.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/units/StatusEntry.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "java/lang/Math.h"
#include "mindustry/entities/comp/StatusComp_invoke_arc_func_Cons_0.h"
#include "mindustry/entities/comp/StatusComp.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "arc/struct/Bits.h"
#include "mindustry/type/StatusEffect.h"
#include "arc/util/Time.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ctype/ContentType.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/entities/comp/StatusComp_invoke_arc_func_Boolf_0.h"
#include "mindustry/entities/comp/StatusComp_invoke_arc_func_Boolf_1.h"

extern "C" {


void mark_mindustry_entities_comp_StatusComp(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_comp_StatusComp *) object;
	if (self->F_statuses)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_statuses)->clazz)->markFunction)((jobject) self->F_statuses, mark, depth + 1);
	if (self->F_applied)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applied)->clazz)->markFunction)((jobject) self->F_applied, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_mindustry_entities_comp_StatusComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_StatusComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_StatusComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_statuses = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[3].o = (jobject)SF_mindustry_ctype_ContentType_status;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[2].o, sp[3].o);
	init_arc_struct_Bits_int(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[2].o))->F_size));
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_applied = (jref) sp[1].o;
	LINE_NUMBER(24);
	((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_speedMultiplier = (jfloat(1));
	((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_damageMultiplier = (jfloat(1));
	((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_healthMultiplier = (jfloat(1));
	((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_reloadMultiplier = (jfloat(1));
	((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier = (jfloat(1));
	((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_dragMultiplier = (jfloat(1));
	((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_armorOverride = (jfloat(-1.0f));
	LINE_NUMBER(25);
	((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_disarmed = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:apply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	((func_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(1)));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:apply", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(37);
	((func_mindustry_entities_comp_StatusComp_applyStatus_mindustry_type_StatusEffect_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_applyStatus_mindustry_type_StatusEffect_float_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jint(0)));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_StatusComp_getDuration_mindustry_type_StatusEffect_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:getDuration", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_StatusComp_invoke_arc_func_Boolf_0(ctx);
		auto proxy = (mindustry_entities_comp_StatusComp_invoke_arc_func_Boolf_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_StatusComp_invoke_arc_func_Boolf_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(42);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	INST_ALOAD(2);
	sp[-1].f = ((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[-1].o))->F_time;
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_setDuration_mindustry_type_StatusEffect_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:setDuration", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(46);
	((func_mindustry_entities_comp_StatusComp_applyStatus_mindustry_type_StatusEffect_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_applyStatus_mindustry_type_StatusEffect_float_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jint(1)));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_applyStatus_mindustry_type_StatusEffect_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:applyStatus", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_StatusComp_isImmune_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_isImmune_mindustry_type_StatusEffect_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(52);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(53);
	jint temp0 = (jint)((func_mindustry_entities_comp_StatusComp_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	((func_mindustry_entities_comp_StatusComp_unapply_mindustry_type_StatusEffect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_unapply_mindustry_type_StatusEffect])(ctx, (frame[0].o), (frame[1].o));
	}
label_5:;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(58);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(59);
	((func_mindustry_type_StatusEffect_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_StatusEffect_unlock])(ctx, (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(64);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[5].o)))->F_effect;
	if (sp[0].o != (frame[1].o)) goto label_13;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = frame[5].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_15;
	}
	INST_FLOAD(2);
	goto label_16;
label_15:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[5].o)))->F_time), (frame[2].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_16:;
	{
	sp -= 2;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_time = sp[1].f;
	LINE_NUMBER(69);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[5].o)))->F_time), (jint(1)));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[5].o)))->F_effect;
	sp[1].o = (jobject)((func_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_type_StatusEffect_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (frame[1].o), (frame[5].o), (frame[2].f));
	if (temp0 == 0) goto label_19;
	}
	LINE_NUMBER(74);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
	{
	LINE_NUMBER(64);
	INST_IINC(4, 1);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(79);
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[1].o)))->F_reactive) != 0) goto label_21;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = ((jobject) &class_mindustry_entities_units_StatusEntry);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_StatusComp_invoke_arc_func_Prov_0(ctx);
		auto proxy = (mindustry_entities_comp_StatusComp_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_StatusComp_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(82);
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[4].o)))->F_damageTime = (jfloat(0));
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry])(ctx, (frame[4].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_applied;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(86);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (frame[2].f), (jint(0)));
	}
label_21:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_clearStatuses(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:clearStatuses", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_StatusComp_invoke_arc_func_Cons_0(ctx);
		auto proxy = (mindustry_entities_comp_StatusComp_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_StatusComp_invoke_arc_func_Cons_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_unapply_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:unapply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_StatusComp_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_entities_comp_StatusComp_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_entities_comp_StatusComp_invoke_arc_func_Boolf_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_remove_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_StatusComp_isBoss_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:isBoss", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_boss;
	jint temp0 = (jint)((func_mindustry_entities_comp_StatusComp_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_StatusComp_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_StatusComp_isImmune_mindustry_type_StatusEffect_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:isImmune", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_immunities;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_StatusComp_statusColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:statusColor", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(117);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(120);
	frame[1].f = (jfloat(1));
	frame[2].f = (jfloat(1));
	frame[3].f = (jfloat(1));
	frame[4].f = (jfloat(0));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(122);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_time), (jfloat(10.0f)), 1)) >= 0) goto label_10;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_time) / (jfloat(10.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_FCONST(1);
label_11:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(123);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_effect;
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_color;
	frame[1].f = (temp0 + (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * (frame[7].f)));
	LINE_NUMBER(124);
	jfloat temp1 = frame[2].f;
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_effect;
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_color;
	frame[2].f = (temp1 + (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * (frame[7].f)));
	LINE_NUMBER(125);
	jfloat temp2 = frame[3].f;
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_effect;
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_color;
	frame[3].f = (temp2 + (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * (frame[7].f)));
	LINE_NUMBER(126);
	frame[4].f = ((frame[4].f) + (frame[7].f));
	LINE_NUMBER(127);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	frame[5].f = ((jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size))) + (frame[4].f));
	LINE_NUMBER(129);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, ((frame[1].f) / (frame[5].f)), ((frame[2].f) / (frame[5].f)), ((frame[3].f) / (frame[5].f)), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:applyDynamicStatus", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_dynamic;
	jint temp0 = (jint)((func_mindustry_entities_comp_StatusComp_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_StatusComp_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_StatusComp_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_entities_comp_StatusComp_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_entities_comp_StatusComp_invoke_arc_func_Boolf_2);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(139);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(142);
	sp[0].o = ((jobject) &class_mindustry_entities_units_StatusEntry);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_StatusComp_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_entities_comp_StatusComp_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_entities_comp_StatusComp_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(143);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_dynamic;
	sp[0].o = (jobject)((func_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry])(ctx, sp[0].o, sp[1].o, (jfloat(std::numeric_limits<float>::infinity())));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_applied;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_dynamic;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_effect;
	sp[1].o = (jobject)((func_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_time), (jint(0)));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_statusSpeed_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:statusSpeed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_speedMultiplier = (temp0 / ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_speed) * (jfloat(60.0f))) / (jfloat(8.0f))));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_statusDamageMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:statusDamageMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_damageMultiplier = (frame[1].f);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_statusReloadMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:statusReloadMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_reloadMultiplier = (frame[1].f);
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_statusMaxHealth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:statusMaxHealth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_healthMultiplier = ((frame[1].f) / ((jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_statusBuildSpeed_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:statusBuildSpeed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = (temp0 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_buildSpeed));
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_statusDrag_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:statusDrag", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_drag), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = temp0 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_drag);
	sp[0].f = temp1;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_dragMultiplier = sp[1].f;
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_statusArmor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:statusArmor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_armorOverride = (frame[1].f);
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:update", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_mindustry_entities_comp_StatusComp_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(194);
	jint temp0 = (jint)((func_mindustry_entities_comp_StatusComp_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) != 0) goto label_2;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_status;
	((func_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_statusDuration));
	}
label_2:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_applied;
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, sp[0].o);
	LINE_NUMBER(200);
	((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_armorOverride = (jfloat(-1.0f));
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[0].o;
	sp[4].o = frame[0].o;
	sp[5].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[5].o))->F_dragMultiplier = temp0;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[4].o))->F_buildSpeedMultiplier = temp0;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[3].o))->F_reloadMultiplier = temp0;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[2].o))->F_healthMultiplier = temp0;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[1].o))->F_damageMultiplier = temp0;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_speedMultiplier = temp0;
	LINE_NUMBER(202);
	((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_disarmed = (jint(0));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	jint temp11 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp11 == 0) goto label_8;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(206);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(208);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(211);
	sp[0].o = frame[3].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_time) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (jfloat(0)));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_time = temp1;
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_time), (jfloat(0)), 1)) > 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_permanent) != 0) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	sp[1].o = (jobject)((func_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	}
label_16:;
	{
	LINE_NUMBER(218);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[3].o));
	LINE_NUMBER(219);
	INST_IINC(2, -1);
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	goto label_20;
	}
label_15:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_applied;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_dynamic) == 0) goto label_22;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_speedMultiplier = (((jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_speedMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_speedMultiplier));
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_healthMultiplier = (((jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_healthMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_healthMultiplier));
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_damageMultiplier = (((jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_damageMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_damageMultiplier));
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_reloadMultiplier = (((jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_reloadMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_reloadMultiplier));
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = (((jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_buildSpeedMultiplier));
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_dragMultiplier = (((jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_dragMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_dragMultiplier));
	LINE_NUMBER(233);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_armorOverride), (jfloat(0)), -1)) < 0) goto label_30;
	}
	{
	((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_armorOverride = ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_armorOverride);
	goto label_30;
	}
label_22:;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_speedMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_speedMultiplier = (temp0 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_speedMultiplier));
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_healthMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_healthMultiplier = (temp1 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_healthMultiplier));
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_damageMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_damageMultiplier = (temp2 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_damageMultiplier));
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_reloadMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_reloadMultiplier = (temp3 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_reloadMultiplier));
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = (temp4 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_buildSpeedMultiplier));
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_dragMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_dragMultiplier = (temp5 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_dragMultiplier));
	}
label_30:;
	{
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_disarmed;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_entities_comp_StatusComp *) NULL_CHECK(sp[0].o))->F_disarmed = (temp0 | ((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_disarm));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	sp[1].o = (jobject)((func_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_StatusEffect_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (frame[3].o));
	}
label_20:;
	LINE_NUMBER(247);
	goto label_9;
label_10:;
	LINE_NUMBER(248);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_StatusComp_statusBits_R_arc_struct_Bits(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:statusBits", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_applied;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_effect;
	sp[1].o = (jobject)((func_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_StatusEffect_draw_mindustry_gen_Unit_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_draw_mindustry_gen_Unit_float])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_time));
	LINE_NUMBER(257);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(258);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_StatusComp_hasEffect_mindustry_type_StatusEffect_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:hasEffect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_entities_comp_StatusComp *) NULL_CHECK((frame[0].o)))->F_applied;
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_comp_StatusComp_lambda$applyDynamicStatus$0_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:lambda$applyDynamicStatus$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_StatusComp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_effect;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_dynamic);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_StatusComp_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:lambda$unapply$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_effect;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_effect;
	sp[1].o = (jobject)((func_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(100);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_StatusComp_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:lambda$clearStatuses$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_effect;
	sp[1].o = (jobject)((func_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_StatusComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_comp_StatusComp_lambda$getDuration$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/StatusComp:lambda$getDuration$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_StatusComp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_effect;
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

void *vtable_mindustry_entities_comp_StatusComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_StatusComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect,
	(void *) M_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect_float,
	(void *) M_mindustry_entities_comp_StatusComp_getDuration_mindustry_type_StatusEffect_R_float,
	(void *) M_mindustry_entities_comp_StatusComp_setDuration_mindustry_type_StatusEffect_float,
	(void *) M_mindustry_entities_comp_StatusComp_applyStatus_mindustry_type_StatusEffect_float_boolean,
	(void *) M_mindustry_entities_comp_StatusComp_clearStatuses,
	(void *) M_mindustry_entities_comp_StatusComp_unapply_mindustry_type_StatusEffect,
	(void *) M_mindustry_entities_comp_StatusComp_isBoss_R_boolean,
	(void *) M_mindustry_entities_comp_StatusComp_isImmune_mindustry_type_StatusEffect_R_boolean,
	(void *) M_mindustry_entities_comp_StatusComp_statusColor_R_arc_graphics_Color,
	(void *) M_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry,
	(void *) M_mindustry_entities_comp_StatusComp_statusSpeed_float,
	(void *) M_mindustry_entities_comp_StatusComp_statusDamageMultiplier_float,
	(void *) M_mindustry_entities_comp_StatusComp_statusReloadMultiplier_float,
	(void *) M_mindustry_entities_comp_StatusComp_statusMaxHealth_float,
	(void *) M_mindustry_entities_comp_StatusComp_statusBuildSpeed_float,
	(void *) M_mindustry_entities_comp_StatusComp_statusDrag_float,
	(void *) M_mindustry_entities_comp_StatusComp_statusArmor_float,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_StatusComp_statusBits_R_arc_struct_Bits,
	(void *) M_mindustry_entities_comp_StatusComp_draw,
	(void *) M_mindustry_entities_comp_StatusComp_hasEffect_mindustry_type_StatusEffect_R_boolean,
	(void *) M_mindustry_entities_comp_StatusComp_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean,
	(void *) M_mindustry_entities_comp_StatusComp_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry,
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
	{ "apply", "(Lmindustry/type/StatusEffect;)V" },
	{ "apply", "(Lmindustry/type/StatusEffect;F)V" },
	{ "getDuration", "(Lmindustry/type/StatusEffect;)F" },
	{ "setDuration", "(Lmindustry/type/StatusEffect;F)V" },
	{ "applyStatus", "(Lmindustry/type/StatusEffect;FZ)V" },
	{ "clearStatuses", "()V" },
	{ "unapply", "(Lmindustry/type/StatusEffect;)V" },
	{ "isBoss", "()Z" },
	{ "isImmune", "(Lmindustry/type/StatusEffect;)Z" },
	{ "statusColor", "()Larc/graphics/Color;" },
	{ "applyDynamicStatus", "()Lmindustry/entities/units/StatusEntry;" },
	{ "statusSpeed", "(F)V" },
	{ "statusDamageMultiplier", "(F)V" },
	{ "statusReloadMultiplier", "(F)V" },
	{ "statusMaxHealth", "(F)V" },
	{ "statusBuildSpeed", "(F)V" },
	{ "statusDrag", "(F)V" },
	{ "statusArmor", "(F)V" },
	{ "isGrounded", "()Z" },
	{ "statusBits", "()Larc/struct/Bits;" },
	{ "draw", "()V" },
	{ "hasEffect", "(Lmindustry/type/StatusEffect;)Z" },
	{ "lambda$unapply$0", "(Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;)Z" },
	{ "lambda$clearStatuses$0", "(Lmindustry/entities/units/StatusEntry;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, };

static FieldMetadata fields[] {
	{ "statuses", &class_arc_struct_Seq, offsetof(mindustry_entities_comp_StatusComp, F_statuses), "Larc/struct/Seq;", 2 },
	{ "applied", &class_arc_struct_Bits, offsetof(mindustry_entities_comp_StatusComp, F_applied), "Larc/struct/Bits;", 130 },
	{ "speedMultiplier", &class_float, offsetof(mindustry_entities_comp_StatusComp, F_speedMultiplier), "F", 128 },
	{ "damageMultiplier", &class_float, offsetof(mindustry_entities_comp_StatusComp, F_damageMultiplier), "F", 128 },
	{ "healthMultiplier", &class_float, offsetof(mindustry_entities_comp_StatusComp, F_healthMultiplier), "F", 128 },
	{ "reloadMultiplier", &class_float, offsetof(mindustry_entities_comp_StatusComp, F_reloadMultiplier), "F", 128 },
	{ "buildSpeedMultiplier", &class_float, offsetof(mindustry_entities_comp_StatusComp, F_buildSpeedMultiplier), "F", 128 },
	{ "dragMultiplier", &class_float, offsetof(mindustry_entities_comp_StatusComp, F_dragMultiplier), "F", 128 },
	{ "armorOverride", &class_float, offsetof(mindustry_entities_comp_StatusComp, F_armorOverride), "F", 128 },
	{ "disarmed", &class_boolean, offsetof(mindustry_entities_comp_StatusComp, F_disarmed), "Z", 128 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_StatusComp, F_type), "Lmindustry/type/UnitType;", 0 },
	{ "maxHealth", &class_float, offsetof(mindustry_entities_comp_StatusComp, F_maxHealth), "F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_StatusComp, 0, "()V", 0 },
	{ "apply", (intptr_t) M_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect, VTABLE_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect, "(Lmindustry/type/StatusEffect;)V", 1 },
	{ "apply", (intptr_t) M_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect_float, VTABLE_mindustry_entities_comp_StatusComp_apply_mindustry_type_StatusEffect_float, "(Lmindustry/type/StatusEffect;F)V", 1 },
	{ "getDuration", (intptr_t) M_mindustry_entities_comp_StatusComp_getDuration_mindustry_type_StatusEffect_R_float, VTABLE_mindustry_entities_comp_StatusComp_getDuration_mindustry_type_StatusEffect_R_float, "(Lmindustry/type/StatusEffect;)F", 1 },
	{ "setDuration", (intptr_t) M_mindustry_entities_comp_StatusComp_setDuration_mindustry_type_StatusEffect_float, VTABLE_mindustry_entities_comp_StatusComp_setDuration_mindustry_type_StatusEffect_float, "(Lmindustry/type/StatusEffect;F)V", 1 },
	{ "applyStatus", (intptr_t) M_mindustry_entities_comp_StatusComp_applyStatus_mindustry_type_StatusEffect_float_boolean, VTABLE_mindustry_entities_comp_StatusComp_applyStatus_mindustry_type_StatusEffect_float_boolean, "(Lmindustry/type/StatusEffect;FZ)V", 2 },
	{ "clearStatuses", (intptr_t) M_mindustry_entities_comp_StatusComp_clearStatuses, VTABLE_mindustry_entities_comp_StatusComp_clearStatuses, "()V", 1 },
	{ "unapply", (intptr_t) M_mindustry_entities_comp_StatusComp_unapply_mindustry_type_StatusEffect, VTABLE_mindustry_entities_comp_StatusComp_unapply_mindustry_type_StatusEffect, "(Lmindustry/type/StatusEffect;)V", 1 },
	{ "isBoss", (intptr_t) M_mindustry_entities_comp_StatusComp_isBoss_R_boolean, VTABLE_mindustry_entities_comp_StatusComp_isBoss_R_boolean, "()Z", 1 },
	{ "isImmune", (intptr_t) M_mindustry_entities_comp_StatusComp_isImmune_mindustry_type_StatusEffect_R_boolean, VTABLE_mindustry_entities_comp_StatusComp_isImmune_mindustry_type_StatusEffect_R_boolean, "(Lmindustry/type/StatusEffect;)Z", 1 },
	{ "statusColor", (intptr_t) M_mindustry_entities_comp_StatusComp_statusColor_R_arc_graphics_Color, VTABLE_mindustry_entities_comp_StatusComp_statusColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "applyDynamicStatus", (intptr_t) M_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry, VTABLE_mindustry_entities_comp_StatusComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry, "()Lmindustry/entities/units/StatusEntry;", 1 },
	{ "statusSpeed", (intptr_t) M_mindustry_entities_comp_StatusComp_statusSpeed_float, VTABLE_mindustry_entities_comp_StatusComp_statusSpeed_float, "(F)V", 1 },
	{ "statusDamageMultiplier", (intptr_t) M_mindustry_entities_comp_StatusComp_statusDamageMultiplier_float, VTABLE_mindustry_entities_comp_StatusComp_statusDamageMultiplier_float, "(F)V", 1 },
	{ "statusReloadMultiplier", (intptr_t) M_mindustry_entities_comp_StatusComp_statusReloadMultiplier_float, VTABLE_mindustry_entities_comp_StatusComp_statusReloadMultiplier_float, "(F)V", 1 },
	{ "statusMaxHealth", (intptr_t) M_mindustry_entities_comp_StatusComp_statusMaxHealth_float, VTABLE_mindustry_entities_comp_StatusComp_statusMaxHealth_float, "(F)V", 1 },
	{ "statusBuildSpeed", (intptr_t) M_mindustry_entities_comp_StatusComp_statusBuildSpeed_float, VTABLE_mindustry_entities_comp_StatusComp_statusBuildSpeed_float, "(F)V", 1 },
	{ "statusDrag", (intptr_t) M_mindustry_entities_comp_StatusComp_statusDrag_float, VTABLE_mindustry_entities_comp_StatusComp_statusDrag_float, "(F)V", 1 },
	{ "statusArmor", (intptr_t) M_mindustry_entities_comp_StatusComp_statusArmor_float, VTABLE_mindustry_entities_comp_StatusComp_statusArmor_float, "(F)V", 1 },
	{ "isGrounded", 0, VTABLE_mindustry_entities_comp_StatusComp_isGrounded_R_boolean, "()Z", 1025 },
	{ "update", (intptr_t) M_mindustry_entities_comp_StatusComp_update, VTABLE_mindustry_entities_comp_StatusComp_update, "()V", 1 },
	{ "statusBits", (intptr_t) M_mindustry_entities_comp_StatusComp_statusBits_R_arc_struct_Bits, VTABLE_mindustry_entities_comp_StatusComp_statusBits_R_arc_struct_Bits, "()Larc/struct/Bits;", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_StatusComp_draw, VTABLE_mindustry_entities_comp_StatusComp_draw, "()V", 1 },
	{ "hasEffect", (intptr_t) M_mindustry_entities_comp_StatusComp_hasEffect_mindustry_type_StatusEffect_R_boolean, VTABLE_mindustry_entities_comp_StatusComp_hasEffect_mindustry_type_StatusEffect_R_boolean, "(Lmindustry/type/StatusEffect;)Z", 1 },
	{ "lambda$applyDynamicStatus$0", (intptr_t) SM_mindustry_entities_comp_StatusComp_lambda$applyDynamicStatus$0_mindustry_entities_units_StatusEntry_R_boolean, 0, "(Lmindustry/entities/units/StatusEntry;)Z", 4106 },
	{ "lambda$unapply$0", (intptr_t) M_mindustry_entities_comp_StatusComp_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean, VTABLE_mindustry_entities_comp_StatusComp_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean, "(Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;)Z", 4098 },
	{ "lambda$clearStatuses$0", (intptr_t) M_mindustry_entities_comp_StatusComp_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry, VTABLE_mindustry_entities_comp_StatusComp_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry, "(Lmindustry/entities/units/StatusEntry;)V", 4098 },
	{ "lambda$getDuration$0", (intptr_t) SM_mindustry_entities_comp_StatusComp_lambda$getDuration$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean, 0, "(Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;)Z", 4106 },
};

Class class_mindustry_entities_comp_StatusComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/StatusComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_StatusComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_StatusComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_StatusComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_StatusComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_StatusComp = registerClass(&class_mindustry_entities_comp_StatusComp);

}
