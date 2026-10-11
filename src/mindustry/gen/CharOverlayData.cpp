#include "mindustry/gen/CharOverlayData.h"
#include "java/lang/Object.h"

extern "C" {

jbyte SF_mindustry_gen_CharOverlayData_bitMaskCharacter;
jbyte SF_mindustry_gen_CharOverlayData_bitMaskRotation;

void mark_mindustry_gen_CharOverlayData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_CharOverlayData *) object;
}

void clinit_mindustry_gen_CharOverlayData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_CharOverlayData_bitMaskCharacter = jint(63);
	SF_mindustry_gen_CharOverlayData_bitMaskRotation = jint(-64);
}

void init_mindustry_gen_CharOverlayData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/CharOverlayData:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_CharOverlayData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_gen_CharOverlayData_character_byte_R_byte(jcontext ctx, jbyte param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/CharOverlayData:character", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_CharOverlayData(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return (jbyte((jint(((jlong((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(0)))))) & (jlong(63ll)))))));
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_gen_CharOverlayData_character_byte_byte_R_byte(jcontext ctx, jbyte param0, jbyte param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/CharOverlayData:character", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_CharOverlayData(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return (jbyte((jint((((jlong((frame[0].i))) & (jlong(-64ll))) | (jlong(((frame[1].i) << (jint(0))))))))));
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_gen_CharOverlayData_rotation_byte_R_byte(jcontext ctx, jbyte param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/CharOverlayData:rotation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_CharOverlayData(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (jbyte((jint(((jlong((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (6))))) & (jlong(3ll)))))));
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_gen_CharOverlayData_rotation_byte_byte_R_byte(jcontext ctx, jbyte param0, jbyte param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/CharOverlayData:rotation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_CharOverlayData(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (jbyte((jint((((jlong((frame[0].i))) & (jlong(-193ll))) | (jlong(((frame[1].i) << (6)))))))));
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_gen_CharOverlayData_get_byte_byte_R_byte(jcontext ctx, jbyte param0, jbyte param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/CharOverlayData:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_CharOverlayData(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (jbyte((jint((((jlong(((frame[0].i) << (jint(0))))) & (jlong(63ll))) | ((jlong(((frame[1].i) << (6)))) & (jlong(192ll))))))));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_CharOverlayData[] {
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
	{ "bitMaskCharacter", &class_byte, (intptr_t) &SF_mindustry_gen_CharOverlayData_bitMaskCharacter, "B", 25 },
	{ "bitMaskRotation", &class_byte, (intptr_t) &SF_mindustry_gen_CharOverlayData_bitMaskRotation, "B", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_CharOverlayData, 0, "()V", 1 },
	{ "character", (intptr_t) SM_mindustry_gen_CharOverlayData_character_byte_R_byte, 0, "(B)B", 9 },
	{ "character", (intptr_t) SM_mindustry_gen_CharOverlayData_character_byte_byte_R_byte, 0, "(BB)B", 9 },
	{ "rotation", (intptr_t) SM_mindustry_gen_CharOverlayData_rotation_byte_R_byte, 0, "(B)B", 9 },
	{ "rotation", (intptr_t) SM_mindustry_gen_CharOverlayData_rotation_byte_byte_R_byte, 0, "(BB)B", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_CharOverlayData_get_byte_byte_R_byte, 0, "(BB)B", 9 },
};

Class class_mindustry_gen_CharOverlayData{
		.nativeName = (intptr_t) "mindustry/gen/CharOverlayData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_CharOverlayData),
		.classVtable = (intptr_t) vtable_mindustry_gen_CharOverlayData,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_CharOverlayData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_CharOverlayData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_CharOverlayData = registerClass(&class_mindustry_gen_CharOverlayData);

}
