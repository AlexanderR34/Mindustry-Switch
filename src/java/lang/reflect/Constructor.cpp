#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_java_lang_reflect_Constructor(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_Constructor *) object;
	if (self->F_method)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_method)->clazz)->markFunction)((jobject) self->F_method, mark, depth + 1);
}

void clinit_java_lang_reflect_Constructor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_reflect_Constructor_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Constructor:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Constructor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	((java_lang_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_method = (jref) (frame[1].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Constructor_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Constructor:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_Constructor_isAccessible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Constructor:isAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_lang_reflect_Constructor_setAccessible_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Constructor:setAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_lang_reflect_Constructor_getModifiers_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Constructor:getModifiers", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((java_lang_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_Constructor_isVarArgs_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Constructor:isVarArgs", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((java_lang_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_isVarArgs_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_isVarArgs_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Constructor:getDeclaringClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((java_lang_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_method;
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Constructor_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Constructor:getDeclaredAnnotations", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((java_lang_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_method;
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_reflect_Constructor_isAnnotationPresent_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Constructor:isAnnotationPresent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((java_lang_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_method;
	jint temp0 = (jint)((func_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Constructor:newInstance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_reflect_Constructor_nativeCreate_java_lang_Class_R_java_lang_Object(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(74);
	sp[0].o = (jobject)((java_lang_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_method;
	sp[0].o = (jobject)((func_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Constructor:getParameterTypes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((java_lang_reflect_Constructor *) NULL_CHECK((frame[0].o)))->F_method;
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_reflect_Constructor[] {
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
	(void *) M_java_lang_reflect_Constructor_getName_R_java_lang_String,
	(void *) M_java_lang_reflect_Constructor_isAccessible_R_boolean,
	(void *) M_java_lang_reflect_Constructor_setAccessible_boolean,
	(void *) M_java_lang_reflect_Constructor_getModifiers_R_int,
	(void *) M_java_lang_reflect_Constructor_isVarArgs_R_boolean,
	(void *) M_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class,
	(void *) M_java_lang_reflect_Constructor_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation,
	(void *) M_java_lang_reflect_Constructor_isAnnotationPresent_java_lang_Class_R_boolean,
	(void *) M_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class,
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
	{ "getName", "()Ljava/lang/String;" },
	{ "isAccessible", "()Z" },
	{ "setAccessible", "(Z)V" },
	{ "getModifiers", "()I" },
	{ "isVarArgs", "()Z" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;" },
	{ "isAnnotationPresent", "(Ljava/lang/Class;)Z" },
	{ "newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "getParameterTypes", "()[Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "method", &class_java_lang_reflect_Method, offsetof(java_lang_reflect_Constructor, F_method), "Ljava/lang/reflect/Method;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_reflect_Constructor_java_lang_reflect_Method, 0, "(Ljava/lang/reflect/Method;)V", 1 },
	{ "getName", (intptr_t) M_java_lang_reflect_Constructor_getName_R_java_lang_String, VTABLE_java_lang_reflect_Constructor_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isAccessible", (intptr_t) M_java_lang_reflect_Constructor_isAccessible_R_boolean, VTABLE_java_lang_reflect_Constructor_isAccessible_R_boolean, "()Z", 1 },
	{ "setAccessible", (intptr_t) M_java_lang_reflect_Constructor_setAccessible_boolean, VTABLE_java_lang_reflect_Constructor_setAccessible_boolean, "(Z)V", 1 },
	{ "getModifiers", (intptr_t) M_java_lang_reflect_Constructor_getModifiers_R_int, VTABLE_java_lang_reflect_Constructor_getModifiers_R_int, "()I", 1 },
	{ "isVarArgs", (intptr_t) M_java_lang_reflect_Constructor_isVarArgs_R_boolean, VTABLE_java_lang_reflect_Constructor_isVarArgs_R_boolean, "()Z", 1 },
	{ "getDeclaringClass", (intptr_t) M_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class, VTABLE_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "getDeclaredAnnotations", (intptr_t) M_java_lang_reflect_Constructor_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation, VTABLE_java_lang_reflect_Constructor_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation, "()[Ljava/lang/annotation/Annotation;", 1 },
	{ "isAnnotationPresent", (intptr_t) M_java_lang_reflect_Constructor_isAnnotationPresent_java_lang_Class_R_boolean, VTABLE_java_lang_reflect_Constructor_isAnnotationPresent_java_lang_Class_R_boolean, "(Ljava/lang/Class;)Z", 1 },
	{ "newInstance", (intptr_t) M_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object, VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object, "([Ljava/lang/Object;)Ljava/lang/Object;", 129 },
	{ "nativeCreate", (intptr_t) SM_java_lang_reflect_Constructor_nativeCreate_java_lang_Class_R_java_lang_Object, 0, "(Ljava/lang/Class;)Ljava/lang/Object;", 266 },
	{ "getParameterTypes", (intptr_t) M_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class, VTABLE_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class, "()[Ljava/lang/Class;", 1 },
};

Class class_java_lang_reflect_Constructor{
		.nativeName = (intptr_t) "java/lang/reflect/Constructor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_Constructor),
		.classVtable = (intptr_t) vtable_java_lang_reflect_Constructor,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_Constructor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_Constructor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_Constructor = registerClass(&class_java_lang_reflect_Constructor);

}
