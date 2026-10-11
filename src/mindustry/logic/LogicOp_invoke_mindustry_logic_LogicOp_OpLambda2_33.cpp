#include "mindustry/logic/LogicOp_invoke_mindustry_logic_LogicOp_OpLambda2_33.h"
#include "mindustry/logic/LogicOp.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LogicOp_invoke_mindustry_logic_LogicOp_OpLambda2_33.h"
#include "mindustry/logic/LogicOp_OpLambda2.h"

extern "C" {


void mark_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33 *) object;
}

void clinit_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jdouble M_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33_get_double_double_R_double(jcontext ctx, jobject self, jdouble param0, jdouble param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/logic/LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33 *) self;
	auto object = SM_mindustry_logic_LogicOp_lambda$static$4_double_double_R_double(ctx, param0, param1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33[] {
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
	(void *) M_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33_get_double_double_R_double,
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
	{ "get", "(DD)D" },
};

static jclass interfaces[] { &class_mindustry_logic_LogicOp$OpLambda2, };

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33_get_double_double_R_double, VTABLE_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33_get_double_double_R_double, "(DD)D", 0 },
};

Class class_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33{
		.nativeName = (intptr_t) "mindustry/logic/LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33),
		.classVtable = (intptr_t) vtable_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33,
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
static bool registered_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33 = registerClass(&class_mindustry_logic_LogicOp_invoke_mindustry_logic_LogicOp$OpLambda2_33);

}

