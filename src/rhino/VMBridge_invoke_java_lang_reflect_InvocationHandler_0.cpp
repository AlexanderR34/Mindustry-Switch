#include "rhino/VMBridge_invoke_java_lang_reflect_InvocationHandler_0.h"
#include "java/lang/Object.h"
#include "rhino/VMBridge_invoke_java_lang_reflect_InvocationHandler_0.h"
#include "java/lang/reflect/InvocationHandler.h"
#include "rhino/ContextFactory.h"
#include "rhino/Scriptable.h"
#include "java/lang/reflect/Method.h"
#include "rhino/InterfaceAdapter.h"
#include "rhino/VMBridge.h"

extern "C" {


void mark_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
	if (self->F_field3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field3)->clazz)->markFunction)((jobject) self->F_field3, mark, depth + 1);
}

void clinit_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0_invoke_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "rhino/VMBridge_invoke_java_lang_reflect_InvocationHandler_0:invoke", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0 *) self;
	auto object = SM_rhino_VMBridge_lambda$newInterfaceProxy$0_java_lang_Object_rhino_InterfaceAdapter_rhino_ContextFactory_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, (jobject) proxy->F_field3, param0, param1, param2);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0[] {
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
	(void *) M_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0_invoke_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object,
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

static FieldMetadata fields[] {
	{ "field0", &class_java_lang_Object, offsetof(rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0, F_field0), "Ljava/lang/Object;", 0 },
	{ "field1", &class_rhino_InterfaceAdapter, offsetof(rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0, F_field1), "Lrhino/InterfaceAdapter;", 0 },
	{ "field2", &class_rhino_ContextFactory, offsetof(rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0, F_field2), "Lrhino/ContextFactory;", 0 },
	{ "field3", &class_rhino_Scriptable, offsetof(rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0, F_field3), "Lrhino/Scriptable;", 0 },
};

static MethodMetadata methods[] {
	{ "invoke", (intptr_t) M_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0_invoke_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0_invoke_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", 0 },
};

Class class_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0{
		.nativeName = (intptr_t) "rhino/VMBridge_invoke_java_lang_reflect_InvocationHandler_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0),
		.classVtable = (intptr_t) vtable_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0,
		.staticInitializer = (intptr_t) clinit_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0 = registerClass(&class_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0);

}
