#include "arc/math/Interp_BounceOut.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/math/Interp.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/math/Interp_BounceOut.h"

extern "C" {


void mark_arc_math_Interp$BounceOut(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_Interp$BounceOut *) object;
	if (self->F_widths)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_widths)->clazz)->markFunction)((jobject) self->F_widths, mark, depth + 1);
	if (self->F_heights)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heights)->clazz)->markFunction)((jobject) self->F_heights, mark, depth + 1);
}

void clinit_arc_math_Interp$BounceOut(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_Interp$BounceOut_Array1_float_Array1_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$BounceOut:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp$BounceOut(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(250);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(251);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(252);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Must be the same number of widths and heights."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(253);
	((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths = (jref) (frame[1].o);
	LINE_NUMBER(254);
	((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights = (jref) (frame[2].o);
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_Interp$BounceOut_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$BounceOut:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp$BounceOut(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(257);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(258);
	if ((frame[1].i) < (jint(2))) goto label_2;
	}
	{
	if ((frame[1].i) <= (jint(5))) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(259);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bounces cannot be < 2 or > 5: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_math_Interp$BounceOut *) NULL_CHECK(sp[0].o))->F_widths = (jref) sp[1].o;
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_math_Interp$BounceOut *) NULL_CHECK(sp[0].o))->F_heights = (jref) sp[1].o;
	LINE_NUMBER(262);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	LINE_NUMBER(263);
	switch((frame[1].i)) {
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		default: goto label_11;
	}
	}
label_7:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0.6f));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0.4f));
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0.33f));
	LINE_NUMBER(268);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0.4f));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0.4f));
	LINE_NUMBER(272);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0.2f));
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0.33f));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0.1f));
	LINE_NUMBER(275);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0.34f));
	LINE_NUMBER(278);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0.34f));
	LINE_NUMBER(279);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0.2f));
	LINE_NUMBER(280);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0.15f));
	LINE_NUMBER(281);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0.26f));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0.11f));
	LINE_NUMBER(283);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0.03f));
	LINE_NUMBER(284);
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0.3f));
	LINE_NUMBER(287);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0.3f));
	LINE_NUMBER(288);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0.2f));
	LINE_NUMBER(289);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0.1f));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0.1f));
	LINE_NUMBER(291);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0.45f));
	LINE_NUMBER(292);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0.3f));
	LINE_NUMBER(293);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0.15f));
	LINE_NUMBER(294);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0.06f));
	}
label_11:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (jfloat(2)));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Interp$BounceOut_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$BounceOut:apply", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(302);
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_1;
	}
	INST_FCONST(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(303);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	frame[1].f = (temp0 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) / (jfloat(2))));
	LINE_NUMBER(304);
	frame[2].f = (jfloat(0));
	frame[3].f = (jfloat(0));
	LINE_NUMBER(305);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	frame[5].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	frame[2].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	LINE_NUMBER(307);
	if ((floatCompare((frame[1].f), (frame[2].f), 1)) > 0) goto label_10;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_heights;
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	LINE_NUMBER(309);
	goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(311);
	frame[1].f = ((frame[1].f) - (frame[2].f));
	LINE_NUMBER(305);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(313);
	frame[1].f = ((frame[1].f) / (frame[2].f));
	LINE_NUMBER(314);
	frame[4].f = ((((jfloat(4.0f)) / (frame[2].f)) * (frame[3].f)) * (frame[1].f));
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return ((jfloat(1)) - (((frame[4].f) - ((frame[4].f) * (frame[1].f))) * (frame[2].f)));
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Interp$BounceOut[] {
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
	(void *) M_arc_math_Interp$BounceOut_apply_float_R_float,
	(void *) M_arc_math_Interp_apply_float_float_float_R_float,
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
	{ "apply", "(F)F" },
	{ "apply", "(FFF)F" },
};

static jclass interfaces[] { &class_arc_math_Interp, };

static FieldMetadata fields[] {
	{ "widths", getArrayClass(&class_float, 1), offsetof(arc_math_Interp$BounceOut, F_widths), "[F", 16 },
	{ "heights", getArrayClass(&class_float, 1), offsetof(arc_math_Interp$BounceOut, F_heights), "[F", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_Interp$BounceOut_Array1_float_Array1_float, 0, "([F[F)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_Interp$BounceOut_int, 0, "(I)V", 1 },
	{ "apply", (intptr_t) M_arc_math_Interp$BounceOut_apply_float_R_float, VTABLE_arc_math_Interp$BounceOut_apply_float_R_float, "(F)F", 1 },
};

Class class_arc_math_Interp$BounceOut{
		.nativeName = (intptr_t) "arc/math/Interp$BounceOut",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_Interp$BounceOut),
		.classVtable = (intptr_t) vtable_arc_math_Interp$BounceOut,
		.staticInitializer = (intptr_t) clinit_arc_math_Interp$BounceOut,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Interp$BounceOut,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_math_Interp,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Interp$BounceOut = registerClass(&class_arc_math_Interp$BounceOut);

}

