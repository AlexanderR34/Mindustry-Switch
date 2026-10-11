#include "mindustry/gen/IntraEdge.h"
#include "java/lang/Object.h"
#include "java/lang/Float.h"

extern "C" {

jlong SF_mindustry_gen_IntraEdge_bitMaskDir;
jlong SF_mindustry_gen_IntraEdge_bitMaskPortal;
jlong SF_mindustry_gen_IntraEdge_bitMaskCost;

void mark_mindustry_gen_IntraEdge(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_IntraEdge *) object;
}

void clinit_mindustry_gen_IntraEdge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_IntraEdge_bitMaskDir = jlong(255ll);
	SF_mindustry_gen_IntraEdge_bitMaskPortal = jlong(65280ll);
	SF_mindustry_gen_IntraEdge_bitMaskCost = jlong(281474976645120ll);
}

void init_mindustry_gen_IntraEdge(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/IntraEdge:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_IntraEdge(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_IntraEdge_dir_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/IntraEdge:dir", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_IntraEdge(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(0)))) & (jlong(255ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_IntraEdge_dir_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/IntraEdge:dir", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_IntraEdge(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-256ll))) | ((jlong((frame[2].i))) << (jint(0))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_IntraEdge_portal_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/IntraEdge:portal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_IntraEdge(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (8))) & (jlong(255ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_IntraEdge_portal_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/IntraEdge:portal", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_IntraEdge(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-65281ll))) | ((jlong((frame[2].i))) << (8)));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_gen_IntraEdge_cost_long_R_float(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/IntraEdge:cost", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_IntraEdge(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(33);
	jfloat temp0 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (16))) & (jlong(4294967295ll))))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_IntraEdge_cost_long_float_R_long(jcontext ctx, jlong param0, jfloat param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/IntraEdge:cost", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_IntraEdge(ctx);
	frame[0].l = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(37);
	jlong temp0 = (frame[0].l) & (jlong(-281474976645121ll));
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[2].f));
	popStackFrame(ctx);
	return (temp0 | ((jlong(temp1)) << (16)));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_IntraEdge_get_int_int_float_R_long(jcontext ctx, jint param0, jint param1, jfloat param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/IntraEdge:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_IntraEdge(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(41);
	jlong temp0 = (((jlong((frame[0].i))) << (jint(0))) & (jlong(255ll))) | (((jlong((frame[1].i))) << (8)) & (jlong(65280ll)));
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[2].f));
	popStackFrame(ctx);
	return (temp0 | ((jlong(temp1)) << (16)));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_IntraEdge[] {
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
	{ "bitMaskDir", &class_long, (intptr_t) &SF_mindustry_gen_IntraEdge_bitMaskDir, "J", 25 },
	{ "bitMaskPortal", &class_long, (intptr_t) &SF_mindustry_gen_IntraEdge_bitMaskPortal, "J", 25 },
	{ "bitMaskCost", &class_long, (intptr_t) &SF_mindustry_gen_IntraEdge_bitMaskCost, "J", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_IntraEdge, 0, "()V", 1 },
	{ "dir", (intptr_t) SM_mindustry_gen_IntraEdge_dir_long_R_int, 0, "(J)I", 9 },
	{ "dir", (intptr_t) SM_mindustry_gen_IntraEdge_dir_long_int_R_long, 0, "(JI)J", 9 },
	{ "portal", (intptr_t) SM_mindustry_gen_IntraEdge_portal_long_R_int, 0, "(J)I", 9 },
	{ "portal", (intptr_t) SM_mindustry_gen_IntraEdge_portal_long_int_R_long, 0, "(JI)J", 9 },
	{ "cost", (intptr_t) SM_mindustry_gen_IntraEdge_cost_long_R_float, 0, "(J)F", 9 },
	{ "cost", (intptr_t) SM_mindustry_gen_IntraEdge_cost_long_float_R_long, 0, "(JF)J", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_IntraEdge_get_int_int_float_R_long, 0, "(IIF)J", 9 },
};

Class class_mindustry_gen_IntraEdge{
		.nativeName = (intptr_t) "mindustry/gen/IntraEdge",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_IntraEdge),
		.classVtable = (intptr_t) vtable_mindustry_gen_IntraEdge,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_IntraEdge,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_IntraEdge,
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
static bool registered_mindustry_gen_IntraEdge = registerClass(&class_mindustry_gen_IntraEdge);

}
