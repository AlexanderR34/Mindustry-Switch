#include "java/lang/reflect/Member.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Member.h"
#include "java/lang/Class.h"

extern "C" {

jint SF_java_lang_reflect_Member_PUBLIC;
jint SF_java_lang_reflect_Member_DECLARED;

void mark_java_lang_reflect_Member(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_Member *) object;
}

void clinit_java_lang_reflect_Member(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_lang_reflect_Member_PUBLIC = jint(0);
	SF_java_lang_reflect_Member_DECLARED = jint(1);
}

void *vtable_java_lang_reflect_Member[] {
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
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getModifiers", "()I" },
	{ "isSynthetic", "()Z" },
};

static FieldMetadata fields[] {
	{ "PUBLIC", &class_int, (intptr_t) &SF_java_lang_reflect_Member_PUBLIC, "I", 25 },
	{ "DECLARED", &class_int, (intptr_t) &SF_java_lang_reflect_Member_DECLARED, "I", 25 },
};

static MethodMetadata methods[] {
	{ "getDeclaringClass", 0, INDEX_java_lang_reflect_Member_getDeclaringClass_R_java_lang_Class, "()Ljava/lang/Class;", 1025 },
	{ "getName", 0, INDEX_java_lang_reflect_Member_getName_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "getModifiers", 0, INDEX_java_lang_reflect_Member_getModifiers_R_int, "()I", 1025 },
	{ "isSynthetic", 0, INDEX_java_lang_reflect_Member_isSynthetic_R_boolean, "()Z", 1025 },
};

Class class_java_lang_reflect_Member{
		.nativeName = (intptr_t) "java/lang/reflect/Member",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_Member),
		.classVtable = (intptr_t) vtable_java_lang_reflect_Member,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_Member,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_Member,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_Member = registerClass(&class_java_lang_reflect_Member);

}
