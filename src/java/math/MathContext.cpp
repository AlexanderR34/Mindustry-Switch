#include "java/math/MathContext.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/math/RoundingMode.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/NullPointerException.h"
#include "java/math/MathContext.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Enum.h"

extern "C" {

jint SF_java_math_MathContext_DEFAULT_DIGITS;
jobject SF_java_math_MathContext_DEFAULT_ROUNDINGMODE;
jint SF_java_math_MathContext_MIN_DIGITS;
jlong SF_java_math_MathContext_serialVersionUID;
jobject SF_java_math_MathContext_UNLIMITED;
jobject SF_java_math_MathContext_DECIMAL32;
jobject SF_java_math_MathContext_DECIMAL64;
jobject SF_java_math_MathContext_DECIMAL128;

void mark_java_math_MathContext(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_math_MathContext_DEFAULT_ROUNDINGMODE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_MathContext_DEFAULT_ROUNDINGMODE)->clazz)->markFunction)((jobject) SF_java_math_MathContext_DEFAULT_ROUNDINGMODE, mark, depth + 1);
		if (SF_java_math_MathContext_UNLIMITED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_MathContext_UNLIMITED)->clazz)->markFunction)((jobject) SF_java_math_MathContext_UNLIMITED, mark, depth + 1);
		if (SF_java_math_MathContext_DECIMAL32)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_MathContext_DECIMAL32)->clazz)->markFunction)((jobject) SF_java_math_MathContext_DECIMAL32, mark, depth + 1);
		if (SF_java_math_MathContext_DECIMAL64)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_MathContext_DECIMAL64)->clazz)->markFunction)((jobject) SF_java_math_MathContext_DECIMAL64, mark, depth + 1);
		if (SF_java_math_MathContext_DECIMAL128)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_MathContext_DECIMAL128)->clazz)->markFunction)((jobject) SF_java_math_MathContext_DECIMAL128, mark, depth + 1);
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
	auto self = (java_math_MathContext *) object;
	if (self->F_roundingMode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_roundingMode)->clazz)->markFunction)((jobject) self->F_roundingMode, mark, depth + 1);
}

void init_java_math_MathContext_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MathContext:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MathContext(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	clinit_java_math_MathContext(ctx);
	sp[1].o = (jobject)SF_java_math_MathContext_DEFAULT_ROUNDINGMODE;
	init_java_math_MathContext_int_java_math_RoundingMode(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_MathContext_int_java_math_RoundingMode(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MathContext:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MathContext(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(160);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(161);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(162);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Digits < 0"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(163);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(164);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"null RoundingMode"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(166);
	((java_math_MathContext *) NULL_CHECK((frame[0].o)))->F_precision = (frame[1].i);
	LINE_NUMBER(167);
	((java_math_MathContext *) NULL_CHECK((frame[0].o)))->F_roundingMode = (jref) (frame[2].o);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_MathContext_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MathContext:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MathContext(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(187);
	frame[2].i = (jint(0));
	LINE_NUMBER(189);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(190);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"null String"_j))));
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"precision="_j))));
	if (temp0 != 0) goto label_8;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(193);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (32));
	frame[4].i = temp0;
	LINE_NUMBER(194);
	frame[5].i = (10);
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (10), (frame[4].i));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[3].i = temp1;
	LINE_NUMBER(197);
	jint temp2 = (jint)((func_java_lang_String_startsWith_java_lang_String_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_int_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"roundingMode="_j))), ((frame[4].i) + (jint(1))));
	if (temp2 != 0) goto label_12;
	}
	{
	LINE_NUMBER(198);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(199);
	frame[5].i = (((frame[4].i) + (jint(1))) + (13));
	LINE_NUMBER(200);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	frame[6].o = sp[0].o;
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_RoundingMode_valueOf_java_lang_String_R_java_math_RoundingMode(ctx, (frame[6].o));
	((java_math_MathContext *) NULL_CHECK(sp[0].o))->F_roundingMode = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(204);
	goto label_16;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(202);
	frame[4].o = sp[0].o;
	LINE_NUMBER(203);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bad string format"_j))));
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(206);
	if ((frame[3].i) >= 0) goto label_18;
	}
	{
	LINE_NUMBER(207);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Digits < 0"_j))));
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(209);
	((java_math_MathContext *) NULL_CHECK((frame[0].o)))->F_precision = (frame[3].i);
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_math_MathContext_getPrecision_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MathContext:getPrecision", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return ((jint)((java_math_MathContext *) NULL_CHECK((frame[0].o)))->F_precision);
	}

	popStackFrame(ctx);
}

jobject M_java_math_MathContext_getRoundingMode_R_java_math_RoundingMode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MathContext:getRoundingMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[0].o)))->F_roundingMode;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_math_MathContext_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MathContext:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(255);
	if ((isInstance(ctx, (frame[1].o), &class_java_math_MathContext)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(257);
	frame[2].o = (checkCast(ctx, &class_java_math_MathContext, (frame[1].o)));
	LINE_NUMBER(258);
	if (((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision) != ((jint)((java_math_MathContext *) NULL_CHECK((frame[0].o)))->F_precision)) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_roundingMode;
	sp[1].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[0].o)))->F_roundingMode;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_math_MathContext_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MathContext:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)((java_math_MathContext *) NULL_CHECK((frame[0].o)))->F_precision;
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[0].o)))->F_roundingMode;
	jint temp1 = (jint)((func_java_math_RoundingMode_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_RoundingMode_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 + (temp1 * (59)));
	}

	popStackFrame(ctx);
}

jobject M_java_math_MathContext_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MathContext:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"precision="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_math_MathContext *) NULL_CHECK((frame[0].o)))->F_precision));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" roundingMode="_j))));
	sp[1].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[0].o)))->F_roundingMode;
	LINE_NUMBER(305);
	sp[1].o = (jobject)((func_java_math_RoundingMode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_RoundingMode_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_math_MathContext(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_math_MathContext_DEFAULT_DIGITS = jint(9);
	SF_java_math_MathContext_MIN_DIGITS = jint(0);
	SF_java_math_MathContext_serialVersionUID = jlong(5579720004786848255ll);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MathContext:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MathContext(ctx);
	{
	LINE_NUMBER(66);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = (jobject)SF_java_math_RoundingMode_HALF_UP;
	clinit_java_math_MathContext(ctx);
	SF_java_math_MathContext_DEFAULT_ROUNDINGMODE = sp[0].o;
	LINE_NUMBER(82);
	clinit_java_math_MathContext(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MathContext);
	jint temp0 = jint(0);
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_HALF_UP;
	init_java_math_MathContext_int_java_math_RoundingMode(ctx, sp[0].o, temp0, sp[1].o);
	clinit_java_math_MathContext(ctx);
	SF_java_math_MathContext_UNLIMITED = sp[0].o;
	LINE_NUMBER(91);
	clinit_java_math_MathContext(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MathContext);
	jint temp1 = 7;
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_HALF_EVEN;
	init_java_math_MathContext_int_java_math_RoundingMode(ctx, sp[0].o, temp1, sp[1].o);
	clinit_java_math_MathContext(ctx);
	SF_java_math_MathContext_DECIMAL32 = sp[0].o;
	LINE_NUMBER(100);
	clinit_java_math_MathContext(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MathContext);
	jint temp2 = 16;
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_HALF_EVEN;
	init_java_math_MathContext_int_java_math_RoundingMode(ctx, sp[0].o, temp2, sp[1].o);
	clinit_java_math_MathContext(ctx);
	SF_java_math_MathContext_DECIMAL64 = sp[0].o;
	LINE_NUMBER(109);
	clinit_java_math_MathContext(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MathContext);
	jint temp3 = 34;
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_HALF_EVEN;
	init_java_math_MathContext_int_java_math_RoundingMode(ctx, sp[0].o, temp3, sp[1].o);
	clinit_java_math_MathContext(ctx);
	SF_java_math_MathContext_DECIMAL128 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_math_MathContext[] {
	(void *) M_java_math_MathContext_hashCode_R_int,
	(void *) M_java_math_MathContext_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_math_MathContext_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_math_MathContext_getPrecision_R_int,
	(void *) M_java_math_MathContext_getRoundingMode_R_java_math_RoundingMode,
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
	{ "getPrecision", "()I" },
	{ "getRoundingMode", "()Ljava/math/RoundingMode;" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "DEFAULT_DIGITS", &class_int, (intptr_t) &SF_java_math_MathContext_DEFAULT_DIGITS, "I", 26 },
	{ "DEFAULT_ROUNDINGMODE", &class_java_math_RoundingMode, (intptr_t) &SF_java_math_MathContext_DEFAULT_ROUNDINGMODE, "Ljava/math/RoundingMode;", 26 },
	{ "MIN_DIGITS", &class_int, (intptr_t) &SF_java_math_MathContext_MIN_DIGITS, "I", 26 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_math_MathContext_serialVersionUID, "J", 26 },
	{ "UNLIMITED", &class_java_math_MathContext, (intptr_t) &SF_java_math_MathContext_UNLIMITED, "Ljava/math/MathContext;", 25 },
	{ "DECIMAL32", &class_java_math_MathContext, (intptr_t) &SF_java_math_MathContext_DECIMAL32, "Ljava/math/MathContext;", 25 },
	{ "DECIMAL64", &class_java_math_MathContext, (intptr_t) &SF_java_math_MathContext_DECIMAL64, "Ljava/math/MathContext;", 25 },
	{ "DECIMAL128", &class_java_math_MathContext, (intptr_t) &SF_java_math_MathContext_DECIMAL128, "Ljava/math/MathContext;", 25 },
	{ "precision", &class_int, offsetof(java_math_MathContext, F_precision), "I", 16 },
	{ "roundingMode", &class_java_math_RoundingMode, offsetof(java_math_MathContext, F_roundingMode), "Ljava/math/RoundingMode;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_math_MathContext_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_math_MathContext_int_java_math_RoundingMode, 0, "(ILjava/math/RoundingMode;)V", 1 },
	{ "<init>", (intptr_t) init_java_math_MathContext_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "getPrecision", (intptr_t) M_java_math_MathContext_getPrecision_R_int, VTABLE_java_math_MathContext_getPrecision_R_int, "()I", 1 },
	{ "getRoundingMode", (intptr_t) M_java_math_MathContext_getRoundingMode_R_java_math_RoundingMode, VTABLE_java_math_MathContext_getRoundingMode_R_java_math_RoundingMode, "()Ljava/math/RoundingMode;", 1 },
	{ "equals", (intptr_t) M_java_math_MathContext_equals_java_lang_Object_R_boolean, VTABLE_java_math_MathContext_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_math_MathContext_hashCode_R_int, VTABLE_java_math_MathContext_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_math_MathContext_toString_R_java_lang_String, VTABLE_java_math_MathContext_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_math_MathContext, 0, "()V", 8 },
};

Class class_java_math_MathContext{
		.nativeName = (intptr_t) "java/math/MathContext",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_math_MathContext),
		.classVtable = (intptr_t) vtable_java_math_MathContext,
		.staticInitializer = (intptr_t) clinit_java_math_MathContext,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_math_MathContext,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_math_MathContext = registerClass(&class_java_math_MathContext);

}
