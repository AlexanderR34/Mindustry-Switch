#include "java/nio/charset/CoderResult.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/charset/CoderResult.h"
#include "java/lang/RuntimeException.h"

extern "C" {

jobject SF_java_nio_charset_CoderResult_OVERFLOW;
jobject SF_java_nio_charset_CoderResult_UNDERFLOW;

void mark_java_nio_charset_CoderResult(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_nio_charset_CoderResult_OVERFLOW)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_charset_CoderResult_OVERFLOW)->clazz)->markFunction)((jobject) SF_java_nio_charset_CoderResult_OVERFLOW, mark, depth + 1);
		if (SF_java_nio_charset_CoderResult_UNDERFLOW)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_charset_CoderResult_UNDERFLOW)->clazz)->markFunction)((jobject) SF_java_nio_charset_CoderResult_UNDERFLOW, mark, depth + 1);
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
	auto self = (java_nio_charset_CoderResult *) object;
}

void init_java_nio_charset_CoderResult(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_CoderResult(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_CoderResult_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_nio_charset_CoderResult_isUnderflow_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:isUnderflow", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_nio_charset_CoderResult_isOverflow_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:isOverflow", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_nio_charset_CoderResult_isError_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:isError", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_nio_charset_CoderResult_isMalformed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:isMalformed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_nio_charset_CoderResult_isUnmappable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:isUnmappable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_nio_charset_CoderResult_length_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:length", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_nio_charset_CoderResult_malformedForLength_int_R_java_nio_charset_CoderResult(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:malformedForLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_CoderResult(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(57);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_nio_charset_CoderResult_unmappableForLength_int_R_java_nio_charset_CoderResult(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:unmappableForLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_CoderResult(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(61);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_nio_charset_CoderResult_throwException(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:throwException", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_java_nio_charset_CoderResult(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/CoderResult:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_CoderResult(ctx);
	{
	LINE_NUMBER(21);
	clinit_java_nio_charset_CoderResult(ctx);
	SF_java_nio_charset_CoderResult_OVERFLOW = (jobject(nullptr));
	LINE_NUMBER(22);
	clinit_java_nio_charset_CoderResult(ctx);
	SF_java_nio_charset_CoderResult_UNDERFLOW = (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_charset_CoderResult[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_nio_charset_CoderResult_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_nio_charset_CoderResult_isUnderflow_R_boolean,
	(void *) M_java_nio_charset_CoderResult_isOverflow_R_boolean,
	(void *) M_java_nio_charset_CoderResult_isError_R_boolean,
	(void *) M_java_nio_charset_CoderResult_isMalformed_R_boolean,
	(void *) M_java_nio_charset_CoderResult_isUnmappable_R_boolean,
	(void *) M_java_nio_charset_CoderResult_length_R_int,
	(void *) M_java_nio_charset_CoderResult_throwException,
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
	{ "isUnderflow", "()Z" },
	{ "isOverflow", "()Z" },
	{ "isError", "()Z" },
	{ "isMalformed", "()Z" },
	{ "isUnmappable", "()Z" },
	{ "length", "()I" },
	{ "throwException", "()V" },
};

static FieldMetadata fields[] {
	{ "OVERFLOW", &class_java_nio_charset_CoderResult, (intptr_t) &SF_java_nio_charset_CoderResult_OVERFLOW, "Ljava/nio/charset/CoderResult;", 25 },
	{ "UNDERFLOW", &class_java_nio_charset_CoderResult, (intptr_t) &SF_java_nio_charset_CoderResult_UNDERFLOW, "Ljava/nio/charset/CoderResult;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_charset_CoderResult, 0, "()V", 2 },
	{ "toString", (intptr_t) M_java_nio_charset_CoderResult_toString_R_java_lang_String, VTABLE_java_nio_charset_CoderResult_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isUnderflow", (intptr_t) M_java_nio_charset_CoderResult_isUnderflow_R_boolean, VTABLE_java_nio_charset_CoderResult_isUnderflow_R_boolean, "()Z", 1 },
	{ "isOverflow", (intptr_t) M_java_nio_charset_CoderResult_isOverflow_R_boolean, VTABLE_java_nio_charset_CoderResult_isOverflow_R_boolean, "()Z", 1 },
	{ "isError", (intptr_t) M_java_nio_charset_CoderResult_isError_R_boolean, VTABLE_java_nio_charset_CoderResult_isError_R_boolean, "()Z", 1 },
	{ "isMalformed", (intptr_t) M_java_nio_charset_CoderResult_isMalformed_R_boolean, VTABLE_java_nio_charset_CoderResult_isMalformed_R_boolean, "()Z", 1 },
	{ "isUnmappable", (intptr_t) M_java_nio_charset_CoderResult_isUnmappable_R_boolean, VTABLE_java_nio_charset_CoderResult_isUnmappable_R_boolean, "()Z", 1 },
	{ "length", (intptr_t) M_java_nio_charset_CoderResult_length_R_int, VTABLE_java_nio_charset_CoderResult_length_R_int, "()I", 1 },
	{ "malformedForLength", (intptr_t) SM_java_nio_charset_CoderResult_malformedForLength_int_R_java_nio_charset_CoderResult, 0, "(I)Ljava/nio/charset/CoderResult;", 9 },
	{ "unmappableForLength", (intptr_t) SM_java_nio_charset_CoderResult_unmappableForLength_int_R_java_nio_charset_CoderResult, 0, "(I)Ljava/nio/charset/CoderResult;", 9 },
	{ "throwException", (intptr_t) M_java_nio_charset_CoderResult_throwException, VTABLE_java_nio_charset_CoderResult_throwException, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_java_nio_charset_CoderResult, 0, "()V", 8 },
};

Class class_java_nio_charset_CoderResult{
		.nativeName = (intptr_t) "java/nio/charset/CoderResult",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_charset_CoderResult),
		.classVtable = (intptr_t) vtable_java_nio_charset_CoderResult,
		.staticInitializer = (intptr_t) clinit_java_nio_charset_CoderResult,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_charset_CoderResult,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_charset_CoderResult = registerClass(&class_java_nio_charset_CoderResult);

}
