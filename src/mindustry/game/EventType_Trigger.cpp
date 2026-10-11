#include "mindustry/game/EventType_Trigger.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType.h"
#include "mindustry/game/EventType_Trigger.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_game_EventType$Trigger_shock;
jobject SF_mindustry_game_EventType$Trigger_cannotUpgrade;
jobject SF_mindustry_game_EventType$Trigger_fireCreate;
jobject SF_mindustry_game_EventType$Trigger_openConsole;
jobject SF_mindustry_game_EventType$Trigger_blastFreeze;
jobject SF_mindustry_game_EventType$Trigger_impactPower;
jobject SF_mindustry_game_EventType$Trigger_blastGenerator;
jobject SF_mindustry_game_EventType$Trigger_shockwaveTowerUse;
jobject SF_mindustry_game_EventType$Trigger_forceProjectorBreak;
jobject SF_mindustry_game_EventType$Trigger_thoriumReactorOverheat;
jobject SF_mindustry_game_EventType$Trigger_neoplasmReact;
jobject SF_mindustry_game_EventType$Trigger_fireExtinguish;
jobject SF_mindustry_game_EventType$Trigger_acceleratorUse;
jobject SF_mindustry_game_EventType$Trigger_newGame;
jobject SF_mindustry_game_EventType$Trigger_tutorialComplete;
jobject SF_mindustry_game_EventType$Trigger_flameAmmo;
jobject SF_mindustry_game_EventType$Trigger_resupplyTurret;
jobject SF_mindustry_game_EventType$Trigger_turretCool;
jobject SF_mindustry_game_EventType$Trigger_enablePixelation;
jobject SF_mindustry_game_EventType$Trigger_exclusionDeath;
jobject SF_mindustry_game_EventType$Trigger_suicideBomb;
jobject SF_mindustry_game_EventType$Trigger_openWiki;
jobject SF_mindustry_game_EventType$Trigger_teamCoreDamage;
jobject SF_mindustry_game_EventType$Trigger_socketConfigChanged;
jobject SF_mindustry_game_EventType$Trigger_update;
jobject SF_mindustry_game_EventType$Trigger_beforeGameUpdate;
jobject SF_mindustry_game_EventType$Trigger_afterGameUpdate;
jobject SF_mindustry_game_EventType$Trigger_unitCommandChange;
jobject SF_mindustry_game_EventType$Trigger_unitCommandPosition;
jobject SF_mindustry_game_EventType$Trigger_unitCommandAttack;
jobject SF_mindustry_game_EventType$Trigger_unitCommandBoost;
jobject SF_mindustry_game_EventType$Trigger_importMod;
jobject SF_mindustry_game_EventType$Trigger_draw;
jobject SF_mindustry_game_EventType$Trigger_drawOver;
jobject SF_mindustry_game_EventType$Trigger_preDraw;
jobject SF_mindustry_game_EventType$Trigger_postDraw;
jobject SF_mindustry_game_EventType$Trigger_uiDrawBegin;
jobject SF_mindustry_game_EventType$Trigger_uiDrawEnd;
jobject SF_mindustry_game_EventType$Trigger_universeDrawBegin;
jobject SF_mindustry_game_EventType$Trigger_universeDraw;
jobject SF_mindustry_game_EventType$Trigger_universeDrawEnd;
jobject SF_mindustry_game_EventType$Trigger_$VALUES;

void mark_mindustry_game_EventType$Trigger(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_game_EventType$Trigger_shock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_shock)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_shock, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_cannotUpgrade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_cannotUpgrade)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_cannotUpgrade, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_fireCreate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_fireCreate)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_fireCreate, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_openConsole)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_openConsole)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_openConsole, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_blastFreeze)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_blastFreeze)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_blastFreeze, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_impactPower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_impactPower)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_impactPower, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_blastGenerator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_blastGenerator)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_blastGenerator, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_shockwaveTowerUse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_shockwaveTowerUse)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_shockwaveTowerUse, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_forceProjectorBreak)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_forceProjectorBreak)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_forceProjectorBreak, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_thoriumReactorOverheat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_thoriumReactorOverheat)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_thoriumReactorOverheat, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_neoplasmReact)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_neoplasmReact)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_neoplasmReact, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_fireExtinguish)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_fireExtinguish)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_fireExtinguish, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_acceleratorUse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_acceleratorUse)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_acceleratorUse, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_newGame)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_newGame)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_newGame, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_tutorialComplete)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_tutorialComplete)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_tutorialComplete, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_flameAmmo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_flameAmmo)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_flameAmmo, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_resupplyTurret)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_resupplyTurret)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_resupplyTurret, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_turretCool)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_turretCool)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_turretCool, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_enablePixelation)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_enablePixelation)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_enablePixelation, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_exclusionDeath)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_exclusionDeath)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_exclusionDeath, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_suicideBomb)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_suicideBomb)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_suicideBomb, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_openWiki)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_openWiki)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_openWiki, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_teamCoreDamage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_teamCoreDamage)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_teamCoreDamage, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_socketConfigChanged)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_socketConfigChanged)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_socketConfigChanged, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_update)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_update)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_update, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_beforeGameUpdate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_beforeGameUpdate)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_beforeGameUpdate, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_afterGameUpdate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_afterGameUpdate)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_afterGameUpdate, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_unitCommandChange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_unitCommandChange)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_unitCommandChange, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_unitCommandPosition)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_unitCommandPosition)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_unitCommandPosition, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_unitCommandAttack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_unitCommandAttack)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_unitCommandAttack, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_unitCommandBoost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_unitCommandBoost)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_unitCommandBoost, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_importMod)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_importMod)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_importMod, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_draw)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_draw)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_draw, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_drawOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_drawOver)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_drawOver, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_preDraw)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_preDraw)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_preDraw, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_postDraw)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_postDraw)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_postDraw, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_uiDrawBegin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_uiDrawBegin)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_uiDrawBegin, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_uiDrawEnd)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_uiDrawEnd)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_uiDrawEnd, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_universeDrawBegin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_universeDrawBegin)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_universeDrawBegin, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_universeDraw)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_universeDraw)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_universeDraw, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_universeDrawEnd)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_universeDrawEnd)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_universeDrawEnd, mark, depth + 1);
		if (SF_mindustry_game_EventType$Trigger_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_EventType$Trigger_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_game_EventType$Trigger_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_EventType$Trigger *) object;
}

jobject SM_mindustry_game_EventType$Trigger_values_R_Array1_mindustry_game_EventType$Trigger(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$Trigger:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$Trigger(ctx);
	{
	LINE_NUMBER(22);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_game_EventType$Trigger, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_EventType$Trigger_valueOf_java_lang_String_R_mindustry_game_EventType$Trigger(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$Trigger:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$Trigger(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_game_EventType$Trigger)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_game_EventType$Trigger, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_game_EventType$Trigger_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$Trigger:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$Trigger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(22);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_EventType$Trigger_$values_R_Array1_mindustry_game_EventType$Trigger(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$Trigger:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$Trigger(ctx);
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_game_EventType$Trigger, (41));
	jint temp0 = jint(0);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_shock;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_cannotUpgrade;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_fireCreate;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_openConsole;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_blastFreeze;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_impactPower;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_blastGenerator;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_shockwaveTowerUse;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_forceProjectorBreak;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_thoriumReactorOverheat;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_neoplasmReact;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_fireExtinguish;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_acceleratorUse;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_newGame;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_tutorialComplete;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_flameAmmo;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_resupplyTurret;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_turretCool;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_enablePixelation;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_exclusionDeath;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_suicideBomb;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_openWiki;
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_teamCoreDamage;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_socketConfigChanged;
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_update;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_beforeGameUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 26;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_afterGameUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 27;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandChange;
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 28;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandPosition;
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 29;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandAttack;
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 30;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandBoost;
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 31;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_importMod;
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 32;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_draw;
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 33;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_drawOver;
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp34 = 34;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_preDraw;
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	jint temp35 = 35;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_postDraw;
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp36 = 36;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_uiDrawBegin;
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp37 = 37;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_uiDrawEnd;
	ARRAY_ACCESS(jobject, sp[0].o, temp37) = sp[1].o;
	jint temp38 = 38;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_universeDrawBegin;
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp39 = 39;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_universeDraw;
	ARRAY_ACCESS(jobject, sp[0].o, temp39) = sp[1].o;
	jint temp40 = 40;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_universeDrawEnd;
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_game_EventType$Trigger(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$Trigger:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$Trigger(ctx);
	{
	LINE_NUMBER(23);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shock"_j))), (jint(0)));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_shock = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cannotUpgrade"_j))), (jint(1)));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_cannotUpgrade = sp[0].o;
	LINE_NUMBER(25);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fireCreate"_j))), (jint(2)));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_fireCreate = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"openConsole"_j))), (jint(3)));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_openConsole = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blastFreeze"_j))), (jint(4)));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_blastFreeze = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"impactPower"_j))), (jint(5)));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_impactPower = sp[0].o;
	LINE_NUMBER(29);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blastGenerator"_j))), (6));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_blastGenerator = sp[0].o;
	LINE_NUMBER(30);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shockwaveTowerUse"_j))), (7));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_shockwaveTowerUse = sp[0].o;
	LINE_NUMBER(31);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"forceProjectorBreak"_j))), (8));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_forceProjectorBreak = sp[0].o;
	LINE_NUMBER(32);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"thoriumReactorOverheat"_j))), (9));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_thoriumReactorOverheat = sp[0].o;
	LINE_NUMBER(33);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"neoplasmReact"_j))), (10));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_neoplasmReact = sp[0].o;
	LINE_NUMBER(34);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fireExtinguish"_j))), (11));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_fireExtinguish = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"acceleratorUse"_j))), (12));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_acceleratorUse = sp[0].o;
	LINE_NUMBER(36);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"newGame"_j))), (13));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_newGame = sp[0].o;
	LINE_NUMBER(37);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tutorialComplete"_j))), (14));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_tutorialComplete = sp[0].o;
	LINE_NUMBER(38);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"flameAmmo"_j))), (15));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_flameAmmo = sp[0].o;
	LINE_NUMBER(39);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"resupplyTurret"_j))), (16));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_resupplyTurret = sp[0].o;
	LINE_NUMBER(40);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"turretCool"_j))), (17));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_turretCool = sp[0].o;
	LINE_NUMBER(41);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"enablePixelation"_j))), (18));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_enablePixelation = sp[0].o;
	LINE_NUMBER(42);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"exclusionDeath"_j))), (19));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_exclusionDeath = sp[0].o;
	LINE_NUMBER(43);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"suicideBomb"_j))), (20));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_suicideBomb = sp[0].o;
	LINE_NUMBER(44);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"openWiki"_j))), (21));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_openWiki = sp[0].o;
	LINE_NUMBER(45);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"teamCoreDamage"_j))), (22));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_teamCoreDamage = sp[0].o;
	LINE_NUMBER(46);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"socketConfigChanged"_j))), (23));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_socketConfigChanged = sp[0].o;
	LINE_NUMBER(47);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"update"_j))), (24));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_update = sp[0].o;
	LINE_NUMBER(48);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beforeGameUpdate"_j))), (25));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_beforeGameUpdate = sp[0].o;
	LINE_NUMBER(49);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"afterGameUpdate"_j))), (26));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_afterGameUpdate = sp[0].o;
	LINE_NUMBER(50);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitCommandChange"_j))), (27));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_unitCommandChange = sp[0].o;
	LINE_NUMBER(51);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitCommandPosition"_j))), (28));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_unitCommandPosition = sp[0].o;
	LINE_NUMBER(52);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitCommandAttack"_j))), (29));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_unitCommandAttack = sp[0].o;
	LINE_NUMBER(53);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitCommandBoost"_j))), (30));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_unitCommandBoost = sp[0].o;
	LINE_NUMBER(54);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"importMod"_j))), (31));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_importMod = sp[0].o;
	LINE_NUMBER(55);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"draw"_j))), (32));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_draw = sp[0].o;
	LINE_NUMBER(56);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"drawOver"_j))), (33));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_drawOver = sp[0].o;
	LINE_NUMBER(57);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"preDraw"_j))), (34));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_preDraw = sp[0].o;
	LINE_NUMBER(58);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"postDraw"_j))), (35));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_postDraw = sp[0].o;
	LINE_NUMBER(59);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uiDrawBegin"_j))), (36));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_uiDrawBegin = sp[0].o;
	LINE_NUMBER(60);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uiDrawEnd"_j))), (37));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_uiDrawEnd = sp[0].o;
	LINE_NUMBER(62);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"universeDrawBegin"_j))), (38));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_universeDrawBegin = sp[0].o;
	LINE_NUMBER(64);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"universeDraw"_j))), (39));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_universeDraw = sp[0].o;
	LINE_NUMBER(66);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$Trigger);
	init_mindustry_game_EventType$Trigger_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"universeDrawEnd"_j))), (40));
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_universeDrawEnd = sp[0].o;
	LINE_NUMBER(22);
	sp[0].o = (jobject)SM_mindustry_game_EventType$Trigger_$values_R_Array1_mindustry_game_EventType$Trigger(ctx);
	clinit_mindustry_game_EventType$Trigger(ctx);
	SF_mindustry_game_EventType$Trigger_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$Trigger[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "shock", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_shock, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "cannotUpgrade", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_cannotUpgrade, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "fireCreate", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_fireCreate, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "openConsole", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_openConsole, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "blastFreeze", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_blastFreeze, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "impactPower", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_impactPower, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "blastGenerator", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_blastGenerator, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "shockwaveTowerUse", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_shockwaveTowerUse, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "forceProjectorBreak", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_forceProjectorBreak, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "thoriumReactorOverheat", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_thoriumReactorOverheat, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "neoplasmReact", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_neoplasmReact, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "fireExtinguish", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_fireExtinguish, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "acceleratorUse", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_acceleratorUse, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "newGame", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_newGame, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "tutorialComplete", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_tutorialComplete, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "flameAmmo", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_flameAmmo, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "resupplyTurret", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_resupplyTurret, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "turretCool", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_turretCool, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "enablePixelation", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_enablePixelation, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "exclusionDeath", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_exclusionDeath, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "suicideBomb", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_suicideBomb, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "openWiki", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_openWiki, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "teamCoreDamage", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_teamCoreDamage, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "socketConfigChanged", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_socketConfigChanged, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "update", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_update, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "beforeGameUpdate", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_beforeGameUpdate, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "afterGameUpdate", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_afterGameUpdate, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "unitCommandChange", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_unitCommandChange, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "unitCommandPosition", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_unitCommandPosition, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "unitCommandAttack", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_unitCommandAttack, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "unitCommandBoost", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_unitCommandBoost, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "importMod", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_importMod, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "draw", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_draw, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "drawOver", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_drawOver, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "preDraw", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_preDraw, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "postDraw", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_postDraw, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "uiDrawBegin", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_uiDrawBegin, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "uiDrawEnd", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_uiDrawEnd, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "universeDrawBegin", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_universeDrawBegin, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "universeDraw", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_universeDraw, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "universeDrawEnd", &class_mindustry_game_EventType$Trigger, (intptr_t) &SF_mindustry_game_EventType$Trigger_universeDrawEnd, "Lmindustry/game/EventType$Trigger;", 16409 },
	{ "$VALUES", getArrayClass(&class_mindustry_game_EventType$Trigger, 1), (intptr_t) &SF_mindustry_game_EventType$Trigger_$VALUES, "[Lmindustry/game/EventType$Trigger;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_game_EventType$Trigger_values_R_Array1_mindustry_game_EventType$Trigger, 0, "()[Lmindustry/game/EventType$Trigger;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_game_EventType$Trigger_valueOf_java_lang_String_R_mindustry_game_EventType$Trigger, 0, "(Ljava/lang/String;)Lmindustry/game/EventType$Trigger;", 9 },
	{ "<init>", (intptr_t) init_mindustry_game_EventType$Trigger_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_game_EventType$Trigger_$values_R_Array1_mindustry_game_EventType$Trigger, 0, "()[Lmindustry/game/EventType$Trigger;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_game_EventType$Trigger, 0, "()V", 8 },
};

Class class_mindustry_game_EventType$Trigger{
		.nativeName = (intptr_t) "mindustry/game/EventType$Trigger",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_game_EventType$Trigger),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$Trigger,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$Trigger,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$Trigger,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_EventType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 42,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$Trigger = registerClass(&class_mindustry_game_EventType$Trigger);

}

