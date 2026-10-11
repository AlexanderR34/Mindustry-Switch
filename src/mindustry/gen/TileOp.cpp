#include "mindustry/gen/TileOp.h"
#include "java/lang/Object.h"

extern "C" {

jlong SF_mindustry_gen_TileOp_bitMaskX;
jlong SF_mindustry_gen_TileOp_bitMaskY;
jlong SF_mindustry_gen_TileOp_bitMaskType;
jlong SF_mindustry_gen_TileOp_bitMaskValue;

void mark_mindustry_gen_TileOp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_TileOp *) object;
}

void clinit_mindustry_gen_TileOp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_TileOp_bitMaskX = jlong(16383ll);
	SF_mindustry_gen_TileOp_bitMaskY = jlong(268419072ll);
	SF_mindustry_gen_TileOp_bitMaskType = jlong(1879048192ll);
	SF_mindustry_gen_TileOp_bitMaskValue = jlong(9223372034707292160ll);
}

void init_mindustry_gen_TileOp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOp:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TileOp_x_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOp:x", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOp(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(0)))) & (jlong(16383ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_TileOp_x_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOp:x", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOp(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-16384ll))) | ((jlong((frame[2].i))) << (jint(0))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TileOp_y_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOp:y", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOp(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (14))) & (jlong(16383ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_TileOp_y_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOp:y", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOp(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-268419073ll))) | ((jlong((frame[2].i))) << (14)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TileOp_type_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOp:type", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOp(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (28))) & (jlong(7ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_TileOp_type_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOp:type", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOp(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-1879048193ll))) | ((jlong((frame[2].i))) << (28)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TileOp_value_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOp:value", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOp(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (31))) & (jlong(4294967295ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_TileOp_value_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOp:value", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOp(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-9223372034707292161ll))) | ((jlong((frame[2].i))) << (31)));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_TileOp_get_int_int_int_int_R_long(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOp:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOp(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return ((((((jlong((frame[0].i))) << (jint(0))) & (jlong(16383ll))) | (((jlong((frame[1].i))) << (14)) & (jlong(268419072ll)))) | (((jlong((frame[2].i))) << (28)) & (jlong(1879048192ll)))) | (((jlong((frame[3].i))) << (31)) & (jlong(9223372034707292160ll))));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_TileOp[] {
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
	{ "bitMaskX", &class_long, (intptr_t) &SF_mindustry_gen_TileOp_bitMaskX, "J", 25 },
	{ "bitMaskY", &class_long, (intptr_t) &SF_mindustry_gen_TileOp_bitMaskY, "J", 25 },
	{ "bitMaskType", &class_long, (intptr_t) &SF_mindustry_gen_TileOp_bitMaskType, "J", 25 },
	{ "bitMaskValue", &class_long, (intptr_t) &SF_mindustry_gen_TileOp_bitMaskValue, "J", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_TileOp, 0, "()V", 1 },
	{ "x", (intptr_t) SM_mindustry_gen_TileOp_x_long_R_int, 0, "(J)I", 9 },
	{ "x", (intptr_t) SM_mindustry_gen_TileOp_x_long_int_R_long, 0, "(JI)J", 9 },
	{ "y", (intptr_t) SM_mindustry_gen_TileOp_y_long_R_int, 0, "(J)I", 9 },
	{ "y", (intptr_t) SM_mindustry_gen_TileOp_y_long_int_R_long, 0, "(JI)J", 9 },
	{ "type", (intptr_t) SM_mindustry_gen_TileOp_type_long_R_int, 0, "(J)I", 9 },
	{ "type", (intptr_t) SM_mindustry_gen_TileOp_type_long_int_R_long, 0, "(JI)J", 9 },
	{ "value", (intptr_t) SM_mindustry_gen_TileOp_value_long_R_int, 0, "(J)I", 9 },
	{ "value", (intptr_t) SM_mindustry_gen_TileOp_value_long_int_R_long, 0, "(JI)J", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_TileOp_get_int_int_int_int_R_long, 0, "(IIII)J", 9 },
};

Class class_mindustry_gen_TileOp{
		.nativeName = (intptr_t) "mindustry/gen/TileOp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_TileOp),
		.classVtable = (intptr_t) vtable_mindustry_gen_TileOp,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_TileOp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_TileOp,
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
static bool registered_mindustry_gen_TileOp = registerClass(&class_mindustry_gen_TileOp);

}
