#include "mindustry/content/StatusEffects.h"
#include "mindustry/content/StatusEffects_10.h"
#include "mindustry/content/StatusEffects_12.h"
#include "mindustry/content/StatusEffects_11.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/String.h"
#include "mindustry/content/StatusEffects_18.h"
#include "mindustry/content/StatusEffects_17.h"
#include "mindustry/content/StatusEffects_19.h"
#include "mindustry/content/StatusEffects_14.h"
#include "mindustry/content/StatusEffects_13.h"
#include "mindustry/content/StatusEffects_16.h"
#include "mindustry/content/StatusEffects_15.h"
#include "mindustry/content/StatusEffects_21.h"
#include "mindustry/content/StatusEffects_20.h"
#include "mindustry/content/StatusEffects_22.h"
#include "mindustry/type/StatusEffect.h"
#include "java/lang/Object.h"
#include "mindustry/content/StatusEffects_6.h"
#include "mindustry/content/StatusEffects_7.h"
#include "mindustry/content/StatusEffects_8.h"
#include "mindustry/content/StatusEffects_9.h"
#include "mindustry/content/StatusEffects_2.h"
#include "mindustry/content/StatusEffects_3.h"
#include "mindustry/content/StatusEffects_4.h"
#include "mindustry/content/StatusEffects_5.h"
#include "mindustry/content/StatusEffects_1.h"

extern "C" {

jobject SF_mindustry_content_StatusEffects_none;
jobject SF_mindustry_content_StatusEffects_burning;
jobject SF_mindustry_content_StatusEffects_freezing;
jobject SF_mindustry_content_StatusEffects_unmoving;
jobject SF_mindustry_content_StatusEffects_slow;
jobject SF_mindustry_content_StatusEffects_fast;
jobject SF_mindustry_content_StatusEffects_wet;
jobject SF_mindustry_content_StatusEffects_muddy;
jobject SF_mindustry_content_StatusEffects_melting;
jobject SF_mindustry_content_StatusEffects_sapped;
jobject SF_mindustry_content_StatusEffects_tarred;
jobject SF_mindustry_content_StatusEffects_overdrive;
jobject SF_mindustry_content_StatusEffects_overclock;
jobject SF_mindustry_content_StatusEffects_shielded;
jobject SF_mindustry_content_StatusEffects_shocked;
jobject SF_mindustry_content_StatusEffects_blasted;
jobject SF_mindustry_content_StatusEffects_corroded;
jobject SF_mindustry_content_StatusEffects_boss;
jobject SF_mindustry_content_StatusEffects_sporeSlowed;
jobject SF_mindustry_content_StatusEffects_disarmed;
jobject SF_mindustry_content_StatusEffects_electrified;
jobject SF_mindustry_content_StatusEffects_invincible;
jobject SF_mindustry_content_StatusEffects_dynamic;

void mark_mindustry_content_StatusEffects(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_content_StatusEffects_none)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_none)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_none, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_burning)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_burning)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_burning, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_freezing)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_freezing)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_freezing, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_unmoving)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_unmoving)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_unmoving, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_slow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_slow)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_slow, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_fast)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_fast)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_fast, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_wet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_wet)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_wet, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_muddy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_muddy)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_muddy, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_melting)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_melting)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_melting, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_sapped)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_sapped)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_sapped, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_tarred)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_tarred)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_tarred, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_overdrive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_overdrive)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_overdrive, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_overclock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_overclock)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_overclock, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_shielded)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_shielded)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_shielded, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_shocked)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_shocked)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_shocked, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_blasted)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_blasted)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_blasted, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_corroded)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_corroded)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_corroded, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_boss)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_boss)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_boss, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_sporeSlowed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_sporeSlowed)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_sporeSlowed, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_disarmed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_disarmed)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_disarmed, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_electrified)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_electrified)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_electrified, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_invincible)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_invincible)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_invincible, mark, depth + 1);
		if (SF_mindustry_content_StatusEffects_dynamic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_StatusEffects_dynamic)->clazz)->markFunction)((jobject) SF_mindustry_content_StatusEffects_dynamic, mark, depth + 1);
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
	auto self = (mindustry_content_StatusEffects *) object;
}

void clinit_mindustry_content_StatusEffects(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_content_StatusEffects(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/StatusEffects:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_StatusEffects(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_StatusEffects_load(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/StatusEffects:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_StatusEffects(ctx);
	{
	LINE_NUMBER(18);
	clinit_mindustry_type_StatusEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_StatusEffect);
	init_mindustry_type_StatusEffect_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"none"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_none = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_content_StatusEffects$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$1);
	init_mindustry_content_StatusEffects$1_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"burning"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_burning = sp[0].o;
	LINE_NUMBER(36);
	clinit_mindustry_content_StatusEffects$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$2);
	init_mindustry_content_StatusEffects$2_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"freezing"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_freezing = sp[0].o;
	LINE_NUMBER(55);
	clinit_mindustry_content_StatusEffects$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$3);
	init_mindustry_content_StatusEffects$3_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unmoving"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_unmoving = sp[0].o;
	LINE_NUMBER(60);
	clinit_mindustry_content_StatusEffects$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$4);
	init_mindustry_content_StatusEffects$4_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slow"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_slow = sp[0].o;
	LINE_NUMBER(68);
	clinit_mindustry_content_StatusEffects$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$5);
	init_mindustry_content_StatusEffects$5_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fast"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_fast = sp[0].o;
	LINE_NUMBER(75);
	clinit_mindustry_content_StatusEffects$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$6);
	init_mindustry_content_StatusEffects$6_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wet"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_wet = sp[0].o;
	LINE_NUMBER(94);
	clinit_mindustry_content_StatusEffects$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$7);
	init_mindustry_content_StatusEffects$7_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"muddy"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_muddy = sp[0].o;
	LINE_NUMBER(102);
	clinit_mindustry_content_StatusEffects$8(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$8);
	init_mindustry_content_StatusEffects$8_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"melting"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_melting = sp[0].o;
	LINE_NUMBER(119);
	clinit_mindustry_content_StatusEffects$9(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$9);
	init_mindustry_content_StatusEffects$9_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sapped"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_sapped = sp[0].o;
	LINE_NUMBER(127);
	clinit_mindustry_content_StatusEffects$10(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$10);
	init_mindustry_content_StatusEffects$10_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"electrified"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_electrified = sp[0].o;
	LINE_NUMBER(135);
	clinit_mindustry_content_StatusEffects$11(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$11);
	init_mindustry_content_StatusEffects$11_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spore-slowed"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_sporeSlowed = sp[0].o;
	LINE_NUMBER(142);
	clinit_mindustry_content_StatusEffects$12(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$12);
	init_mindustry_content_StatusEffects$12_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tarred"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_tarred = sp[0].o;
	LINE_NUMBER(153);
	clinit_mindustry_content_StatusEffects$13(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$13);
	init_mindustry_content_StatusEffects$13_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"overdrive"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_overdrive = sp[0].o;
	LINE_NUMBER(163);
	clinit_mindustry_content_StatusEffects$14(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$14);
	init_mindustry_content_StatusEffects$14_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"overclock"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_overclock = sp[0].o;
	LINE_NUMBER(172);
	clinit_mindustry_content_StatusEffects$15(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$15);
	init_mindustry_content_StatusEffects$15_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shielded"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_shielded = sp[0].o;
	LINE_NUMBER(178);
	clinit_mindustry_content_StatusEffects$16(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$16);
	init_mindustry_content_StatusEffects$16_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boss"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_boss = sp[0].o;
	LINE_NUMBER(185);
	clinit_mindustry_content_StatusEffects$17(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$17);
	init_mindustry_content_StatusEffects$17_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shocked"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_shocked = sp[0].o;
	LINE_NUMBER(190);
	clinit_mindustry_content_StatusEffects$18(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$18);
	init_mindustry_content_StatusEffects$18_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blasted"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_blasted = sp[0].o;
	LINE_NUMBER(195);
	clinit_mindustry_content_StatusEffects$19(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$19);
	init_mindustry_content_StatusEffects$19_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"corroded"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_corroded = sp[0].o;
	LINE_NUMBER(204);
	clinit_mindustry_content_StatusEffects$20(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$20);
	init_mindustry_content_StatusEffects$20_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"disarmed"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_disarmed = sp[0].o;
	LINE_NUMBER(210);
	clinit_mindustry_content_StatusEffects$21(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$21);
	init_mindustry_content_StatusEffects$21_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invincible"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_invincible = sp[0].o;
	LINE_NUMBER(215);
	clinit_mindustry_content_StatusEffects$22(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_StatusEffects$22);
	init_mindustry_content_StatusEffects$22_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dynamic"_j))));
	clinit_mindustry_content_StatusEffects(ctx);
	SF_mindustry_content_StatusEffects_dynamic = sp[0].o;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_StatusEffects[] {
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
};

static FieldMetadata fields[] {
	{ "none", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_none, "Lmindustry/type/StatusEffect;", 9 },
	{ "burning", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_burning, "Lmindustry/type/StatusEffect;", 9 },
	{ "freezing", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_freezing, "Lmindustry/type/StatusEffect;", 9 },
	{ "unmoving", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_unmoving, "Lmindustry/type/StatusEffect;", 9 },
	{ "slow", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_slow, "Lmindustry/type/StatusEffect;", 9 },
	{ "fast", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_fast, "Lmindustry/type/StatusEffect;", 9 },
	{ "wet", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_wet, "Lmindustry/type/StatusEffect;", 9 },
	{ "muddy", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_muddy, "Lmindustry/type/StatusEffect;", 9 },
	{ "melting", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_melting, "Lmindustry/type/StatusEffect;", 9 },
	{ "sapped", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_sapped, "Lmindustry/type/StatusEffect;", 9 },
	{ "tarred", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_tarred, "Lmindustry/type/StatusEffect;", 9 },
	{ "overdrive", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_overdrive, "Lmindustry/type/StatusEffect;", 9 },
	{ "overclock", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_overclock, "Lmindustry/type/StatusEffect;", 9 },
	{ "shielded", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_shielded, "Lmindustry/type/StatusEffect;", 9 },
	{ "shocked", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_shocked, "Lmindustry/type/StatusEffect;", 9 },
	{ "blasted", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_blasted, "Lmindustry/type/StatusEffect;", 9 },
	{ "corroded", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_corroded, "Lmindustry/type/StatusEffect;", 9 },
	{ "boss", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_boss, "Lmindustry/type/StatusEffect;", 9 },
	{ "sporeSlowed", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_sporeSlowed, "Lmindustry/type/StatusEffect;", 9 },
	{ "disarmed", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_disarmed, "Lmindustry/type/StatusEffect;", 9 },
	{ "electrified", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_electrified, "Lmindustry/type/StatusEffect;", 9 },
	{ "invincible", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_invincible, "Lmindustry/type/StatusEffect;", 9 },
	{ "dynamic", &class_mindustry_type_StatusEffect, (intptr_t) &SF_mindustry_content_StatusEffects_dynamic, "Lmindustry/type/StatusEffect;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_StatusEffects, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_content_StatusEffects_load, 0, "()V", 9 },
};

Class class_mindustry_content_StatusEffects{
		.nativeName = (intptr_t) "mindustry/content/StatusEffects",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_StatusEffects),
		.classVtable = (intptr_t) vtable_mindustry_content_StatusEffects,
		.staticInitializer = (intptr_t) clinit_mindustry_content_StatusEffects,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_StatusEffects,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 23,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_StatusEffects = registerClass(&class_mindustry_content_StatusEffects);

}
