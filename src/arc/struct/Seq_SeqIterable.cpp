#include "arc/struct/Seq_SeqIterable.h"
#include "java/lang/Object.h"
#include "arc/struct/Seq_SeqIterable.h"
#include "java/util/Iterator.h"
#include "arc/struct/Seq_SeqIterable_SeqIterator.h"
#include "arc/struct/Seq.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_arc_struct_Seq$SeqIterable(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_Seq$SeqIterable *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
	if (self->F_iterator1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator1)->clazz)->markFunction)((jobject) self->F_iterator1, mark, depth + 1);
	if (self->F_iterator2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator2)->clazz)->markFunction)((jobject) self->F_iterator2, mark, depth + 1);
}

void clinit_arc_struct_Seq$SeqIterable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_Seq$SeqIterable_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq$SeqIterable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq$SeqIterable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1127);
	init_arc_struct_Seq$SeqIterable_arc_struct_Seq_boolean(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(1128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Seq$SeqIterable_arc_struct_Seq_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq$SeqIterable:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Seq$SeqIterable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1130);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1124);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq$SeqIterable$SeqIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq$SeqIterable$SeqIterator);
	init_arc_struct_Seq$SeqIterable$SeqIterator_arc_struct_Seq$SeqIterable(ctx, sp[1].o, (frame[0].o));
	((arc_struct_Seq$SeqIterable *) NULL_CHECK(sp[0].o))->F_iterator1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq$SeqIterable$SeqIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq$SeqIterable$SeqIterator);
	init_arc_struct_Seq$SeqIterable$SeqIterator_arc_struct_Seq$SeqIterable(ctx, sp[1].o, (frame[0].o));
	((arc_struct_Seq$SeqIterable *) NULL_CHECK(sp[0].o))->F_iterator2 = (jref) sp[1].o;
	LINE_NUMBER(1131);
	((arc_struct_Seq$SeqIterable *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[1].o);
	LINE_NUMBER(1132);
	((arc_struct_Seq$SeqIterable *) NULL_CHECK((frame[0].o)))->F_allowRemove = (frame[2].i);
	LINE_NUMBER(1133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Seq$SeqIterable_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Seq$SeqIterable:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1137);
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (((jint)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK(sp[0].o))->F_done) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1138);
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(1139);
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK(sp[0].o))->F_done = (jint(0));
	LINE_NUMBER(1140);
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1143);
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	if (((jint)((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK(sp[0].o))->F_done) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1144);
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(1145);
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((arc_struct_Seq$SeqIterable$SeqIterator *) NULL_CHECK(sp[0].o))->F_done = (jint(0));
	LINE_NUMBER(1146);
	sp[0].o = (jobject)((arc_struct_Seq$SeqIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1149);
	clinit_arc_struct_Seq$SeqIterable$SeqIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq$SeqIterable$SeqIterator);
	init_arc_struct_Seq$SeqIterable$SeqIterator_arc_struct_Seq$SeqIterable(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_Seq$SeqIterable[] {
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
	(void *) M_arc_struct_Seq$SeqIterable_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_arc_struct_Seq$SeqIterable$SeqIterator,
};

static FieldMetadata fields[] {
	{ "array", &class_arc_struct_Seq, offsetof(arc_struct_Seq$SeqIterable, F_array), "Larc/struct/Seq;", 16 },
	{ "allowRemove", &class_boolean, offsetof(arc_struct_Seq$SeqIterable, F_allowRemove), "Z", 16 },
	{ "iterator1", &class_arc_struct_Seq$SeqIterable$SeqIterator, offsetof(arc_struct_Seq$SeqIterable, F_iterator1), "Larc/struct/Seq$SeqIterable$SeqIterator;", 2 },
	{ "iterator2", &class_arc_struct_Seq$SeqIterable$SeqIterator, offsetof(arc_struct_Seq$SeqIterable, F_iterator2), "Larc/struct/Seq$SeqIterable$SeqIterator;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_Seq$SeqIterable_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Seq$SeqIterable_arc_struct_Seq_boolean, 0, "(Larc/struct/Seq;Z)V", 1 },
	{ "iterator", (intptr_t) M_arc_struct_Seq$SeqIterable_iterator_R_java_util_Iterator, VTABLE_arc_struct_Seq$SeqIterable_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_arc_struct_Seq$SeqIterable{
		.nativeName = (intptr_t) "arc/struct/Seq$SeqIterable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_Seq$SeqIterable),
		.classVtable = (intptr_t) vtable_arc_struct_Seq$SeqIterable,
		.staticInitializer = (intptr_t) clinit_arc_struct_Seq$SeqIterable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_Seq$SeqIterable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_Seq,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_Seq$SeqIterable = registerClass(&class_arc_struct_Seq$SeqIterable);

}

