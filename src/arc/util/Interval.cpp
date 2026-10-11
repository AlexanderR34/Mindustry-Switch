#include "arc/util/Interval.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "arc/util/Time.h"
#include "java/lang/RuntimeException.h"
#include "arc/util/Interval.h"

extern "C" {


void mark_arc_util_Interval(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Interval *) object;
	if (self->F_times)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_times)->clazz)->markFunction)((jobject) self->F_times, mark, depth + 1);
}

void clinit_arc_util_Interval(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Interval_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Interval:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Interval(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_util_Interval *) NULL_CHECK(sp[0].o))->F_times = (jref) sp[1].o;
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_Interval(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Interval:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Interval(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_arc_util_Interval_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_Interval_get_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Interval:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(17);
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, (frame[0].o), (jint(0)), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_Interval_get_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Interval:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(21);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_util_Interval *) NULL_CHECK((frame[0].o)))->F_times;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Out of bounds! Max timer size is "_j))));
	sp[2].o = (jobject)((arc_util_Interval *) NULL_CHECK((frame[0].o)))->F_times;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"!"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(23);
	jint temp0 = (jint)((func_arc_util_Interval_check_int_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Interval_check_int_float_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(24);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_util_Interval *) NULL_CHECK((frame[0].o)))->F_times;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)) = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	}
label_3:;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_util_Interval_check_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Interval:check", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(29);
	clinit_arc_util_Time(ctx);
	jfloat temp0 = (jfloat)SF_arc_util_Time_time;
	sp[0].o = (jobject)((arc_util_Interval *) NULL_CHECK((frame[0].o)))->F_times;
	if ((floatCompare((temp0 - ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)))), (frame[2].f), -1)) >= 0) goto label_1;
	}
	{
	clinit_arc_util_Time(ctx);
	jfloat temp0 = (jfloat)SF_arc_util_Time_time;
	sp[0].o = (jobject)((arc_util_Interval *) NULL_CHECK((frame[0].o)))->F_times;
	if ((floatCompare(temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i))), 1)) >= 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_util_Interval_reset_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Interval:reset", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_util_Interval *) NULL_CHECK((frame[0].o)))->F_times;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)) = ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) - (frame[2].f));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_Interval_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Interval:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((arc_util_Interval *) NULL_CHECK((frame[0].o)))->F_times;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_util_Interval_getTime_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Interval:getTime", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(41);
	clinit_arc_util_Time(ctx);
	jfloat temp0 = (jfloat)SF_arc_util_Time_time;
	sp[0].o = (jobject)((arc_util_Interval *) NULL_CHECK((frame[0].o)))->F_times;
	popStackFrame(ctx);
	return (temp0 - ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i))));
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Interval_getTimes_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Interval:getTimes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_util_Interval *) NULL_CHECK((frame[0].o)))->F_times;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Interval[] {
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
	(void *) M_arc_util_Interval_get_float_R_boolean,
	(void *) M_arc_util_Interval_get_int_float_R_boolean,
	(void *) M_arc_util_Interval_check_int_float_R_boolean,
	(void *) M_arc_util_Interval_reset_int_float,
	(void *) M_arc_util_Interval_clear,
	(void *) M_arc_util_Interval_getTime_int_R_float,
	(void *) M_arc_util_Interval_getTimes_R_Array1_float,
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
	{ "get", "(F)Z" },
	{ "get", "(IF)Z" },
	{ "check", "(IF)Z" },
	{ "reset", "(IF)V" },
	{ "clear", "()V" },
	{ "getTime", "(I)F" },
	{ "getTimes", "()[F" },
};

static FieldMetadata fields[] {
	{ "times", getArrayClass(&class_float, 1), offsetof(arc_util_Interval, F_times), "[F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Interval_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_Interval, 0, "()V", 1 },
	{ "get", (intptr_t) M_arc_util_Interval_get_float_R_boolean, VTABLE_arc_util_Interval_get_float_R_boolean, "(F)Z", 1 },
	{ "get", (intptr_t) M_arc_util_Interval_get_int_float_R_boolean, VTABLE_arc_util_Interval_get_int_float_R_boolean, "(IF)Z", 1 },
	{ "check", (intptr_t) M_arc_util_Interval_check_int_float_R_boolean, VTABLE_arc_util_Interval_check_int_float_R_boolean, "(IF)Z", 1 },
	{ "reset", (intptr_t) M_arc_util_Interval_reset_int_float, VTABLE_arc_util_Interval_reset_int_float, "(IF)V", 1 },
	{ "clear", (intptr_t) M_arc_util_Interval_clear, VTABLE_arc_util_Interval_clear, "()V", 1 },
	{ "getTime", (intptr_t) M_arc_util_Interval_getTime_int_R_float, VTABLE_arc_util_Interval_getTime_int_R_float, "(I)F", 1 },
	{ "getTimes", (intptr_t) M_arc_util_Interval_getTimes_R_Array1_float, VTABLE_arc_util_Interval_getTimes_R_Array1_float, "()[F", 1 },
};

Class class_arc_util_Interval{
		.nativeName = (intptr_t) "arc/util/Interval",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Interval),
		.classVtable = (intptr_t) vtable_arc_util_Interval,
		.staticInitializer = (intptr_t) clinit_arc_util_Interval,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Interval,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Interval = registerClass(&class_arc_util_Interval);

}
