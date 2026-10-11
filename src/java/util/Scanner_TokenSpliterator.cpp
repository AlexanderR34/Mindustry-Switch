#include "java/util/Scanner_TokenSpliterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Scanner.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Scanner_TokenSpliterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/Spliterators_AbstractSpliterator.h"
#include "java/util/function/Consumer.h"

extern "C" {


void mark_java_util_Scanner$TokenSpliterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Scanner$TokenSpliterator *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_Scanner$TokenSpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Spliterators$AbstractSpliterator(ctx);
}

void init_java_util_Scanner$TokenSpliterator_java_util_Scanner(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner$TokenSpliterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner$TokenSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2743);
	((java_util_Scanner$TokenSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(2744);
	init_java_util_Spliterators$AbstractSpliterator_long_int(ctx, (frame[0].o), (jlong(9223372036854775807ll)), (1296));
	LINE_NUMBER(2741);
	((java_util_Scanner$TokenSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedCount = (jint(-1));
	LINE_NUMBER(2746);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner$TokenSpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner$TokenSpliterator:tryAdvance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2750);
	if (((jint)((java_util_Scanner$TokenSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedCount) < 0) goto label_1;
	}
	{
	jint temp0 = (jint)((java_util_Scanner$TokenSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedCount;
	sp[0].o = (jobject)((java_util_Scanner$TokenSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(2751);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2754);
	sp[0].o = (jobject)((java_util_Scanner$TokenSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_Scanner_hasNext_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_hasNext_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2755);
	sp[0].o = (jobject)((java_util_Scanner$TokenSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_Scanner_next_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_next_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2756);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner$TokenSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	((java_util_Scanner$TokenSpliterator *) NULL_CHECK(sp[0].o))->F_expectedCount = ((jint)((java_util_Scanner *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(2757);
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(2758);
	jint temp0 = (jint)((java_util_Scanner$TokenSpliterator *) NULL_CHECK((frame[0].o)))->F_expectedCount;
	sp[0].o = (jobject)((java_util_Scanner$TokenSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_8;
	}
	{
	LINE_NUMBER(2759);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(2761);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(2763);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner$TokenSpliterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	((java_util_Scanner$TokenSpliterator *) NULL_CHECK(sp[0].o))->F_expectedCount = ((jint)((java_util_Scanner *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(2764);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Scanner$TokenSpliterator[] {
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
	(void *) M_java_util_Scanner$TokenSpliterator_tryAdvance_java_util_function_Consumer_R_boolean,
	(void *) M_java_util_Spliterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Spliterators$AbstractSpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterators$AbstractSpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_Spliterators$AbstractSpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterator_getComparator_R_java_util_Comparator,
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
};

static FieldMetadata fields[] {
	{ "expectedCount", &class_int, offsetof(java_util_Scanner$TokenSpliterator, F_expectedCount), "I", 0 },
	{ "this$0", &class_java_util_Scanner, offsetof(java_util_Scanner$TokenSpliterator, F_this$0), "Ljava/util/Scanner;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Scanner$TokenSpliterator_java_util_Scanner, 0, "(Ljava/util/Scanner;)V", 0 },
	{ "tryAdvance", (intptr_t) M_java_util_Scanner$TokenSpliterator_tryAdvance_java_util_function_Consumer_R_boolean, VTABLE_java_util_Scanner$TokenSpliterator_tryAdvance_java_util_function_Consumer_R_boolean, "(Ljava/util/function/Consumer;)Z", 1 },
};

Class class_java_util_Scanner$TokenSpliterator{
		.nativeName = (intptr_t) "java/util/Scanner$TokenSpliterator",
		.parentClass = (intptr_t) &class_java_util_Spliterators$AbstractSpliterator,
		.size = sizeof(java_util_Scanner$TokenSpliterator),
		.classVtable = (intptr_t) vtable_java_util_Scanner$TokenSpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_Scanner$TokenSpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Scanner$TokenSpliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Scanner,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Scanner$TokenSpliterator = registerClass(&class_java_util_Scanner$TokenSpliterator);

}

