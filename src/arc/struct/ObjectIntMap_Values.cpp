#include "arc/struct/ObjectIntMap_Values.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/ObjectIntMap_Values.h"
#include "arc/struct/IntSeq.h"
#include "arc/struct/ObjectIntMap.h"
#include "arc/struct/ObjectIntMap_MapIterator.h"

extern "C" {


void mark_arc_struct_ObjectIntMap$Values(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ObjectIntMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_ObjectIntMap$Values *) object;
}

void clinit_arc_struct_ObjectIntMap$Values(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ObjectIntMap$MapIterator(ctx);
}

void init_arc_struct_ObjectIntMap$Values_arc_struct_ObjectIntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Values:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectIntMap$Values(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(613);
	init_arc_struct_ObjectIntMap$MapIterator_arc_struct_ObjectIntMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectIntMap$Values_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Values:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(617);
	if (((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(618);
	popStackFrame(ctx);
	return ((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jint M_arc_struct_ObjectIntMap$Values_next_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Values:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(622);
	if (((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(623);
	if (((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(624);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_valueTable;
	frame[1].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(625);
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(626);
	((func_arc_struct_ObjectIntMap$Values_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap$Values_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap$Values_iterator_R_arc_struct_ObjectIntMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Values:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap$Values_toSeq_R_arc_struct_IntSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Values:toSeq", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(636);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	init_arc_struct_IntSeq_boolean_int(ctx, sp[0].o, temp0, ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[1].o))->F_size));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(637);
	if (((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_2;
	}
	{
	LINE_NUMBER(638);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap$Values_next_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap$Values_next_R_int])(ctx, (frame[0].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(639);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap$Values_toSeq_arc_struct_IntSeq_R_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Values:toSeq", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(644);
	if (((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_1;
	}
	{
	LINE_NUMBER(645);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap$Values_next_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap$Values_next_R_int])(ctx, (frame[0].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap$Values_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Values:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(611);
	M_arc_struct_ObjectIntMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap$Values_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Values:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(611);
	M_arc_struct_ObjectIntMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_ObjectIntMap$Values[] {
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
	(void *) M_arc_struct_ObjectIntMap$Values_reset,
	(void *) M_arc_struct_ObjectIntMap$MapIterator_findNextIndex,
	(void *) M_arc_struct_ObjectIntMap$Values_remove,
	(void *) M_arc_struct_ObjectIntMap$Values_hasNext_R_boolean,
	(void *) M_arc_struct_ObjectIntMap$Values_next_R_int,
	(void *) M_arc_struct_ObjectIntMap$Values_iterator_R_arc_struct_ObjectIntMap$Values,
	(void *) M_arc_struct_ObjectIntMap$Values_toSeq_R_arc_struct_IntSeq,
	(void *) M_arc_struct_ObjectIntMap$Values_toSeq_arc_struct_IntSeq_R_arc_struct_IntSeq,
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
	{ "hasNext", "()Z" },
	{ "next", "()I" },
	{ "iterator", "()Larc/struct/ObjectIntMap$Values;" },
	{ "toSeq", "()Larc/struct/IntSeq;" },
	{ "toSeq", "(Larc/struct/IntSeq;)Larc/struct/IntSeq;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ObjectIntMap$Values_arc_struct_ObjectIntMap, 0, "(Larc/struct/ObjectIntMap;)V", 1 },
	{ "hasNext", (intptr_t) M_arc_struct_ObjectIntMap$Values_hasNext_R_boolean, VTABLE_arc_struct_ObjectIntMap$Values_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_arc_struct_ObjectIntMap$Values_next_R_int, VTABLE_arc_struct_ObjectIntMap$Values_next_R_int, "()I", 1 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectIntMap$Values_iterator_R_arc_struct_ObjectIntMap$Values, VTABLE_arc_struct_ObjectIntMap$Values_iterator_R_arc_struct_ObjectIntMap$Values, "()Larc/struct/ObjectIntMap$Values;", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_ObjectIntMap$Values_toSeq_R_arc_struct_IntSeq, VTABLE_arc_struct_ObjectIntMap$Values_toSeq_R_arc_struct_IntSeq, "()Larc/struct/IntSeq;", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_ObjectIntMap$Values_toSeq_arc_struct_IntSeq_R_arc_struct_IntSeq, VTABLE_arc_struct_ObjectIntMap$Values_toSeq_arc_struct_IntSeq_R_arc_struct_IntSeq, "(Larc/struct/IntSeq;)Larc/struct/IntSeq;", 1 },
	{ "remove", (intptr_t) M_arc_struct_ObjectIntMap$Values_remove, VTABLE_arc_struct_ObjectIntMap$Values_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_arc_struct_ObjectIntMap$Values_reset, VTABLE_arc_struct_ObjectIntMap$Values_reset, "()V", 4161 },
};

Class class_arc_struct_ObjectIntMap$Values{
		.nativeName = (intptr_t) "arc/struct/ObjectIntMap$Values",
		.parentClass = (intptr_t) &class_arc_struct_ObjectIntMap$MapIterator,
		.size = sizeof(arc_struct_ObjectIntMap$Values),
		.classVtable = (intptr_t) vtable_arc_struct_ObjectIntMap$Values,
		.staticInitializer = (intptr_t) clinit_arc_struct_ObjectIntMap$Values,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_ObjectIntMap$Values,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_ObjectIntMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ObjectIntMap$Values = registerClass(&class_arc_struct_ObjectIntMap$Values);

}

