#include "rhino/JavaAdapter_invoke_rhino_ContextAction_1.h"
#include "java/lang/Object.h"
#include "rhino/ContextAction.h"
#include "rhino/JavaAdapter.h"
#include "rhino/Context.h"
#include "rhino/JavaAdapter_invoke_rhino_ContextAction_1.h"
#include "rhino/Script.h"

extern "C" {


void mark_rhino_JavaAdapter_invoke_rhino_ContextAction_1(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_JavaAdapter_invoke_rhino_ContextAction_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_rhino_JavaAdapter_invoke_rhino_ContextAction_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_rhino_JavaAdapter_invoke_rhino_ContextAction_1_run_rhino_Context_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "rhino/JavaAdapter_invoke_rhino_ContextAction_1:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (rhino_JavaAdapter_invoke_rhino_ContextAction_1 *) self;
	auto object = SM_rhino_JavaAdapter_lambda$runScript$1_rhino_Script_rhino_Context_R_rhino_ScriptableObject(ctx, (jobject) proxy->F_field0, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_rhino_JavaAdapter_invoke_rhino_ContextAction_1[] {
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
	(void *) M_rhino_JavaAdapter_invoke_rhino_ContextAction_1_run_rhino_Context_R_java_lang_Object,
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
	{ "run", "(Lrhino/Context;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_rhino_ContextAction, };

static FieldMetadata fields[] {
	{ "field0", &class_rhino_Script, offsetof(rhino_JavaAdapter_invoke_rhino_ContextAction_1, F_field0), "Lrhino/Script;", 0 },
};

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_rhino_JavaAdapter_invoke_rhino_ContextAction_1_run_rhino_Context_R_java_lang_Object, VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_1_run_rhino_Context_R_java_lang_Object, "(Lrhino/Context;)Ljava/lang/Object;", 0 },
};

Class class_rhino_JavaAdapter_invoke_rhino_ContextAction_1{
		.nativeName = (intptr_t) "rhino/JavaAdapter_invoke_rhino_ContextAction_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_JavaAdapter_invoke_rhino_ContextAction_1),
		.classVtable = (intptr_t) vtable_rhino_JavaAdapter_invoke_rhino_ContextAction_1,
		.staticInitializer = (intptr_t) clinit_rhino_JavaAdapter_invoke_rhino_ContextAction_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_JavaAdapter_invoke_rhino_ContextAction_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_JavaAdapter_invoke_rhino_ContextAction_1 = registerClass(&class_rhino_JavaAdapter_invoke_rhino_ContextAction_1);

}
