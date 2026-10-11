#include "rhino/Scriptable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/Scriptable.h"
#include "java/lang/Class.h"
#include "rhino/UniqueTag.h"

extern "C" {

jobject SF_rhino_Scriptable_NOT_FOUND;

void mark_rhino_Scriptable(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_Scriptable_NOT_FOUND)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Scriptable_NOT_FOUND)->clazz)->markFunction)((jobject) SF_rhino_Scriptable_NOT_FOUND, mark, depth + 1);
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
	auto self = (rhino_Scriptable *) object;
}

void clinit_rhino_Scriptable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Scriptable:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Scriptable(ctx);
	{
	LINE_NUMBER(37);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_NOT_FOUND;
	clinit_rhino_Scriptable(ctx);
	SF_rhino_Scriptable_NOT_FOUND = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Scriptable[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "getClassName", "()Ljava/lang/String;" },
	{ "get", "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "get", "(ILrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/String;Lrhino/Scriptable;)Z" },
	{ "has", "(ILrhino/Scriptable;)Z" },
	{ "put", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "put", "(ILrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Ljava/lang/String;)V" },
	{ "delete", "(I)V" },
	{ "getPrototype", "()Lrhino/Scriptable;" },
	{ "setPrototype", "(Lrhino/Scriptable;)V" },
	{ "getParentScope", "()Lrhino/Scriptable;" },
	{ "setParentScope", "(Lrhino/Scriptable;)V" },
	{ "getIds", "()[Ljava/lang/Object;" },
	{ "getDefaultValue", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "hasInstance", "(Lrhino/Scriptable;)Z" },
};

static FieldMetadata fields[] {
	{ "NOT_FOUND", &class_java_lang_Object, (intptr_t) &SF_rhino_Scriptable_NOT_FOUND, "Ljava/lang/Object;", 25 },
};

static MethodMetadata methods[] {
	{ "getClassName", 0, INDEX_rhino_Scriptable_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "get", 0, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;", 1025 },
	{ "get", 0, INDEX_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object, "(ILrhino/Scriptable;)Ljava/lang/Object;", 1025 },
	{ "has", 0, INDEX_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean, "(Ljava/lang/String;Lrhino/Scriptable;)Z", 1025 },
	{ "has", 0, INDEX_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean, "(ILrhino/Scriptable;)Z", 1025 },
	{ "put", 0, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1025 },
	{ "put", 0, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 1025 },
	{ "delete", 0, INDEX_rhino_Scriptable_delete_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "delete", 0, INDEX_rhino_Scriptable_delete_int, "(I)V", 1025 },
	{ "getPrototype", 0, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1025 },
	{ "setPrototype", 0, INDEX_rhino_Scriptable_setPrototype_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1025 },
	{ "getParentScope", 0, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1025 },
	{ "setParentScope", 0, INDEX_rhino_Scriptable_setParentScope_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1025 },
	{ "getIds", 0, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1025 },
	{ "getDefaultValue", 0, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1025 },
	{ "hasInstance", 0, INDEX_rhino_Scriptable_hasInstance_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;)Z", 1025 },
	{ "<clinit>", (intptr_t) clinit_rhino_Scriptable, 0, "()V", 8 },
};

Class class_rhino_Scriptable{
		.nativeName = (intptr_t) "rhino/Scriptable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Scriptable),
		.classVtable = (intptr_t) vtable_rhino_Scriptable,
		.staticInitializer = (intptr_t) clinit_rhino_Scriptable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Scriptable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Scriptable = registerClass(&class_rhino_Scriptable);

}
