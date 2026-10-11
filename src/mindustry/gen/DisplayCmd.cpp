#include "mindustry/gen/DisplayCmd.h"
#include "java/lang/Object.h"

extern "C" {

jlong SF_mindustry_gen_DisplayCmd_bitMaskType;
jlong SF_mindustry_gen_DisplayCmd_bitMaskX;
jlong SF_mindustry_gen_DisplayCmd_bitMaskY;
jlong SF_mindustry_gen_DisplayCmd_bitMaskP1;
jlong SF_mindustry_gen_DisplayCmd_bitMaskP2;
jlong SF_mindustry_gen_DisplayCmd_bitMaskP3;
jlong SF_mindustry_gen_DisplayCmd_bitMaskP4;

void mark_mindustry_gen_DisplayCmd(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_DisplayCmd *) object;
}

void clinit_mindustry_gen_DisplayCmd(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_DisplayCmd_bitMaskType = jlong(15ll);
	SF_mindustry_gen_DisplayCmd_bitMaskX = jlong(16368ll);
	SF_mindustry_gen_DisplayCmd_bitMaskY = jlong(16760832ll);
	SF_mindustry_gen_DisplayCmd_bitMaskP1 = jlong(17163091968ll);
	SF_mindustry_gen_DisplayCmd_bitMaskP2 = jlong(17575006175232ll);
	SF_mindustry_gen_DisplayCmd_bitMaskP3 = jlong(17996806323437568ll);
	SF_mindustry_gen_DisplayCmd_bitMaskP4 = jlong(-18014398509481984ll);
}

void init_mindustry_gen_DisplayCmd(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_DisplayCmd_type_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:type", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(0)))) & (jlong(15ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_DisplayCmd_type_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:type", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-16ll))) | ((jlong((frame[2].i))) << (jint(0))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_DisplayCmd_x_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:x", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(4)))) & (jlong(1023ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_DisplayCmd_x_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:x", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-16369ll))) | ((jlong((frame[2].i))) << (jint(4))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_DisplayCmd_y_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:y", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (14))) & (jlong(1023ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_DisplayCmd_y_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:y", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-16760833ll))) | ((jlong((frame[2].i))) << (14)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_DisplayCmd_p1_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:p1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (24))) & (jlong(1023ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_DisplayCmd_p1_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:p1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-17163091969ll))) | ((jlong((frame[2].i))) << (24)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_DisplayCmd_p2_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:p2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (34))) & (jlong(1023ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_DisplayCmd_p2_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:p2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-17575006175233ll))) | ((jlong((frame[2].i))) << (34)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_DisplayCmd_p3_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:p3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (44))) & (jlong(1023ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_DisplayCmd_p3_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:p3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-17996806323437569ll))) | ((jlong((frame[2].i))) << (44)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_DisplayCmd_p4_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:p4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (54))) & (jlong(1023ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_DisplayCmd_p4_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:p4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(18014398509481983ll))) | ((jlong((frame[2].i))) << (54)));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_DisplayCmd_get_int_int_int_int_int_int_int_R_long(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/DisplayCmd:get", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_DisplayCmd(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (((((((((jlong((frame[0].i))) << (jint(0))) & (jlong(15ll))) | (((jlong((frame[1].i))) << (jint(4))) & (jlong(16368ll)))) | (((jlong((frame[2].i))) << (14)) & (jlong(16760832ll)))) | (((jlong((frame[3].i))) << (24)) & (jlong(17163091968ll)))) | (((jlong((frame[4].i))) << (34)) & (jlong(17575006175232ll)))) | (((jlong((frame[5].i))) << (44)) & (jlong(17996806323437568ll)))) | (((jlong((frame[6].i))) << (54)) & (jlong(-18014398509481984ll))));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_DisplayCmd[] {
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
	{ "bitMaskType", &class_long, (intptr_t) &SF_mindustry_gen_DisplayCmd_bitMaskType, "J", 25 },
	{ "bitMaskX", &class_long, (intptr_t) &SF_mindustry_gen_DisplayCmd_bitMaskX, "J", 25 },
	{ "bitMaskY", &class_long, (intptr_t) &SF_mindustry_gen_DisplayCmd_bitMaskY, "J", 25 },
	{ "bitMaskP1", &class_long, (intptr_t) &SF_mindustry_gen_DisplayCmd_bitMaskP1, "J", 25 },
	{ "bitMaskP2", &class_long, (intptr_t) &SF_mindustry_gen_DisplayCmd_bitMaskP2, "J", 25 },
	{ "bitMaskP3", &class_long, (intptr_t) &SF_mindustry_gen_DisplayCmd_bitMaskP3, "J", 25 },
	{ "bitMaskP4", &class_long, (intptr_t) &SF_mindustry_gen_DisplayCmd_bitMaskP4, "J", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_DisplayCmd, 0, "()V", 1 },
	{ "type", (intptr_t) SM_mindustry_gen_DisplayCmd_type_long_R_int, 0, "(J)I", 9 },
	{ "type", (intptr_t) SM_mindustry_gen_DisplayCmd_type_long_int_R_long, 0, "(JI)J", 9 },
	{ "x", (intptr_t) SM_mindustry_gen_DisplayCmd_x_long_R_int, 0, "(J)I", 9 },
	{ "x", (intptr_t) SM_mindustry_gen_DisplayCmd_x_long_int_R_long, 0, "(JI)J", 9 },
	{ "y", (intptr_t) SM_mindustry_gen_DisplayCmd_y_long_R_int, 0, "(J)I", 9 },
	{ "y", (intptr_t) SM_mindustry_gen_DisplayCmd_y_long_int_R_long, 0, "(JI)J", 9 },
	{ "p1", (intptr_t) SM_mindustry_gen_DisplayCmd_p1_long_R_int, 0, "(J)I", 9 },
	{ "p1", (intptr_t) SM_mindustry_gen_DisplayCmd_p1_long_int_R_long, 0, "(JI)J", 9 },
	{ "p2", (intptr_t) SM_mindustry_gen_DisplayCmd_p2_long_R_int, 0, "(J)I", 9 },
	{ "p2", (intptr_t) SM_mindustry_gen_DisplayCmd_p2_long_int_R_long, 0, "(JI)J", 9 },
	{ "p3", (intptr_t) SM_mindustry_gen_DisplayCmd_p3_long_R_int, 0, "(J)I", 9 },
	{ "p3", (intptr_t) SM_mindustry_gen_DisplayCmd_p3_long_int_R_long, 0, "(JI)J", 9 },
	{ "p4", (intptr_t) SM_mindustry_gen_DisplayCmd_p4_long_R_int, 0, "(J)I", 9 },
	{ "p4", (intptr_t) SM_mindustry_gen_DisplayCmd_p4_long_int_R_long, 0, "(JI)J", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_DisplayCmd_get_int_int_int_int_int_int_int_R_long, 0, "(IIIIIII)J", 9 },
};

Class class_mindustry_gen_DisplayCmd{
		.nativeName = (intptr_t) "mindustry/gen/DisplayCmd",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_DisplayCmd),
		.classVtable = (intptr_t) vtable_mindustry_gen_DisplayCmd,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_DisplayCmd,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_DisplayCmd,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_DisplayCmd = registerClass(&class_mindustry_gen_DisplayCmd);

}
