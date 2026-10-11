#include "java/lang/reflect/Field_GenericArrayTypeImpl.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/reflect/GenericArrayType.h"
#include "java/lang/reflect/Field_GenericArrayTypeImpl.h"
#include "java/lang/reflect/Type.h"

extern "C" {


void mark_java_lang_reflect_Field$GenericArrayTypeImpl(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_Field$GenericArrayTypeImpl *) object;
	if (self->F_componentType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_componentType)->clazz)->markFunction)((jobject) self->F_componentType, mark, depth + 1);
}

void clinit_java_lang_reflect_Field$GenericArrayTypeImpl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_reflect_Field$GenericArrayTypeImpl_java_lang_reflect_Type(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field$GenericArrayTypeImpl:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Field$GenericArrayTypeImpl(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(264);
	((java_lang_reflect_Field$GenericArrayTypeImpl *) NULL_CHECK((frame[0].o)))->F_componentType = (jref) (frame[1].o);
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field$GenericArrayTypeImpl_getGenericComponentType_R_java_lang_reflect_Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field$GenericArrayTypeImpl:getGenericComponentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((java_lang_reflect_Field$GenericArrayTypeImpl *) NULL_CHECK((frame[0].o)))->F_componentType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_reflect_Field$GenericArrayTypeImpl[] {
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
	(void *) M_java_lang_reflect_Field$GenericArrayTypeImpl_getGenericComponentType_R_java_lang_reflect_Type,
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
	{ "getGenericComponentType", "()Ljava/lang/reflect/Type;" },
};

static jclass interfaces[] { &class_java_lang_reflect_GenericArrayType, };

static FieldMetadata fields[] {
	{ "componentType", &class_java_lang_reflect_Type, offsetof(java_lang_reflect_Field$GenericArrayTypeImpl, F_componentType), "Ljava/lang/reflect/Type;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_reflect_Field$GenericArrayTypeImpl_java_lang_reflect_Type, 0, "(Ljava/lang/reflect/Type;)V", 1 },
	{ "getGenericComponentType", (intptr_t) M_java_lang_reflect_Field$GenericArrayTypeImpl_getGenericComponentType_R_java_lang_reflect_Type, VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_getGenericComponentType_R_java_lang_reflect_Type, "()Ljava/lang/reflect/Type;", 1 },
};

Class class_java_lang_reflect_Field$GenericArrayTypeImpl{
		.nativeName = (intptr_t) "java/lang/reflect/Field$GenericArrayTypeImpl",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_Field$GenericArrayTypeImpl),
		.classVtable = (intptr_t) vtable_java_lang_reflect_Field$GenericArrayTypeImpl,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_Field$GenericArrayTypeImpl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_Field$GenericArrayTypeImpl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_reflect_Field,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_Field$GenericArrayTypeImpl = registerClass(&class_java_lang_reflect_Field$GenericArrayTypeImpl);

}

