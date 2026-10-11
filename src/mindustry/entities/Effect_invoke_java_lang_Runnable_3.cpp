#include "mindustry/entities/Effect_invoke_java_lang_Runnable_3.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/entities/Effect_invoke_java_lang_Runnable_3.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_entities_Effect_invoke_java_lang_Runnable_3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_Effect_invoke_java_lang_Runnable_3 *) object;
}

void clinit_mindustry_entities_Effect_invoke_java_lang_Runnable_3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_entities_Effect_invoke_java_lang_Runnable_3_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/entities/Effect_invoke_java_lang_Runnable_3:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_entities_Effect_invoke_java_lang_Runnable_3 *) self;
	SM_mindustry_entities_Effect_lambda$shockwaveDust$0_float_int_float_float_float(ctx, proxy->F_field0, proxy->F_field1, proxy->F_field2, proxy->F_field3, proxy->F_field4);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_Effect_invoke_java_lang_Runnable_3[] {
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
	(void *) M_mindustry_entities_Effect_invoke_java_lang_Runnable_3_run,
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

static FieldMetadata fields[] {
	{ "field0", &class_float, offsetof(mindustry_entities_Effect_invoke_java_lang_Runnable_3, F_field0), "F", 0 },
	{ "field1", &class_int, offsetof(mindustry_entities_Effect_invoke_java_lang_Runnable_3, F_field1), "I", 0 },
	{ "field2", &class_float, offsetof(mindustry_entities_Effect_invoke_java_lang_Runnable_3, F_field2), "F", 0 },
	{ "field3", &class_float, offsetof(mindustry_entities_Effect_invoke_java_lang_Runnable_3, F_field3), "F", 0 },
	{ "field4", &class_float, offsetof(mindustry_entities_Effect_invoke_java_lang_Runnable_3, F_field4), "F", 0 },
};

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_mindustry_entities_Effect_invoke_java_lang_Runnable_3_run, VTABLE_mindustry_entities_Effect_invoke_java_lang_Runnable_3_run, "()V", 0 },
};

Class class_mindustry_entities_Effect_invoke_java_lang_Runnable_3{
		.nativeName = (intptr_t) "mindustry/entities/Effect_invoke_java_lang_Runnable_3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Effect_invoke_java_lang_Runnable_3),
		.classVtable = (intptr_t) vtable_mindustry_entities_Effect_invoke_java_lang_Runnable_3,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Effect_invoke_java_lang_Runnable_3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_Effect_invoke_java_lang_Runnable_3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Effect_invoke_java_lang_Runnable_3 = registerClass(&class_mindustry_entities_Effect_invoke_java_lang_Runnable_3);

}
