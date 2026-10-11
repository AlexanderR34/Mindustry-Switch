#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadDriverState.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadDriverState.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle;
jobject SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_accepting;
jobject SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_shooting;
jobject SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_all;
jobject SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_$VALUES;

void mark_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle, mark, depth + 1);
		if (SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_accepting)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_accepting)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_accepting, mark, depth + 1);
		if (SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_shooting)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_shooting)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_shooting, mark, depth + 1);
		if (SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_all)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_all, mark, depth + 1);
		if (SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState *) object;
}

jobject SM_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_values_R_Array1_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	{
	LINE_NUMBER(528);
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_valueOf_java_lang_String_R_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(528);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_$values_R_Array1_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_accepting;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_shooting;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	{
	LINE_NUMBER(529);
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState);
	init_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"idle"_j))), (jint(0)));
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle = sp[0].o;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState);
	init_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"accepting"_j))), (jint(1)));
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_accepting = sp[0].o;
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState);
	init_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shooting"_j))), (jint(2)));
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_shooting = sp[0].o;
	LINE_NUMBER(528);
	sp[0].o = (jobject)SM_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_$values_R_Array1_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_$VALUES = sp[0].o;
	LINE_NUMBER(531);
	sp[0].o = (jobject)SM_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_values_R_Array1_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState(ctx);
	SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState[] {
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
	{ "idle", &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, (intptr_t) &SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_idle, "Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState;", 16409 },
	{ "accepting", &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, (intptr_t) &SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_accepting, "Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState;", 16409 },
	{ "shooting", &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, (intptr_t) &SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_shooting, "Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState;", 16409 },
	{ "all", getArrayClass(&class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, 1), (intptr_t) &SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_all, "[Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, 1), (intptr_t) &SF_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_$VALUES, "[Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_values_R_Array1_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, 0, "()[Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_valueOf_java_lang_String_R_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, 0, "(Ljava/lang/String;)Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState;", 9 },
	{ "<init>", (intptr_t) init_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState_$values_R_Array1_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, 0, "()[Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState{
		.nativeName = (intptr_t) "mindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverState",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadMassDriver,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState = registerClass(&class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState);

}

