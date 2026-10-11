#include "rhino/SlotMap.h"
#include "java/lang/Object.h"
#include "rhino/SlotMap.h"
#include "rhino/ScriptableObject_Slot.h"
#include "java/lang/Iterable.h"
#include "rhino/ScriptableObject_SlotAccess.h"

extern "C" {


void mark_rhino_SlotMap(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_SlotMap *) object;
}

void clinit_rhino_SlotMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_rhino_SlotMap[] {
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
	(void *) nullptr,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "query", "(Ljava/lang/Object;I)Lrhino/ScriptableObject$Slot;" },
	{ "addSlot", "(Lrhino/ScriptableObject$Slot;)V" },
	{ "remove", "(Ljava/lang/Object;I)V" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static MethodMetadata methods[] {
	{ "size", 0, INDEX_rhino_SlotMap_size_R_int, "()I", 1025 },
	{ "isEmpty", 0, INDEX_rhino_SlotMap_isEmpty_R_boolean, "()Z", 1025 },
	{ "get", 0, INDEX_rhino_SlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;", 1025 },
	{ "query", 0, INDEX_rhino_SlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;I)Lrhino/ScriptableObject$Slot;", 1025 },
	{ "addSlot", 0, INDEX_rhino_SlotMap_addSlot_rhino_ScriptableObject$Slot, "(Lrhino/ScriptableObject$Slot;)V", 1025 },
	{ "remove", 0, INDEX_rhino_SlotMap_remove_java_lang_Object_int, "(Ljava/lang/Object;I)V", 1025 },
};

Class class_rhino_SlotMap{
		.nativeName = (intptr_t) "rhino/SlotMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_SlotMap),
		.classVtable = (intptr_t) vtable_rhino_SlotMap,
		.staticInitializer = (intptr_t) clinit_rhino_SlotMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_SlotMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_SlotMap = registerClass(&class_rhino_SlotMap);

}
