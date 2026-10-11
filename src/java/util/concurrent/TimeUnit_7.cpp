#include "java/util/concurrent/TimeUnit_7.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/TimeUnit_1.h"
#include "java/lang/Enum.h"
#include "java/util/concurrent/TimeUnit_7.h"

extern "C" {


void mark_java_util_concurrent_TimeUnit$7(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_TimeUnit(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_TimeUnit$7 *) object;
}

void clinit_java_util_concurrent_TimeUnit$7(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_TimeUnit(ctx);
}

void init_java_util_concurrent_TimeUnit$7_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit$7:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_TimeUnit$7(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(165);
	init_java_util_concurrent_TimeUnit_java_lang_String_int_java_util_concurrent_TimeUnit$1(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit$7_toNanos_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit$7:toNanos", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(166);
	jlong temp0 = (jlong)SM_java_util_concurrent_TimeUnit_x_long_long_long_R_long(ctx, (frame[1].l), (jlong(86400000000000ll)), (jlong(106751ll)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit$7_toMicros_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit$7:toMicros", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(167);
	jlong temp0 = (jlong)SM_java_util_concurrent_TimeUnit_x_long_long_long_R_long(ctx, (frame[1].l), (jlong(86400000000ll)), (jlong(106751991ll)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit$7_toMillis_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit$7:toMillis", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(168);
	jlong temp0 = (jlong)SM_java_util_concurrent_TimeUnit_x_long_long_long_R_long(ctx, (frame[1].l), (jlong(86400000ll)), (jlong(106751991167ll)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit$7_toSeconds_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit$7:toSeconds", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(169);
	jlong temp0 = (jlong)SM_java_util_concurrent_TimeUnit_x_long_long_long_R_long(ctx, (frame[1].l), (jlong(86400ll)), (jlong(106751991167300ll)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit$7_toMinutes_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit$7:toMinutes", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(170);
	jlong temp0 = (jlong)SM_java_util_concurrent_TimeUnit_x_long_long_long_R_long(ctx, (frame[1].l), (jlong(1440ll)), (jlong(6405119470038038ll)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit$7_toHours_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit$7:toHours", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(171);
	jlong temp0 = (jlong)SM_java_util_concurrent_TimeUnit_x_long_long_long_R_long(ctx, (frame[1].l), (jlong(24ll)), (jlong(384307168202282325ll)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit$7_toDays_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit$7:toDays", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (frame[1].l);
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit$7_convert_long_java_util_concurrent_TimeUnit_R_long(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit$7:convert", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(173);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toDays_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toDays_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_TimeUnit$7_excessNanos_long_long_R_int(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit$7:excessNanos", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_TimeUnit$7[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_TimeUnit$7_convert_long_java_util_concurrent_TimeUnit_R_long,
	(void *) M_java_util_concurrent_TimeUnit$7_toNanos_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit$7_toMicros_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit$7_toMillis_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit$7_toSeconds_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit$7_toMinutes_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit$7_toHours_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit$7_toDays_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit$7_excessNanos_long_long_R_int,
	(void *) M_java_util_concurrent_TimeUnit_timedWait_java_lang_Object_long,
	(void *) M_java_util_concurrent_TimeUnit_timedJoin_java_lang_Thread_long,
	(void *) M_java_util_concurrent_TimeUnit_sleep_long,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "convert", "(JLjava/util/concurrent/TimeUnit;)J" },
	{ "toNanos", "(J)J" },
	{ "toMicros", "(J)J" },
	{ "toMillis", "(J)J" },
	{ "toSeconds", "(J)J" },
	{ "toMinutes", "(J)J" },
	{ "toHours", "(J)J" },
	{ "toDays", "(J)J" },
	{ "excessNanos", "(JJ)I" },
	{ "timedWait", "(Ljava/lang/Object;J)V" },
	{ "timedJoin", "(Ljava/lang/Thread;J)V" },
	{ "sleep", "(J)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_TimeUnit$7_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 0 },
	{ "toNanos", (intptr_t) M_java_util_concurrent_TimeUnit$7_toNanos_long_R_long, VTABLE_java_util_concurrent_TimeUnit$7_toNanos_long_R_long, "(J)J", 1 },
	{ "toMicros", (intptr_t) M_java_util_concurrent_TimeUnit$7_toMicros_long_R_long, VTABLE_java_util_concurrent_TimeUnit$7_toMicros_long_R_long, "(J)J", 1 },
	{ "toMillis", (intptr_t) M_java_util_concurrent_TimeUnit$7_toMillis_long_R_long, VTABLE_java_util_concurrent_TimeUnit$7_toMillis_long_R_long, "(J)J", 1 },
	{ "toSeconds", (intptr_t) M_java_util_concurrent_TimeUnit$7_toSeconds_long_R_long, VTABLE_java_util_concurrent_TimeUnit$7_toSeconds_long_R_long, "(J)J", 1 },
	{ "toMinutes", (intptr_t) M_java_util_concurrent_TimeUnit$7_toMinutes_long_R_long, VTABLE_java_util_concurrent_TimeUnit$7_toMinutes_long_R_long, "(J)J", 1 },
	{ "toHours", (intptr_t) M_java_util_concurrent_TimeUnit$7_toHours_long_R_long, VTABLE_java_util_concurrent_TimeUnit$7_toHours_long_R_long, "(J)J", 1 },
	{ "toDays", (intptr_t) M_java_util_concurrent_TimeUnit$7_toDays_long_R_long, VTABLE_java_util_concurrent_TimeUnit$7_toDays_long_R_long, "(J)J", 1 },
	{ "convert", (intptr_t) M_java_util_concurrent_TimeUnit$7_convert_long_java_util_concurrent_TimeUnit_R_long, VTABLE_java_util_concurrent_TimeUnit$7_convert_long_java_util_concurrent_TimeUnit_R_long, "(JLjava/util/concurrent/TimeUnit;)J", 1 },
	{ "excessNanos", (intptr_t) M_java_util_concurrent_TimeUnit$7_excessNanos_long_long_R_int, VTABLE_java_util_concurrent_TimeUnit$7_excessNanos_long_long_R_int, "(JJ)I", 0 },
};

Class class_java_util_concurrent_TimeUnit$7{
		.nativeName = (intptr_t) "java/util/concurrent/TimeUnit$7",
		.parentClass = (intptr_t) &class_java_util_concurrent_TimeUnit,
		.size = sizeof(java_util_concurrent_TimeUnit$7),
		.classVtable = (intptr_t) vtable_java_util_concurrent_TimeUnit$7,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_TimeUnit$7,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_TimeUnit$7,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_util_concurrent_TimeUnit$7 = registerClass(&class_java_util_concurrent_TimeUnit$7);

}

