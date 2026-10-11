#include "mindustry/gen/FieldIndex.h"
#include "java/lang/Object.h"

extern "C" {

jlong SF_mindustry_gen_FieldIndex_bitMaskPos;
jlong SF_mindustry_gen_FieldIndex_bitMaskCostId;
jlong SF_mindustry_gen_FieldIndex_bitMaskTeam;

void mark_mindustry_gen_FieldIndex(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_FieldIndex *) object;
}

void clinit_mindustry_gen_FieldIndex(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_FieldIndex_bitMaskPos = jlong(4294967295ll);
	SF_mindustry_gen_FieldIndex_bitMaskCostId = jlong(1095216660480ll);
	SF_mindustry_gen_FieldIndex_bitMaskTeam = jlong(280375465082880ll);
}

void init_mindustry_gen_FieldIndex(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FieldIndex:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_FieldIndex(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_FieldIndex_pos_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FieldIndex:pos", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_FieldIndex(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(0)))) & (jlong(4294967295ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_FieldIndex_pos_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FieldIndex:pos", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_FieldIndex(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-4294967296ll))) | ((jlong((frame[2].i))) << (jint(0))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_FieldIndex_costId_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FieldIndex:costId", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_FieldIndex(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32))) & (jlong(255ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_FieldIndex_costId_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FieldIndex:costId", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_FieldIndex(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-1095216660481ll))) | ((jlong((frame[2].i))) << (32)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_FieldIndex_team_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FieldIndex:team", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_FieldIndex(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (40))) & (jlong(255ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_FieldIndex_team_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FieldIndex:team", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_FieldIndex(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-280375465082881ll))) | ((jlong((frame[2].i))) << (40)));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_FieldIndex_get_int_int_int_R_long(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/FieldIndex:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_FieldIndex(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (((((jlong((frame[0].i))) << (jint(0))) & (jlong(4294967295ll))) | (((jlong((frame[1].i))) << (32)) & (jlong(1095216660480ll)))) | (((jlong((frame[2].i))) << (40)) & (jlong(280375465082880ll))));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_FieldIndex[] {
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
	{ "bitMaskPos", &class_long, (intptr_t) &SF_mindustry_gen_FieldIndex_bitMaskPos, "J", 25 },
	{ "bitMaskCostId", &class_long, (intptr_t) &SF_mindustry_gen_FieldIndex_bitMaskCostId, "J", 25 },
	{ "bitMaskTeam", &class_long, (intptr_t) &SF_mindustry_gen_FieldIndex_bitMaskTeam, "J", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_FieldIndex, 0, "()V", 1 },
	{ "pos", (intptr_t) SM_mindustry_gen_FieldIndex_pos_long_R_int, 0, "(J)I", 9 },
	{ "pos", (intptr_t) SM_mindustry_gen_FieldIndex_pos_long_int_R_long, 0, "(JI)J", 9 },
	{ "costId", (intptr_t) SM_mindustry_gen_FieldIndex_costId_long_R_int, 0, "(J)I", 9 },
	{ "costId", (intptr_t) SM_mindustry_gen_FieldIndex_costId_long_int_R_long, 0, "(JI)J", 9 },
	{ "team", (intptr_t) SM_mindustry_gen_FieldIndex_team_long_R_int, 0, "(J)I", 9 },
	{ "team", (intptr_t) SM_mindustry_gen_FieldIndex_team_long_int_R_long, 0, "(JI)J", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_FieldIndex_get_int_int_int_R_long, 0, "(III)J", 9 },
};

Class class_mindustry_gen_FieldIndex{
		.nativeName = (intptr_t) "mindustry/gen/FieldIndex",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_FieldIndex),
		.classVtable = (intptr_t) vtable_mindustry_gen_FieldIndex,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_FieldIndex,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_FieldIndex,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_FieldIndex = registerClass(&class_mindustry_gen_FieldIndex);

}
