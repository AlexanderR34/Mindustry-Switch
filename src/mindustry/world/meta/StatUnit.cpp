#include "mindustry/world/meta/StatUnit.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "mindustry/world/meta/StatUnit.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/I18NBundle.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Nullable.h"
#include "java/util/Locale.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {

jobject SF_mindustry_world_meta_StatUnit_blocks;
jobject SF_mindustry_world_meta_StatUnit_blocksSquared;
jobject SF_mindustry_world_meta_StatUnit_worldUnits;
jobject SF_mindustry_world_meta_StatUnit_tilesSecond;
jobject SF_mindustry_world_meta_StatUnit_powerSecond;
jobject SF_mindustry_world_meta_StatUnit_liquidSecond;
jobject SF_mindustry_world_meta_StatUnit_itemsSecond;
jobject SF_mindustry_world_meta_StatUnit_liquidUnits;
jobject SF_mindustry_world_meta_StatUnit_powerUnits;
jobject SF_mindustry_world_meta_StatUnit_powerEquilibrium;
jobject SF_mindustry_world_meta_StatUnit_heatUnits;
jobject SF_mindustry_world_meta_StatUnit_degrees;
jobject SF_mindustry_world_meta_StatUnit_seconds;
jobject SF_mindustry_world_meta_StatUnit_minutes;
jobject SF_mindustry_world_meta_StatUnit_shots;
jobject SF_mindustry_world_meta_StatUnit_perSecond;
jobject SF_mindustry_world_meta_StatUnit_perMinute;
jobject SF_mindustry_world_meta_StatUnit_perShot;
jobject SF_mindustry_world_meta_StatUnit_perLeg;
jobject SF_mindustry_world_meta_StatUnit_perSide;
jobject SF_mindustry_world_meta_StatUnit_timesSpeed;
jobject SF_mindustry_world_meta_StatUnit_multiplier;
jobject SF_mindustry_world_meta_StatUnit_percent;
jobject SF_mindustry_world_meta_StatUnit_shieldHealth;
jobject SF_mindustry_world_meta_StatUnit_none;
jobject SF_mindustry_world_meta_StatUnit_items;
jobject SF_mindustry_world_meta_StatUnit_instant;

void mark_mindustry_world_meta_StatUnit(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_meta_StatUnit_blocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_blocks)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_blocks, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_blocksSquared)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_blocksSquared)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_blocksSquared, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_worldUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_worldUnits)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_worldUnits, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_tilesSecond)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_tilesSecond)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_tilesSecond, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_powerSecond)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_powerSecond)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_powerSecond, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_liquidSecond)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_liquidSecond)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_liquidSecond, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_itemsSecond)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_itemsSecond)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_itemsSecond, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_liquidUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_liquidUnits)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_liquidUnits, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_powerUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_powerUnits)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_powerUnits, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_powerEquilibrium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_powerEquilibrium)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_powerEquilibrium, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_heatUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_heatUnits)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_heatUnits, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_degrees)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_degrees)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_degrees, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_seconds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_seconds)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_seconds, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_minutes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_minutes)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_minutes, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_shots)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_shots)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_shots, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_perSecond)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_perSecond)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_perSecond, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_perMinute)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_perMinute)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_perMinute, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_perShot)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_perShot)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_perShot, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_perLeg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_perLeg)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_perLeg, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_perSide)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_perSide)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_perSide, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_timesSpeed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_timesSpeed)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_timesSpeed, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_multiplier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_multiplier)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_multiplier, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_percent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_percent)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_percent, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_shieldHealth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_shieldHealth)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_shieldHealth, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_none)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_none)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_none, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_items)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_items)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_items, mark, depth + 1);
		if (SF_mindustry_world_meta_StatUnit_instant)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatUnit_instant)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatUnit_instant, mark, depth + 1);
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
	auto self = (mindustry_world_meta_StatUnit *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
}

void init_mindustry_world_meta_StatUnit_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatUnit:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatUnit(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(48);
	((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(49);
	((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_space = (frame[2].i);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_meta_StatUnit_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatUnit:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatUnit(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	init_mindustry_world_meta_StatUnit_java_lang_String_boolean(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_meta_StatUnit_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatUnit:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatUnit(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(57);
	init_mindustry_world_meta_StatUnit_java_lang_String_boolean(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(58);
	((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[2].o);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_meta_StatUnit_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatUnit:localized", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_StatUnit_none;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(63);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_world_meta_StatUnit *) NULL_CHECK((frame[0].o)))->F_name;
	clinit_java_util_Locale(ctx);
	sp[2].o = (jobject)SF_java_util_Locale_ROOT;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"unit.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_meta_StatUnit(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatUnit:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatUnit(ctx);
	{
	LINE_NUMBER(15);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blocks"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_blocks = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blocksSquared"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_blocksSquared = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"worldUnits"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_worldUnits = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tilesSecond"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_tilesSecond = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"powerSecond"_j))), (((jobject) createStringLiteral(ctx, u8"[accent]\ue810[]"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_powerSecond = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquidSecond"_j))), (((jobject) createStringLiteral(ctx, u8"[sky]\ue85c[]"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_liquidSecond = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"itemsSecond"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_itemsSecond = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquidUnits"_j))), (((jobject) createStringLiteral(ctx, u8"[sky]\ue85c[]"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_liquidUnits = sp[0].o;
	LINE_NUMBER(23);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"powerUnits"_j))), (((jobject) createStringLiteral(ctx, u8"[accent]\ue810[]"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_powerUnits = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"powerEquilibrium"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_powerEquilibrium = sp[0].o;
	LINE_NUMBER(25);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"heatUnits"_j))), (((jobject) createStringLiteral(ctx, u8"[red]\ue83b[]"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_heatUnits = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"degrees"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_degrees = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"seconds"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_seconds = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minutes"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_minutes = sp[0].o;
	LINE_NUMBER(29);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shots"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_shots = sp[0].o;
	LINE_NUMBER(30);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"perSecond"_j))), (jint(0)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_perSecond = sp[0].o;
	LINE_NUMBER(31);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"perMinute"_j))), (jint(0)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_perMinute = sp[0].o;
	LINE_NUMBER(32);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"perShot"_j))), (jint(0)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_perShot = sp[0].o;
	LINE_NUMBER(33);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"perLeg"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_perLeg = sp[0].o;
	LINE_NUMBER(34);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"perSide"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_perSide = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"timesSpeed"_j))), (jint(0)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_timesSpeed = sp[0].o;
	LINE_NUMBER(36);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"multiplier"_j))), (jint(0)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_multiplier = sp[0].o;
	LINE_NUMBER(37);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"percent"_j))), (jint(0)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_percent = sp[0].o;
	LINE_NUMBER(38);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shieldHealth"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_shieldHealth = sp[0].o;
	LINE_NUMBER(39);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"none"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_none = sp[0].o;
	LINE_NUMBER(40);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"items"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_items = sp[0].o;
	LINE_NUMBER(41);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatUnit);
	init_mindustry_world_meta_StatUnit_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"instant"_j))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	SF_mindustry_world_meta_StatUnit_instant = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_meta_StatUnit;
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

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field icon
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[29]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_meta_StatUnit[] {
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
	(void *) M_mindustry_world_meta_StatUnit_localized_R_java_lang_String,
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
	{ "localized", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "blocks", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_blocks, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "blocksSquared", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_blocksSquared, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "worldUnits", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_worldUnits, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "tilesSecond", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_tilesSecond, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "powerSecond", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_powerSecond, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "liquidSecond", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_liquidSecond, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "itemsSecond", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_itemsSecond, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "liquidUnits", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_liquidUnits, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "powerUnits", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_powerUnits, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "powerEquilibrium", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_powerEquilibrium, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "heatUnits", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_heatUnits, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "degrees", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_degrees, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "seconds", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_seconds, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "minutes", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_minutes, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "shots", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_shots, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "perSecond", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_perSecond, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "perMinute", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_perMinute, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "perShot", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_perShot, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "perLeg", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_perLeg, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "perSide", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_perSide, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "timesSpeed", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_timesSpeed, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "multiplier", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_multiplier, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "percent", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_percent, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "shieldHealth", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_shieldHealth, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "none", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_none, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "items", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_items, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "instant", &class_mindustry_world_meta_StatUnit, (intptr_t) &SF_mindustry_world_meta_StatUnit_instant, "Lmindustry/world/meta/StatUnit;", 25 },
	{ "space", &class_boolean, offsetof(mindustry_world_meta_StatUnit, F_space), "Z", 17 },
	{ "name", &class_java_lang_String, offsetof(mindustry_world_meta_StatUnit, F_name), "Ljava/lang/String;", 17 },
	{ "icon", &class_java_lang_String, offsetof(mindustry_world_meta_StatUnit, F_icon), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_meta_StatUnit_java_lang_String_boolean, 0, "(Ljava/lang/String;Z)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_meta_StatUnit_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_meta_StatUnit_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "localized", (intptr_t) M_mindustry_world_meta_StatUnit_localized_R_java_lang_String, VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_meta_StatUnit, 0, "()V", 8 },
};

Class class_mindustry_world_meta_StatUnit{
		.nativeName = (intptr_t) "mindustry/world/meta/StatUnit",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_meta_StatUnit),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_StatUnit,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_StatUnit,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_meta_StatUnit,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 30,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_StatUnit = registerClass(&class_mindustry_world_meta_StatUnit);

}
