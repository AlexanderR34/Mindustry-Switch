#include "java/util/Scanner_FindSpliterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Scanner.h"
#include "java/util/regex/MatchResult.h"
#include "java/lang/Object.h"
#include "java/util/regex/Pattern.h"
#include "java/nio/Buffer.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/Spliterators_AbstractSpliterator.h"
#include "java/nio/CharBuffer.h"
#include "java/util/function/Consumer.h"
#include "java/util/regex/Matcher.h"
#include "java/util/Scanner_FindSpliterator.h"

extern "C" {


void mark_java_util_Scanner$FindSpliterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Spliterators$AbstractSpliterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Scanner$FindSpliterator *) object;
	if (self->F_pattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pattern)->clazz)->markFunction)((jobject) self->F_pattern, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_Scanner$FindSpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Spliterators$AbstractSpliterator(ctx);
}

void init_java_util_Scanner$FindSpliterator_java_util_Scanner_java_util_regex_Pattern(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner$FindSpliterator:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner$FindSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2854);
	((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(2855);
	init_java_util_Spliterators$AbstractSpliterator_long_int(ctx, (frame[0].o), (jlong(9223372036854775807ll)), (1296));
	LINE_NUMBER(2851);
	((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedCount = (jint(-1));
	LINE_NUMBER(2852);
	((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_advance = (jint(0));
	LINE_NUMBER(2857);
	((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_pattern = (jref) (frame[2].o);
	LINE_NUMBER(2858);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner$FindSpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner$FindSpliterator:tryAdvance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2862);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_java_util_Scanner_access$000_java_util_Scanner(ctx, sp[0].o);
	LINE_NUMBER(2863);
	if (((jint)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedCount) < 0) goto label_2;
	}
	{
	LINE_NUMBER(2864);
	jint temp0 = (jint)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedCount;
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_4;
	}
	{
	LINE_NUMBER(2865);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2869);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_Scanner_access$102_java_util_Scanner_boolean_R_boolean(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(2870);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_Scanner_access$200_java_util_Scanner_R_java_util_regex_Matcher(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2871);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	((java_util_Scanner$FindSpliterator *) NULL_CHECK(sp[0].o))->F_expectedCount = ((jint)((java_util_Scanner *) NULL_CHECK(sp[1].o))->F_modCount);
	}
label_4:;
	{
	LINE_NUMBER(2876);
	jint temp0 = (jint)M_java_util_Scanner$FindSpliterator_nextInBuffer_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(2877);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)SM_java_util_Scanner_access$200_java_util_Scanner_R_java_util_regex_Matcher(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_util_regex_Matcher_toMatchResult_R_java_util_regex_MatchResult) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_toMatchResult_R_java_util_regex_MatchResult])(ctx, sp[1].o);
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2878);
	jint temp0 = (jint)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedCount;
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_11;
	}
	{
	LINE_NUMBER(2879);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(2881);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(2883);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_Scanner_access$300_java_util_Scanner_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(2884);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_java_util_Scanner_access$400_java_util_Scanner(ctx, sp[0].o);
	goto label_4;
	}
label_13:;
	{
	LINE_NUMBER(2886);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner$FindSpliterator_nextInBuffer_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner$FindSpliterator:nextInBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2892);
	if (((jint)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_advance) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2893);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_Scanner_access$500_java_util_Scanner_R_int(ctx, sp[0].o);
	jint temp1 = temp0 + (jint(1));
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_Scanner_access$600_java_util_Scanner_R_java_nio_CharBuffer(ctx, sp[0].o);
	jint temp2 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[0].o);
	if (temp1 <= temp2) goto label_3;
	}
	{
	LINE_NUMBER(2894);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_Scanner_access$700_java_util_Scanner_R_boolean(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(2895);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_Scanner_access$302_java_util_Scanner_boolean_R_boolean(ctx, sp[0].o, (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(2896);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2898);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_Scanner_access$508_java_util_Scanner_R_int(ctx, sp[0].o);
	LINE_NUMBER(2899);
	((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_advance = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2901);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_Scanner_access$200_java_util_Scanner_R_java_util_regex_Matcher(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_Scanner_access$500_java_util_Scanner_R_int(ctx, sp[1].o);
	sp[1].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)SM_java_util_Scanner_access$600_java_util_Scanner_R_java_nio_CharBuffer(ctx, sp[1].o);
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(2902);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_Scanner_access$200_java_util_Scanner_R_java_util_regex_Matcher(ctx, sp[0].o);
	jint temp2 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, sp[0].o);
	if (temp2 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_Scanner_access$200_java_util_Scanner_R_java_util_regex_Matcher(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_regex_Matcher_hitEnd_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_hitEnd_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_Scanner_access$700_java_util_Scanner_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(2904);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)SM_java_util_Scanner_access$200_java_util_Scanner_R_java_util_regex_Matcher(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_java_util_Scanner_access$502_java_util_Scanner_int_R_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(2905);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)SM_java_util_Scanner_access$200_java_util_Scanner_R_java_util_regex_Matcher(ctx, sp[1].o);
	jint temp2 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)SM_java_util_Scanner_access$500_java_util_Scanner_R_int(ctx, sp[1].o);
	sp += 1;
	if (temp2 != temp3) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	((java_util_Scanner$FindSpliterator *) NULL_CHECK(sp[0].o))->F_advance = sp[1].i;
	LINE_NUMBER(2906);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(2908);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_Scanner_access$700_java_util_Scanner_R_boolean(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(2909);
	sp[0].o = (jobject)((java_util_Scanner$FindSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_Scanner_access$302_java_util_Scanner_boolean_R_boolean(ctx, sp[0].o, (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(2910);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Scanner$FindSpliterator[] {
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
	(void *) M_java_util_Scanner$FindSpliterator_tryAdvance_java_util_function_Consumer_R_boolean,
	(void *) M_java_util_Spliterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Spliterators$AbstractSpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterators$AbstractSpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_Spliterators$AbstractSpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterator_getComparator_R_java_util_Comparator,
	(void *) M_java_util_Scanner$FindSpliterator_nextInBuffer_R_boolean,
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
	{ "tryAdvance", "(Ljava/util/function/Consumer;)Z" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "trySplit", "()Ljava/util/Spliterator;" },
	{ "estimateSize", "()J" },
	{ "getExactSizeIfKnown", "()J" },
	{ "characteristics", "()I" },
	{ "hasCharacteristics", "(I)Z" },
	{ "getComparator", "()Ljava/util/Comparator;" },
	{ "nextInBuffer", "()Z" },
};

static FieldMetadata fields[] {
	{ "pattern", &class_java_util_regex_Pattern, offsetof(java_util_Scanner$FindSpliterator, F_pattern), "Ljava/util/regex/Pattern;", 16 },
	{ "expectedCount", &class_int, offsetof(java_util_Scanner$FindSpliterator, F_expectedCount), "I", 0 },
	{ "advance", &class_boolean, offsetof(java_util_Scanner$FindSpliterator, F_advance), "Z", 2 },
	{ "this$0", &class_java_util_Scanner, offsetof(java_util_Scanner$FindSpliterator, F_this$0), "Ljava/util/Scanner;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Scanner$FindSpliterator_java_util_Scanner_java_util_regex_Pattern, 0, "(Ljava/util/Scanner;Ljava/util/regex/Pattern;)V", 0 },
	{ "tryAdvance", (intptr_t) M_java_util_Scanner$FindSpliterator_tryAdvance_java_util_function_Consumer_R_boolean, VTABLE_java_util_Scanner$FindSpliterator_tryAdvance_java_util_function_Consumer_R_boolean, "(Ljava/util/function/Consumer;)Z", 1 },
	{ "nextInBuffer", (intptr_t) M_java_util_Scanner$FindSpliterator_nextInBuffer_R_boolean, VTABLE_java_util_Scanner$FindSpliterator_nextInBuffer_R_boolean, "()Z", 2 },
};

Class class_java_util_Scanner$FindSpliterator{
		.nativeName = (intptr_t) "java/util/Scanner$FindSpliterator",
		.parentClass = (intptr_t) &class_java_util_Spliterators$AbstractSpliterator,
		.size = sizeof(java_util_Scanner$FindSpliterator),
		.classVtable = (intptr_t) vtable_java_util_Scanner$FindSpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_Scanner$FindSpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Scanner$FindSpliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Scanner,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Scanner$FindSpliterator = registerClass(&class_java_util_Scanner$FindSpliterator);

}

