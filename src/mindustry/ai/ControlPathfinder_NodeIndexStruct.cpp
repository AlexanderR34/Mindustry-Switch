#include "mindustry/ai/ControlPathfinder_NodeIndexStruct.h"
#include "java/lang/Object.h"
#include "mindustry/ai/ControlPathfinder.h"

extern "C" {


void mark_mindustry_ai_ControlPathfinder$NodeIndexStruct(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_ControlPathfinder$NodeIndexStruct *) object;
}

void clinit_mindustry_ai_ControlPathfinder$NodeIndexStruct(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ai_ControlPathfinder$NodeIndexStruct(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder$NodeIndexStruct:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder$NodeIndexStruct(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1667);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_ControlPathfinder$NodeIndexStruct[] {
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
	{ "cluster", &class_int, offsetof(mindustry_ai_ControlPathfinder$NodeIndexStruct, F_cluster), "I", 0 },
	{ "dir", &class_int, offsetof(mindustry_ai_ControlPathfinder$NodeIndexStruct, F_dir), "I", 0 },
	{ "portal", &class_int, offsetof(mindustry_ai_ControlPathfinder$NodeIndexStruct, F_portal), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_ControlPathfinder$NodeIndexStruct, 0, "()V", 0 },
};

Class class_mindustry_ai_ControlPathfinder$NodeIndexStruct{
		.nativeName = (intptr_t) "mindustry/ai/ControlPathfinder$NodeIndexStruct",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_ControlPathfinder$NodeIndexStruct),
		.classVtable = (intptr_t) vtable_mindustry_ai_ControlPathfinder$NodeIndexStruct,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_ControlPathfinder$NodeIndexStruct,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_ControlPathfinder$NodeIndexStruct,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ai_ControlPathfinder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_ControlPathfinder$NodeIndexStruct = registerClass(&class_mindustry_ai_ControlPathfinder$NodeIndexStruct);

}

