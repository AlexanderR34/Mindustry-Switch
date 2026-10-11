#include "mindustry/world/WorldParams.h"
#include "java/lang/Object.h"
#include "mindustry/world/WorldParams.h"

extern "C" {


void mark_mindustry_world_WorldParams(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_WorldParams *) object;
}

void clinit_mindustry_world_WorldParams(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_WorldParams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/WorldParams:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_WorldParams(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(4);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((mindustry_world_WorldParams *) NULL_CHECK((frame[0].o)))->F_saveInfo = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_WorldParams[] {
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
	{ "seedOffset", &class_int, offsetof(mindustry_world_WorldParams, F_seedOffset), "I", 1 },
	{ "saveInfo", &class_boolean, offsetof(mindustry_world_WorldParams, F_saveInfo), "Z", 1 },
	{ "corePositionOverride", &class_int, offsetof(mindustry_world_WorldParams, F_corePositionOverride), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_WorldParams, 0, "()V", 1 },
};

Class class_mindustry_world_WorldParams{
		.nativeName = (intptr_t) "mindustry/world/WorldParams",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_WorldParams),
		.classVtable = (intptr_t) vtable_mindustry_world_WorldParams,
		.staticInitializer = (intptr_t) clinit_mindustry_world_WorldParams,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_WorldParams,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
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
static bool registered_mindustry_world_WorldParams = registerClass(&class_mindustry_world_WorldParams);

}
