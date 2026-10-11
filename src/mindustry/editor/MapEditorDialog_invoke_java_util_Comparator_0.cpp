#include "mindustry/editor/MapEditorDialog_invoke_java_util_Comparator_0.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "java/util/Comparator.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "mindustry/editor/MapEditorDialog_invoke_java_util_Comparator_0.h"

extern "C" {


void mark_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0 *) object;
}

void clinit_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jint M_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/editor/MapEditorDialog_invoke_java_util_Comparator_0:compare", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0 *) self;
	auto object = SM_mindustry_editor_MapEditorDialog_lambda$rebuildBlockSelection$0_mindustry_world_Block_mindustry_world_Block_R_int(ctx, param0, param1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0[] {
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
	(void *) M_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0_compare_java_lang_Object_java_lang_Object_R_int,
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

static MethodMetadata methods[] {
	{ "compare", (intptr_t) M_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 0 },
};

Class class_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0{
		.nativeName = (intptr_t) "mindustry/editor/MapEditorDialog_invoke_java_util_Comparator_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0,
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
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0 = registerClass(&class_mindustry_editor_MapEditorDialog_invoke_java_util_Comparator_0);

}
