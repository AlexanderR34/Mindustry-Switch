#include "mindustry/logic/FetchType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/FetchType.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_logic_FetchType_unit;
jobject SF_mindustry_logic_FetchType_unitCount;
jobject SF_mindustry_logic_FetchType_player;
jobject SF_mindustry_logic_FetchType_playerCount;
jobject SF_mindustry_logic_FetchType_core;
jobject SF_mindustry_logic_FetchType_coreCount;
jobject SF_mindustry_logic_FetchType_build;
jobject SF_mindustry_logic_FetchType_buildCount;
jobject SF_mindustry_logic_FetchType_all;
jobject SF_mindustry_logic_FetchType_$VALUES;

void mark_mindustry_logic_FetchType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_FetchType_unit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_FetchType_unit)->clazz)->markFunction)((jobject) SF_mindustry_logic_FetchType_unit, mark, depth + 1);
		if (SF_mindustry_logic_FetchType_unitCount)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_FetchType_unitCount)->clazz)->markFunction)((jobject) SF_mindustry_logic_FetchType_unitCount, mark, depth + 1);
		if (SF_mindustry_logic_FetchType_player)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_FetchType_player)->clazz)->markFunction)((jobject) SF_mindustry_logic_FetchType_player, mark, depth + 1);
		if (SF_mindustry_logic_FetchType_playerCount)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_FetchType_playerCount)->clazz)->markFunction)((jobject) SF_mindustry_logic_FetchType_playerCount, mark, depth + 1);
		if (SF_mindustry_logic_FetchType_core)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_FetchType_core)->clazz)->markFunction)((jobject) SF_mindustry_logic_FetchType_core, mark, depth + 1);
		if (SF_mindustry_logic_FetchType_coreCount)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_FetchType_coreCount)->clazz)->markFunction)((jobject) SF_mindustry_logic_FetchType_coreCount, mark, depth + 1);
		if (SF_mindustry_logic_FetchType_build)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_FetchType_build)->clazz)->markFunction)((jobject) SF_mindustry_logic_FetchType_build, mark, depth + 1);
		if (SF_mindustry_logic_FetchType_buildCount)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_FetchType_buildCount)->clazz)->markFunction)((jobject) SF_mindustry_logic_FetchType_buildCount, mark, depth + 1);
		if (SF_mindustry_logic_FetchType_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_FetchType_all)->clazz)->markFunction)((jobject) SF_mindustry_logic_FetchType_all, mark, depth + 1);
		if (SF_mindustry_logic_FetchType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_FetchType_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_logic_FetchType_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_logic_FetchType *) object;
}

jobject SM_mindustry_logic_FetchType_values_R_Array1_mindustry_logic_FetchType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/FetchType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_FetchType(ctx);
	{
	LINE_NUMBER(3);
	clinit_mindustry_logic_FetchType(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_FetchType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_logic_FetchType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_FetchType_valueOf_java_lang_String_R_mindustry_logic_FetchType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/FetchType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_FetchType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_logic_FetchType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_FetchType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_FetchType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/FetchType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_FetchType(ctx);
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

jobject SM_mindustry_logic_FetchType_$values_R_Array1_mindustry_logic_FetchType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/FetchType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_FetchType(ctx);
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_FetchType, (8));
	jint temp0 = jint(0);
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_unit;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_unitCount;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_player;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_playerCount;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_core;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_coreCount;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_build;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_logic_FetchType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_FetchType_buildCount;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_FetchType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/FetchType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_FetchType(ctx);
	{
	LINE_NUMBER(4);
	clinit_mindustry_logic_FetchType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_FetchType);
	init_mindustry_logic_FetchType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unit"_j))), (jint(0)));
	clinit_mindustry_logic_FetchType(ctx);
	SF_mindustry_logic_FetchType_unit = sp[0].o;
	LINE_NUMBER(5);
	clinit_mindustry_logic_FetchType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_FetchType);
	init_mindustry_logic_FetchType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitCount"_j))), (jint(1)));
	clinit_mindustry_logic_FetchType(ctx);
	SF_mindustry_logic_FetchType_unitCount = sp[0].o;
	LINE_NUMBER(6);
	clinit_mindustry_logic_FetchType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_FetchType);
	init_mindustry_logic_FetchType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"player"_j))), (jint(2)));
	clinit_mindustry_logic_FetchType(ctx);
	SF_mindustry_logic_FetchType_player = sp[0].o;
	LINE_NUMBER(7);
	clinit_mindustry_logic_FetchType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_FetchType);
	init_mindustry_logic_FetchType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"playerCount"_j))), (jint(3)));
	clinit_mindustry_logic_FetchType(ctx);
	SF_mindustry_logic_FetchType_playerCount = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_logic_FetchType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_FetchType);
	init_mindustry_logic_FetchType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"core"_j))), (jint(4)));
	clinit_mindustry_logic_FetchType(ctx);
	SF_mindustry_logic_FetchType_core = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_logic_FetchType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_FetchType);
	init_mindustry_logic_FetchType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"coreCount"_j))), (jint(5)));
	clinit_mindustry_logic_FetchType(ctx);
	SF_mindustry_logic_FetchType_coreCount = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_logic_FetchType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_FetchType);
	init_mindustry_logic_FetchType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"build"_j))), (6));
	clinit_mindustry_logic_FetchType(ctx);
	SF_mindustry_logic_FetchType_build = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_logic_FetchType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_FetchType);
	init_mindustry_logic_FetchType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildCount"_j))), (7));
	clinit_mindustry_logic_FetchType(ctx);
	SF_mindustry_logic_FetchType_buildCount = sp[0].o;
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_mindustry_logic_FetchType_$values_R_Array1_mindustry_logic_FetchType(ctx);
	clinit_mindustry_logic_FetchType(ctx);
	SF_mindustry_logic_FetchType_$VALUES = sp[0].o;
	LINE_NUMBER(13);
	sp[0].o = (jobject)SM_mindustry_logic_FetchType_values_R_Array1_mindustry_logic_FetchType(ctx);
	clinit_mindustry_logic_FetchType(ctx);
	SF_mindustry_logic_FetchType_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_FetchType[] {
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
	{ "unit", &class_mindustry_logic_FetchType, (intptr_t) &SF_mindustry_logic_FetchType_unit, "Lmindustry/logic/FetchType;", 16409 },
	{ "unitCount", &class_mindustry_logic_FetchType, (intptr_t) &SF_mindustry_logic_FetchType_unitCount, "Lmindustry/logic/FetchType;", 16409 },
	{ "player", &class_mindustry_logic_FetchType, (intptr_t) &SF_mindustry_logic_FetchType_player, "Lmindustry/logic/FetchType;", 16409 },
	{ "playerCount", &class_mindustry_logic_FetchType, (intptr_t) &SF_mindustry_logic_FetchType_playerCount, "Lmindustry/logic/FetchType;", 16409 },
	{ "core", &class_mindustry_logic_FetchType, (intptr_t) &SF_mindustry_logic_FetchType_core, "Lmindustry/logic/FetchType;", 16409 },
	{ "coreCount", &class_mindustry_logic_FetchType, (intptr_t) &SF_mindustry_logic_FetchType_coreCount, "Lmindustry/logic/FetchType;", 16409 },
	{ "build", &class_mindustry_logic_FetchType, (intptr_t) &SF_mindustry_logic_FetchType_build, "Lmindustry/logic/FetchType;", 16409 },
	{ "buildCount", &class_mindustry_logic_FetchType, (intptr_t) &SF_mindustry_logic_FetchType_buildCount, "Lmindustry/logic/FetchType;", 16409 },
	{ "all", getArrayClass(&class_mindustry_logic_FetchType, 1), (intptr_t) &SF_mindustry_logic_FetchType_all, "[Lmindustry/logic/FetchType;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_logic_FetchType, 1), (intptr_t) &SF_mindustry_logic_FetchType_$VALUES, "[Lmindustry/logic/FetchType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_logic_FetchType_values_R_Array1_mindustry_logic_FetchType, 0, "()[Lmindustry/logic/FetchType;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_logic_FetchType_valueOf_java_lang_String_R_mindustry_logic_FetchType, 0, "(Ljava/lang/String;)Lmindustry/logic/FetchType;", 9 },
	{ "<init>", (intptr_t) init_mindustry_logic_FetchType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_logic_FetchType_$values_R_Array1_mindustry_logic_FetchType, 0, "()[Lmindustry/logic/FetchType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_FetchType, 0, "()V", 8 },
};

Class class_mindustry_logic_FetchType{
		.nativeName = (intptr_t) "mindustry/logic/FetchType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_logic_FetchType),
		.classVtable = (intptr_t) vtable_mindustry_logic_FetchType,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_FetchType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_FetchType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_FetchType = registerClass(&class_mindustry_logic_FetchType);

}
