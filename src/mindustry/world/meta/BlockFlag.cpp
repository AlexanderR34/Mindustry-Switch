#include "mindustry/world/meta/BlockFlag.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "mindustry/world/meta/BlockFlag.h"

extern "C" {

jobject SF_mindustry_world_meta_BlockFlag_core;
jobject SF_mindustry_world_meta_BlockFlag_storage;
jobject SF_mindustry_world_meta_BlockFlag_generator;
jobject SF_mindustry_world_meta_BlockFlag_turret;
jobject SF_mindustry_world_meta_BlockFlag_factory;
jobject SF_mindustry_world_meta_BlockFlag_repair;
jobject SF_mindustry_world_meta_BlockFlag_battery;
jobject SF_mindustry_world_meta_BlockFlag_reactor;
jobject SF_mindustry_world_meta_BlockFlag_extinguisher;
jobject SF_mindustry_world_meta_BlockFlag_drill;
jobject SF_mindustry_world_meta_BlockFlag_shield;
jobject SF_mindustry_world_meta_BlockFlag_launchPad;
jobject SF_mindustry_world_meta_BlockFlag_unitCargoUnloadPoint;
jobject SF_mindustry_world_meta_BlockFlag_unitAssembler;
jobject SF_mindustry_world_meta_BlockFlag_hasFogRadius;
jobject SF_mindustry_world_meta_BlockFlag_steamVent;
jobject SF_mindustry_world_meta_BlockFlag_blockRepair;
jobject SF_mindustry_world_meta_BlockFlag_synced;
jobject SF_mindustry_world_meta_BlockFlag_all;
jobject SF_mindustry_world_meta_BlockFlag_allLogic;
jobject SF_mindustry_world_meta_BlockFlag_$VALUES;

void mark_mindustry_world_meta_BlockFlag(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_meta_BlockFlag_core)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_core)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_core, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_storage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_storage)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_storage, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_generator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_generator)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_generator, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_turret)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_turret)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_turret, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_factory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_factory)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_factory, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_repair)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_repair)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_repair, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_battery)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_battery)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_battery, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_reactor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_reactor)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_reactor, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_extinguisher)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_extinguisher)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_extinguisher, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_drill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_drill)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_drill, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_shield)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_shield)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_shield, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_launchPad)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_launchPad)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_launchPad, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_unitCargoUnloadPoint)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_unitCargoUnloadPoint)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_unitCargoUnloadPoint, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_unitAssembler)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_unitAssembler)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_unitAssembler, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_hasFogRadius)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_hasFogRadius)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_hasFogRadius, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_steamVent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_steamVent)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_steamVent, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_blockRepair)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_blockRepair)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_blockRepair, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_synced)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_synced)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_synced, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_all)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_all, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_allLogic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_allLogic)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_allLogic, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockFlag_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockFlag_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockFlag_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_world_meta_BlockFlag *) object;
}

jobject SM_mindustry_world_meta_BlockFlag_values_R_Array1_mindustry_world_meta_BlockFlag(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockFlag:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockFlag(ctx);
	{
	LINE_NUMBER(4);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_BlockFlag_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_BlockFlag_valueOf_java_lang_String_R_mindustry_world_meta_BlockFlag(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockFlag:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockFlag(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_world_meta_BlockFlag)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_meta_BlockFlag, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_world_meta_BlockFlag_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockFlag:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockFlag(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_BlockFlag_$values_R_Array1_mindustry_world_meta_BlockFlag(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockFlag:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockFlag(ctx);
	{
	LINE_NUMBER(4);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (18));
	jint temp0 = jint(0);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_core;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_storage;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_generator;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_turret;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_factory;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_repair;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_battery;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_reactor;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_extinguisher;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_drill;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_shield;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_launchPad;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_unitCargoUnloadPoint;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_unitAssembler;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_hasFogRadius;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_steamVent;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_blockRepair;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_synced;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_meta_BlockFlag(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockFlag:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockFlag(ctx);
	{
	LINE_NUMBER(6);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"core"_j))), (jint(0)));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_core = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"storage"_j))), (jint(1)));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_storage = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"generator"_j))), (jint(2)));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_generator = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"turret"_j))), (jint(3)));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_turret = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"factory"_j))), (jint(4)));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_factory = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"repair"_j))), (jint(5)));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_repair = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"battery"_j))), (6));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_battery = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reactor"_j))), (7));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_reactor = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"extinguisher"_j))), (8));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_extinguisher = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"drill"_j))), (9));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_drill = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shield"_j))), (10));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_shield = sp[0].o;
	LINE_NUMBER(29);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"launchPad"_j))), (11));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_launchPad = sp[0].o;
	LINE_NUMBER(30);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitCargoUnloadPoint"_j))), (12));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_unitCargoUnloadPoint = sp[0].o;
	LINE_NUMBER(31);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitAssembler"_j))), (13));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_unitAssembler = sp[0].o;
	LINE_NUMBER(32);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hasFogRadius"_j))), (14));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_hasFogRadius = sp[0].o;
	LINE_NUMBER(33);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamVent"_j))), (15));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_steamVent = sp[0].o;
	LINE_NUMBER(34);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blockRepair"_j))), (16));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_blockRepair = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockFlag);
	init_mindustry_world_meta_BlockFlag_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"synced"_j))), (17));
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_synced = sp[0].o;
	LINE_NUMBER(4);
	sp[0].o = (jobject)SM_mindustry_world_meta_BlockFlag_$values_R_Array1_mindustry_world_meta_BlockFlag(ctx);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_$VALUES = sp[0].o;
	LINE_NUMBER(37);
	sp[0].o = (jobject)SM_mindustry_world_meta_BlockFlag_values_R_Array1_mindustry_world_meta_BlockFlag(ctx);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_all = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (10));
	jint temp0 = jint(0);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_core;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_storage;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_generator;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_turret;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_factory;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_repair;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_battery;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_reactor;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_drill;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_shield;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	SF_mindustry_world_meta_BlockFlag_allLogic = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_meta_BlockFlag[] {
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
	{ "core", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_core, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "storage", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_storage, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "generator", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_generator, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "turret", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_turret, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "factory", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_factory, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "repair", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_repair, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "battery", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_battery, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "reactor", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_reactor, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "extinguisher", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_extinguisher, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "drill", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_drill, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "shield", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_shield, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "launchPad", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_launchPad, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "unitCargoUnloadPoint", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_unitCargoUnloadPoint, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "unitAssembler", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_unitAssembler, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "hasFogRadius", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_hasFogRadius, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "steamVent", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_steamVent, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "blockRepair", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_blockRepair, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "synced", &class_mindustry_world_meta_BlockFlag, (intptr_t) &SF_mindustry_world_meta_BlockFlag_synced, "Lmindustry/world/meta/BlockFlag;", 16409 },
	{ "all", getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), (intptr_t) &SF_mindustry_world_meta_BlockFlag_all, "[Lmindustry/world/meta/BlockFlag;", 25 },
	{ "allLogic", getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), (intptr_t) &SF_mindustry_world_meta_BlockFlag_allLogic, "[Lmindustry/world/meta/BlockFlag;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), (intptr_t) &SF_mindustry_world_meta_BlockFlag_$VALUES, "[Lmindustry/world/meta/BlockFlag;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_world_meta_BlockFlag_values_R_Array1_mindustry_world_meta_BlockFlag, 0, "()[Lmindustry/world/meta/BlockFlag;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_world_meta_BlockFlag_valueOf_java_lang_String_R_mindustry_world_meta_BlockFlag, 0, "(Ljava/lang/String;)Lmindustry/world/meta/BlockFlag;", 9 },
	{ "<init>", (intptr_t) init_mindustry_world_meta_BlockFlag_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_world_meta_BlockFlag_$values_R_Array1_mindustry_world_meta_BlockFlag, 0, "()[Lmindustry/world/meta/BlockFlag;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_meta_BlockFlag, 0, "()V", 8 },
};

Class class_mindustry_world_meta_BlockFlag{
		.nativeName = (intptr_t) "mindustry/world/meta/BlockFlag",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_world_meta_BlockFlag),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_BlockFlag,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_BlockFlag,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_meta_BlockFlag,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 21,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_BlockFlag = registerClass(&class_mindustry_world_meta_BlockFlag);

}
