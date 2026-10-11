#include "java/lang/reflect/Array.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Class.h"

extern "C" {


void mark_java_lang_reflect_Array(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_Array *) object;
}

void clinit_java_lang_reflect_Array(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_reflect_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Array:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Array(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_reflect_Array_newInstance_java_lang_Class_Array1_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Array:newInstance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Array(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(33);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(34);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Only 1-dimensional arrays currently supported by Array.newInstance()"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstanceImpl_java_lang_Class_int_R_java_lang_Object(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Array:newInstance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Array(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstanceImpl_java_lang_Class_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_reflect_Array[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_reflect_Array, 0, "()V", 1 },
	{ "newInstance", (intptr_t) SM_java_lang_reflect_Array_newInstance_java_lang_Class_Array1_int_R_java_lang_Object, 0, "(Ljava/lang/Class;[I)Ljava/lang/Object;", 9 },
	{ "newInstance", (intptr_t) SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object, 0, "(Ljava/lang/Class;I)Ljava/lang/Object;", 9 },
	{ "newInstanceImpl", (intptr_t) SM_java_lang_reflect_Array_newInstanceImpl_java_lang_Class_int_R_java_lang_Object, 0, "(Ljava/lang/Class;I)Ljava/lang/Object;", 264 },
	{ "set", (intptr_t) SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object, 0, "(Ljava/lang/Object;ILjava/lang/Object;)V", 265 },
	{ "get", (intptr_t) SM_java_lang_reflect_Array_get_java_lang_Object_int_R_java_lang_Object, 0, "(Ljava/lang/Object;I)Ljava/lang/Object;", 265 },
	{ "getLength", (intptr_t) SM_java_lang_reflect_Array_getLength_java_lang_Object_R_int, 0, "(Ljava/lang/Object;)I", 265 },
};

Class class_java_lang_reflect_Array{
		.nativeName = (intptr_t) "java/lang/reflect/Array",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_Array),
		.classVtable = (intptr_t) vtable_java_lang_reflect_Array,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_Array,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_Array,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_Array = registerClass(&class_java_lang_reflect_Array);

}
