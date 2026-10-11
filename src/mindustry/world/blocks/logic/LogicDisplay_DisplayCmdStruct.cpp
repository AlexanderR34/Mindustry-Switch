#include "mindustry/world/blocks/logic/LogicDisplay_DisplayCmdStruct.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/logic/LogicDisplay.h"

extern "C" {


void mark_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct *) object;
}

void clinit_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$DisplayCmdStruct:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(344);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct[] {
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
	{ "type", &class_int, offsetof(mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct, F_type), "I", 1 },
	{ "x", &class_int, offsetof(mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct, F_x), "I", 1 },
	{ "y", &class_int, offsetof(mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct, F_y), "I", 1 },
	{ "p1", &class_int, offsetof(mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct, F_p1), "I", 1 },
	{ "p2", &class_int, offsetof(mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct, F_p2), "I", 1 },
	{ "p3", &class_int, offsetof(mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct, F_p3), "I", 1 },
	{ "p4", &class_int, offsetof(mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct, F_p4), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct, 0, "()V", 0 },
};

Class class_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/LogicDisplay$DisplayCmdStruct",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_logic_LogicDisplay,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct = registerClass(&class_mindustry_world_blocks_logic_LogicDisplay$DisplayCmdStruct);

}

