#include "rhino/SymbolScriptable.h"
#include "java/lang/Object.h"
#include "rhino/Symbol.h"
#include "rhino/SymbolScriptable.h"
#include "rhino/Scriptable.h"

extern "C" {


void mark_rhino_SymbolScriptable(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_SymbolScriptable *) object;
}

void clinit_rhino_SymbolScriptable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_rhino_SymbolScriptable[] {
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
	{ "get", "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Lrhino/Symbol;Lrhino/Scriptable;)Z" },
	{ "put", "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Lrhino/Symbol;)V" },
};

static MethodMetadata methods[] {
	{ "get", 0, INDEX_rhino_SymbolScriptable_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;", 1025 },
	{ "has", 0, INDEX_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean, "(Lrhino/Symbol;Lrhino/Scriptable;)Z", 1025 },
	{ "put", 0, INDEX_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V", 1025 },
	{ "delete", 0, INDEX_rhino_SymbolScriptable_delete_rhino_Symbol, "(Lrhino/Symbol;)V", 1025 },
};

Class class_rhino_SymbolScriptable{
		.nativeName = (intptr_t) "rhino/SymbolScriptable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_SymbolScriptable),
		.classVtable = (intptr_t) vtable_rhino_SymbolScriptable,
		.staticInitializer = (intptr_t) clinit_rhino_SymbolScriptable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_SymbolScriptable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_SymbolScriptable = registerClass(&class_rhino_SymbolScriptable);

}
