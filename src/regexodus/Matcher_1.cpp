#include "regexodus/Matcher_1.h"
#include "regexodus/MatchResult.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "regexodus/MatchIterator.h"
#include "regexodus/Matcher.h"
#include "java/lang/String.h"
#include "java/util/Iterator.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/ArrayList.h"
#include "regexodus/Matcher_1.h"

extern "C" {


void mark_regexodus_Matcher$1(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Matcher$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_regexodus_Matcher$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_regexodus_Matcher$1_regexodus_Matcher_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(525);
	((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_val$options = (frame[2].i);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(526);
	((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_checked = (jint(0));
	LINE_NUMBER(527);
	((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_hasMore = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher$1_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher$1:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(531);
	if (((jint)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_checked) != 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_regexodus_Matcher$1_check(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return ((jint)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_hasMore);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher$1_next_R_regexodus_MatchResult(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher$1:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(537);
	if (((jint)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_checked) != 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_regexodus_Matcher$1_check(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(538);
	if (((jint)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_hasMore) != 0) goto label_2;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(539);
	((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_checked = (jint(0));
	LINE_NUMBER(540);
	sp[0].o = (jobject)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher$1_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher$1:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(544);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"remove() not supported on MatchIterator"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher$1_check(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher$1:check", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(548);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_regexodus_Matcher_find_int_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_regexodus_Matcher_find_int_R_boolean])(ctx, sp[1].o, ((jint)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_val$options));
	((regexodus_Matcher$1 *) NULL_CHECK(sp[0].o))->F_hasMore = temp0;
	LINE_NUMBER(549);
	((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_checked = (jint(1));
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher$1_count_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher$1:count", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(554);
	if (((jint)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_checked) != 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_regexodus_Matcher$1_check(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(555);
	if (((jint)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_hasMore) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(556);
	frame[1].i = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_regexodus_Matcher_find_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_find_int_R_boolean])(ctx, sp[0].o, ((jint)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_val$options));
	if (temp0 == 0) goto label_4;
	}
	INST_IINC(1, 1);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(558);
	((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_checked = (jint(0));
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher$1_asList_R_java_util_ArrayList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher$1:asList", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(564);
	if (((jint)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_checked) != 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_regexodus_Matcher$1_check(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(565);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[0].o, (16));
	frame[1].o = sp[0].o;
	LINE_NUMBER(566);
	if (((jint)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_hasMore) != 0) goto label_3;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(567);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_regexodus_Matcher_group_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_regexodus_Matcher_group_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_regexodus_Matcher_find_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_find_int_R_boolean])(ctx, sp[0].o, ((jint)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_val$options));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_regexodus_Matcher_group_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_regexodus_Matcher_group_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(569);
	((regexodus_Matcher$1 *) NULL_CHECK((frame[0].o)))->F_checked = (jint(0));
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher$1_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher$1:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((func_regexodus_Matcher$1_next_R_regexodus_MatchResult) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher$1_next_R_regexodus_MatchResult])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Matcher$1[] {
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
	(void *) M_regexodus_Matcher$1_hasNext_R_boolean,
	(void *) M_regexodus_Matcher$1_next_R_java_lang_Object,
	(void *) M_regexodus_Matcher$1_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_regexodus_Matcher$1_count_R_int,
	(void *) M_regexodus_Matcher$1_asList_R_java_util_ArrayList,
	(void *) M_regexodus_Matcher$1_next_R_regexodus_MatchResult,
	(void *) M_regexodus_Matcher$1_check,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "count", "()I" },
	{ "asList", "()Ljava/util/ArrayList;" },
	{ "next", "()Lregexodus/MatchResult;" },
	{ "check", "()V" },
};

static jclass interfaces[] { &class_regexodus_MatchIterator, };

static FieldMetadata fields[] {
	{ "checked", &class_boolean, offsetof(regexodus_Matcher$1, F_checked), "Z", 2 },
	{ "hasMore", &class_boolean, offsetof(regexodus_Matcher$1, F_hasMore), "Z", 2 },
	{ "val$options", &class_int, offsetof(regexodus_Matcher$1, F_val$options), "I", 4112 },
	{ "this$0", &class_regexodus_Matcher, offsetof(regexodus_Matcher$1, F_this$0), "Lregexodus/Matcher;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Matcher$1_regexodus_Matcher_int, 0, "(Lregexodus/Matcher;I)V", 0 },
	{ "hasNext", (intptr_t) M_regexodus_Matcher$1_hasNext_R_boolean, VTABLE_regexodus_Matcher$1_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_regexodus_Matcher$1_next_R_regexodus_MatchResult, VTABLE_regexodus_Matcher$1_next_R_regexodus_MatchResult, "()Lregexodus/MatchResult;", 1 },
	{ "remove", (intptr_t) M_regexodus_Matcher$1_remove, VTABLE_regexodus_Matcher$1_remove, "()V", 1 },
	{ "check", (intptr_t) M_regexodus_Matcher$1_check, VTABLE_regexodus_Matcher$1_check, "()V", 2 },
	{ "count", (intptr_t) M_regexodus_Matcher$1_count_R_int, VTABLE_regexodus_Matcher$1_count_R_int, "()I", 1 },
	{ "asList", (intptr_t) M_regexodus_Matcher$1_asList_R_java_util_ArrayList, VTABLE_regexodus_Matcher$1_asList_R_java_util_ArrayList, "()Ljava/util/ArrayList;", 1 },
	{ "next", (intptr_t) M_regexodus_Matcher$1_next_R_java_lang_Object, VTABLE_regexodus_Matcher$1_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_regexodus_Matcher$1{
		.nativeName = (intptr_t) "regexodus/Matcher$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Matcher$1),
		.classVtable = (intptr_t) vtable_regexodus_Matcher$1,
		.staticInitializer = (intptr_t) clinit_regexodus_Matcher$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Matcher$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_regexodus_Matcher$1 = registerClass(&class_regexodus_Matcher$1);

}

