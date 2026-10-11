#include "rhino/RegExpProxy.h"
#include "rhino/RegExpProxy.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"

extern "C" {

jint SF_rhino_RegExpProxy_RA_MATCH;
jint SF_rhino_RegExpProxy_RA_REPLACE;
jint SF_rhino_RegExpProxy_RA_SEARCH;

void mark_rhino_RegExpProxy(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_RegExpProxy *) object;
}

void clinit_rhino_RegExpProxy(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_RegExpProxy_RA_MATCH = jint(1);
	SF_rhino_RegExpProxy_RA_REPLACE = jint(2);
	SF_rhino_RegExpProxy_RA_SEARCH = jint(3);
}

void *vtable_rhino_RegExpProxy[] {
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
	{ "isRegExp", "(Lrhino/Scriptable;)Z" },
	{ "compileRegExp", "(Lrhino/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "wrapRegExp", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "action", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;I)Ljava/lang/Object;" },
	{ "find_split", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;Lrhino/Scriptable;[I[I[Z[[Ljava/lang/String;)I" },
	{ "js_split", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "RA_MATCH", &class_int, (intptr_t) &SF_rhino_RegExpProxy_RA_MATCH, "I", 25 },
	{ "RA_REPLACE", &class_int, (intptr_t) &SF_rhino_RegExpProxy_RA_REPLACE, "I", 25 },
	{ "RA_SEARCH", &class_int, (intptr_t) &SF_rhino_RegExpProxy_RA_SEARCH, "I", 25 },
};

static MethodMetadata methods[] {
	{ "isRegExp", 0, INDEX_rhino_RegExpProxy_isRegExp_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;)Z", 1025 },
	{ "compileRegExp", 0, INDEX_rhino_RegExpProxy_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object, "(Lrhino/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", 1025 },
	{ "wrapRegExp", 0, INDEX_rhino_RegExpProxy_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 1025 },
	{ "action", 0, INDEX_rhino_RegExpProxy_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;I)Ljava/lang/Object;", 1025 },
	{ "find_split", 0, INDEX_rhino_RegExpProxy_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;Lrhino/Scriptable;[I[I[Z[[Ljava/lang/String;)I", 1025 },
	{ "js_split", 0, INDEX_rhino_RegExpProxy_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", 1025 },
};

Class class_rhino_RegExpProxy{
		.nativeName = (intptr_t) "rhino/RegExpProxy",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_RegExpProxy),
		.classVtable = (intptr_t) vtable_rhino_RegExpProxy,
		.staticInitializer = (intptr_t) clinit_rhino_RegExpProxy,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_RegExpProxy,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_RegExpProxy = registerClass(&class_rhino_RegExpProxy);

}
