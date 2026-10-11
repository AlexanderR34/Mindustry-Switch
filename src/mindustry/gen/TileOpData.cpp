#include "mindustry/gen/TileOpData.h"
#include "java/lang/Object.h"

extern "C" {

jint SF_mindustry_gen_TileOpData_bitMaskData;
jint SF_mindustry_gen_TileOpData_bitMaskFloorData;
jint SF_mindustry_gen_TileOpData_bitMaskOverlayData;

void mark_mindustry_gen_TileOpData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_TileOpData *) object;
}

void clinit_mindustry_gen_TileOpData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_TileOpData_bitMaskData = jint(255);
	SF_mindustry_gen_TileOpData_bitMaskFloorData = jint(65280);
	SF_mindustry_gen_TileOpData_bitMaskOverlayData = jint(16711680);
}

void init_mindustry_gen_TileOpData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOpData:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOpData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_gen_TileOpData_data_int_R_byte(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOpData:data", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOpData(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return (jbyte((jint(((jlong((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(0)))))) & (jlong(255ll)))))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TileOpData_data_int_byte_R_int(jcontext ctx, jint param0, jbyte param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOpData:data", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOpData(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return (jint((((jlong((frame[0].i))) & (jlong(-256ll))) | (jlong(((frame[1].i) << (jint(0))))))));
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_gen_TileOpData_floorData_int_R_byte(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOpData:floorData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOpData(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jbyte((jint(((jlong((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (8))))) & (jlong(255ll)))))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TileOpData_floorData_int_byte_R_int(jcontext ctx, jint param0, jbyte param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOpData:floorData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOpData(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (jint((((jlong((frame[0].i))) & (jlong(-65281ll))) | (jlong(((frame[1].i) << (8)))))));
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_gen_TileOpData_overlayData_int_R_byte(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOpData:overlayData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOpData(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (jbyte((jint(((jlong((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (16))))) & (jlong(255ll)))))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TileOpData_overlayData_int_byte_R_int(jcontext ctx, jint param0, jbyte param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOpData:overlayData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOpData(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint((((jlong((frame[0].i))) & (jlong(-16711681ll))) | (jlong(((frame[1].i) << (16)))))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_TileOpData_get_byte_byte_byte_R_int(jcontext ctx, jbyte param0, jbyte param1, jbyte param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/TileOpData:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_TileOpData(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (jint(((((jlong(((frame[0].i) << (jint(0))))) & (jlong(255ll))) | ((jlong(((frame[1].i) << (8)))) & (jlong(65280ll)))) | ((jlong(((frame[2].i) << (16)))) & (jlong(16711680ll))))));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_TileOpData[] {
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
	{ "bitMaskData", &class_int, (intptr_t) &SF_mindustry_gen_TileOpData_bitMaskData, "I", 25 },
	{ "bitMaskFloorData", &class_int, (intptr_t) &SF_mindustry_gen_TileOpData_bitMaskFloorData, "I", 25 },
	{ "bitMaskOverlayData", &class_int, (intptr_t) &SF_mindustry_gen_TileOpData_bitMaskOverlayData, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_TileOpData, 0, "()V", 1 },
	{ "data", (intptr_t) SM_mindustry_gen_TileOpData_data_int_R_byte, 0, "(I)B", 9 },
	{ "data", (intptr_t) SM_mindustry_gen_TileOpData_data_int_byte_R_int, 0, "(IB)I", 9 },
	{ "floorData", (intptr_t) SM_mindustry_gen_TileOpData_floorData_int_R_byte, 0, "(I)B", 9 },
	{ "floorData", (intptr_t) SM_mindustry_gen_TileOpData_floorData_int_byte_R_int, 0, "(IB)I", 9 },
	{ "overlayData", (intptr_t) SM_mindustry_gen_TileOpData_overlayData_int_R_byte, 0, "(I)B", 9 },
	{ "overlayData", (intptr_t) SM_mindustry_gen_TileOpData_overlayData_int_byte_R_int, 0, "(IB)I", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_TileOpData_get_byte_byte_byte_R_int, 0, "(BBB)I", 9 },
};

Class class_mindustry_gen_TileOpData{
		.nativeName = (intptr_t) "mindustry/gen/TileOpData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_TileOpData),
		.classVtable = (intptr_t) vtable_mindustry_gen_TileOpData,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_TileOpData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_TileOpData,
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
static bool registered_mindustry_gen_TileOpData = registerClass(&class_mindustry_gen_TileOpData);

}
