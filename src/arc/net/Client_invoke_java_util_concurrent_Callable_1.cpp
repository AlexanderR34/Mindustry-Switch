#include "arc/net/Client_invoke_java_util_concurrent_Callable_1.h"
#include "arc/func/Cons.h"
#include "arc/net/Client_invoke_java_util_concurrent_Callable_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/concurrent/Callable.h"
#include "arc/net/Client.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_net_Client_invoke_java_util_concurrent_Callable_1(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_Client_invoke_java_util_concurrent_Callable_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field4)->clazz)->markFunction)((jobject) self->F_field4, mark, depth + 1);
	if (self->F_field5)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field5)->clazz)->markFunction)((jobject) self->F_field5, mark, depth + 1);
	if (self->F_field6)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field6)->clazz)->markFunction)((jobject) self->F_field6, mark, depth + 1);
}

void clinit_arc_net_Client_invoke_java_util_concurrent_Callable_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_arc_net_Client_invoke_java_util_concurrent_Callable_1_call_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/net/Client_invoke_java_util_concurrent_Callable_1:call", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_net_Client_invoke_java_util_concurrent_Callable_1 *) self;
	auto object = M_arc_net_Client_lambda$discoverHosts$1_java_lang_String_int_int_arc_func_Cons_Array1_boolean_java_lang_Runnable_R_java_lang_Object(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, proxy->F_field2, proxy->F_field3, (jobject) proxy->F_field4, (jobject) proxy->F_field5, (jobject) proxy->F_field6);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_arc_net_Client_invoke_java_util_concurrent_Callable_1[] {
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
	(void *) M_arc_net_Client_invoke_java_util_concurrent_Callable_1_call_R_java_lang_Object,
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
	{ "call", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_concurrent_Callable, };

static FieldMetadata fields[] {
	{ "field0", &class_arc_net_Client, offsetof(arc_net_Client_invoke_java_util_concurrent_Callable_1, F_field0), "Larc/net/Client;", 0 },
	{ "field1", &class_java_lang_String, offsetof(arc_net_Client_invoke_java_util_concurrent_Callable_1, F_field1), "Ljava/lang/String;", 0 },
	{ "field2", &class_int, offsetof(arc_net_Client_invoke_java_util_concurrent_Callable_1, F_field2), "I", 0 },
	{ "field3", &class_int, offsetof(arc_net_Client_invoke_java_util_concurrent_Callable_1, F_field3), "I", 0 },
	{ "field4", &class_arc_func_Cons, offsetof(arc_net_Client_invoke_java_util_concurrent_Callable_1, F_field4), "Larc/func/Cons;", 0 },
	{ "field5", getArrayClass(&class_boolean, 1), offsetof(arc_net_Client_invoke_java_util_concurrent_Callable_1, F_field5), "[Z", 0 },
	{ "field6", &class_java_lang_Runnable, offsetof(arc_net_Client_invoke_java_util_concurrent_Callable_1, F_field6), "Ljava/lang/Runnable;", 0 },
};

static MethodMetadata methods[] {
	{ "call", (intptr_t) M_arc_net_Client_invoke_java_util_concurrent_Callable_1_call_R_java_lang_Object, VTABLE_arc_net_Client_invoke_java_util_concurrent_Callable_1_call_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
};

Class class_arc_net_Client_invoke_java_util_concurrent_Callable_1{
		.nativeName = (intptr_t) "arc/net/Client_invoke_java_util_concurrent_Callable_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_Client_invoke_java_util_concurrent_Callable_1),
		.classVtable = (intptr_t) vtable_arc_net_Client_invoke_java_util_concurrent_Callable_1,
		.staticInitializer = (intptr_t) clinit_arc_net_Client_invoke_java_util_concurrent_Callable_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_Client_invoke_java_util_concurrent_Callable_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_Client_invoke_java_util_concurrent_Callable_1 = registerClass(&class_arc_net_Client_invoke_java_util_concurrent_Callable_1);

}
