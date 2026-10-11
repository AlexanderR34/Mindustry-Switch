#include "mindustry/net/Administration_ActionType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/net/Administration_ActionType.h"
#include "mindustry/net/Administration.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_net_Administration$ActionType_breakBlock;
jobject SF_mindustry_net_Administration$ActionType_placeBlock;
jobject SF_mindustry_net_Administration$ActionType_rotate;
jobject SF_mindustry_net_Administration$ActionType_configure;
jobject SF_mindustry_net_Administration$ActionType_withdrawItem;
jobject SF_mindustry_net_Administration$ActionType_depositItem;
jobject SF_mindustry_net_Administration$ActionType_control;
jobject SF_mindustry_net_Administration$ActionType_buildSelect;
jobject SF_mindustry_net_Administration$ActionType_command;
jobject SF_mindustry_net_Administration$ActionType_removePlanned;
jobject SF_mindustry_net_Administration$ActionType_commandUnits;
jobject SF_mindustry_net_Administration$ActionType_commandBuilding;
jobject SF_mindustry_net_Administration$ActionType_respawn;
jobject SF_mindustry_net_Administration$ActionType_pickupBlock;
jobject SF_mindustry_net_Administration$ActionType_dropPayload;
jobject SF_mindustry_net_Administration$ActionType_pingLocation;
jobject SF_mindustry_net_Administration$ActionType_$VALUES;

void mark_mindustry_net_Administration$ActionType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_net_Administration$ActionType_breakBlock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_breakBlock)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_breakBlock, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_placeBlock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_placeBlock)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_placeBlock, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_rotate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_rotate)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_rotate, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_configure)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_configure)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_configure, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_withdrawItem)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_withdrawItem)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_withdrawItem, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_depositItem)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_depositItem)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_depositItem, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_control)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_control)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_control, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_buildSelect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_buildSelect)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_buildSelect, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_command)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_command)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_command, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_removePlanned)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_removePlanned)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_removePlanned, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_commandUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_commandUnits)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_commandUnits, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_commandBuilding)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_commandBuilding)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_commandBuilding, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_respawn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_respawn)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_respawn, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_pickupBlock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_pickupBlock)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_pickupBlock, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_dropPayload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_dropPayload)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_dropPayload, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_pingLocation)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_pingLocation)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_pingLocation, mark, depth + 1);
		if (SF_mindustry_net_Administration$ActionType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$ActionType_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$ActionType_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_net_Administration$ActionType *) object;
}

jobject SM_mindustry_net_Administration$ActionType_values_R_Array1_mindustry_net_Administration$ActionType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$ActionType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$ActionType(ctx);
	{
	LINE_NUMBER(764);
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$ActionType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_net_Administration$ActionType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_Administration$ActionType_valueOf_java_lang_String_R_mindustry_net_Administration$ActionType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$ActionType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$ActionType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(764);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_net_Administration$ActionType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_net_Administration$ActionType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_net_Administration$ActionType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$ActionType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$ActionType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(764);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_Administration$ActionType_$values_R_Array1_mindustry_net_Administration$ActionType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$ActionType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$ActionType(ctx);
	{
	LINE_NUMBER(764);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_net_Administration$ActionType, (16));
	jint temp0 = jint(0);
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_breakBlock;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_placeBlock;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_rotate;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_configure;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_withdrawItem;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_depositItem;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_control;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_buildSelect;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_command;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_removePlanned;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_commandUnits;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_commandBuilding;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_respawn;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_pickupBlock;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_dropPayload;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_pingLocation;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_net_Administration$ActionType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$ActionType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$ActionType(ctx);
	{
	LINE_NUMBER(765);
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"breakBlock"_j))), (jint(0)));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_breakBlock = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"placeBlock"_j))), (jint(1)));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_placeBlock = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rotate"_j))), (jint(2)));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_rotate = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"configure"_j))), (jint(3)));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_configure = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"withdrawItem"_j))), (jint(4)));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_withdrawItem = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"depositItem"_j))), (jint(5)));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_depositItem = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"control"_j))), (6));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_control = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildSelect"_j))), (7));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_buildSelect = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"command"_j))), (8));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_command = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"removePlanned"_j))), (9));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_removePlanned = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"commandUnits"_j))), (10));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_commandUnits = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"commandBuilding"_j))), (11));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_commandBuilding = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"respawn"_j))), (12));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_respawn = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pickupBlock"_j))), (13));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_pickupBlock = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dropPayload"_j))), (14));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_dropPayload = sp[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$ActionType);
	init_mindustry_net_Administration$ActionType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pingLocation"_j))), (15));
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_pingLocation = sp[0].o;
	LINE_NUMBER(764);
	sp[0].o = (jobject)SM_mindustry_net_Administration$ActionType_$values_R_Array1_mindustry_net_Administration$ActionType(ctx);
	clinit_mindustry_net_Administration$ActionType(ctx);
	SF_mindustry_net_Administration$ActionType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Administration$ActionType[] {
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
	{ "breakBlock", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_breakBlock, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "placeBlock", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_placeBlock, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "rotate", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_rotate, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "configure", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_configure, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "withdrawItem", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_withdrawItem, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "depositItem", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_depositItem, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "control", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_control, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "buildSelect", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_buildSelect, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "command", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_command, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "removePlanned", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_removePlanned, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "commandUnits", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_commandUnits, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "commandBuilding", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_commandBuilding, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "respawn", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_respawn, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "pickupBlock", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_pickupBlock, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "dropPayload", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_dropPayload, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "pingLocation", &class_mindustry_net_Administration$ActionType, (intptr_t) &SF_mindustry_net_Administration$ActionType_pingLocation, "Lmindustry/net/Administration$ActionType;", 16409 },
	{ "$VALUES", getArrayClass(&class_mindustry_net_Administration$ActionType, 1), (intptr_t) &SF_mindustry_net_Administration$ActionType_$VALUES, "[Lmindustry/net/Administration$ActionType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_net_Administration$ActionType_values_R_Array1_mindustry_net_Administration$ActionType, 0, "()[Lmindustry/net/Administration$ActionType;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_net_Administration$ActionType_valueOf_java_lang_String_R_mindustry_net_Administration$ActionType, 0, "(Ljava/lang/String;)Lmindustry/net/Administration$ActionType;", 9 },
	{ "<init>", (intptr_t) init_mindustry_net_Administration$ActionType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_net_Administration$ActionType_$values_R_Array1_mindustry_net_Administration$ActionType, 0, "()[Lmindustry/net/Administration$ActionType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_net_Administration$ActionType, 0, "()V", 8 },
};

Class class_mindustry_net_Administration$ActionType{
		.nativeName = (intptr_t) "mindustry/net/Administration$ActionType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_net_Administration$ActionType),
		.classVtable = (intptr_t) vtable_mindustry_net_Administration$ActionType,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Administration$ActionType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Administration$ActionType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Administration,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Administration$ActionType = registerClass(&class_mindustry_net_Administration$ActionType);

}

