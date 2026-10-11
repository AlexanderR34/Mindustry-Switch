#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_231.h"
#include "java/lang/Object.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_231.h"
#include "mindustry/content/ErekirTechTree.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231 *) object;
}

void clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_231:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231 *) self;
	SM_mindustry_content_ErekirTechTree_lambda$load$56(ctx);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231[] {
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
	(void *) M_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231_run,
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
	{ "run", "()V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231_run, VTABLE_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231_run, "()V", 0 },
};

Class class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231{
		.nativeName = (intptr_t) "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_231",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231),
		.classVtable = (intptr_t) vtable_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231,
		.staticInitializer = (intptr_t) clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231 = registerClass(&class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231);

}
