#include "arc/util/PerformanceCounters.h"
#include "arc/util/PerformanceCounters.h"
#include "arc/util/PerformanceCounters_invoke_java_util_Comparator_0.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/math/FloatCounter.h"
#include "arc/util/PerformanceCounter.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "arc/util/Time.h"
#include "java/lang/Float.h"

extern "C" {

jfloat SF_arc_util_PerformanceCounters_nano2seconds;

void mark_arc_util_PerformanceCounters(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_PerformanceCounters *) object;
	if (self->F_counters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_counters)->clazz)->markFunction)((jobject) self->F_counters, mark, depth + 1);
}

void clinit_arc_util_PerformanceCounters(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_PerformanceCounters_nano2seconds = jfloat(1,000000e-09f);
}

void init_arc_util_PerformanceCounters(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounters:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_PerformanceCounters(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_util_PerformanceCounters *) NULL_CHECK(sp[0].o))->F_counters = (jref) sp[1].o;
	LINE_NUMBER(9);
	((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_lastTick = (jlong(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_PerformanceCounters_add_java_lang_String_int_R_arc_util_PerformanceCounter(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounters:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(12);
	clinit_arc_util_PerformanceCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_PerformanceCounter);
	init_arc_util_PerformanceCounter_java_lang_String_int(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(13);
	sp[0].o = (jobject)((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_counters;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_PerformanceCounters_add_java_lang_String_R_arc_util_PerformanceCounter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounters:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	clinit_arc_util_PerformanceCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_PerformanceCounter);
	init_arc_util_PerformanceCounter_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(19);
	sp[0].o = (jobject)((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_counters;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_PerformanceCounters_tick(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounters:tick", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(25);
	if ((longCompare(((jlong)((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_lastTick), (jlong(0)))) <= 0) goto label_2;
	}
	{
	((func_arc_util_PerformanceCounters_tick_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_PerformanceCounters_tick_float])(ctx, (frame[0].o), ((jfloat(((frame[1].l) - ((jlong)((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_lastTick)))) * (jfloat(1,000000e-09f))));
	}
label_2:;
	{
	LINE_NUMBER(26);
	((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_lastTick = (frame[1].l);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_PerformanceCounters_tick_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounters:tick", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(30);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_counters;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_counters;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_arc_util_PerformanceCounter_tick_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_util_PerformanceCounter, sp[0].o)))->vtable)[VTABLE_arc_util_PerformanceCounter_tick_float])(ctx, (checkCast(ctx, &class_arc_util_PerformanceCounter, sp[0].o)), (frame[1].f));
	LINE_NUMBER(30);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_PerformanceCounters_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounters:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_counters;
	{ /* InvokeDynamic */
		clinit_arc_util_PerformanceCounters_invoke_java_util_Comparator_0(ctx);
		auto proxy = (arc_util_PerformanceCounters_invoke_java_util_Comparator_0 *) gcAlloc(ctx, &class_arc_util_PerformanceCounters_invoke_java_util_Comparator_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(37);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(38);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(39);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_counters;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_counters;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_arc_util_PerformanceCounter_toString_java_lang_StringBuilder_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_util_PerformanceCounter, sp[0].o)))->vtable)[VTABLE_arc_util_PerformanceCounter_toString_java_lang_StringBuilder_R_java_lang_StringBuilder])(ctx, (checkCast(ctx, &class_arc_util_PerformanceCounter, sp[0].o)), (frame[1].o));
	LINE_NUMBER(41);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_util_PerformanceCounters *) NULL_CHECK((frame[0].o)))->F_counters;
	if (temp0 == (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_8:;
	{
	LINE_NUMBER(39);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_arc_util_PerformanceCounters_lambda$toString$0_arc_util_PerformanceCounter_arc_util_PerformanceCounter_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounters:lambda$toString$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_PerformanceCounters(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_load;
	jfloat temp0 = (jfloat)((arc_math_FloatCounter *) NULL_CHECK(sp[0].o))->F_value;
	sp[0].o = (jobject)((arc_util_PerformanceCounter *) NULL_CHECK((frame[1].o)))->F_load;
	jint temp1 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, temp0, ((jfloat)((arc_math_FloatCounter *) NULL_CHECK(sp[0].o))->F_value));
	popStackFrame(ctx);
	return (-temp1);
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_PerformanceCounters[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_util_PerformanceCounters_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_util_PerformanceCounters_add_java_lang_String_int_R_arc_util_PerformanceCounter,
	(void *) M_arc_util_PerformanceCounters_add_java_lang_String_R_arc_util_PerformanceCounter,
	(void *) M_arc_util_PerformanceCounters_tick,
	(void *) M_arc_util_PerformanceCounters_tick_float,
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
	{ "add", "(Ljava/lang/String;I)Larc/util/PerformanceCounter;" },
	{ "add", "(Ljava/lang/String;)Larc/util/PerformanceCounter;" },
	{ "tick", "()V" },
	{ "tick", "(F)V" },
};

static FieldMetadata fields[] {
	{ "nano2seconds", &class_float, (intptr_t) &SF_arc_util_PerformanceCounters_nano2seconds, "F", 26 },
	{ "counters", &class_arc_struct_Seq, offsetof(arc_util_PerformanceCounters, F_counters), "Larc/struct/Seq;", 17 },
	{ "lastTick", &class_long, offsetof(arc_util_PerformanceCounters, F_lastTick), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_PerformanceCounters, 0, "()V", 1 },
	{ "add", (intptr_t) M_arc_util_PerformanceCounters_add_java_lang_String_int_R_arc_util_PerformanceCounter, VTABLE_arc_util_PerformanceCounters_add_java_lang_String_int_R_arc_util_PerformanceCounter, "(Ljava/lang/String;I)Larc/util/PerformanceCounter;", 1 },
	{ "add", (intptr_t) M_arc_util_PerformanceCounters_add_java_lang_String_R_arc_util_PerformanceCounter, VTABLE_arc_util_PerformanceCounters_add_java_lang_String_R_arc_util_PerformanceCounter, "(Ljava/lang/String;)Larc/util/PerformanceCounter;", 1 },
	{ "tick", (intptr_t) M_arc_util_PerformanceCounters_tick, VTABLE_arc_util_PerformanceCounters_tick, "()V", 1 },
	{ "tick", (intptr_t) M_arc_util_PerformanceCounters_tick_float, VTABLE_arc_util_PerformanceCounters_tick_float, "(F)V", 1 },
	{ "toString", (intptr_t) M_arc_util_PerformanceCounters_toString_R_java_lang_String, VTABLE_arc_util_PerformanceCounters_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$toString$0", (intptr_t) SM_arc_util_PerformanceCounters_lambda$toString$0_arc_util_PerformanceCounter_arc_util_PerformanceCounter_R_int, 0, "(Larc/util/PerformanceCounter;Larc/util/PerformanceCounter;)I", 4106 },
};

Class class_arc_util_PerformanceCounters{
		.nativeName = (intptr_t) "arc/util/PerformanceCounters",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_PerformanceCounters),
		.classVtable = (intptr_t) vtable_arc_util_PerformanceCounters,
		.staticInitializer = (intptr_t) clinit_arc_util_PerformanceCounters,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_PerformanceCounters,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_PerformanceCounters = registerClass(&class_arc_util_PerformanceCounters);

}
