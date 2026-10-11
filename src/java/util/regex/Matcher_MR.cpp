#include "java/util/regex/Matcher_MR.h"
#include "java/lang/Object.h"
#include "java/util/regex/MatchResult.h"
#include "java/util/regex/Matcher_MR.h"
#include "regexodus/Matcher.h"
#include "java/lang/String.h"
#include "java/util/regex/Matcher.h"

extern "C" {


void mark_java_util_regex_Matcher$MR(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_regex_Matcher$MR *) object;
	if (self->F_m)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_m)->clazz)->markFunction)((jobject) self->F_m, mark, depth + 1);
}

void clinit_java_util_regex_Matcher$MR(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_regex_Matcher$MR_regexodus_Matcher(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher$MR:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_regex_Matcher$MR(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((java_util_regex_Matcher$MR *) NULL_CHECK((frame[0].o)))->F_m = (jref) (frame[1].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher$MR_start_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher$MR:start", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((java_util_regex_Matcher$MR *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_regexodus_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_start_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher$MR_start_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher$MR:start", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((java_util_regex_Matcher$MR *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_regexodus_Matcher_start_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_start_int_R_int])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher$MR_start_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher$MR:start", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((java_util_regex_Matcher$MR *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_regexodus_Matcher_start_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_start_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher$MR_end_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher$MR:end", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((java_util_regex_Matcher$MR *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_regexodus_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_end_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher$MR_end_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher$MR:end", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((java_util_regex_Matcher$MR *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_regexodus_Matcher_end_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_end_int_R_int])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher$MR_end_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher$MR:end", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((java_util_regex_Matcher$MR *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_regexodus_Matcher_end_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_end_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher$MR_group_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher$MR:group", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((java_util_regex_Matcher$MR *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_regexodus_Matcher_group_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_group_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher$MR_group_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher$MR:group", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((java_util_regex_Matcher$MR *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_regexodus_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher$MR_group_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher$MR:group", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((java_util_regex_Matcher$MR *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_regexodus_Matcher_group_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_group_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher$MR_groupCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher$MR:groupCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((java_util_regex_Matcher$MR *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_regexodus_Matcher_groupCount_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_groupCount_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_regex_Matcher$MR[] {
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
	(void *) M_java_util_regex_Matcher$MR_start_R_int,
	(void *) M_java_util_regex_Matcher$MR_start_int_R_int,
	(void *) M_java_util_regex_Matcher$MR_start_java_lang_String_R_int,
	(void *) M_java_util_regex_Matcher$MR_end_R_int,
	(void *) M_java_util_regex_Matcher$MR_end_int_R_int,
	(void *) M_java_util_regex_Matcher$MR_end_java_lang_String_R_int,
	(void *) M_java_util_regex_Matcher$MR_group_R_java_lang_String,
	(void *) M_java_util_regex_Matcher$MR_group_int_R_java_lang_String,
	(void *) M_java_util_regex_Matcher$MR_group_java_lang_String_R_java_lang_String,
	(void *) M_java_util_regex_Matcher$MR_groupCount_R_int,
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
	{ "start", "()I" },
	{ "start", "(I)I" },
	{ "start", "(Ljava/lang/String;)I" },
	{ "end", "()I" },
	{ "end", "(I)I" },
	{ "end", "(Ljava/lang/String;)I" },
	{ "group", "()Ljava/lang/String;" },
	{ "group", "(I)Ljava/lang/String;" },
	{ "group", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "groupCount", "()I" },
};

static jclass interfaces[] { &class_java_util_regex_MatchResult, };

static FieldMetadata fields[] {
	{ "m", &class_regexodus_Matcher, offsetof(java_util_regex_Matcher$MR, F_m), "Lregexodus/Matcher;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_regex_Matcher$MR_regexodus_Matcher, 0, "(Lregexodus/Matcher;)V", 0 },
	{ "start", (intptr_t) M_java_util_regex_Matcher$MR_start_R_int, VTABLE_java_util_regex_Matcher$MR_start_R_int, "()I", 1 },
	{ "start", (intptr_t) M_java_util_regex_Matcher$MR_start_int_R_int, VTABLE_java_util_regex_Matcher$MR_start_int_R_int, "(I)I", 1 },
	{ "start", (intptr_t) M_java_util_regex_Matcher$MR_start_java_lang_String_R_int, VTABLE_java_util_regex_Matcher$MR_start_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "end", (intptr_t) M_java_util_regex_Matcher$MR_end_R_int, VTABLE_java_util_regex_Matcher$MR_end_R_int, "()I", 1 },
	{ "end", (intptr_t) M_java_util_regex_Matcher$MR_end_int_R_int, VTABLE_java_util_regex_Matcher$MR_end_int_R_int, "(I)I", 1 },
	{ "end", (intptr_t) M_java_util_regex_Matcher$MR_end_java_lang_String_R_int, VTABLE_java_util_regex_Matcher$MR_end_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "group", (intptr_t) M_java_util_regex_Matcher$MR_group_R_java_lang_String, VTABLE_java_util_regex_Matcher$MR_group_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "group", (intptr_t) M_java_util_regex_Matcher$MR_group_int_R_java_lang_String, VTABLE_java_util_regex_Matcher$MR_group_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "group", (intptr_t) M_java_util_regex_Matcher$MR_group_java_lang_String_R_java_lang_String, VTABLE_java_util_regex_Matcher$MR_group_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "groupCount", (intptr_t) M_java_util_regex_Matcher$MR_groupCount_R_int, VTABLE_java_util_regex_Matcher$MR_groupCount_R_int, "()I", 1 },
};

Class class_java_util_regex_Matcher$MR{
		.nativeName = (intptr_t) "java/util/regex/Matcher$MR",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_regex_Matcher$MR),
		.classVtable = (intptr_t) vtable_java_util_regex_Matcher$MR,
		.staticInitializer = (intptr_t) clinit_java_util_regex_Matcher$MR,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_regex_Matcher$MR,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_regex_Matcher,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_regex_Matcher$MR = registerClass(&class_java_util_regex_Matcher$MR);

}

