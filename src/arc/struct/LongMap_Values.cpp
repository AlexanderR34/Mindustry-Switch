#include "arc/struct/LongMap_Values.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/struct/LongMap.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Iterable.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/LongMap_Values.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/struct/LongMap_MapIterator.h"

extern "C" {


void mark_arc_struct_LongMap$Values(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_LongMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_LongMap$Values *) object;
}

void clinit_arc_struct_LongMap$Values(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_LongMap$MapIterator(ctx);
}

void init_arc_struct_LongMap$Values_arc_struct_LongMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Values:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_LongMap$Values(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(649);
	init_arc_struct_LongMap$MapIterator_arc_struct_LongMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(650);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_LongMap$Values_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Values:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(653);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return ((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_LongMap$Values_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Values:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(658);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(659);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(661);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex) != (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_LongMap *) NULL_CHECK(sp[0].o))->F_zeroValue;
	frame[1].o = sp[0].o;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_LongMap *) NULL_CHECK(sp[0].o))->F_valueTable;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	}
label_6:;
	{
	LINE_NUMBER(665);
	((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(666);
	((func_arc_struct_LongMap$Values_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongMap$Values_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(667);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_LongMap$Values_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Values:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(671);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_LongMap$Values_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Values:toSeq", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(676);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	init_arc_struct_Seq_boolean_int(ctx, sp[0].o, temp0, ((jint)((arc_struct_LongMap *) NULL_CHECK(sp[1].o))->F_size));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(677);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_2;
	}
	{
	LINE_NUMBER(678);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_struct_LongMap$Values_next_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongMap$Values_next_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(679);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_LongMap$Values_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Values:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(647);
	M_arc_struct_LongMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_LongMap$Values_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Values:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(647);
	M_arc_struct_LongMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_struct_LongMap$Values;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method next
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_struct_LongMap$Values[] {
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
	(void *) M_arc_struct_LongMap$Values_reset,
	(void *) M_arc_struct_LongMap$MapIterator_findNextIndex,
	(void *) M_arc_struct_LongMap$Values_remove,
	(void *) M_arc_struct_LongMap$Values_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_LongMap$Values_hasNext_R_boolean,
	(void *) M_arc_struct_LongMap$Values_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_arc_struct_LongMap$Values_toSeq_R_arc_struct_Seq,
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
	{ "reset", "()V" },
	{ "findNextIndex", "()V" },
	{ "remove", "()V" },
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "toSeq", "()Larc/struct/Seq;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_java_util_Iterator, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_LongMap$Values_arc_struct_LongMap, 0, "(Larc/struct/LongMap;)V", 1 },
	{ "hasNext", (intptr_t) M_arc_struct_LongMap$Values_hasNext_R_boolean, VTABLE_arc_struct_LongMap$Values_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_arc_struct_LongMap$Values_next_R_java_lang_Object, VTABLE_arc_struct_LongMap$Values_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_LongMap$Values_iterator_R_java_util_Iterator, VTABLE_arc_struct_LongMap$Values_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_LongMap$Values_toSeq_R_arc_struct_Seq, VTABLE_arc_struct_LongMap$Values_toSeq_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "remove", (intptr_t) M_arc_struct_LongMap$Values_remove, VTABLE_arc_struct_LongMap$Values_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_arc_struct_LongMap$Values_reset, VTABLE_arc_struct_LongMap$Values_reset, "()V", 4161 },
};

Class class_arc_struct_LongMap$Values{
		.nativeName = (intptr_t) "arc/struct/LongMap$Values",
		.parentClass = (intptr_t) &class_arc_struct_LongMap$MapIterator,
		.size = sizeof(arc_struct_LongMap$Values),
		.classVtable = (intptr_t) vtable_arc_struct_LongMap$Values,
		.staticInitializer = (intptr_t) clinit_arc_struct_LongMap$Values,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_struct_LongMap$Values,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_LongMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_LongMap$Values = registerClass(&class_arc_struct_LongMap$Values);

}

