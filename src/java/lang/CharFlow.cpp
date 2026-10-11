#include "java/lang/CharFlow.h"
#include "java/lang/CharFlow.h"
#include "java/lang/Object.h"

extern "C" {


void mark_java_lang_CharFlow(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_CharFlow *) object;
	if (self->F_characters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_characters)->clazz)->markFunction)((jobject) self->F_characters, mark, depth + 1);
}

void clinit_java_lang_CharFlow(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_CharFlow_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/CharFlow:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_CharFlow(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1782);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1783);
	((java_lang_CharFlow *) NULL_CHECK((frame[0].o)))->F_characters = (jref) (frame[1].o);
	LINE_NUMBER(1784);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_CharFlow[] {
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
	{ "characters", getArrayClass(&class_char, 1), offsetof(java_lang_CharFlow, F_characters), "[C", 17 },
	{ "pointer", &class_int, offsetof(java_lang_CharFlow, F_pointer), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_CharFlow_Array1_char, 0, "([C)V", 1 },
};

Class class_java_lang_CharFlow{
		.nativeName = (intptr_t) "java/lang/CharFlow",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_CharFlow),
		.classVtable = (intptr_t) vtable_java_lang_CharFlow,
		.staticInitializer = (intptr_t) clinit_java_lang_CharFlow,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_CharFlow,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_CharFlow = registerClass(&class_java_lang_CharFlow);

}
