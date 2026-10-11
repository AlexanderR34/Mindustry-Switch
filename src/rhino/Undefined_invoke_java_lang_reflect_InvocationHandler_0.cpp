#include "rhino/Undefined_invoke_java_lang_reflect_InvocationHandler_0.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/InvocationHandler.h"
#include "java/lang/reflect/Method.h"
#include "rhino/Undefined_invoke_java_lang_reflect_InvocationHandler_0.h"
#include "rhino/Undefined.h"

extern "C" {


void mark_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0 *) object;
}

void clinit_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0_invoke_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "rhino/Undefined_invoke_java_lang_reflect_InvocationHandler_0:invoke", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0 *) self;
	auto object = SM_rhino_Undefined_lambda$static$0_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object(ctx, param0, param1, param2);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0[] {
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
	(void *) M_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0_invoke_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object,
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
	{ "invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_lang_reflect_InvocationHandler, };

static MethodMetadata methods[] {
	{ "invoke", (intptr_t) M_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0_invoke_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0_invoke_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", 0 },
};

Class class_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0{
		.nativeName = (intptr_t) "rhino/Undefined_invoke_java_lang_reflect_InvocationHandler_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0),
		.classVtable = (intptr_t) vtable_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0,
		.staticInitializer = (intptr_t) clinit_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0,
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
static bool registered_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0 = registerClass(&class_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0);

}
