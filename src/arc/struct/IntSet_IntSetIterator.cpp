#include "arc/struct/IntSet_IntSetIterator.h"
#include "arc/struct/IntSet.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/IntSet_IntSetIterator.h"
#include "java/lang/IllegalStateException.h"
#include "arc/struct/IntSeq.h"

extern "C" {

jint SF_arc_struct_IntSet$IntSetIterator_INDEX_ILLEGAL;
jint SF_arc_struct_IntSet$IntSetIterator_INDEX_ZERO;

void mark_arc_struct_IntSet$IntSetIterator(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_IntSet$IntSetIterator *) object;
	if (self->F_set)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_set)->clazz)->markFunction)((jobject) self->F_set, mark, depth + 1);
}

void clinit_arc_struct_IntSet$IntSetIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_struct_IntSet$IntSetIterator_INDEX_ILLEGAL = jint(-2);
	SF_arc_struct_IntSet$IntSetIterator_INDEX_ZERO = jint(-1);
}

void init_arc_struct_IntSet$IntSetIterator_arc_struct_IntSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSet$IntSetIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntSet$IntSetIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(373);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(371);
	((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_valid = (jint(1));
	LINE_NUMBER(374);
	((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_set = (jref) (frame[1].o);
	LINE_NUMBER(375);
	((func_arc_struct_IntSet$IntSetIterator_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSet$IntSetIterator_reset])(ctx, (frame[0].o));
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSet$IntSetIterator_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSet$IntSetIterator:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(379);
	((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (-2);
	LINE_NUMBER(380);
	((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex = (jint(-1));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	if (((jint)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_hasZeroValue) == 0) goto label_3;
	}
	{
	LINE_NUMBER(382);
	((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(1));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(384);
	((func_arc_struct_IntSet$IntSetIterator_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSet$IntSetIterator_findNextIndex])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(385);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_IntSet$IntSetIterator_findNextIndex(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSet$IntSetIterator:findNextIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	sp[0].o = (jobject)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(389);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_2:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) + (jint(1));
	((arc_struct_IntSet$IntSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = temp0;
	if (temp0 >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(390);
	if (((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(391);
	((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(1));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(395);
	((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(0));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntSet$IntSetIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSet$IntSetIterator:remove", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(399);
	frame[1].i = ((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex);
	LINE_NUMBER(400);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	if (((jint)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_hasZeroValue = (jint(0));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(402);
	if ((frame[1].i) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(403);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next must be called before remove."_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	sp[0].o = (jobject)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(406);
	sp[0].o = (jobject)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	frame[3].i = ((jint)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_mask);
	frame[4].i = (((frame[1].i) + (jint(1))) & (frame[3].i));
	}
label_9:;
	{
	LINE_NUMBER(407);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i));
	frame[5].i = temp0;
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	jint temp0 = (jint)((func_arc_struct_IntSet_place_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_place_int_R_int])(ctx, sp[0].o, (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(409);
	if ((((frame[4].i) - (frame[6].i)) & (frame[3].i)) <= (((frame[1].i) - (frame[6].i)) & (frame[3].i))) goto label_14;
	}
	{
	LINE_NUMBER(410);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i)) = (frame[5].i);
	LINE_NUMBER(411);
	frame[1].i = (frame[4].i);
	}
label_14:;
	{
	LINE_NUMBER(413);
	frame[4].i = (((frame[4].i) + (jint(1))) & (frame[3].i));
	LINE_NUMBER(414);
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(415);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i)) = (jint(0));
	LINE_NUMBER(416);
	if ((frame[1].i) == ((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	((arc_struct_IntSet$IntSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = (((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) - (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(418);
	((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (-2);
	LINE_NUMBER(419);
	sp[0].o = (jobject)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_IntSet$IntSetIterator_next_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSet$IntSetIterator:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(423);
	if (((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(424);
	if (((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(425);
	if (((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex) != (jint(-1))) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	sp[0].o = (jobject)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_keyTable;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex));
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(426);
	((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(427);
	((func_arc_struct_IntSet$IntSetIterator_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSet$IntSetIterator_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_IntSet$IntSetIterator_toArray_R_arc_struct_IntSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntSet$IntSetIterator:toArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(433);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	init_arc_struct_IntSeq_boolean_int(ctx, sp[0].o, temp0, ((jint)((arc_struct_IntSet *) NULL_CHECK(sp[1].o))->F_size));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(434);
	if (((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_2;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_struct_IntSet$IntSetIterator_next_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSet$IntSetIterator_next_R_int])(ctx, (frame[0].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_IntSet$IntSetIterator[] {
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
	(void *) M_arc_struct_IntSet$IntSetIterator_reset,
	(void *) M_arc_struct_IntSet$IntSetIterator_findNextIndex,
	(void *) M_arc_struct_IntSet$IntSetIterator_remove,
	(void *) M_arc_struct_IntSet$IntSetIterator_next_R_int,
	(void *) M_arc_struct_IntSet$IntSetIterator_toArray_R_arc_struct_IntSeq,
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
	{ "next", "()I" },
	{ "toArray", "()Larc/struct/IntSeq;" },
};

static FieldMetadata fields[] {
	{ "INDEX_ILLEGAL", &class_int, (intptr_t) &SF_arc_struct_IntSet$IntSetIterator_INDEX_ILLEGAL, "I", 26 },
	{ "INDEX_ZERO", &class_int, (intptr_t) &SF_arc_struct_IntSet$IntSetIterator_INDEX_ZERO, "I", 26 },
	{ "hasNext", &class_boolean, offsetof(arc_struct_IntSet$IntSetIterator, F_hasNext), "Z", 1 },
	{ "set", &class_arc_struct_IntSet, offsetof(arc_struct_IntSet$IntSetIterator, F_set), "Larc/struct/IntSet;", 16 },
	{ "nextIndex", &class_int, offsetof(arc_struct_IntSet$IntSetIterator, F_nextIndex), "I", 0 },
	{ "currentIndex", &class_int, offsetof(arc_struct_IntSet$IntSetIterator, F_currentIndex), "I", 0 },
	{ "valid", &class_boolean, offsetof(arc_struct_IntSet$IntSetIterator, F_valid), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_IntSet$IntSetIterator_arc_struct_IntSet, 0, "(Larc/struct/IntSet;)V", 1 },
	{ "reset", (intptr_t) M_arc_struct_IntSet$IntSetIterator_reset, VTABLE_arc_struct_IntSet$IntSetIterator_reset, "()V", 1 },
	{ "findNextIndex", (intptr_t) M_arc_struct_IntSet$IntSetIterator_findNextIndex, VTABLE_arc_struct_IntSet$IntSetIterator_findNextIndex, "()V", 0 },
	{ "remove", (intptr_t) M_arc_struct_IntSet$IntSetIterator_remove, VTABLE_arc_struct_IntSet$IntSetIterator_remove, "()V", 1 },
	{ "next", (intptr_t) M_arc_struct_IntSet$IntSetIterator_next_R_int, VTABLE_arc_struct_IntSet$IntSetIterator_next_R_int, "()I", 1 },
	{ "toArray", (intptr_t) M_arc_struct_IntSet$IntSetIterator_toArray_R_arc_struct_IntSeq, VTABLE_arc_struct_IntSet$IntSetIterator_toArray_R_arc_struct_IntSeq, "()Larc/struct/IntSeq;", 1 },
};

Class class_arc_struct_IntSet$IntSetIterator{
		.nativeName = (intptr_t) "arc/struct/IntSet$IntSetIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_IntSet$IntSetIterator),
		.classVtable = (intptr_t) vtable_arc_struct_IntSet$IntSetIterator,
		.staticInitializer = (intptr_t) clinit_arc_struct_IntSet$IntSetIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_IntSet$IntSetIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_IntSet,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_IntSet$IntSetIterator = registerClass(&class_arc_struct_IntSet$IntSetIterator);

}

