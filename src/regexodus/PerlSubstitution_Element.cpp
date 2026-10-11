#include "regexodus/PerlSubstitution_Element.h"
#include "regexodus/MatchResult.h"
#include "java/lang/Object.h"
#include "regexodus/PerlSubstitution.h"
#include "regexodus/PerlSubstitution_1.h"
#include "java/lang/String.h"
#include "regexodus/TextBuffer.h"
#include "regexodus/PerlSubstitution_Element.h"

extern "C" {


void mark_regexodus_PerlSubstitution$Element(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_PerlSubstitution$Element *) object;
	if (self->F_prefix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prefix)->clazz)->markFunction)((jobject) self->F_prefix, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
}

void clinit_regexodus_PerlSubstitution$Element(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_regexodus_PerlSubstitution$Element(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution$Element:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_PerlSubstitution$Element(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(237);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_PerlSubstitution$Element_regexodus_PerlSubstitution$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution$Element:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_PerlSubstitution$Element(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(237);
	init_regexodus_PerlSubstitution$Element(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_PerlSubstitution$Element[] {
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
	(void *) nullptr,
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
	{ "append", "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V" },
};

static FieldMetadata fields[] {
	{ "prefix", &class_java_lang_String, offsetof(regexodus_PerlSubstitution$Element, F_prefix), "Ljava/lang/String;", 0 },
	{ "next", &class_regexodus_PerlSubstitution$Element, offsetof(regexodus_PerlSubstitution$Element, F_next), "Lregexodus/PerlSubstitution$Element;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_PerlSubstitution$Element, 0, "()V", 2 },
	{ "append", 0, VTABLE_regexodus_PerlSubstitution$Element_append_regexodus_MatchResult_regexodus_TextBuffer, "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V", 1024 },
	{ "<init>", (intptr_t) init_regexodus_PerlSubstitution$Element_regexodus_PerlSubstitution$1, 0, "(Lregexodus/PerlSubstitution$1;)V", 4096 },
};

Class class_regexodus_PerlSubstitution$Element{
		.nativeName = (intptr_t) "regexodus/PerlSubstitution$Element",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_PerlSubstitution$Element),
		.classVtable = (intptr_t) vtable_regexodus_PerlSubstitution$Element,
		.staticInitializer = (intptr_t) clinit_regexodus_PerlSubstitution$Element,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_PerlSubstitution$Element,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_regexodus_PerlSubstitution,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_PerlSubstitution$Element = registerClass(&class_regexodus_PerlSubstitution$Element);

}

