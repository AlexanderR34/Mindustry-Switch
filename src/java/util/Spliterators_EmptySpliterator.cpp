#include "java/util/Spliterators_EmptySpliterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators.h"
#include "java/util/Spliterators_EmptySpliterator.h"
#include "java/util/Spliterators_EmptySpliterator_OfInt.h"
#include "java/util/Spliterators_EmptySpliterator_OfLong.h"
#include "java/util/Objects.h"
#include "java/util/Spliterators_EmptySpliterator_OfRef.h"
#include "java/util/Spliterators_EmptySpliterator_OfDouble.h"

extern "C" {


void mark_java_util_Spliterators$EmptySpliterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$EmptySpliterator *) object;
}

void clinit_java_util_Spliterators$EmptySpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Spliterators$EmptySpliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$EmptySpliterator:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$EmptySpliterator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(838);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$EmptySpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$EmptySpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(841);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$EmptySpliterator_tryAdvance_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$EmptySpliterator:tryAdvance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(846);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$EmptySpliterator_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$EmptySpliterator:forEachRemaining", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(851);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_util_Spliterators$EmptySpliterator_estimateSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$EmptySpliterator:estimateSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(854);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jint M_java_util_Spliterators$EmptySpliterator_characteristics_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$EmptySpliterator:characteristics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(858);
	popStackFrame(ctx);
	return (16448);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$EmptySpliterator[] {
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
	(void *) M_java_util_Spliterators$EmptySpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterators$EmptySpliterator_tryAdvance_java_lang_Object_R_boolean,
	(void *) M_java_util_Spliterators$EmptySpliterator_forEachRemaining_java_lang_Object,
	(void *) M_java_util_Spliterators$EmptySpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterators$EmptySpliterator_characteristics_R_int,
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
	{ "trySplit", "()Ljava/util/Spliterator;" },
	{ "tryAdvance", "(Ljava/lang/Object;)Z" },
	{ "forEachRemaining", "(Ljava/lang/Object;)V" },
	{ "estimateSize", "()J" },
	{ "characteristics", "()I" },
};

static jclass innerClasses[] {
	&class_java_util_Spliterators$EmptySpliterator$OfDouble,
	&class_java_util_Spliterators$EmptySpliterator$OfLong,
	&class_java_util_Spliterators$EmptySpliterator$OfInt,
	&class_java_util_Spliterators$EmptySpliterator$OfRef,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$EmptySpliterator, 0, "()V", 0 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$EmptySpliterator_trySplit_R_java_util_Spliterator, VTABLE_java_util_Spliterators$EmptySpliterator_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 1 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$EmptySpliterator_tryAdvance_java_lang_Object_R_boolean, VTABLE_java_util_Spliterators$EmptySpliterator_tryAdvance_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$EmptySpliterator_forEachRemaining_java_lang_Object, VTABLE_java_util_Spliterators$EmptySpliterator_forEachRemaining_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "estimateSize", (intptr_t) M_java_util_Spliterators$EmptySpliterator_estimateSize_R_long, VTABLE_java_util_Spliterators$EmptySpliterator_estimateSize_R_long, "()J", 1 },
	{ "characteristics", (intptr_t) M_java_util_Spliterators$EmptySpliterator_characteristics_R_int, VTABLE_java_util_Spliterators$EmptySpliterator_characteristics_R_int, "()I", 1 },
};

Class class_java_util_Spliterators$EmptySpliterator{
		.nativeName = (intptr_t) "java/util/Spliterators$EmptySpliterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$EmptySpliterator),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$EmptySpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$EmptySpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$EmptySpliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Spliterators,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1056,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterators$EmptySpliterator = registerClass(&class_java_util_Spliterators$EmptySpliterator);

}

