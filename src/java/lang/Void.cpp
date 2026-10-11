#include "java/lang/Void.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Void.h"
#include "java/nio/NativeUtils.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_java_lang_Void_TYPE;

void mark_java_lang_Void(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Void_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Void_TYPE)->clazz)->markFunction)((jobject) SF_java_lang_Void_TYPE, mark, depth + 1);
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
	auto self = (java_lang_Void *) object;
}

void init_java_lang_Void(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Void:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Void(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_Void(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Void:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Void(ctx);
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"V"_j))));
	clinit_java_lang_Void(ctx);
	SF_java_lang_Void_TYPE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Void[] {
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

static FieldMetadata fields[] {
	{ "TYPE", &class_java_lang_Class, (intptr_t) &SF_java_lang_Void_TYPE, "Ljava/lang/Class;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Void, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Void, 0, "()V", 8 },
};

Class class_java_lang_Void{
		.nativeName = (intptr_t) "java/lang/Void",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Void),
		.classVtable = (intptr_t) vtable_java_lang_Void,
		.staticInitializer = (intptr_t) clinit_java_lang_Void,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Void,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Void = registerClass(&class_java_lang_Void);

}
