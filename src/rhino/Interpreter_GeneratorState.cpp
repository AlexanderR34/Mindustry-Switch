#include "rhino/Interpreter_GeneratorState.h"
#include "java/lang/Object.h"
#include "rhino/Interpreter.h"
#include "java/lang/RuntimeException.h"
#include "rhino/Interpreter_GeneratorState.h"

extern "C" {


void mark_rhino_Interpreter$GeneratorState(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Interpreter$GeneratorState *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_returnedException)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_returnedException)->clazz)->markFunction)((jobject) self->F_returnedException, mark, depth + 1);
}

void clinit_rhino_Interpreter$GeneratorState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Interpreter$GeneratorState_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$GeneratorState:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter$GeneratorState(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(951);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(952);
	((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[0].o)))->F_operation = (frame[1].i);
	LINE_NUMBER(953);
	((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(954);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Interpreter$GeneratorState[] {
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
	{ "operation", &class_int, offsetof(rhino_Interpreter$GeneratorState, F_operation), "I", 0 },
	{ "value", &class_java_lang_Object, offsetof(rhino_Interpreter$GeneratorState, F_value), "Ljava/lang/Object;", 0 },
	{ "returnedException", &class_java_lang_RuntimeException, offsetof(rhino_Interpreter$GeneratorState, F_returnedException), "Ljava/lang/RuntimeException;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Interpreter$GeneratorState_int_java_lang_Object, 0, "(ILjava/lang/Object;)V", 0 },
};

Class class_rhino_Interpreter$GeneratorState{
		.nativeName = (intptr_t) "rhino/Interpreter$GeneratorState",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Interpreter$GeneratorState),
		.classVtable = (intptr_t) vtable_rhino_Interpreter$GeneratorState,
		.staticInitializer = (intptr_t) clinit_rhino_Interpreter$GeneratorState,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Interpreter$GeneratorState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Interpreter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Interpreter$GeneratorState = registerClass(&class_rhino_Interpreter$GeneratorState);

}

