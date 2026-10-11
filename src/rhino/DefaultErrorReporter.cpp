#include "rhino/DefaultErrorReporter.h"
#include "rhino/DefaultErrorReporter.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/EcmaError.h"
#include "rhino/ErrorReporter.h"
#include "rhino/EvaluatorException.h"

extern "C" {

jobject SF_rhino_DefaultErrorReporter_instance;

void mark_rhino_DefaultErrorReporter(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_DefaultErrorReporter_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_DefaultErrorReporter_instance)->clazz)->markFunction)((jobject) SF_rhino_DefaultErrorReporter_instance, mark, depth + 1);
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
	auto self = (rhino_DefaultErrorReporter *) object;
	if (self->F_chainedReporter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chainedReporter)->clazz)->markFunction)((jobject) self->F_chainedReporter, mark, depth + 1);
}

void init_rhino_DefaultErrorReporter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DefaultErrorReporter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DefaultErrorReporter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_DefaultErrorReporter_forEval_rhino_ErrorReporter_R_rhino_ErrorReporter(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DefaultErrorReporter:forEval", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DefaultErrorReporter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(17);
	clinit_rhino_DefaultErrorReporter(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_DefaultErrorReporter);
	init_rhino_DefaultErrorReporter(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(18);
	((rhino_DefaultErrorReporter *) NULL_CHECK((frame[1].o)))->F_forEval = (jint(1));
	LINE_NUMBER(19);
	((rhino_DefaultErrorReporter *) NULL_CHECK((frame[1].o)))->F_chainedReporter = (jref) (frame[0].o);
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_rhino_DefaultErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DefaultErrorReporter:warning", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((rhino_DefaultErrorReporter *) NULL_CHECK((frame[0].o)))->F_chainedReporter;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((rhino_DefaultErrorReporter *) NULL_CHECK((frame[0].o)))->F_chainedReporter;
	((func_rhino_ErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int) resolveInterfaceMethod(ctx, &class_rhino_ErrorReporter, INDEX_rhino_ErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i));
	}
label_1:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_DefaultErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DefaultErrorReporter:error", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(37);
	if (((jint)((rhino_DefaultErrorReporter *) NULL_CHECK((frame[0].o)))->F_forEval) == 0) goto label_1;
	}
	{
	LINE_NUMBER(41);
	frame[6].o = (((jobject) createStringLiteral(ctx, u8"SyntaxError"_j)));
	LINE_NUMBER(42);
	frame[7].o = (((jobject) createStringLiteral(ctx, u8"TypeError"_j)));
	LINE_NUMBER(43);
	frame[8].o = (((jobject) createStringLiteral(ctx, u8": "_j)));
	LINE_NUMBER(44);
	frame[9].o = (((jobject) createStringLiteral(ctx, u8"TypeError: "_j)));
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"TypeError: "_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(46);
	frame[6].o = (((jobject) createStringLiteral(ctx, u8"TypeError"_j)));
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"TypeError: "_j))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"TypeError: "_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	frame[1].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EcmaError(ctx, (frame[6].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((rhino_DefaultErrorReporter *) NULL_CHECK((frame[0].o)))->F_chainedReporter;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((rhino_DefaultErrorReporter *) NULL_CHECK((frame[0].o)))->F_chainedReporter;
	((func_rhino_ErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int) resolveInterfaceMethod(ctx, &class_rhino_ErrorReporter, INDEX_rhino_ErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_rhino_DefaultErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_DefaultErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i));
	throwException(ctx, sp[0].o);	}
label_12:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_DefaultErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DefaultErrorReporter:runtimeError", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((rhino_DefaultErrorReporter *) NULL_CHECK((frame[0].o)))->F_chainedReporter;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((rhino_DefaultErrorReporter *) NULL_CHECK((frame[0].o)))->F_chainedReporter;
	sp[0].o = (jobject)((func_rhino_ErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException) resolveInterfaceMethod(ctx, &class_rhino_ErrorReporter, INDEX_rhino_ErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(68);
	clinit_rhino_EvaluatorException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_EvaluatorException);
	init_rhino_EvaluatorException_java_lang_String_java_lang_String_int_java_lang_String_int(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_DefaultErrorReporter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DefaultErrorReporter:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DefaultErrorReporter(ctx);
	{
	LINE_NUMBER(8);
	clinit_rhino_DefaultErrorReporter(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_DefaultErrorReporter);
	init_rhino_DefaultErrorReporter(ctx, sp[0].o);
	clinit_rhino_DefaultErrorReporter(ctx);
	SF_rhino_DefaultErrorReporter_instance = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_DefaultErrorReporter[] {
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
	(void *) M_rhino_DefaultErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int,
	(void *) M_rhino_DefaultErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int,
	(void *) M_rhino_DefaultErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException,
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
	{ "warning", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V" },
	{ "runtimeError", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)Lrhino/EvaluatorException;" },
};

static jclass interfaces[] { &class_rhino_ErrorReporter, };

static FieldMetadata fields[] {
	{ "instance", &class_rhino_DefaultErrorReporter, (intptr_t) &SF_rhino_DefaultErrorReporter_instance, "Lrhino/DefaultErrorReporter;", 24 },
	{ "forEval", &class_boolean, offsetof(rhino_DefaultErrorReporter, F_forEval), "Z", 2 },
	{ "chainedReporter", &class_rhino_ErrorReporter, offsetof(rhino_DefaultErrorReporter, F_chainedReporter), "Lrhino/ErrorReporter;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_DefaultErrorReporter, 0, "()V", 2 },
	{ "forEval", (intptr_t) SM_rhino_DefaultErrorReporter_forEval_rhino_ErrorReporter_R_rhino_ErrorReporter, 0, "(Lrhino/ErrorReporter;)Lrhino/ErrorReporter;", 8 },
	{ "warning", (intptr_t) M_rhino_DefaultErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int, VTABLE_rhino_DefaultErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V", 1 },
	{ "error", (intptr_t) M_rhino_DefaultErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int, VTABLE_rhino_DefaultErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V", 1 },
	{ "runtimeError", (intptr_t) M_rhino_DefaultErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException, VTABLE_rhino_DefaultErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)Lrhino/EvaluatorException;", 1 },
	{ "<clinit>", (intptr_t) clinit_rhino_DefaultErrorReporter, 0, "()V", 8 },
};

Class class_rhino_DefaultErrorReporter{
		.nativeName = (intptr_t) "rhino/DefaultErrorReporter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_DefaultErrorReporter),
		.classVtable = (intptr_t) vtable_rhino_DefaultErrorReporter,
		.staticInitializer = (intptr_t) clinit_rhino_DefaultErrorReporter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_DefaultErrorReporter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_DefaultErrorReporter = registerClass(&class_rhino_DefaultErrorReporter);

}
