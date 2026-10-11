#include "arc/util/Timekeeper.h"
#include "java/lang/Object.h"
#include "arc/util/Timekeeper.h"
#include "arc/util/Time.h"

extern "C" {


void mark_arc_util_Timekeeper(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Timekeeper *) object;
}

void clinit_arc_util_Timekeeper(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Timekeeper_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timekeeper:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timekeeper(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((arc_util_Timekeeper *) NULL_CHECK((frame[0].o)))->F_intervalMs = (frame[1].l);
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Timekeeper_ofMillis_long_R_arc_util_Timekeeper(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timekeeper:ofMillis", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timekeeper(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(13);
	clinit_arc_util_Timekeeper(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Timekeeper);
	init_arc_util_Timekeeper_long(ctx, sp[0].o, (frame[0].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Timekeeper_ofTicks_float_R_arc_util_Timekeeper(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timekeeper:ofTicks", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timekeeper(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)SM_arc_util_Timekeeper_ofSeconds_float_R_arc_util_Timekeeper(ctx, ((frame[0].f) / (jfloat(60.0f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Timekeeper_ofSeconds_float_R_arc_util_Timekeeper(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timekeeper:ofSeconds", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timekeeper(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(21);
	clinit_arc_util_Timekeeper(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Timekeeper);
	init_arc_util_Timekeeper_long(ctx, sp[0].o, (jlong(((frame[0].f) * (jfloat(1000.0f))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_Timekeeper_poll_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timekeeper:poll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_arc_util_Timekeeper_get_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Timekeeper_get_R_boolean])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(27);
	if ((frame[1].i) == 0) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_util_Timekeeper_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timekeeper_reset])(ctx, sp[0].o);
label_2:;
	{
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_util_Timekeeper_get_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timekeeper:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((arc_util_Timekeeper *) NULL_CHECK((frame[0].o)))->F_lastTime));
	if ((longCompare(temp0, ((jlong)((arc_util_Timekeeper *) NULL_CHECK((frame[0].o)))->F_intervalMs))) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_util_Timekeeper_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timekeeper:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((arc_util_Timekeeper *) NULL_CHECK(sp[0].o))->F_lastTime = temp0;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Timekeeper[] {
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
	(void *) M_arc_util_Timekeeper_poll_R_boolean,
	(void *) M_arc_util_Timekeeper_get_R_boolean,
	(void *) M_arc_util_Timekeeper_reset,
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
	{ "poll", "()Z" },
	{ "get", "()Z" },
	{ "reset", "()V" },
};

static FieldMetadata fields[] {
	{ "intervalMs", &class_long, offsetof(arc_util_Timekeeper, F_intervalMs), "J", 18 },
	{ "lastTime", &class_long, offsetof(arc_util_Timekeeper, F_lastTime), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Timekeeper_long, 0, "(J)V", 0 },
	{ "ofMillis", (intptr_t) SM_arc_util_Timekeeper_ofMillis_long_R_arc_util_Timekeeper, 0, "(J)Larc/util/Timekeeper;", 9 },
	{ "ofTicks", (intptr_t) SM_arc_util_Timekeeper_ofTicks_float_R_arc_util_Timekeeper, 0, "(F)Larc/util/Timekeeper;", 9 },
	{ "ofSeconds", (intptr_t) SM_arc_util_Timekeeper_ofSeconds_float_R_arc_util_Timekeeper, 0, "(F)Larc/util/Timekeeper;", 9 },
	{ "poll", (intptr_t) M_arc_util_Timekeeper_poll_R_boolean, VTABLE_arc_util_Timekeeper_poll_R_boolean, "()Z", 1 },
	{ "get", (intptr_t) M_arc_util_Timekeeper_get_R_boolean, VTABLE_arc_util_Timekeeper_get_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_arc_util_Timekeeper_reset, VTABLE_arc_util_Timekeeper_reset, "()V", 1 },
};

Class class_arc_util_Timekeeper{
		.nativeName = (intptr_t) "arc/util/Timekeeper",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Timekeeper),
		.classVtable = (intptr_t) vtable_arc_util_Timekeeper,
		.staticInitializer = (intptr_t) clinit_arc_util_Timekeeper,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Timekeeper,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Timekeeper = registerClass(&class_arc_util_Timekeeper);

}
