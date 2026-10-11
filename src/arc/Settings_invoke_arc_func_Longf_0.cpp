#include "arc/Settings_invoke_arc_func_Longf_0.h"
#include "arc/func/Longf.h"
#include "java/lang/Object.h"
#include "arc/Settings_invoke_arc_func_Longf_0.h"
#include "arc/Settings.h"
#include "arc/files/Fi.h"

extern "C" {


void mark_arc_Settings_invoke_arc_func_Longf_0(jobject object, jint mark, jint depth) {
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
	auto self = (arc_Settings_invoke_arc_func_Longf_0 *) object;
}

void clinit_arc_Settings_invoke_arc_func_Longf_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jlong M_arc_Settings_invoke_arc_func_Longf_0_get_java_lang_Object_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/Settings_invoke_arc_func_Longf_0:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_Settings_invoke_arc_func_Longf_0 *) self;
	auto object = SM_arc_Settings_lambda$loadValues$0_arc_files_Fi_R_long(ctx, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_arc_Settings_invoke_arc_func_Longf_0[] {
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
	(void *) M_arc_Settings_invoke_arc_func_Longf_0_get_java_lang_Object_R_long,
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
	{ "get", "(Ljava/lang/Object;)J" },
};

static jclass interfaces[] { &class_arc_func_Longf, };

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_arc_Settings_invoke_arc_func_Longf_0_get_java_lang_Object_R_long, VTABLE_arc_Settings_invoke_arc_func_Longf_0_get_java_lang_Object_R_long, "(Ljava/lang/Object;)J", 0 },
};

Class class_arc_Settings_invoke_arc_func_Longf_0{
		.nativeName = (intptr_t) "arc/Settings_invoke_arc_func_Longf_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_Settings_invoke_arc_func_Longf_0),
		.classVtable = (intptr_t) vtable_arc_Settings_invoke_arc_func_Longf_0,
		.staticInitializer = (intptr_t) clinit_arc_Settings_invoke_arc_func_Longf_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Settings_invoke_arc_func_Longf_0,
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
static bool registered_arc_Settings_invoke_arc_func_Longf_0 = registerClass(&class_arc_Settings_invoke_arc_func_Longf_0);

}
