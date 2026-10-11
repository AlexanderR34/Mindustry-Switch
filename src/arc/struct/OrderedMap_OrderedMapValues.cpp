#include "arc/struct/OrderedMap_OrderedMapValues.h"
#include "arc/struct/ObjectMap_MapIterator.h"
#include "java/util/Iterator.h"
#include "arc/struct/OrderedMap.h"
#include "java/lang/Iterable.h"
#include "arc/struct/ObjectMap_Values.h"
#include "arc/struct/OrderedMap_OrderedMapValues.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq.h"
#include "java/lang/IllegalStateException.h"
#include "arc/struct/ObjectMap.h"

extern "C" {


void mark_arc_struct_OrderedMap$OrderedMapValues(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ObjectMap$Values(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_OrderedMap$OrderedMapValues *) object;
	if (self->F_keys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys)->clazz)->markFunction)((jobject) self->F_keys, mark, depth + 1);
}

void clinit_arc_struct_OrderedMap$OrderedMapValues(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ObjectMap$Values(ctx);
}

void init_arc_struct_OrderedMap$OrderedMapValues_arc_struct_OrderedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedMap$OrderedMapValues:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_OrderedMap$OrderedMapValues(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(334);
	init_arc_struct_ObjectMap$Values_arc_struct_ObjectMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_OrderedMap *) NULL_CHECK((frame[1].o)))->F_keys;
	((arc_struct_OrderedMap$OrderedMapValues *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_OrderedMap$OrderedMapValues_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedMap$OrderedMapValues:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (jint(-1));
	LINE_NUMBER(341);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex = (jint(0));
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp += 1;
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 2;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_hasNext = sp[1].i;
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedMap$OrderedMapValues_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedMap$OrderedMapValues:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(347);
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(348);
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((arc_struct_OrderedMap$OrderedMapValues *) NULL_CHECK((frame[0].o)))->F_keys;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(350);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(351);
	sp[0].o = frame[0].o;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) + (jint(1)));
	LINE_NUMBER(352);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex;
	sp[1].o = (jobject)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp += 1;
	if (temp0 >= ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_hasNext = sp[1].i;
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_OrderedMap$OrderedMapValues_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedMap$OrderedMapValues:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next must be called before remove."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_OrderedMap, sp[0].o)))->vtable)[VTABLE_arc_struct_OrderedMap_removeIndex_int_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_OrderedMap, sp[0].o)), ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex));
	LINE_NUMBER(360);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex = ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex);
	LINE_NUMBER(361);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (jint(-1));
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedMap$OrderedMapValues_toSeq_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedMap$OrderedMapValues:toSeq", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((arc_struct_OrderedMap$OrderedMapValues *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, (frame[1].o), ((frame[2].i) - ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(368);
	sp[0].o = (jobject)((arc_struct_OrderedMap$OrderedMapValues *) NULL_CHECK((frame[0].o)))->F_keys;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(369);
	frame[4].i = ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(369);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(371);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((frame[2].i) - (jint(1)));
	LINE_NUMBER(372);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex = (frame[2].i);
	LINE_NUMBER(373);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(0));
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedMap$OrderedMapValues_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedMap$OrderedMapValues:toSeq", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(379);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((arc_struct_OrderedMap$OrderedMapValues *) NULL_CHECK((frame[0].o)))->F_keys;
	init_arc_struct_Seq_boolean_int(ctx, sp[1].o, temp0, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[2].o))->F_size) - ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	sp[0].o = (jobject)((func_arc_struct_OrderedMap$OrderedMapValues_toSeq_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap$OrderedMapValues_toSeq_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_OrderedMap$OrderedMapValues[] {
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
	(void *) M_arc_struct_ObjectMap$Values_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectMap$Values_hasNext_R_boolean,
	(void *) M_arc_struct_OrderedMap$OrderedMapValues_next_R_java_lang_Object,
	(void *) M_arc_struct_OrderedMap$OrderedMapValues_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_arc_struct_OrderedMap$OrderedMapValues_reset,
	(void *) M_arc_struct_ObjectMap$MapIterator_findNextIndex,
	(void *) M_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values,
	(void *) M_arc_struct_OrderedMap$OrderedMapValues_toSeq_R_arc_struct_Seq,
	(void *) M_arc_struct_OrderedMap$OrderedMapValues_toSeq_arc_struct_Seq_R_arc_struct_Seq,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "reset", "()V" },
	{ "findNextIndex", "()V" },
	{ "iterator", "()Larc/struct/ObjectMap$Values;" },
	{ "toSeq", "()Larc/struct/Seq;" },
	{ "toSeq", "(Larc/struct/Seq;)Larc/struct/Seq;" },
};

static FieldMetadata fields[] {
	{ "keys", &class_arc_struct_Seq, offsetof(arc_struct_OrderedMap$OrderedMapValues, F_keys), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_OrderedMap$OrderedMapValues_arc_struct_OrderedMap, 0, "(Larc/struct/OrderedMap;)V", 1 },
	{ "reset", (intptr_t) M_arc_struct_OrderedMap$OrderedMapValues_reset, VTABLE_arc_struct_OrderedMap$OrderedMapValues_reset, "()V", 1 },
	{ "next", (intptr_t) M_arc_struct_OrderedMap$OrderedMapValues_next_R_java_lang_Object, VTABLE_arc_struct_OrderedMap$OrderedMapValues_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_arc_struct_OrderedMap$OrderedMapValues_remove, VTABLE_arc_struct_OrderedMap$OrderedMapValues_remove, "()V", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_OrderedMap$OrderedMapValues_toSeq_arc_struct_Seq_R_arc_struct_Seq, VTABLE_arc_struct_OrderedMap$OrderedMapValues_toSeq_arc_struct_Seq_R_arc_struct_Seq, "(Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_OrderedMap$OrderedMapValues_toSeq_R_arc_struct_Seq, VTABLE_arc_struct_OrderedMap$OrderedMapValues_toSeq_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
};

Class class_arc_struct_OrderedMap$OrderedMapValues{
		.nativeName = (intptr_t) "arc/struct/OrderedMap$OrderedMapValues",
		.parentClass = (intptr_t) &class_arc_struct_ObjectMap$Values,
		.size = sizeof(arc_struct_OrderedMap$OrderedMapValues),
		.classVtable = (intptr_t) vtable_arc_struct_OrderedMap$OrderedMapValues,
		.staticInitializer = (intptr_t) clinit_arc_struct_OrderedMap$OrderedMapValues,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_OrderedMap$OrderedMapValues,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_OrderedMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_OrderedMap$OrderedMapValues = registerClass(&class_arc_struct_OrderedMap$OrderedMapValues);

}

