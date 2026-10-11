#include "mindustry/service/SStat.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/service/Achievement.h"
#include "mindustry/service/GameService.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/service/SStat.h"

extern "C" {

jobject SF_mindustry_service_SStat_unitsDestroyed;
jobject SF_mindustry_service_SStat_attacksWon;
jobject SF_mindustry_service_SStat_pvpsWon;
jobject SF_mindustry_service_SStat_timesLaunched;
jobject SF_mindustry_service_SStat_blocksDestroyed;
jobject SF_mindustry_service_SStat_itemsLaunched;
jobject SF_mindustry_service_SStat_reactorsOverheated;
jobject SF_mindustry_service_SStat_maxUnitActive;
jobject SF_mindustry_service_SStat_unitTypesBuilt;
jobject SF_mindustry_service_SStat_unitsBuilt;
jobject SF_mindustry_service_SStat_bossesDefeated;
jobject SF_mindustry_service_SStat_maxPlayersServer;
jobject SF_mindustry_service_SStat_mapsMade;
jobject SF_mindustry_service_SStat_mapsPublished;
jobject SF_mindustry_service_SStat_maxWavesSurvived;
jobject SF_mindustry_service_SStat_blocksBuilt;
jobject SF_mindustry_service_SStat_maxProduction;
jobject SF_mindustry_service_SStat_sectorsControlled;
jobject SF_mindustry_service_SStat_schematicsCreated;
jobject SF_mindustry_service_SStat_bouldersDeconstructed;
jobject SF_mindustry_service_SStat_totalCampaignItems;
jobject SF_mindustry_service_SStat_$VALUES;

void mark_mindustry_service_SStat(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_service_SStat_unitsDestroyed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_unitsDestroyed)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_unitsDestroyed, mark, depth + 1);
		if (SF_mindustry_service_SStat_attacksWon)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_attacksWon)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_attacksWon, mark, depth + 1);
		if (SF_mindustry_service_SStat_pvpsWon)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_pvpsWon)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_pvpsWon, mark, depth + 1);
		if (SF_mindustry_service_SStat_timesLaunched)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_timesLaunched)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_timesLaunched, mark, depth + 1);
		if (SF_mindustry_service_SStat_blocksDestroyed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_blocksDestroyed)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_blocksDestroyed, mark, depth + 1);
		if (SF_mindustry_service_SStat_itemsLaunched)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_itemsLaunched)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_itemsLaunched, mark, depth + 1);
		if (SF_mindustry_service_SStat_reactorsOverheated)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_reactorsOverheated)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_reactorsOverheated, mark, depth + 1);
		if (SF_mindustry_service_SStat_maxUnitActive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_maxUnitActive)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_maxUnitActive, mark, depth + 1);
		if (SF_mindustry_service_SStat_unitTypesBuilt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_unitTypesBuilt)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_unitTypesBuilt, mark, depth + 1);
		if (SF_mindustry_service_SStat_unitsBuilt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_unitsBuilt)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_unitsBuilt, mark, depth + 1);
		if (SF_mindustry_service_SStat_bossesDefeated)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_bossesDefeated)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_bossesDefeated, mark, depth + 1);
		if (SF_mindustry_service_SStat_maxPlayersServer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_maxPlayersServer)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_maxPlayersServer, mark, depth + 1);
		if (SF_mindustry_service_SStat_mapsMade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_mapsMade)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_mapsMade, mark, depth + 1);
		if (SF_mindustry_service_SStat_mapsPublished)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_mapsPublished)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_mapsPublished, mark, depth + 1);
		if (SF_mindustry_service_SStat_maxWavesSurvived)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_maxWavesSurvived)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_maxWavesSurvived, mark, depth + 1);
		if (SF_mindustry_service_SStat_blocksBuilt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_blocksBuilt)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_blocksBuilt, mark, depth + 1);
		if (SF_mindustry_service_SStat_maxProduction)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_maxProduction)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_maxProduction, mark, depth + 1);
		if (SF_mindustry_service_SStat_sectorsControlled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_sectorsControlled)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_sectorsControlled, mark, depth + 1);
		if (SF_mindustry_service_SStat_schematicsCreated)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_schematicsCreated)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_schematicsCreated, mark, depth + 1);
		if (SF_mindustry_service_SStat_bouldersDeconstructed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_bouldersDeconstructed)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_bouldersDeconstructed, mark, depth + 1);
		if (SF_mindustry_service_SStat_totalCampaignItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_totalCampaignItems)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_totalCampaignItems, mark, depth + 1);
		if (SF_mindustry_service_SStat_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_SStat_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_service_SStat_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_service_SStat *) object;
}

jobject SM_mindustry_service_SStat_values_R_Array1_mindustry_service_SStat(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/SStat:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_SStat(ctx);
	{
	LINE_NUMBER(5);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_service_SStat, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_service_SStat_valueOf_java_lang_String_R_mindustry_service_SStat(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/SStat:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_SStat(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(5);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_service_SStat)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_service_SStat, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_service_SStat_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/SStat:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_SStat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(5);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_service_SStat_get_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/SStat:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_service;
	sp[1].o = (jobject)((func_mindustry_service_SStat_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_SStat_name_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_service_GameService_getStat_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_getStat_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_SStat_max_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/SStat:max", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(34);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_mindustry_service_SStat_get_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_SStat_get_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_1;
	}
	{
	LINE_NUMBER(35);
	((func_mindustry_service_SStat_set_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_SStat_set_int])(ctx, (frame[0].o), (frame[1].i));
	}
label_1:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_SStat_set_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/SStat:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(40);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_service;
	sp[1].o = (jobject)((func_mindustry_service_SStat_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_SStat_name_R_java_lang_String])(ctx, (frame[0].o));
	((func_mindustry_service_GameService_setStat_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_setStat_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	LINE_NUMBER(41);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_service;
	((func_mindustry_service_GameService_storeStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_storeStats])(ctx, sp[0].o);
	LINE_NUMBER(43);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(44);
	((func_mindustry_service_Achievement_checkCompletion) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_service_Achievement_checkCompletion])(ctx, (frame[5].o));
	LINE_NUMBER(43);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_SStat_add_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/SStat:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_service_SStat_get_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_SStat_get_R_int])(ctx, (frame[0].o));
	((func_mindustry_service_SStat_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_set_int])(ctx, sp[0].o, (temp0 + (frame[1].i)));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_SStat_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/SStat:add", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	((func_mindustry_service_SStat_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_SStat_add_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_service_SStat_$values_R_Array1_mindustry_service_SStat(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/SStat:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_SStat(ctx);
	{
	LINE_NUMBER(5);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_service_SStat, (21));
	jint temp0 = jint(0);
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_unitsDestroyed;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_attacksWon;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_pvpsWon;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_timesLaunched;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_blocksDestroyed;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_itemsLaunched;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_reactorsOverheated;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_maxUnitActive;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_unitTypesBuilt;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_unitsBuilt;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_bossesDefeated;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_maxPlayersServer;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_mapsMade;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_mapsPublished;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_maxWavesSurvived;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_blocksBuilt;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_maxProduction;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_sectorsControlled;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_schematicsCreated;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_bouldersDeconstructed;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_mindustry_service_SStat(ctx);
	sp[1].o = (jobject)SF_mindustry_service_SStat_totalCampaignItems;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_service_SStat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/SStat:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_SStat(ctx);
	{
	LINE_NUMBER(6);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitsDestroyed"_j))), (jint(0)));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_unitsDestroyed = sp[0].o;
	LINE_NUMBER(7);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"attacksWon"_j))), (jint(1)));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_attacksWon = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pvpsWon"_j))), (jint(2)));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_pvpsWon = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"timesLaunched"_j))), (jint(3)));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_timesLaunched = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blocksDestroyed"_j))), (jint(4)));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_blocksDestroyed = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"itemsLaunched"_j))), (jint(5)));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_itemsLaunched = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reactorsOverheated"_j))), (6));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_reactorsOverheated = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxUnitActive"_j))), (7));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_maxUnitActive = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitTypesBuilt"_j))), (8));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_unitTypesBuilt = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitsBuilt"_j))), (9));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_unitsBuilt = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bossesDefeated"_j))), (10));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_bossesDefeated = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxPlayersServer"_j))), (11));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_maxPlayersServer = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mapsMade"_j))), (12));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_mapsMade = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mapsPublished"_j))), (13));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_mapsPublished = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxWavesSurvived"_j))), (14));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_maxWavesSurvived = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blocksBuilt"_j))), (15));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_blocksBuilt = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxProduction"_j))), (16));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_maxProduction = sp[0].o;
	LINE_NUMBER(23);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sectorsControlled"_j))), (17));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_sectorsControlled = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"schematicsCreated"_j))), (18));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_schematicsCreated = sp[0].o;
	LINE_NUMBER(25);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bouldersDeconstructed"_j))), (19));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_bouldersDeconstructed = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_SStat);
	init_mindustry_service_SStat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"totalCampaignItems"_j))), (20));
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_totalCampaignItems = sp[0].o;
	LINE_NUMBER(5);
	sp[0].o = (jobject)SM_mindustry_service_SStat_$values_R_Array1_mindustry_service_SStat(ctx);
	clinit_mindustry_service_SStat(ctx);
	SF_mindustry_service_SStat_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_service_SStat[] {
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
	(void *) M_mindustry_service_SStat_get_R_int,
	(void *) M_mindustry_service_SStat_max_int,
	(void *) M_mindustry_service_SStat_set_int,
	(void *) M_mindustry_service_SStat_add_int,
	(void *) M_mindustry_service_SStat_add,
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
	{ "get", "()I" },
	{ "max", "(I)V" },
	{ "set", "(I)V" },
	{ "add", "(I)V" },
	{ "add", "()V" },
};

static FieldMetadata fields[] {
	{ "unitsDestroyed", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_unitsDestroyed, "Lmindustry/service/SStat;", 16409 },
	{ "attacksWon", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_attacksWon, "Lmindustry/service/SStat;", 16409 },
	{ "pvpsWon", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_pvpsWon, "Lmindustry/service/SStat;", 16409 },
	{ "timesLaunched", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_timesLaunched, "Lmindustry/service/SStat;", 16409 },
	{ "blocksDestroyed", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_blocksDestroyed, "Lmindustry/service/SStat;", 16409 },
	{ "itemsLaunched", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_itemsLaunched, "Lmindustry/service/SStat;", 16409 },
	{ "reactorsOverheated", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_reactorsOverheated, "Lmindustry/service/SStat;", 16409 },
	{ "maxUnitActive", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_maxUnitActive, "Lmindustry/service/SStat;", 16409 },
	{ "unitTypesBuilt", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_unitTypesBuilt, "Lmindustry/service/SStat;", 16409 },
	{ "unitsBuilt", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_unitsBuilt, "Lmindustry/service/SStat;", 16409 },
	{ "bossesDefeated", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_bossesDefeated, "Lmindustry/service/SStat;", 16409 },
	{ "maxPlayersServer", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_maxPlayersServer, "Lmindustry/service/SStat;", 16409 },
	{ "mapsMade", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_mapsMade, "Lmindustry/service/SStat;", 16409 },
	{ "mapsPublished", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_mapsPublished, "Lmindustry/service/SStat;", 16409 },
	{ "maxWavesSurvived", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_maxWavesSurvived, "Lmindustry/service/SStat;", 16409 },
	{ "blocksBuilt", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_blocksBuilt, "Lmindustry/service/SStat;", 16409 },
	{ "maxProduction", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_maxProduction, "Lmindustry/service/SStat;", 16409 },
	{ "sectorsControlled", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_sectorsControlled, "Lmindustry/service/SStat;", 16409 },
	{ "schematicsCreated", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_schematicsCreated, "Lmindustry/service/SStat;", 16409 },
	{ "bouldersDeconstructed", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_bouldersDeconstructed, "Lmindustry/service/SStat;", 16409 },
	{ "totalCampaignItems", &class_mindustry_service_SStat, (intptr_t) &SF_mindustry_service_SStat_totalCampaignItems, "Lmindustry/service/SStat;", 16409 },
	{ "$VALUES", getArrayClass(&class_mindustry_service_SStat, 1), (intptr_t) &SF_mindustry_service_SStat_$VALUES, "[Lmindustry/service/SStat;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_service_SStat_values_R_Array1_mindustry_service_SStat, 0, "()[Lmindustry/service/SStat;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_service_SStat_valueOf_java_lang_String_R_mindustry_service_SStat, 0, "(Ljava/lang/String;)Lmindustry/service/SStat;", 9 },
	{ "<init>", (intptr_t) init_mindustry_service_SStat_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "get", (intptr_t) M_mindustry_service_SStat_get_R_int, VTABLE_mindustry_service_SStat_get_R_int, "()I", 1 },
	{ "max", (intptr_t) M_mindustry_service_SStat_max_int, VTABLE_mindustry_service_SStat_max_int, "(I)V", 1 },
	{ "set", (intptr_t) M_mindustry_service_SStat_set_int, VTABLE_mindustry_service_SStat_set_int, "(I)V", 1 },
	{ "add", (intptr_t) M_mindustry_service_SStat_add_int, VTABLE_mindustry_service_SStat_add_int, "(I)V", 1 },
	{ "add", (intptr_t) M_mindustry_service_SStat_add, VTABLE_mindustry_service_SStat_add, "()V", 1 },
	{ "$values", (intptr_t) SM_mindustry_service_SStat_$values_R_Array1_mindustry_service_SStat, 0, "()[Lmindustry/service/SStat;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_service_SStat, 0, "()V", 8 },
};

Class class_mindustry_service_SStat{
		.nativeName = (intptr_t) "mindustry/service/SStat",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_service_SStat),
		.classVtable = (intptr_t) vtable_mindustry_service_SStat,
		.staticInitializer = (intptr_t) clinit_mindustry_service_SStat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_service_SStat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 22,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_service_SStat = registerClass(&class_mindustry_service_SStat);

}
