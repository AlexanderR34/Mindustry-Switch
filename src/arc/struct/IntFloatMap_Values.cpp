#include "arc/struct/IntFloatMap_Values.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/IntFloatMap_MapIterator.h"
#include "arc/struct/IntFloatMap.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/IntFloatMap_Values.h"
#include "arc/struct/FloatSeq.h"

extern "C" {


void mark_arc_struct_IntFloatMap$Values(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_IntFloatMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_IntFloatMap$Values *) object;
}

void clinit_arc_struct_IntFloatMap$Values(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_IntFloatMap$MapIterator(ctx);
}

void init_arc_struct_IntFloatMap$Values_arc_struct_IntFloatMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap$Values:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntFloatMap$Values(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(687);
	init_arc_struct_IntFloatMap$MapIterator_arc_struct_IntFloatMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(688);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_IntFloatMap$Values_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap$Values:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(691);
	if (((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(692);
	popStackFrame(ctx);
	return ((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_IntFloatMap$Values_next_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap$Values:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(696);
	if (((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(697);
	if (((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(698);
	if (((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex) != (jint(-1))) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	jfloat temp0 = (jfloat)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_zeroValue;
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_IntFloatMap *) NULL_CHECK(sp[0].o))->F_valueTable;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex));
	sp[0].f = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(699);
	((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(700);
	((func_arc_struct_IntFloatMap$Values_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap$Values_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(701);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntFloatMap$Values_iterator_R_arc_struct_IntFloatMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap$Values:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(705);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntFloatMap$Values_toArray_R_arc_struct_FloatSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap$Values:toArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(710);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	init_arc_struct_FloatSeq_boolean_int(ctx, sp[0].o, temp0, ((jint)((arc_struct_IntFloatMap *) NULL_CHECK(sp[1].o))->F_size));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(711);
	if (((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_2;
	}
	{
	LINE_NUMBER(712);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_struct_IntFloatMap$Values_next_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap$Values_next_R_float])(ctx, (frame[0].o));
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, temp0);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(713);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntFloatMap$Values_toArray_arc_struct_FloatSeq_R_arc_struct_FloatSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap$Values:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(718);
	if (((jint)((arc_struct_IntFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_1;
	}
	{
	LINE_NUMBER(719);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_struct_IntFloatMap$Values_next_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntFloatMap$Values_next_R_float])(ctx, (frame[0].o));
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, temp0);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(720);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntFloatMap$Values_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap$Values:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(685);
	M_arc_struct_IntFloatMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntFloatMap$Values_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntFloatMap$Values:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(685);
	M_arc_struct_IntFloatMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_IntFloatMap$Values[] {
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
	(void *) M_arc_struct_IntFloatMap$Values_reset,
	(void *) M_arc_struct_IntFloatMap$MapIterator_findNextIndex,
	(void *) M_arc_struct_IntFloatMap$Values_remove,
	(void *) M_arc_struct_IntFloatMap$Values_hasNext_R_boolean,
	(void *) M_arc_struct_IntFloatMap$Values_next_R_float,
	(void *) M_arc_struct_IntFloatMap$Values_iterator_R_arc_struct_IntFloatMap$Values,
	(void *) M_arc_struct_IntFloatMap$Values_toArray_R_arc_struct_FloatSeq,
	(void *) M_arc_struct_IntFloatMap$Values_toArray_arc_struct_FloatSeq_R_arc_struct_FloatSeq,
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
	{ "next", "()F" },
	{ "iterator", "()Larc/struct/IntFloatMap$Values;" },
	{ "toArray", "()Larc/struct/FloatSeq;" },
	{ "toArray", "(Larc/struct/FloatSeq;)Larc/struct/FloatSeq;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_IntFloatMap$Values_arc_struct_IntFloatMap, 0, "(Larc/struct/IntFloatMap;)V", 1 },
	{ "hasNext", (intptr_t) M_arc_struct_IntFloatMap$Values_hasNext_R_boolean, VTABLE_arc_struct_IntFloatMap$Values_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_arc_struct_IntFloatMap$Values_next_R_float, VTABLE_arc_struct_IntFloatMap$Values_next_R_float, "()F", 1 },
	{ "iterator", (intptr_t) M_arc_struct_IntFloatMap$Values_iterator_R_arc_struct_IntFloatMap$Values, VTABLE_arc_struct_IntFloatMap$Values_iterator_R_arc_struct_IntFloatMap$Values, "()Larc/struct/IntFloatMap$Values;", 1 },
	{ "toArray", (intptr_t) M_arc_struct_IntFloatMap$Values_toArray_R_arc_struct_FloatSeq, VTABLE_arc_struct_IntFloatMap$Values_toArray_R_arc_struct_FloatSeq, "()Larc/struct/FloatSeq;", 1 },
	{ "toArray", (intptr_t) M_arc_struct_IntFloatMap$Values_toArray_arc_struct_FloatSeq_R_arc_struct_FloatSeq, VTABLE_arc_struct_IntFloatMap$Values_toArray_arc_struct_FloatSeq_R_arc_struct_FloatSeq, "(Larc/struct/FloatSeq;)Larc/struct/FloatSeq;", 1 },
	{ "remove", (intptr_t) M_arc_struct_IntFloatMap$Values_remove, VTABLE_arc_struct_IntFloatMap$Values_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_arc_struct_IntFloatMap$Values_reset, VTABLE_arc_struct_IntFloatMap$Values_reset, "()V", 4161 },
};

Class class_arc_struct_IntFloatMap$Values{
		.nativeName = (intptr_t) "arc/struct/IntFloatMap$Values",
		.parentClass = (intptr_t) &class_arc_struct_IntFloatMap$MapIterator,
		.size = sizeof(arc_struct_IntFloatMap$Values),
		.classVtable = (intptr_t) vtable_arc_struct_IntFloatMap$Values,
		.staticInitializer = (intptr_t) clinit_arc_struct_IntFloatMap$Values,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_IntFloatMap$Values,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_IntFloatMap,
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
static bool registered_arc_struct_IntFloatMap$Values = registerClass(&class_arc_struct_IntFloatMap$Values);

}

