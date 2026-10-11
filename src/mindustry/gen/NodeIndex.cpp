#include "mindustry/gen/NodeIndex.h"
#include "java/lang/Object.h"

extern "C" {

jint SF_mindustry_gen_NodeIndex_bitMaskCluster;
jint SF_mindustry_gen_NodeIndex_bitMaskDir;
jint SF_mindustry_gen_NodeIndex_bitMaskPortal;

void mark_mindustry_gen_NodeIndex(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_NodeIndex *) object;
}

void clinit_mindustry_gen_NodeIndex(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_NodeIndex_bitMaskCluster = jint(4194303);
	SF_mindustry_gen_NodeIndex_bitMaskDir = jint(12582912);
	SF_mindustry_gen_NodeIndex_bitMaskPortal = jint(-16777216);
}

void init_mindustry_gen_NodeIndex(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/NodeIndex:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_NodeIndex(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_NodeIndex_cluster_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/NodeIndex:cluster", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_NodeIndex(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return (jint(((jlong((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(0)))))) & (jlong(4194303ll)))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_NodeIndex_cluster_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/NodeIndex:cluster", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_NodeIndex(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return (jint((((jlong((frame[0].i))) & (jlong(-4194304ll))) | (jlong(((frame[1].i) << (jint(0))))))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_NodeIndex_dir_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/NodeIndex:dir", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_NodeIndex(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jint(((jlong((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (22))))) & (jlong(3ll)))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_NodeIndex_dir_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/NodeIndex:dir", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_NodeIndex(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (jint((((jlong((frame[0].i))) & (jlong(-12582913ll))) | (jlong(((frame[1].i) << (22)))))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_NodeIndex_portal_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/NodeIndex:portal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_NodeIndex(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (jint(((jlong((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (24))))) & (jlong(255ll)))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_NodeIndex_portal_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/NodeIndex:portal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_NodeIndex(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint((((jlong((frame[0].i))) & (jlong(-4278190081ll))) | (jlong(((frame[1].i) << (24)))))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_NodeIndex_get_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/NodeIndex:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_NodeIndex(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (jint(((((jlong(((frame[0].i) << (jint(0))))) & (jlong(4194303ll))) | ((jlong(((frame[1].i) << (22)))) & (jlong(12582912ll)))) | ((jlong(((frame[2].i) << (24)))) & (jlong(4278190080ll))))));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_NodeIndex[] {
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
	{ "bitMaskCluster", &class_int, (intptr_t) &SF_mindustry_gen_NodeIndex_bitMaskCluster, "I", 25 },
	{ "bitMaskDir", &class_int, (intptr_t) &SF_mindustry_gen_NodeIndex_bitMaskDir, "I", 25 },
	{ "bitMaskPortal", &class_int, (intptr_t) &SF_mindustry_gen_NodeIndex_bitMaskPortal, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_NodeIndex, 0, "()V", 1 },
	{ "cluster", (intptr_t) SM_mindustry_gen_NodeIndex_cluster_int_R_int, 0, "(I)I", 9 },
	{ "cluster", (intptr_t) SM_mindustry_gen_NodeIndex_cluster_int_int_R_int, 0, "(II)I", 9 },
	{ "dir", (intptr_t) SM_mindustry_gen_NodeIndex_dir_int_R_int, 0, "(I)I", 9 },
	{ "dir", (intptr_t) SM_mindustry_gen_NodeIndex_dir_int_int_R_int, 0, "(II)I", 9 },
	{ "portal", (intptr_t) SM_mindustry_gen_NodeIndex_portal_int_R_int, 0, "(I)I", 9 },
	{ "portal", (intptr_t) SM_mindustry_gen_NodeIndex_portal_int_int_R_int, 0, "(II)I", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_NodeIndex_get_int_int_int_R_int, 0, "(III)I", 9 },
};

Class class_mindustry_gen_NodeIndex{
		.nativeName = (intptr_t) "mindustry/gen/NodeIndex",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_NodeIndex),
		.classVtable = (intptr_t) vtable_mindustry_gen_NodeIndex,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_NodeIndex,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_NodeIndex,
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
static bool registered_mindustry_gen_NodeIndex = registerClass(&class_mindustry_gen_NodeIndex);

}
