#include "arc/struct/Sort.h"
#include "arc/struct/ComparableTimSort.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "arc/struct/Sort.h"
#include "arc/util/Threads.h"
#include "java/lang/ThreadLocal.h"
#include "arc/struct/TimSort.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "arc/struct/Sort_invoke_arc_func_Prov_0.h"

extern "C" {

jobject SF_arc_struct_Sort_instance;

void mark_arc_struct_Sort(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_struct_Sort_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_struct_Sort_instance)->clazz)->markFunction)((jobject) SF_arc_struct_Sort_instance, mark, depth + 1);
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
	auto self = (arc_struct_Sort *) object;
	if (self->F_timSort)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timSort)->clazz)->markFunction)((jobject) self->F_timSort, mark, depth + 1);
	if (self->F_comparableTimSort)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comparableTimSort)->clazz)->markFunction)((jobject) self->F_comparableTimSort, mark, depth + 1);
}

void init_arc_struct_Sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Sort:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Sort(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_Sort_instance_R_arc_struct_Sort(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Sort:instance", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Sort(ctx);
	{
	LINE_NUMBER(36);
	clinit_arc_struct_Sort(ctx);
	sp[0].o = (jobject)SF_arc_struct_Sort_instance;
	sp[0].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_struct_Sort, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_arc_struct_Sort_sort_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Sort:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_ComparableTimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ComparableTimSort);
	init_arc_struct_ComparableTimSort(ctx, sp[1].o);
	((arc_struct_Sort *) NULL_CHECK(sp[0].o))->F_comparableTimSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Sort_sort_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Sort:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_ComparableTimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ComparableTimSort);
	init_arc_struct_ComparableTimSort(ctx, sp[1].o);
	((arc_struct_Sort *) NULL_CHECK(sp[0].o))->F_comparableTimSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	((func_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int])(ctx, sp[0].o, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Sort_sort_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Sort:sort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_ComparableTimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ComparableTimSort);
	init_arc_struct_ComparableTimSort(ctx, sp[1].o);
	((arc_struct_Sort *) NULL_CHECK(sp[0].o))->F_comparableTimSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_comparableTimSort;
	((func_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Sort_sort_arc_struct_Seq_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Sort:sort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_TimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_TimSort);
	init_arc_struct_TimSort(ctx, sp[1].o);
	((arc_struct_Sort *) NULL_CHECK(sp[0].o))->F_timSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].o), (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Sort:sort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_TimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_TimSort);
	init_arc_struct_TimSort(ctx, sp[1].o);
	((arc_struct_Sort *) NULL_CHECK(sp[0].o))->F_timSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	((func_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Sort:sort", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_TimSort(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_TimSort);
	init_arc_struct_TimSort(ctx, sp[1].o);
	((arc_struct_Sort *) NULL_CHECK(sp[0].o))->F_timSort = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_struct_Sort *) NULL_CHECK((frame[0].o)))->F_timSort;
	((func_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_struct_Sort(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Sort:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Sort(ctx);
	{
	LINE_NUMBER(29);
	{ /* InvokeDynamic */
		clinit_arc_struct_Sort_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_struct_Sort_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_struct_Sort_invoke_arc_func_Prov_0);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Threads_local_arc_func_Prov_R_java_lang_ThreadLocal(ctx, sp[0].o);
	clinit_arc_struct_Sort(ctx);
	SF_arc_struct_Sort_instance = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_Sort[] {
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
	(void *) M_arc_struct_Sort_sort_arc_struct_Seq,
	(void *) M_arc_struct_Sort_sort_Array1_java_lang_Object,
	(void *) M_arc_struct_Sort_sort_Array1_java_lang_Object_int_int,
	(void *) M_arc_struct_Sort_sort_arc_struct_Seq_java_util_Comparator,
	(void *) M_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator,
	(void *) M_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int,
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
	{ "sort", "(Larc/struct/Seq;)V" },
	{ "sort", "([Ljava/lang/Object;)V" },
	{ "sort", "([Ljava/lang/Object;II)V" },
	{ "sort", "(Larc/struct/Seq;Ljava/util/Comparator;)V" },
	{ "sort", "([Ljava/lang/Object;Ljava/util/Comparator;)V" },
	{ "sort", "([Ljava/lang/Object;Ljava/util/Comparator;II)V" },
};

static FieldMetadata fields[] {
	{ "instance", &class_java_lang_ThreadLocal, (intptr_t) &SF_arc_struct_Sort_instance, "Ljava/lang/ThreadLocal;", 10 },
	{ "timSort", &class_arc_struct_TimSort, offsetof(arc_struct_Sort, F_timSort), "Larc/struct/TimSort;", 2 },
	{ "comparableTimSort", &class_arc_struct_ComparableTimSort, offsetof(arc_struct_Sort, F_comparableTimSort), "Larc/struct/ComparableTimSort;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_Sort, 0, "()V", 1 },
	{ "instance", (intptr_t) SM_arc_struct_Sort_instance_R_arc_struct_Sort, 0, "()Larc/struct/Sort;", 9 },
	{ "sort", (intptr_t) M_arc_struct_Sort_sort_arc_struct_Seq, VTABLE_arc_struct_Sort_sort_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "sort", (intptr_t) M_arc_struct_Sort_sort_Array1_java_lang_Object, VTABLE_arc_struct_Sort_sort_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 1 },
	{ "sort", (intptr_t) M_arc_struct_Sort_sort_Array1_java_lang_Object_int_int, VTABLE_arc_struct_Sort_sort_Array1_java_lang_Object_int_int, "([Ljava/lang/Object;II)V", 1 },
	{ "sort", (intptr_t) M_arc_struct_Sort_sort_arc_struct_Seq_java_util_Comparator, VTABLE_arc_struct_Sort_sort_arc_struct_Seq_java_util_Comparator, "(Larc/struct/Seq;Ljava/util/Comparator;)V", 1 },
	{ "sort", (intptr_t) M_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator, VTABLE_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator, "([Ljava/lang/Object;Ljava/util/Comparator;)V", 1 },
	{ "sort", (intptr_t) M_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int, VTABLE_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int, "([Ljava/lang/Object;Ljava/util/Comparator;II)V", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_struct_Sort, 0, "()V", 8 },
};

Class class_arc_struct_Sort{
		.nativeName = (intptr_t) "arc/struct/Sort",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_Sort),
		.classVtable = (intptr_t) vtable_arc_struct_Sort,
		.staticInitializer = (intptr_t) clinit_arc_struct_Sort,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_Sort,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_Sort = registerClass(&class_arc_struct_Sort);

}
