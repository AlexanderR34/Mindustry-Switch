#include "java/lang/Deprecated.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/annotation/RetentionPolicy.h"
#include "java/lang/annotation/Retention.h"
#include "java/lang/Class.h"
#include "java/lang/annotation/Documented.h"
#include "java/lang/Deprecated.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_java_lang_Deprecated(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_Deprecated *) object;
}

void clinit_java_lang_Deprecated(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_java_lang_Deprecated_annotationType_R_java_lang_Class(jcontext ctx, jobject self) {
	return (jobject) &class_java_lang_Deprecated;
}

jobject M_java_lang_Deprecated_since_R_java_lang_String(jcontext ctx, jobject self) {
	return (jobject) ((java_lang_Deprecated *) self)->F_since;
}

jbool M_java_lang_Deprecated_forRemoval_R_boolean(jcontext ctx, jobject self) {
	return (jbool) ((java_lang_Deprecated *) self)->F_forRemoval;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_lang_Deprecated;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Class
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 2);
		clazz.annotations = (jref) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_annotation_Documented);
		annotations[1] = gcAlloc(ctx, &class_java_lang_annotation_Retention);
		clinit_java_lang_annotation_RetentionPolicy(ctx);
		((java_lang_annotation_Retention *)annotations[1])->F_value = (intptr_t) SF_java_lang_annotation_RetentionPolicy_RUNTIME;
	}

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_lang_Deprecated[] {
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
	(void *) M_java_lang_Deprecated_annotationType_R_java_lang_Class,
	(void *) M_java_lang_Deprecated_since_R_java_lang_String,
	(void *) M_java_lang_Deprecated_forRemoval_R_boolean,
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
	{ "annotationType", "()Ljava/lang/Class;" },
	{ "since", "()Ljava/lang/String;" },
	{ "forRemoval", "()Z" },
};

static jclass interfaces[] { &class_java_lang_annotation_Annotation, };

static MethodMetadata methods[] {
	{ "annotationType", 0, INDEX_java_lang_Deprecated_annotationType_R_java_lang_Class, "()Ljava/lang/Class;", 1025 },
	{ "since", 0, INDEX_java_lang_Deprecated_since_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "forRemoval", 0, INDEX_java_lang_Deprecated_forRemoval_R_boolean, "()Z", 1025 },
};

Class class_java_lang_Deprecated{
		.nativeName = (intptr_t) "java/lang/Deprecated",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Deprecated),
		.classVtable = (intptr_t) vtable_java_lang_Deprecated,
		.staticInitializer = (intptr_t) clinit_java_lang_Deprecated,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_lang_Deprecated,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 9729,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Deprecated = registerClass(&class_java_lang_Deprecated);

}
