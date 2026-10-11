#include "java/lang/reflect/GenericDeclaration.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/AnnotatedElement.h"
#include "java/lang/reflect/GenericDeclaration.h"
#include "java/lang/reflect/TypeVariable.h"

extern "C" {


void mark_java_lang_reflect_GenericDeclaration(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_GenericDeclaration *) object;
}

void clinit_java_lang_reflect_GenericDeclaration(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_lang_reflect_GenericDeclaration[] {
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
	(void *) M_java_lang_reflect_AnnotatedElement_isAnnotationPresent_java_lang_Class_R_boolean,
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
	{ "isAnnotationPresent", "(Ljava/lang/Class;)Z" },
	{ "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;" },
	{ "getAnnotations", "()[Ljava/lang/annotation/Annotation;" },
	{ "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;" },
	{ "getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;" },
};

static jclass interfaces[] { &class_java_lang_reflect_AnnotatedElement, };

static MethodMetadata methods[] {
	{ "getTypeParameters", 0, INDEX_java_lang_reflect_GenericDeclaration_getTypeParameters_R_Array1_java_lang_reflect_TypeVariable, "()[Ljava/lang/reflect/TypeVariable;", 1025 },
};

Class class_java_lang_reflect_GenericDeclaration{
		.nativeName = (intptr_t) "java/lang/reflect/GenericDeclaration",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_GenericDeclaration),
		.classVtable = (intptr_t) vtable_java_lang_reflect_GenericDeclaration,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_GenericDeclaration,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_GenericDeclaration,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_GenericDeclaration = registerClass(&class_java_lang_reflect_GenericDeclaration);

}
