#include "arc/util/Bench_invoke_arc_func_Cons2_0.h"
#include "arc/util/Bench_invoke_arc_func_Cons2_0.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Bench.h"
#include "java/lang/Long.h"
#include "arc/func/Cons2.h"

extern "C" {


void mark_arc_util_Bench_invoke_arc_func_Cons2_0(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Bench_invoke_arc_func_Cons2_0 *) object;
}

void clinit_arc_util_Bench_invoke_arc_func_Cons2_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_arc_util_Bench_invoke_arc_func_Cons2_0_get_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/util/Bench_invoke_arc_func_Cons2_0:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_util_Bench_invoke_arc_func_Cons2_0 *) self;
	SM_arc_util_Bench_lambda$end$0_long_java_lang_String_java_lang_Long(ctx, proxy->F_field0, param0, param1);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_arc_util_Bench_invoke_arc_func_Cons2_0[] {
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
	(void *) M_arc_util_Bench_invoke_arc_func_Cons2_0_get_java_lang_Object_java_lang_Object,
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
	{ "get", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_arc_func_Cons2, };

static FieldMetadata fields[] {
	{ "field0", &class_long, offsetof(arc_util_Bench_invoke_arc_func_Cons2_0, F_field0), "J", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_arc_util_Bench_invoke_arc_func_Cons2_0_get_java_lang_Object_java_lang_Object, VTABLE_arc_util_Bench_invoke_arc_func_Cons2_0_get_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 0 },
};

Class class_arc_util_Bench_invoke_arc_func_Cons2_0{
		.nativeName = (intptr_t) "arc/util/Bench_invoke_arc_func_Cons2_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Bench_invoke_arc_func_Cons2_0),
		.classVtable = (intptr_t) vtable_arc_util_Bench_invoke_arc_func_Cons2_0,
		.staticInitializer = (intptr_t) clinit_arc_util_Bench_invoke_arc_func_Cons2_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Bench_invoke_arc_func_Cons2_0,
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
static bool registered_arc_util_Bench_invoke_arc_func_Cons2_0 = registerClass(&class_arc_util_Bench_invoke_arc_func_Cons2_0);

}
