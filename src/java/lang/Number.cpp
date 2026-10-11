#include "java/lang/Number.h"
#include "java/lang/Object.h"
#include "java/lang/Number.h"

extern "C" {


void mark_java_lang_Number(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_Number *) object;
}

void clinit_java_lang_Number(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_Number(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Number:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Number(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_java_lang_Number_byteValue_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Number:byteValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jbyte(temp0));
	}

	popStackFrame(ctx);
}

jshort M_java_lang_Number_shortValue_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Number:shortValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jshort(temp0));
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Number[] {
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
	(void *) M_java_lang_Number_byteValue_R_byte,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_lang_Number_shortValue_R_short,
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
	{ "intValue", "()I" },
	{ "byteValue", "()B" },
	{ "longValue", "()J" },
	{ "floatValue", "()F" },
	{ "doubleValue", "()D" },
	{ "shortValue", "()S" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Number, 0, "()V", 1 },
	{ "intValue", 0, VTABLE_java_lang_Number_intValue_R_int, "()I", 1025 },
	{ "byteValue", (intptr_t) M_java_lang_Number_byteValue_R_byte, VTABLE_java_lang_Number_byteValue_R_byte, "()B", 1 },
	{ "longValue", 0, VTABLE_java_lang_Number_longValue_R_long, "()J", 1025 },
	{ "floatValue", 0, VTABLE_java_lang_Number_floatValue_R_float, "()F", 1025 },
	{ "doubleValue", 0, VTABLE_java_lang_Number_doubleValue_R_double, "()D", 1025 },
	{ "shortValue", (intptr_t) M_java_lang_Number_shortValue_R_short, VTABLE_java_lang_Number_shortValue_R_short, "()S", 1 },
};

Class class_java_lang_Number{
		.nativeName = (intptr_t) "java/lang/Number",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Number),
		.classVtable = (intptr_t) vtable_java_lang_Number,
		.staticInitializer = (intptr_t) clinit_java_lang_Number,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Number,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Number = registerClass(&class_java_lang_Number);

}
