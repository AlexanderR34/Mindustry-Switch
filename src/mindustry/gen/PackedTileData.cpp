#include "mindustry/gen/PackedTileData.h"
#include "java/lang/Object.h"

extern "C" {

jlong SF_mindustry_gen_PackedTileData_bitMaskExtraData;
jlong SF_mindustry_gen_PackedTileData_bitMaskData;
jlong SF_mindustry_gen_PackedTileData_bitMaskFloorData;
jlong SF_mindustry_gen_PackedTileData_bitMaskOverlayData;

void mark_mindustry_gen_PackedTileData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_PackedTileData *) object;
}

void clinit_mindustry_gen_PackedTileData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_PackedTileData_bitMaskExtraData = jlong(4294967295ll);
	SF_mindustry_gen_PackedTileData_bitMaskData = jlong(1095216660480ll);
	SF_mindustry_gen_PackedTileData_bitMaskFloorData = jlong(280375465082880ll);
	SF_mindustry_gen_PackedTileData_bitMaskOverlayData = jlong(71776119061217280ll);
}

void init_mindustry_gen_PackedTileData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackedTileData:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackedTileData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_PackedTileData_extraData_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackedTileData:extraData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackedTileData(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(0)))) & (jlong(4294967295ll)))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_PackedTileData_extraData_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackedTileData:extraData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackedTileData(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-4294967296ll))) | ((jlong((frame[2].i))) << (jint(0))));
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_gen_PackedTileData_data_long_R_byte(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackedTileData:data", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackedTileData(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (jbyte((jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32))) & (jlong(255ll)))))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_PackedTileData_data_long_byte_R_long(jcontext ctx, jlong param0, jbyte param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackedTileData:data", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackedTileData(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-1095216660481ll))) | ((jlong((frame[2].i))) << (32)));
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_gen_PackedTileData_floorData_long_R_byte(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackedTileData:floorData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackedTileData(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (jbyte((jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (40))) & (jlong(255ll)))))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_PackedTileData_floorData_long_byte_R_long(jcontext ctx, jlong param0, jbyte param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackedTileData:floorData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackedTileData(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-280375465082881ll))) | ((jlong((frame[2].i))) << (40)));
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_gen_PackedTileData_overlayData_long_R_byte(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackedTileData:overlayData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackedTileData(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (jbyte((jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (48))) & (jlong(255ll)))))));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_PackedTileData_overlayData_long_byte_R_long(jcontext ctx, jlong param0, jbyte param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackedTileData:overlayData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackedTileData(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (((frame[0].l) & (jlong(-71776119061217281ll))) | ((jlong((frame[2].i))) << (48)));
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_gen_PackedTileData_get_int_byte_byte_byte_R_long(jcontext ctx, jint param0, jbyte param1, jbyte param2, jbyte param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PackedTileData:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PackedTileData(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return ((((((jlong((frame[0].i))) << (jint(0))) & (jlong(4294967295ll))) | (((jlong((frame[1].i))) << (32)) & (jlong(1095216660480ll)))) | (((jlong((frame[2].i))) << (40)) & (jlong(280375465082880ll)))) | (((jlong((frame[3].i))) << (48)) & (jlong(71776119061217280ll))));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_PackedTileData[] {
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
	{ "bitMaskExtraData", &class_long, (intptr_t) &SF_mindustry_gen_PackedTileData_bitMaskExtraData, "J", 25 },
	{ "bitMaskData", &class_long, (intptr_t) &SF_mindustry_gen_PackedTileData_bitMaskData, "J", 25 },
	{ "bitMaskFloorData", &class_long, (intptr_t) &SF_mindustry_gen_PackedTileData_bitMaskFloorData, "J", 25 },
	{ "bitMaskOverlayData", &class_long, (intptr_t) &SF_mindustry_gen_PackedTileData_bitMaskOverlayData, "J", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_PackedTileData, 0, "()V", 1 },
	{ "extraData", (intptr_t) SM_mindustry_gen_PackedTileData_extraData_long_R_int, 0, "(J)I", 9 },
	{ "extraData", (intptr_t) SM_mindustry_gen_PackedTileData_extraData_long_int_R_long, 0, "(JI)J", 9 },
	{ "data", (intptr_t) SM_mindustry_gen_PackedTileData_data_long_R_byte, 0, "(J)B", 9 },
	{ "data", (intptr_t) SM_mindustry_gen_PackedTileData_data_long_byte_R_long, 0, "(JB)J", 9 },
	{ "floorData", (intptr_t) SM_mindustry_gen_PackedTileData_floorData_long_R_byte, 0, "(J)B", 9 },
	{ "floorData", (intptr_t) SM_mindustry_gen_PackedTileData_floorData_long_byte_R_long, 0, "(JB)J", 9 },
	{ "overlayData", (intptr_t) SM_mindustry_gen_PackedTileData_overlayData_long_R_byte, 0, "(J)B", 9 },
	{ "overlayData", (intptr_t) SM_mindustry_gen_PackedTileData_overlayData_long_byte_R_long, 0, "(JB)J", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_PackedTileData_get_int_byte_byte_byte_R_long, 0, "(IBBB)J", 9 },
};

Class class_mindustry_gen_PackedTileData{
		.nativeName = (intptr_t) "mindustry/gen/PackedTileData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_PackedTileData),
		.classVtable = (intptr_t) vtable_mindustry_gen_PackedTileData,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_PackedTileData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_PackedTileData,
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
static bool registered_mindustry_gen_PackedTileData = registerClass(&class_mindustry_gen_PackedTileData);

}
