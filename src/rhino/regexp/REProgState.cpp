#include "rhino/regexp/REProgState.h"
#include "java/lang/Object.h"
#include "rhino/regexp/REBackTrackData.h"
#include "rhino/regexp/REProgState.h"

extern "C" {


void mark_rhino_regexp_REProgState(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_regexp_REProgState *) object;
	if (self->F_previous)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previous)->clazz)->markFunction)((jobject) self->F_previous, mark, depth + 1);
	if (self->F_backTrack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backTrack)->clazz)->markFunction)((jobject) self->F_backTrack, mark, depth + 1);
}

void clinit_rhino_regexp_REProgState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_regexp_REProgState_rhino_regexp_REProgState_int_int_int_rhino_regexp_REBackTrackData_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/REProgState:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_REProgState(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(2802);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2803);
	((rhino_regexp_REProgState *) NULL_CHECK((frame[0].o)))->F_previous = (jref) (frame[1].o);
	LINE_NUMBER(2804);
	((rhino_regexp_REProgState *) NULL_CHECK((frame[0].o)))->F_min = (frame[2].i);
	LINE_NUMBER(2805);
	((rhino_regexp_REProgState *) NULL_CHECK((frame[0].o)))->F_max = (frame[3].i);
	LINE_NUMBER(2806);
	((rhino_regexp_REProgState *) NULL_CHECK((frame[0].o)))->F_index = (frame[4].i);
	LINE_NUMBER(2807);
	((rhino_regexp_REProgState *) NULL_CHECK((frame[0].o)))->F_continuationOp = (frame[6].i);
	LINE_NUMBER(2808);
	((rhino_regexp_REProgState *) NULL_CHECK((frame[0].o)))->F_continuationPc = (frame[7].i);
	LINE_NUMBER(2809);
	((rhino_regexp_REProgState *) NULL_CHECK((frame[0].o)))->F_backTrack = (jref) (frame[5].o);
	LINE_NUMBER(2810);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_REProgState[] {
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
	{ "previous", &class_rhino_regexp_REProgState, offsetof(rhino_regexp_REProgState, F_previous), "Lrhino/regexp/REProgState;", 16 },
	{ "min", &class_int, offsetof(rhino_regexp_REProgState, F_min), "I", 16 },
	{ "max", &class_int, offsetof(rhino_regexp_REProgState, F_max), "I", 16 },
	{ "index", &class_int, offsetof(rhino_regexp_REProgState, F_index), "I", 16 },
	{ "continuationOp", &class_int, offsetof(rhino_regexp_REProgState, F_continuationOp), "I", 16 },
	{ "continuationPc", &class_int, offsetof(rhino_regexp_REProgState, F_continuationPc), "I", 16 },
	{ "backTrack", &class_rhino_regexp_REBackTrackData, offsetof(rhino_regexp_REProgState, F_backTrack), "Lrhino/regexp/REBackTrackData;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_regexp_REProgState_rhino_regexp_REProgState_int_int_int_rhino_regexp_REBackTrackData_int_int, 0, "(Lrhino/regexp/REProgState;IIILrhino/regexp/REBackTrackData;II)V", 0 },
};

Class class_rhino_regexp_REProgState{
		.nativeName = (intptr_t) "rhino/regexp/REProgState",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_regexp_REProgState),
		.classVtable = (intptr_t) vtable_rhino_regexp_REProgState,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_REProgState,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_REProgState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_REProgState = registerClass(&class_rhino_regexp_REProgState);

}
