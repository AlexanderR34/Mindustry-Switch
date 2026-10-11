#include "rhino/Interpreter_CallFrame_invoke_rhino_Callable_0.h"
#include "rhino/Interpreter_CallFrame.h"
#include "java/lang/Object.h"
#include "rhino/Context.h"
#include "rhino/Interpreter_CallFrame_invoke_rhino_Callable_0.h"
#include "rhino/Scriptable.h"
#include "rhino/Callable.h"

extern "C" {


void mark_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Interpreter$CallFrame_invoke_rhino_Callable_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame_invoke_rhino_Callable_0:call", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (rhino_Interpreter$CallFrame_invoke_rhino_Callable_0 *) self;
	auto object = M_rhino_Interpreter$CallFrame_lambda$equals$0_java_lang_Object_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, param0, param1, param2, param3);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0[] {
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
	(void *) M_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	{ "call", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_rhino_Callable, };

static FieldMetadata fields[] {
	{ "field0", &class_rhino_Interpreter$CallFrame, offsetof(rhino_Interpreter$CallFrame_invoke_rhino_Callable_0, F_field0), "Lrhino/Interpreter$CallFrame;", 0 },
	{ "field1", &class_java_lang_Object, offsetof(rhino_Interpreter$CallFrame_invoke_rhino_Callable_0, F_field1), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "call", (intptr_t) M_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 0 },
};

Class class_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0{
		.nativeName = (intptr_t) "rhino/Interpreter$CallFrame_invoke_rhino_Callable_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Interpreter$CallFrame_invoke_rhino_Callable_0),
		.classVtable = (intptr_t) vtable_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0,
		.staticInitializer = (intptr_t) clinit_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0 = registerClass(&class_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0);

}

