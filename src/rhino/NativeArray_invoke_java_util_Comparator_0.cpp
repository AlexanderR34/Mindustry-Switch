#include "rhino/NativeArray_invoke_java_util_Comparator_0.h"
#include "rhino/NativeArray_invoke_java_util_Comparator_0.h"
#include "java/lang/Object.h"
#include "rhino/NativeArray.h"
#include "java/util/Comparator.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "rhino/Callable.h"

extern "C" {


void mark_rhino_NativeArray_invoke_java_util_Comparator_0(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_NativeArray_invoke_java_util_Comparator_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
	if (self->F_field3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field3)->clazz)->markFunction)((jobject) self->F_field3, mark, depth + 1);
	if (self->F_field4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field4)->clazz)->markFunction)((jobject) self->F_field4, mark, depth + 1);
}

void clinit_rhino_NativeArray_invoke_java_util_Comparator_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jint M_rhino_NativeArray_invoke_java_util_Comparator_0_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "rhino/NativeArray_invoke_java_util_Comparator_0:compare", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (rhino_NativeArray_invoke_java_util_Comparator_0 *) self;
	auto object = SM_rhino_NativeArray_lambda$js_sort$0_Array1_java_lang_Object_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_Object_java_lang_Object_R_int(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, (jobject) proxy->F_field3, (jobject) proxy->F_field4, param0, param1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_rhino_NativeArray_invoke_java_util_Comparator_0[] {
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
	(void *) M_rhino_NativeArray_invoke_java_util_Comparator_0_compare_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_Comparator_reversed_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int,
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
	{ "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "reversed", "()Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;)Ljava/util/Comparator;" },
	{ "thenComparingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;" },
	{ "thenComparingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;" },
	{ "thenComparingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;" },
	{ "lambda$thenComparing$0", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)I" },
};

static jclass interfaces[] { &class_java_util_Comparator, };

static FieldMetadata fields[] {
	{ "field0", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_NativeArray_invoke_java_util_Comparator_0, F_field0), "[Ljava/lang/Object;", 0 },
	{ "field1", &class_rhino_Callable, offsetof(rhino_NativeArray_invoke_java_util_Comparator_0, F_field1), "Lrhino/Callable;", 0 },
	{ "field2", &class_rhino_Context, offsetof(rhino_NativeArray_invoke_java_util_Comparator_0, F_field2), "Lrhino/Context;", 0 },
	{ "field3", &class_rhino_Scriptable, offsetof(rhino_NativeArray_invoke_java_util_Comparator_0, F_field3), "Lrhino/Scriptable;", 0 },
	{ "field4", &class_rhino_Scriptable, offsetof(rhino_NativeArray_invoke_java_util_Comparator_0, F_field4), "Lrhino/Scriptable;", 0 },
};

static MethodMetadata methods[] {
	{ "compare", (intptr_t) M_rhino_NativeArray_invoke_java_util_Comparator_0_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_rhino_NativeArray_invoke_java_util_Comparator_0_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 0 },
};

Class class_rhino_NativeArray_invoke_java_util_Comparator_0{
		.nativeName = (intptr_t) "rhino/NativeArray_invoke_java_util_Comparator_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NativeArray_invoke_java_util_Comparator_0),
		.classVtable = (intptr_t) vtable_rhino_NativeArray_invoke_java_util_Comparator_0,
		.staticInitializer = (intptr_t) clinit_rhino_NativeArray_invoke_java_util_Comparator_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeArray_invoke_java_util_Comparator_0,
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
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeArray_invoke_java_util_Comparator_0 = registerClass(&class_rhino_NativeArray_invoke_java_util_Comparator_0);

}
