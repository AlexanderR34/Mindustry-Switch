#include "java/math/BigDecimal_LongOverflow.h"
#include "java/math/BigInteger.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/math/BigDecimal.h"
#include "java/math/BigDecimal_LongOverflow.h"
#include "java/lang/ArithmeticException.h"

extern "C" {

jobject SF_java_math_BigDecimal$LongOverflow_LONGMIN;
jobject SF_java_math_BigDecimal$LongOverflow_LONGMAX;

void mark_java_math_BigDecimal$LongOverflow(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_math_BigDecimal$LongOverflow_LONGMIN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal$LongOverflow_LONGMIN)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal$LongOverflow_LONGMIN, mark, depth + 1);
		if (SF_java_math_BigDecimal$LongOverflow_LONGMAX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal$LongOverflow_LONGMAX)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal$LongOverflow_LONGMAX, mark, depth + 1);
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
	auto self = (java_math_BigDecimal$LongOverflow *) object;
}

void init_java_math_BigDecimal$LongOverflow(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal$LongOverflow:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal$LongOverflow(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3128);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_math_BigDecimal$LongOverflow_check_java_math_BigDecimal(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal$LongOverflow:check", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal$LongOverflow(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3136);
	sp[0].o = (jobject)SM_java_math_BigDecimal_access$000_java_math_BigDecimal_R_java_math_BigInteger(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3137);
	sp[0].o = frame[1].o;
	clinit_java_math_BigDecimal$LongOverflow(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal$LongOverflow_LONGMIN;
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 < 0) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	clinit_java_math_BigDecimal$LongOverflow(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal$LongOverflow_LONGMAX;
	LINE_NUMBER(3138);
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 <= 0) goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(3139);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Overflow"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(3140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_java_math_BigDecimal$LongOverflow(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal$LongOverflow:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal$LongOverflow(ctx);
	{
	LINE_NUMBER(3130);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(-9223372036854775807ll)));
	clinit_java_math_BigDecimal$LongOverflow(ctx);
	SF_java_math_BigDecimal$LongOverflow_LONGMIN = sp[0].o;
	LINE_NUMBER(3133);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(9223372036854775807ll)));
	clinit_java_math_BigDecimal$LongOverflow(ctx);
	SF_java_math_BigDecimal$LongOverflow_LONGMAX = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_math_BigDecimal$LongOverflow[] {
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
	{ "LONGMIN", &class_java_math_BigInteger, (intptr_t) &SF_java_math_BigDecimal$LongOverflow_LONGMIN, "Ljava/math/BigInteger;", 26 },
	{ "LONGMAX", &class_java_math_BigInteger, (intptr_t) &SF_java_math_BigDecimal$LongOverflow_LONGMAX, "Ljava/math/BigInteger;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_math_BigDecimal$LongOverflow, 0, "()V", 2 },
	{ "check", (intptr_t) SM_java_math_BigDecimal$LongOverflow_check_java_math_BigDecimal, 0, "(Ljava/math/BigDecimal;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_java_math_BigDecimal$LongOverflow, 0, "()V", 8 },
};

Class class_java_math_BigDecimal$LongOverflow{
		.nativeName = (intptr_t) "java/math/BigDecimal$LongOverflow",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_math_BigDecimal$LongOverflow),
		.classVtable = (intptr_t) vtable_java_math_BigDecimal$LongOverflow,
		.staticInitializer = (intptr_t) clinit_java_math_BigDecimal$LongOverflow,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_math_BigDecimal$LongOverflow,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_math_BigDecimal,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_math_BigDecimal$LongOverflow = registerClass(&class_java_math_BigDecimal$LongOverflow);

}

