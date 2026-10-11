#include "arc/math/FloatCounter.h"
#include "java/lang/Object.h"
#include "arc/math/WindowedMean.h"
#include "arc/math/FloatCounter.h"

extern "C" {


void mark_arc_math_FloatCounter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_FloatCounter *) object;
	if (self->F_mean)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mean)->clazz)->markFunction)((jobject) self->F_mean, mark, depth + 1);
}

void clinit_arc_math_FloatCounter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_FloatCounter_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/FloatCounter:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_FloatCounter(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) <= (jint(1))) goto label_2;
	}
	{
	clinit_arc_math_WindowedMean(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_WindowedMean);
	init_arc_math_WindowedMean_int(ctx, sp[0].o, (frame[1].i));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	{
	sp -= 2;
	((arc_math_FloatCounter *) NULL_CHECK(sp[0].o))->F_mean = (jref) sp[1].o;
	LINE_NUMBER(32);
	((func_arc_math_FloatCounter_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_FloatCounter_reset])(ctx, (frame[0].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_FloatCounter_put_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/FloatCounter:put", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(40);
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_latest = (frame[1].f);
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	((arc_math_FloatCounter *) NULL_CHECK(sp[0].o))->F_total = (((jfloat)((arc_math_FloatCounter *) NULL_CHECK(sp[0].o))->F_total) + (frame[1].f));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	((arc_math_FloatCounter *) NULL_CHECK(sp[0].o))->F_count = (((jint)((arc_math_FloatCounter *) NULL_CHECK(sp[0].o))->F_count) + (jint(1)));
	LINE_NUMBER(43);
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_average = (((jfloat)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_total) / (jfloat(((jint)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_count))));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	((func_arc_math_WindowedMean_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_add_float])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	jfloat temp0 = (jfloat)((func_arc_math_WindowedMean_mean_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_WindowedMean_mean_R_float])(ctx, sp[1].o);
	((arc_math_FloatCounter *) NULL_CHECK(sp[0].o))->F_value = temp0;
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(49);
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_value = ((jfloat)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_latest);
	}
label_8:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	jint temp0 = (jint)((func_arc_math_WindowedMean_hasEnoughData_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_hasEnoughData_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(52);
	if ((floatCompare(((jfloat)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_value), ((jfloat)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_min), 1)) >= 0) goto label_11;
	}
	{
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_min = ((jfloat)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_value);
	}
label_11:;
	{
	LINE_NUMBER(53);
	if ((floatCompare(((jfloat)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_value), ((jfloat)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_max), -1)) <= 0) goto label_10;
	}
	{
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_max = ((jfloat)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_value);
	}
label_10:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_FloatCounter_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/FloatCounter:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_count = (jint(0));
	LINE_NUMBER(60);
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_total = (jfloat(0));
	LINE_NUMBER(61);
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_min = (jfloat(3,402823e+38f));
	LINE_NUMBER(62);
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_max = (jfloat(1,401298e-45f));
	LINE_NUMBER(63);
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_average = (jfloat(0));
	LINE_NUMBER(64);
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_latest = (jfloat(0));
	LINE_NUMBER(65);
	((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_value = (jfloat(0));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_math_FloatCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	((func_arc_math_WindowedMean_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_clear])(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_math_FloatCounter[] {
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
	(void *) M_arc_math_FloatCounter_put_float,
	(void *) M_arc_math_FloatCounter_reset,
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
	{ "put", "(F)V" },
	{ "reset", "()V" },
};

static FieldMetadata fields[] {
	{ "mean", &class_arc_math_WindowedMean, offsetof(arc_math_FloatCounter, F_mean), "Larc/math/WindowedMean;", 17 },
	{ "count", &class_int, offsetof(arc_math_FloatCounter, F_count), "I", 1 },
	{ "total", &class_float, offsetof(arc_math_FloatCounter, F_total), "F", 1 },
	{ "min", &class_float, offsetof(arc_math_FloatCounter, F_min), "F", 1 },
	{ "max", &class_float, offsetof(arc_math_FloatCounter, F_max), "F", 1 },
	{ "average", &class_float, offsetof(arc_math_FloatCounter, F_average), "F", 1 },
	{ "latest", &class_float, offsetof(arc_math_FloatCounter, F_latest), "F", 1 },
	{ "value", &class_float, offsetof(arc_math_FloatCounter, F_value), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_FloatCounter_int, 0, "(I)V", 1 },
	{ "put", (intptr_t) M_arc_math_FloatCounter_put_float, VTABLE_arc_math_FloatCounter_put_float, "(F)V", 1 },
	{ "reset", (intptr_t) M_arc_math_FloatCounter_reset, VTABLE_arc_math_FloatCounter_reset, "()V", 1 },
};

Class class_arc_math_FloatCounter{
		.nativeName = (intptr_t) "arc/math/FloatCounter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_FloatCounter),
		.classVtable = (intptr_t) vtable_arc_math_FloatCounter,
		.staticInitializer = (intptr_t) clinit_arc_math_FloatCounter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_FloatCounter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_FloatCounter = registerClass(&class_arc_math_FloatCounter);

}
