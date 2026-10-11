#include "java/lang/reflect/Field_ParameterizedTypeImpl.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/reflect/ParameterizedType.h"
#include "java/lang/reflect/Field_ParameterizedTypeImpl.h"
#include "java/lang/reflect/Type.h"

extern "C" {


void mark_java_lang_reflect_Field$ParameterizedTypeImpl(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_Field$ParameterizedTypeImpl *) object;
	if (self->F_args)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_args)->clazz)->markFunction)((jobject) self->F_args, mark, depth + 1);
	if (self->F_raw)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_raw)->clazz)->markFunction)((jobject) self->F_raw, mark, depth + 1);
	if (self->F_owner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_owner)->clazz)->markFunction)((jobject) self->F_owner, mark, depth + 1);
}

void clinit_java_lang_reflect_Field$ParameterizedTypeImpl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_reflect_Field$ParameterizedTypeImpl_Array1_java_lang_reflect_Type_java_lang_reflect_Type_java_lang_reflect_Type(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field$ParameterizedTypeImpl:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Field$ParameterizedTypeImpl(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(279);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(280);
	((java_lang_reflect_Field$ParameterizedTypeImpl *) NULL_CHECK((frame[0].o)))->F_args = (jref) (frame[1].o);
	LINE_NUMBER(281);
	((java_lang_reflect_Field$ParameterizedTypeImpl *) NULL_CHECK((frame[0].o)))->F_raw = (jref) (frame[2].o);
	LINE_NUMBER(282);
	((java_lang_reflect_Field$ParameterizedTypeImpl *) NULL_CHECK((frame[0].o)))->F_owner = (jref) (frame[3].o);
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field$ParameterizedTypeImpl_getActualTypeArguments_R_Array1_java_lang_reflect_Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field$ParameterizedTypeImpl:getActualTypeArguments", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((java_lang_reflect_Field$ParameterizedTypeImpl *) NULL_CHECK((frame[0].o)))->F_args;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field$ParameterizedTypeImpl_getRawType_R_java_lang_reflect_Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field$ParameterizedTypeImpl:getRawType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((java_lang_reflect_Field$ParameterizedTypeImpl *) NULL_CHECK((frame[0].o)))->F_raw;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_Field$ParameterizedTypeImpl_getOwnerType_R_java_lang_reflect_Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Field$ParameterizedTypeImpl:getOwnerType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((java_lang_reflect_Field$ParameterizedTypeImpl *) NULL_CHECK((frame[0].o)))->F_owner;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_reflect_Field$ParameterizedTypeImpl[] {
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
	(void *) M_java_lang_reflect_Field$ParameterizedTypeImpl_getActualTypeArguments_R_Array1_java_lang_reflect_Type,
	(void *) M_java_lang_reflect_Field$ParameterizedTypeImpl_getRawType_R_java_lang_reflect_Type,
	(void *) M_java_lang_reflect_Field$ParameterizedTypeImpl_getOwnerType_R_java_lang_reflect_Type,
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
	{ "getActualTypeArguments", "()[Ljava/lang/reflect/Type;" },
	{ "getRawType", "()Ljava/lang/reflect/Type;" },
	{ "getOwnerType", "()Ljava/lang/reflect/Type;" },
};

static jclass interfaces[] { &class_java_lang_reflect_ParameterizedType, };

static FieldMetadata fields[] {
	{ "args", getArrayClass(&class_java_lang_reflect_Type, 1), offsetof(java_lang_reflect_Field$ParameterizedTypeImpl, F_args), "[Ljava/lang/reflect/Type;", 2 },
	{ "raw", &class_java_lang_reflect_Type, offsetof(java_lang_reflect_Field$ParameterizedTypeImpl, F_raw), "Ljava/lang/reflect/Type;", 2 },
	{ "owner", &class_java_lang_reflect_Type, offsetof(java_lang_reflect_Field$ParameterizedTypeImpl, F_owner), "Ljava/lang/reflect/Type;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_reflect_Field$ParameterizedTypeImpl_Array1_java_lang_reflect_Type_java_lang_reflect_Type_java_lang_reflect_Type, 0, "([Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;)V", 1 },
	{ "getActualTypeArguments", (intptr_t) M_java_lang_reflect_Field$ParameterizedTypeImpl_getActualTypeArguments_R_Array1_java_lang_reflect_Type, VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_getActualTypeArguments_R_Array1_java_lang_reflect_Type, "()[Ljava/lang/reflect/Type;", 1 },
	{ "getRawType", (intptr_t) M_java_lang_reflect_Field$ParameterizedTypeImpl_getRawType_R_java_lang_reflect_Type, VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_getRawType_R_java_lang_reflect_Type, "()Ljava/lang/reflect/Type;", 1 },
	{ "getOwnerType", (intptr_t) M_java_lang_reflect_Field$ParameterizedTypeImpl_getOwnerType_R_java_lang_reflect_Type, VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_getOwnerType_R_java_lang_reflect_Type, "()Ljava/lang/reflect/Type;", 1 },
};

Class class_java_lang_reflect_Field$ParameterizedTypeImpl{
		.nativeName = (intptr_t) "java/lang/reflect/Field$ParameterizedTypeImpl",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_Field$ParameterizedTypeImpl),
		.classVtable = (intptr_t) vtable_java_lang_reflect_Field$ParameterizedTypeImpl,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_Field$ParameterizedTypeImpl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_Field$ParameterizedTypeImpl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_reflect_Field,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_Field$ParameterizedTypeImpl = registerClass(&class_java_lang_reflect_Field$ParameterizedTypeImpl);

}

