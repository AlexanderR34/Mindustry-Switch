#include "java/lang/reflect/AnnotatedElement.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/AnnotatedElement.h"
#include "java/lang/Class.h"

extern "C" {


void mark_java_lang_reflect_AnnotatedElement(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_AnnotatedElement *) object;
}

void clinit_java_lang_reflect_AnnotatedElement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_java_lang_reflect_AnnotatedElement_isAnnotationPresent_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/AnnotatedElement:isAnnotationPresent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((func_java_lang_reflect_AnnotatedElement_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation) resolveInterfaceMethod(ctx, &class_java_lang_reflect_AnnotatedElement, INDEX_java_lang_reflect_AnnotatedElement_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_java_lang_reflect_AnnotatedElement[] {
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
};

static MethodMetadata methods[] {
	{ "isAnnotationPresent", (intptr_t) M_java_lang_reflect_AnnotatedElement_isAnnotationPresent_java_lang_Class_R_boolean, INDEX_java_lang_reflect_AnnotatedElement_isAnnotationPresent_java_lang_Class_R_boolean, "(Ljava/lang/Class;)Z", 1 },
	{ "getAnnotation", 0, INDEX_java_lang_reflect_AnnotatedElement_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", 1025 },
	{ "getAnnotations", 0, INDEX_java_lang_reflect_AnnotatedElement_getAnnotations_R_Array1_java_lang_annotation_Annotation, "()[Ljava/lang/annotation/Annotation;", 1025 },
	{ "getDeclaredAnnotations", 0, INDEX_java_lang_reflect_AnnotatedElement_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation, "()[Ljava/lang/annotation/Annotation;", 1025 },
};

Class class_java_lang_reflect_AnnotatedElement{
		.nativeName = (intptr_t) "java/lang/reflect/AnnotatedElement",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_AnnotatedElement),
		.classVtable = (intptr_t) vtable_java_lang_reflect_AnnotatedElement,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_AnnotatedElement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_AnnotatedElement,
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
static bool registered_java_lang_reflect_AnnotatedElement = registerClass(&class_java_lang_reflect_AnnotatedElement);

}
