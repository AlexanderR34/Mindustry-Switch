#include "regexodus/SearchEntry_CState.h"
#include "regexodus/SearchEntry_1.h"
#include "java/lang/Object.h"
#include "regexodus/SearchEntry_CState.h"
#include "regexodus/SearchEntry.h"

extern "C" {


void mark_regexodus_SearchEntry$CState(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_SearchEntry$CState *) object;
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_prev)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prev)->clazz)->markFunction)((jobject) self->F_prev, mark, depth + 1);
}

void clinit_regexodus_SearchEntry$CState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_regexodus_SearchEntry$CState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/SearchEntry$CState:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_SearchEntry$CState(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2606);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_SearchEntry$CState_regexodus_SearchEntry$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/SearchEntry$CState:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_SearchEntry$CState(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2606);
	init_regexodus_SearchEntry$CState(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_SearchEntry$CState[] {
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
	{ "index", &class_int, offsetof(regexodus_SearchEntry$CState, F_index), "I", 0 },
	{ "value", &class_int, offsetof(regexodus_SearchEntry$CState, F_value), "I", 0 },
	{ "next", &class_regexodus_SearchEntry$CState, offsetof(regexodus_SearchEntry$CState, F_next), "Lregexodus/SearchEntry$CState;", 0 },
	{ "prev", &class_regexodus_SearchEntry$CState, offsetof(regexodus_SearchEntry$CState, F_prev), "Lregexodus/SearchEntry$CState;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_SearchEntry$CState, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_regexodus_SearchEntry$CState_regexodus_SearchEntry$1, 0, "(Lregexodus/SearchEntry$1;)V", 4096 },
};

Class class_regexodus_SearchEntry$CState{
		.nativeName = (intptr_t) "regexodus/SearchEntry$CState",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_SearchEntry$CState),
		.classVtable = (intptr_t) vtable_regexodus_SearchEntry$CState,
		.staticInitializer = (intptr_t) clinit_regexodus_SearchEntry$CState,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_SearchEntry$CState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_regexodus_SearchEntry,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_SearchEntry$CState = registerClass(&class_regexodus_SearchEntry$CState);

}

