#include "mindustry/logic/LogicRule.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/LogicRule.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_logic_LogicRule_currentWaveTime;
jobject SF_mindustry_logic_LogicRule_waveTimer;
jobject SF_mindustry_logic_LogicRule_waves;
jobject SF_mindustry_logic_LogicRule_wave;
jobject SF_mindustry_logic_LogicRule_waveSpacing;
jobject SF_mindustry_logic_LogicRule_waveSending;
jobject SF_mindustry_logic_LogicRule_attackMode;
jobject SF_mindustry_logic_LogicRule_enemyCoreBuildRadius;
jobject SF_mindustry_logic_LogicRule_dropZoneRadius;
jobject SF_mindustry_logic_LogicRule_unitCap;
jobject SF_mindustry_logic_LogicRule_mapArea;
jobject SF_mindustry_logic_LogicRule_lighting;
jobject SF_mindustry_logic_LogicRule_canGameOver;
jobject SF_mindustry_logic_LogicRule_ambientLight;
jobject SF_mindustry_logic_LogicRule_unitLight;
jobject SF_mindustry_logic_LogicRule_solarMultiplier;
jobject SF_mindustry_logic_LogicRule_dragMultiplier;
jobject SF_mindustry_logic_LogicRule_ban;
jobject SF_mindustry_logic_LogicRule_unban;
jobject SF_mindustry_logic_LogicRule_pauseDisabled;
jobject SF_mindustry_logic_LogicRule_musicVolume;
jobject SF_mindustry_logic_LogicRule_buildSpeed;
jobject SF_mindustry_logic_LogicRule_unitHealth;
jobject SF_mindustry_logic_LogicRule_unitBuildSpeed;
jobject SF_mindustry_logic_LogicRule_unitMineSpeed;
jobject SF_mindustry_logic_LogicRule_unitCost;
jobject SF_mindustry_logic_LogicRule_unitDamage;
jobject SF_mindustry_logic_LogicRule_blockHealth;
jobject SF_mindustry_logic_LogicRule_blockDamage;
jobject SF_mindustry_logic_LogicRule_rtsMinWeight;
jobject SF_mindustry_logic_LogicRule_rtsMinSquad;
jobject SF_mindustry_logic_LogicRule_all;
jobject SF_mindustry_logic_LogicRule_$VALUES;

void mark_mindustry_logic_LogicRule(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LogicRule_currentWaveTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_currentWaveTime)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_currentWaveTime, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_waveTimer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_waveTimer)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_waveTimer, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_waves)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_waves)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_waves, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_wave)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_wave)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_wave, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_waveSpacing)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_waveSpacing)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_waveSpacing, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_waveSending)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_waveSending)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_waveSending, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_attackMode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_attackMode)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_attackMode, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_enemyCoreBuildRadius)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_enemyCoreBuildRadius)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_enemyCoreBuildRadius, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_dropZoneRadius)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_dropZoneRadius)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_dropZoneRadius, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_unitCap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_unitCap)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_unitCap, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_mapArea)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_mapArea)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_mapArea, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_lighting)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_lighting)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_lighting, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_canGameOver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_canGameOver)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_canGameOver, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_ambientLight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_ambientLight)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_ambientLight, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_unitLight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_unitLight)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_unitLight, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_solarMultiplier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_solarMultiplier)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_solarMultiplier, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_dragMultiplier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_dragMultiplier)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_dragMultiplier, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_ban)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_ban)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_ban, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_unban)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_unban)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_unban, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_pauseDisabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_pauseDisabled)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_pauseDisabled, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_musicVolume)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_musicVolume)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_musicVolume, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_buildSpeed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_buildSpeed)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_buildSpeed, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_unitHealth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_unitHealth)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_unitHealth, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_unitBuildSpeed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_unitBuildSpeed)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_unitBuildSpeed, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_unitMineSpeed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_unitMineSpeed)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_unitMineSpeed, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_unitCost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_unitCost)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_unitCost, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_unitDamage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_unitDamage)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_unitDamage, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_blockHealth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_blockHealth)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_blockHealth, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_blockDamage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_blockDamage)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_blockDamage, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_rtsMinWeight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_rtsMinWeight)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_rtsMinWeight, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_rtsMinSquad)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_rtsMinSquad)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_rtsMinSquad, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_all)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_all, mark, depth + 1);
		if (SF_mindustry_logic_LogicRule_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicRule_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicRule_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_logic_LogicRule *) object;
}

jobject SM_mindustry_logic_LogicRule_values_R_Array1_mindustry_logic_LogicRule(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicRule:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicRule(ctx);
	{
	LINE_NUMBER(3);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LogicRule_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_logic_LogicRule, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LogicRule_valueOf_java_lang_String_R_mindustry_logic_LogicRule(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicRule:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicRule(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_logic_LogicRule)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_LogicRule, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LogicRule_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicRule:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicRule(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LogicRule_$values_R_Array1_mindustry_logic_LogicRule(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicRule:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicRule(ctx);
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_LogicRule, (31));
	jint temp0 = jint(0);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_currentWaveTime;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_waveTimer;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_waves;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_wave;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_waveSpacing;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_waveSending;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_attackMode;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_enemyCoreBuildRadius;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_dropZoneRadius;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitCap;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_mapArea;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_lighting;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_canGameOver;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_ambientLight;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitLight;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_solarMultiplier;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_dragMultiplier;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_ban;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unban;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_pauseDisabled;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_musicVolume;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_buildSpeed;
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitHealth;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitBuildSpeed;
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitMineSpeed;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitCost;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 26;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_unitDamage;
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 27;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_blockHealth;
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 28;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_blockDamage;
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 29;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_rtsMinWeight;
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 30;
	clinit_mindustry_logic_LogicRule(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LogicRule_rtsMinSquad;
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LogicRule(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicRule:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicRule(ctx);
	{
	LINE_NUMBER(4);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"currentWaveTime"_j))), (jint(0)));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_currentWaveTime = sp[0].o;
	LINE_NUMBER(5);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"waveTimer"_j))), (jint(1)));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_waveTimer = sp[0].o;
	LINE_NUMBER(6);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"waves"_j))), (jint(2)));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_waves = sp[0].o;
	LINE_NUMBER(7);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wave"_j))), (jint(3)));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_wave = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"waveSpacing"_j))), (jint(4)));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_waveSpacing = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"waveSending"_j))), (jint(5)));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_waveSending = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"attackMode"_j))), (6));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_attackMode = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"enemyCoreBuildRadius"_j))), (7));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_enemyCoreBuildRadius = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dropZoneRadius"_j))), (8));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_dropZoneRadius = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitCap"_j))), (9));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_unitCap = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mapArea"_j))), (10));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_mapArea = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lighting"_j))), (11));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_lighting = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"canGameOver"_j))), (12));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_canGameOver = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ambientLight"_j))), (13));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_ambientLight = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitLight"_j))), (14));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_unitLight = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"solarMultiplier"_j))), (15));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_solarMultiplier = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dragMultiplier"_j))), (16));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_dragMultiplier = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ban"_j))), (17));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_ban = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unban"_j))), (18));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_unban = sp[0].o;
	LINE_NUMBER(23);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pauseDisabled"_j))), (19));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_pauseDisabled = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"musicVolume"_j))), (20));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_musicVolume = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildSpeed"_j))), (21));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_buildSpeed = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitHealth"_j))), (22));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_unitHealth = sp[0].o;
	LINE_NUMBER(29);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitBuildSpeed"_j))), (23));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_unitBuildSpeed = sp[0].o;
	LINE_NUMBER(30);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitMineSpeed"_j))), (24));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_unitMineSpeed = sp[0].o;
	LINE_NUMBER(31);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitCost"_j))), (25));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_unitCost = sp[0].o;
	LINE_NUMBER(32);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitDamage"_j))), (26));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_unitDamage = sp[0].o;
	LINE_NUMBER(33);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blockHealth"_j))), (27));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_blockHealth = sp[0].o;
	LINE_NUMBER(34);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blockDamage"_j))), (28));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_blockDamage = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rtsMinWeight"_j))), (29));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_rtsMinWeight = sp[0].o;
	LINE_NUMBER(36);
	clinit_mindustry_logic_LogicRule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LogicRule);
	init_mindustry_logic_LogicRule_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rtsMinSquad"_j))), (30));
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_rtsMinSquad = sp[0].o;
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_mindustry_logic_LogicRule_$values_R_Array1_mindustry_logic_LogicRule(ctx);
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_$VALUES = sp[0].o;
	LINE_NUMBER(38);
	sp[0].o = (jobject)SM_mindustry_logic_LogicRule_values_R_Array1_mindustry_logic_LogicRule(ctx);
	clinit_mindustry_logic_LogicRule(ctx);
	SF_mindustry_logic_LogicRule_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LogicRule[] {
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
	{ "currentWaveTime", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_currentWaveTime, "Lmindustry/logic/LogicRule;", 16409 },
	{ "waveTimer", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_waveTimer, "Lmindustry/logic/LogicRule;", 16409 },
	{ "waves", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_waves, "Lmindustry/logic/LogicRule;", 16409 },
	{ "wave", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_wave, "Lmindustry/logic/LogicRule;", 16409 },
	{ "waveSpacing", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_waveSpacing, "Lmindustry/logic/LogicRule;", 16409 },
	{ "waveSending", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_waveSending, "Lmindustry/logic/LogicRule;", 16409 },
	{ "attackMode", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_attackMode, "Lmindustry/logic/LogicRule;", 16409 },
	{ "enemyCoreBuildRadius", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_enemyCoreBuildRadius, "Lmindustry/logic/LogicRule;", 16409 },
	{ "dropZoneRadius", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_dropZoneRadius, "Lmindustry/logic/LogicRule;", 16409 },
	{ "unitCap", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_unitCap, "Lmindustry/logic/LogicRule;", 16409 },
	{ "mapArea", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_mapArea, "Lmindustry/logic/LogicRule;", 16409 },
	{ "lighting", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_lighting, "Lmindustry/logic/LogicRule;", 16409 },
	{ "canGameOver", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_canGameOver, "Lmindustry/logic/LogicRule;", 16409 },
	{ "ambientLight", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_ambientLight, "Lmindustry/logic/LogicRule;", 16409 },
	{ "unitLight", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_unitLight, "Lmindustry/logic/LogicRule;", 16409 },
	{ "solarMultiplier", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_solarMultiplier, "Lmindustry/logic/LogicRule;", 16409 },
	{ "dragMultiplier", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_dragMultiplier, "Lmindustry/logic/LogicRule;", 16409 },
	{ "ban", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_ban, "Lmindustry/logic/LogicRule;", 16409 },
	{ "unban", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_unban, "Lmindustry/logic/LogicRule;", 16409 },
	{ "pauseDisabled", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_pauseDisabled, "Lmindustry/logic/LogicRule;", 16409 },
	{ "musicVolume", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_musicVolume, "Lmindustry/logic/LogicRule;", 16409 },
	{ "buildSpeed", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_buildSpeed, "Lmindustry/logic/LogicRule;", 16409 },
	{ "unitHealth", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_unitHealth, "Lmindustry/logic/LogicRule;", 16409 },
	{ "unitBuildSpeed", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_unitBuildSpeed, "Lmindustry/logic/LogicRule;", 16409 },
	{ "unitMineSpeed", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_unitMineSpeed, "Lmindustry/logic/LogicRule;", 16409 },
	{ "unitCost", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_unitCost, "Lmindustry/logic/LogicRule;", 16409 },
	{ "unitDamage", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_unitDamage, "Lmindustry/logic/LogicRule;", 16409 },
	{ "blockHealth", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_blockHealth, "Lmindustry/logic/LogicRule;", 16409 },
	{ "blockDamage", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_blockDamage, "Lmindustry/logic/LogicRule;", 16409 },
	{ "rtsMinWeight", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_rtsMinWeight, "Lmindustry/logic/LogicRule;", 16409 },
	{ "rtsMinSquad", &class_mindustry_logic_LogicRule, (intptr_t) &SF_mindustry_logic_LogicRule_rtsMinSquad, "Lmindustry/logic/LogicRule;", 16409 },
	{ "all", getArrayClass(&class_mindustry_logic_LogicRule, 1), (intptr_t) &SF_mindustry_logic_LogicRule_all, "[Lmindustry/logic/LogicRule;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_logic_LogicRule, 1), (intptr_t) &SF_mindustry_logic_LogicRule_$VALUES, "[Lmindustry/logic/LogicRule;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_logic_LogicRule_values_R_Array1_mindustry_logic_LogicRule, 0, "()[Lmindustry/logic/LogicRule;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_logic_LogicRule_valueOf_java_lang_String_R_mindustry_logic_LogicRule, 0, "(Ljava/lang/String;)Lmindustry/logic/LogicRule;", 9 },
	{ "<init>", (intptr_t) init_mindustry_logic_LogicRule_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_logic_LogicRule_$values_R_Array1_mindustry_logic_LogicRule, 0, "()[Lmindustry/logic/LogicRule;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LogicRule, 0, "()V", 8 },
};

Class class_mindustry_logic_LogicRule{
		.nativeName = (intptr_t) "mindustry/logic/LogicRule",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_logic_LogicRule),
		.classVtable = (intptr_t) vtable_mindustry_logic_LogicRule,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LogicRule,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LogicRule,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 33,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LogicRule = registerClass(&class_mindustry_logic_LogicRule);

}
