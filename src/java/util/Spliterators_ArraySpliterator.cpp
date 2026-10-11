#include "java/util/Spliterators_ArraySpliterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators.h"
#include "java/util/Spliterators_ArraySpliterator.h"
#include "java/util/Comparator.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/function/Consumer.h"

extern "C" {


void mark_java_util_Spliterators$ArraySpliterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$ArraySpliterator *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
}

void clinit_java_util_Spliterators$ArraySpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Spliterators$ArraySpliterator_Array1_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$ArraySpliterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$ArraySpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(913);
	init_java_util_Spliterators$ArraySpliterator_Array1_java_lang_Object_int_int_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i));
	LINE_NUMBER(914);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Spliterators$ArraySpliterator_Array1_java_lang_Object_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$ArraySpliterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$ArraySpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(925);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(926);
	((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[1].o);
	LINE_NUMBER(927);
	((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index = (frame[2].i);
	LINE_NUMBER(928);
	((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence = (frame[3].i);
	LINE_NUMBER(929);
	((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics = (((frame[4].i) | (64)) | (16384));
	LINE_NUMBER(930);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$ArraySpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$ArraySpliterator:trySplit", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(934);
	frame[1].i = ((jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) + ((jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence))) >> (jint(1))));
	LINE_NUMBER(935);
	if ((frame[1].i) < (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(936);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(937);
	clinit_java_util_Spliterators$ArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$ArraySpliterator);
	sp[1].o = (jobject)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = frame[1].i;
	sp[2].o = frame[0].o;
	jint temp1 = frame[2].i;
	((java_util_Spliterators$ArraySpliterator *) NULL_CHECK(sp[2].o))->F_index = temp1;
	init_java_util_Spliterators$ArraySpliterator_Array1_java_lang_Object_int_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, ((jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics));
	sp += 1;
	}
label_5:;
	LINE_NUMBER(935);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_java_util_Spliterators$ArraySpliterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$ArraySpliterator:forEachRemaining", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(944);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(945);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(946);
	sp[0].o = (jobject)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].o = sp[0].o;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	jint temp1 = (jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence;
	frame[4].i = temp1;
	if (temp0 < temp1) goto label_5;
	}
	{
	jint temp0 = (jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index;
	frame[3].i = temp0;
	if (temp0 < 0) goto label_5;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = frame[0].o;
	jint temp1 = frame[4].i;
	((java_util_Spliterators$ArraySpliterator *) NULL_CHECK(sp[0].o))->F_index = temp1;
	if (temp0 >= temp1) goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(948);
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	INST_IINC(3, 1);
	if ((frame[3].i) < (frame[4].i)) goto label_7;
	}
label_5:;
	LINE_NUMBER(950);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$ArraySpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$ArraySpliterator:tryAdvance", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(954);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(955);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(956);
	if (((jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index) < 0) goto label_3;
	}
	{
	if (((jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index) >= ((jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence)) goto label_3;
	}
	{
	LINE_NUMBER(957);
	sp[0].o = (jobject)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK(sp[1].o))->F_index;
	((java_util_Spliterators$ArraySpliterator *) NULL_CHECK(sp[1].o))->F_index = (temp0 + (jint(1)));
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(958);
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(959);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(961);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_Spliterators$ArraySpliterator_estimateSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$ArraySpliterator:estimateSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(965);
	popStackFrame(ctx);
	return (jlong((((jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence) - ((jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index))));
	}

	popStackFrame(ctx);
}

jint M_java_util_Spliterators$ArraySpliterator_characteristics_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$ArraySpliterator:characteristics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(969);
	popStackFrame(ctx);
	return ((jint)((java_util_Spliterators$ArraySpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$ArraySpliterator_getComparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$ArraySpliterator:getComparator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(974);
	jint temp0 = (jint)((func_java_util_Spliterators$ArraySpliterator_hasCharacteristics_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$ArraySpliterator_hasCharacteristics_int_R_boolean])(ctx, (frame[0].o), (jint(4)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(975);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(976);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$ArraySpliterator[] {
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
	(void *) M_java_util_Spliterators$ArraySpliterator_tryAdvance_java_util_function_Consumer_R_boolean,
	(void *) M_java_util_Spliterators$ArraySpliterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Spliterators$ArraySpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterators$ArraySpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_Spliterators$ArraySpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterators$ArraySpliterator_getComparator_R_java_util_Comparator,
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

static jclass interfaces[] { &class_java_util_Spliterator, };

static FieldMetadata fields[] {
	{ "array", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_Spliterators$ArraySpliterator, F_array), "[Ljava/lang/Object;", 18 },
	{ "index", &class_int, offsetof(java_util_Spliterators$ArraySpliterator, F_index), "I", 2 },
	{ "fence", &class_int, offsetof(java_util_Spliterators$ArraySpliterator, F_fence), "I", 18 },
	{ "characteristics", &class_int, offsetof(java_util_Spliterators$ArraySpliterator, F_characteristics), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$ArraySpliterator_Array1_java_lang_Object_int, 0, "([Ljava/lang/Object;I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Spliterators$ArraySpliterator_Array1_java_lang_Object_int_int_int, 0, "([Ljava/lang/Object;III)V", 1 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$ArraySpliterator_trySplit_R_java_util_Spliterator, VTABLE_java_util_Spliterators$ArraySpliterator_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$ArraySpliterator_forEachRemaining_java_util_function_Consumer, VTABLE_java_util_Spliterators$ArraySpliterator_forEachRemaining_java_util_function_Consumer, "(Ljava/util/function/Consumer;)V", 1 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$ArraySpliterator_tryAdvance_java_util_function_Consumer_R_boolean, VTABLE_java_util_Spliterators$ArraySpliterator_tryAdvance_java_util_function_Consumer_R_boolean, "(Ljava/util/function/Consumer;)Z", 1 },
	{ "estimateSize", (intptr_t) M_java_util_Spliterators$ArraySpliterator_estimateSize_R_long, VTABLE_java_util_Spliterators$ArraySpliterator_estimateSize_R_long, "()J", 1 },
	{ "characteristics", (intptr_t) M_java_util_Spliterators$ArraySpliterator_characteristics_R_int, VTABLE_java_util_Spliterators$ArraySpliterator_characteristics_R_int, "()I", 1 },
	{ "getComparator", (intptr_t) M_java_util_Spliterators$ArraySpliterator_getComparator_R_java_util_Comparator, VTABLE_java_util_Spliterators$ArraySpliterator_getComparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
};

Class class_java_util_Spliterators$ArraySpliterator{
		.nativeName = (intptr_t) "java/util/Spliterators$ArraySpliterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$ArraySpliterator),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$ArraySpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$ArraySpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$ArraySpliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Spliterators,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterators$ArraySpliterator = registerClass(&class_java_util_Spliterators$ArraySpliterator);

}

