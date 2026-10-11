#include "arc/util/Ratekeeper.h"
#include "java/lang/Object.h"
#include "arc/util/Time.h"
#include "arc/util/Ratekeeper.h"

extern "C" {


void mark_arc_util_Ratekeeper(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Ratekeeper *) object;
}

void clinit_arc_util_Ratekeeper(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Ratekeeper(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Ratekeeper:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Ratekeeper(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(4);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_Ratekeeper_allow_long_int_R_boolean(jcontext ctx, jobject self, jlong param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Ratekeeper:allow", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(14);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((arc_util_Ratekeeper *) NULL_CHECK((frame[0].o)))->F_lastTime));
	if ((longCompare(temp0, (frame[1].l))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(15);
	((arc_util_Ratekeeper *) NULL_CHECK((frame[0].o)))->F_occurences = (jint(0));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((arc_util_Ratekeeper *) NULL_CHECK(sp[0].o))->F_lastTime = temp0;
	}
label_1:;
	{
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	((arc_util_Ratekeeper *) NULL_CHECK(sp[0].o))->F_occurences = (((jint)((arc_util_Ratekeeper *) NULL_CHECK(sp[0].o))->F_occurences) + (jint(1)));
	LINE_NUMBER(20);
	if (((jint)((arc_util_Ratekeeper *) NULL_CHECK((frame[0].o)))->F_occurences) > (frame[3].i)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_util_Ratekeeper_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Ratekeeper:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	((arc_util_Ratekeeper *) NULL_CHECK((frame[0].o)))->F_occurences = (jint(0));
	LINE_NUMBER(25);
	((arc_util_Ratekeeper *) NULL_CHECK((frame[0].o)))->F_lastTime = (jlong(0));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Ratekeeper[] {
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
	(void *) M_arc_util_Ratekeeper_allow_long_int_R_boolean,
	(void *) M_arc_util_Ratekeeper_reset,
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
	{ "allow", "(JI)Z" },
	{ "reset", "()V" },
};

static FieldMetadata fields[] {
	{ "occurences", &class_int, offsetof(arc_util_Ratekeeper, F_occurences), "I", 1 },
	{ "lastTime", &class_long, offsetof(arc_util_Ratekeeper, F_lastTime), "J", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Ratekeeper, 0, "()V", 1 },
	{ "allow", (intptr_t) M_arc_util_Ratekeeper_allow_long_int_R_boolean, VTABLE_arc_util_Ratekeeper_allow_long_int_R_boolean, "(JI)Z", 1 },
	{ "reset", (intptr_t) M_arc_util_Ratekeeper_reset, VTABLE_arc_util_Ratekeeper_reset, "()V", 1 },
};

Class class_arc_util_Ratekeeper{
		.nativeName = (intptr_t) "arc/util/Ratekeeper",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Ratekeeper),
		.classVtable = (intptr_t) vtable_arc_util_Ratekeeper,
		.staticInitializer = (intptr_t) clinit_arc_util_Ratekeeper,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Ratekeeper,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Ratekeeper = registerClass(&class_arc_util_Ratekeeper);

}
