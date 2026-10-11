#include "java/lang/reflect/AccessibleObject.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/AnnotatedElement.h"
#include "java/lang/reflect/AccessibleObject.h"
#include "java/lang/Class.h"

extern "C" {


void mark_java_lang_reflect_AccessibleObject(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_AccessibleObject *) object;
}

void clinit_java_lang_reflect_AccessibleObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_reflect_AccessibleObject(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/AccessibleObject:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_AccessibleObject(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_AccessibleObject_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/AccessibleObject:getAnnotation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_AccessibleObject_getAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/AccessibleObject:getAnnotations", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_annotation_Annotation, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_AccessibleObject_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/AccessibleObject:getDeclaredAnnotations", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_annotation_Annotation, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_lang_reflect_AccessibleObject_setAccessible_Array1_java_lang_reflect_AccessibleObject_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/AccessibleObject:setAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_AccessibleObject(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_reflect_AccessibleObject_setAccessible_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/AccessibleObject:setAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_AccessibleObject_trySetAccessible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/AccessibleObject:trySetAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_AccessibleObject_isAccessible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/AccessibleObject:isAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_AccessibleObject_canAccess_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/AccessibleObject:canAccess", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_reflect_AccessibleObject[] {
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
	(void *) M_java_lang_reflect_AccessibleObject_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation,
	(void *) M_java_lang_reflect_AccessibleObject_getAnnotations_R_Array1_java_lang_annotation_Annotation,
	(void *) M_java_lang_reflect_AccessibleObject_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation,
	(void *) M_java_lang_reflect_AccessibleObject_setAccessible_boolean,
	(void *) M_java_lang_reflect_AccessibleObject_trySetAccessible_R_boolean,
	(void *) M_java_lang_reflect_AccessibleObject_isAccessible_R_boolean,
	(void *) M_java_lang_reflect_AccessibleObject_canAccess_java_lang_Object_R_boolean,
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
	{ "setAccessible", "(Z)V" },
	{ "trySetAccessible", "()Z" },
	{ "isAccessible", "()Z" },
	{ "canAccess", "(Ljava/lang/Object;)Z" },
};

static jclass interfaces[] { &class_java_lang_reflect_AnnotatedElement, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_reflect_AccessibleObject, 0, "()V", 1 },
	{ "getAnnotation", (intptr_t) M_java_lang_reflect_AccessibleObject_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, VTABLE_java_lang_reflect_AccessibleObject_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", 1 },
	{ "getAnnotations", (intptr_t) M_java_lang_reflect_AccessibleObject_getAnnotations_R_Array1_java_lang_annotation_Annotation, VTABLE_java_lang_reflect_AccessibleObject_getAnnotations_R_Array1_java_lang_annotation_Annotation, "()[Ljava/lang/annotation/Annotation;", 1 },
	{ "getDeclaredAnnotations", (intptr_t) M_java_lang_reflect_AccessibleObject_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation, VTABLE_java_lang_reflect_AccessibleObject_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation, "()[Ljava/lang/annotation/Annotation;", 1 },
	{ "setAccessible", (intptr_t) SM_java_lang_reflect_AccessibleObject_setAccessible_Array1_java_lang_reflect_AccessibleObject_boolean, 0, "([Ljava/lang/reflect/AccessibleObject;Z)V", 9 },
	{ "setAccessible", (intptr_t) M_java_lang_reflect_AccessibleObject_setAccessible_boolean, VTABLE_java_lang_reflect_AccessibleObject_setAccessible_boolean, "(Z)V", 1 },
	{ "trySetAccessible", (intptr_t) M_java_lang_reflect_AccessibleObject_trySetAccessible_R_boolean, VTABLE_java_lang_reflect_AccessibleObject_trySetAccessible_R_boolean, "()Z", 17 },
	{ "isAccessible", (intptr_t) M_java_lang_reflect_AccessibleObject_isAccessible_R_boolean, VTABLE_java_lang_reflect_AccessibleObject_isAccessible_R_boolean, "()Z", 1 },
	{ "canAccess", (intptr_t) M_java_lang_reflect_AccessibleObject_canAccess_java_lang_Object_R_boolean, VTABLE_java_lang_reflect_AccessibleObject_canAccess_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 17 },
};

Class class_java_lang_reflect_AccessibleObject{
		.nativeName = (intptr_t) "java/lang/reflect/AccessibleObject",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_AccessibleObject),
		.classVtable = (intptr_t) vtable_java_lang_reflect_AccessibleObject,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_AccessibleObject,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_AccessibleObject,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_AccessibleObject = registerClass(&class_java_lang_reflect_AccessibleObject);

}
