#include "rhino/regexp/CompilerState.h"
#include "java/lang/Object.h"
#include "rhino/Context.h"
#include "rhino/regexp/CompilerState.h"
#include "rhino/regexp/RENode.h"

extern "C" {


void mark_rhino_regexp_CompilerState(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_regexp_CompilerState *) object;
	if (self->F_cx)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cx)->clazz)->markFunction)((jobject) self->F_cx, mark, depth + 1);
	if (self->F_cpbegin)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cpbegin)->clazz)->markFunction)((jobject) self->F_cpbegin, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
}

void clinit_rhino_regexp_CompilerState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_regexp_CompilerState_rhino_Context_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/CompilerState:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_CompilerState(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(2772);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2773);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cx = (jref) (frame[1].o);
	LINE_NUMBER(2774);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpbegin = (jref) (frame[2].o);
	LINE_NUMBER(2775);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp = (jint(0));
	LINE_NUMBER(2776);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend = (frame[3].i);
	LINE_NUMBER(2777);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_flags = (frame[4].i);
	LINE_NUMBER(2778);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_backReferenceLimit = (jint(2147483647));
	LINE_NUMBER(2779);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_maxBackReference = (jint(0));
	LINE_NUMBER(2780);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_parenCount = (jint(0));
	LINE_NUMBER(2781);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_classCount = (jint(0));
	LINE_NUMBER(2782);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_progLength = (jint(0));
	LINE_NUMBER(2783);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_CompilerState[] {
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
	{ "cx", &class_rhino_Context, offsetof(rhino_regexp_CompilerState, F_cx), "Lrhino/Context;", 0 },
	{ "cpbegin", getArrayClass(&class_char, 1), offsetof(rhino_regexp_CompilerState, F_cpbegin), "[C", 0 },
	{ "cpend", &class_int, offsetof(rhino_regexp_CompilerState, F_cpend), "I", 0 },
	{ "cp", &class_int, offsetof(rhino_regexp_CompilerState, F_cp), "I", 0 },
	{ "flags", &class_int, offsetof(rhino_regexp_CompilerState, F_flags), "I", 0 },
	{ "backReferenceLimit", &class_int, offsetof(rhino_regexp_CompilerState, F_backReferenceLimit), "I", 0 },
	{ "maxBackReference", &class_int, offsetof(rhino_regexp_CompilerState, F_maxBackReference), "I", 0 },
	{ "parenCount", &class_int, offsetof(rhino_regexp_CompilerState, F_parenCount), "I", 0 },
	{ "parenNesting", &class_int, offsetof(rhino_regexp_CompilerState, F_parenNesting), "I", 0 },
	{ "classCount", &class_int, offsetof(rhino_regexp_CompilerState, F_classCount), "I", 0 },
	{ "progLength", &class_int, offsetof(rhino_regexp_CompilerState, F_progLength), "I", 0 },
	{ "result", &class_rhino_regexp_RENode, offsetof(rhino_regexp_CompilerState, F_result), "Lrhino/regexp/RENode;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_regexp_CompilerState_rhino_Context_Array1_char_int_int, 0, "(Lrhino/Context;[CII)V", 0 },
};

Class class_rhino_regexp_CompilerState{
		.nativeName = (intptr_t) "rhino/regexp/CompilerState",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_regexp_CompilerState),
		.classVtable = (intptr_t) vtable_rhino_regexp_CompilerState,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_CompilerState,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_CompilerState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_CompilerState = registerClass(&class_rhino_regexp_CompilerState);

}
