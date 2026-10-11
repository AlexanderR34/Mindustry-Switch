#include "mindustry/gen/TiledState.h"
#include "java/lang/Object.h"

extern "C" {

jlong SF_mindustry_gen_TiledState_bitMaskX;
jlong SF_mindustry_gen_TiledState_bitMaskY;
jlong SF_mindustry_gen_TiledState_bitMaskSize;
jlong SF_mindustry_gen_TiledState_bitMaskChanges;

void mark_mindustry_gen_TiledState(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_TiledState *) object;
}

void clinit_mindustry_gen_TiledState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_TiledState_bitMaskX = jlong(15ll);
	SF_mindustry_gen_TiledState_bitMaskY = jlong(240ll);
	SF_mindustry_gen_TiledState_bitMaskSize = jlong(65280ll);
	SF_mindustry_gen_TiledState_bitMaskChanges = jlong(281474976645120ll);
}

void init_mindustry_gen_TiledState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TiledState:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TiledState(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TiledState_x_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TiledState:x", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TiledState(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(0)))) & (jlong(15ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_TiledState_x_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TiledState:x", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TiledState(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-16ll))) | ((jlong((frame[2].i))) << (jint(0))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TiledState_y_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TiledState:y", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TiledState(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(4)))) & (jlong(15ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_TiledState_y_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TiledState:y", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TiledState(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-241ll))) | ((jlong((frame[2].i))) << (jint(4))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TiledState_size_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TiledState:size", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TiledState(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (8))) & (jlong(255ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_TiledState_size_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TiledState:size", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TiledState(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-65281ll))) | ((jlong((frame[2].i))) << (8)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TiledState_changes_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TiledState:changes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TiledState(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (16))) & (jlong(4294967295ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_TiledState_changes_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TiledState:changes", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TiledState(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-281474976645121ll))) | ((jlong((frame[2].i))) << (16)));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_TiledState_get_int_int_int_int_R_long(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TiledState:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TiledState(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return ((((((jlong((frame[0].i))) << (jint(0))) & (jlong(15ll))) | (((jlong((frame[1].i))) << (jint(4))) & (jlong(240ll)))) | (((jlong((frame[2].i))) << (8)) & (jlong(65280ll)))) | (((jlong((frame[3].i))) << (16)) & (jlong(281474976645120ll))));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_TiledState[] {
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
	{ "bitMaskX", &class_long, (intptr_t) &SF_mindustry_gen_TiledState_bitMaskX, "J", 25 },
	{ "bitMaskY", &class_long, (intptr_t) &SF_mindustry_gen_TiledState_bitMaskY, "J", 25 },
	{ "bitMaskSize", &class_long, (intptr_t) &SF_mindustry_gen_TiledState_bitMaskSize, "J", 25 },
	{ "bitMaskChanges", &class_long, (intptr_t) &SF_mindustry_gen_TiledState_bitMaskChanges, "J", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_TiledState, 0, "()V", 1 },
	{ "x", (intptr_t) SM_mindustry_gen_TiledState_x_long_R_int, 0, "(J)I", 9 },
	{ "x", (intptr_t) SM_mindustry_gen_TiledState_x_long_int_R_long, 0, "(JI)J", 9 },
	{ "y", (intptr_t) SM_mindustry_gen_TiledState_y_long_R_int, 0, "(J)I", 9 },
	{ "y", (intptr_t) SM_mindustry_gen_TiledState_y_long_int_R_long, 0, "(JI)J", 9 },
	{ "size", (intptr_t) SM_mindustry_gen_TiledState_size_long_R_int, 0, "(J)I", 9 },
	{ "size", (intptr_t) SM_mindustry_gen_TiledState_size_long_int_R_long, 0, "(JI)J", 9 },
	{ "changes", (intptr_t) SM_mindustry_gen_TiledState_changes_long_R_int, 0, "(J)I", 9 },
	{ "changes", (intptr_t) SM_mindustry_gen_TiledState_changes_long_int_R_long, 0, "(JI)J", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_TiledState_get_int_int_int_int_R_long, 0, "(IIII)J", 9 },
};

Class class_mindustry_gen_TiledState{
		.nativeName = (intptr_t) "mindustry/gen/TiledState",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_TiledState),
		.classVtable = (intptr_t) vtable_mindustry_gen_TiledState,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_TiledState,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_TiledState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_TiledState = registerClass(&class_mindustry_gen_TiledState);

}
