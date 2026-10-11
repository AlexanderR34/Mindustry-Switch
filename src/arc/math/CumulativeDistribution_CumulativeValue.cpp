#include "arc/math/CumulativeDistribution_CumulativeValue.h"
#include "java/lang/Object.h"
#include "arc/math/CumulativeDistribution.h"
#include "arc/math/CumulativeDistribution_CumulativeValue.h"

extern "C" {


void mark_arc_math_CumulativeDistribution$CumulativeValue(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_CumulativeDistribution$CumulativeValue *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_math_CumulativeDistribution$CumulativeValue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_CumulativeDistribution$CumulativeValue_arc_math_CumulativeDistribution_java_lang_Object_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution$CumulativeValue:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_CumulativeDistribution$CumulativeValue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(133);
	((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(134);
	((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(135);
	((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK((frame[0].o)))->F_frequency = (frame[3].f);
	LINE_NUMBER(136);
	((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK((frame[0].o)))->F_interval = (frame[4].f);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_CumulativeDistribution$CumulativeValue[] {
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
	{ "value", &class_java_lang_Object, offsetof(arc_math_CumulativeDistribution$CumulativeValue, F_value), "Ljava/lang/Object;", 1 },
	{ "frequency", &class_float, offsetof(arc_math_CumulativeDistribution$CumulativeValue, F_frequency), "F", 1 },
	{ "interval", &class_float, offsetof(arc_math_CumulativeDistribution$CumulativeValue, F_interval), "F", 1 },
	{ "this$0", &class_arc_math_CumulativeDistribution, offsetof(arc_math_CumulativeDistribution$CumulativeValue, F_this$0), "Larc/math/CumulativeDistribution;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_CumulativeDistribution$CumulativeValue_arc_math_CumulativeDistribution_java_lang_Object_float_float, 0, "(Larc/math/CumulativeDistribution;Ljava/lang/Object;FF)V", 1 },
};

Class class_arc_math_CumulativeDistribution$CumulativeValue{
		.nativeName = (intptr_t) "arc/math/CumulativeDistribution$CumulativeValue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_CumulativeDistribution$CumulativeValue),
		.classVtable = (intptr_t) vtable_arc_math_CumulativeDistribution$CumulativeValue,
		.staticInitializer = (intptr_t) clinit_arc_math_CumulativeDistribution$CumulativeValue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_CumulativeDistribution$CumulativeValue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_math_CumulativeDistribution,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_CumulativeDistribution$CumulativeValue = registerClass(&class_arc_math_CumulativeDistribution$CumulativeValue);

}

