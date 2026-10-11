#include "arc/struct/OrderedMap_OrderedMapEntries.h"
#include "arc/struct/OrderedMap_OrderedMapEntries.h"
#include "arc/struct/ObjectMap_MapIterator.h"
#include "java/util/Iterator.h"
#include "arc/struct/OrderedMap.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "java/lang/Iterable.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq.h"
#include "java/lang/IllegalStateException.h"
#include "arc/struct/ObjectMap.h"

extern "C" {


void mark_arc_struct_OrderedMap$OrderedMapEntries(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ObjectMap$Entries(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_OrderedMap$OrderedMapEntries *) object;
	if (self->F_keys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys)->clazz)->markFunction)((jobject) self->F_keys, mark, depth + 1);
}

void clinit_arc_struct_OrderedMap$OrderedMapEntries(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ObjectMap$Entries(ctx);
}

void init_arc_struct_OrderedMap$OrderedMapEntries_arc_struct_OrderedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedMap$OrderedMapEntries:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_OrderedMap$OrderedMapEntries(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	init_arc_struct_ObjectMap$Entries_arc_struct_ObjectMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_OrderedMap *) NULL_CHECK((frame[1].o)))->F_keys;
	((arc_struct_OrderedMap$OrderedMapEntries *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_OrderedMap$OrderedMapEntries_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedMap$OrderedMapEntries:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (jint(-1));
	LINE_NUMBER(257);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex = (jint(0));
	LINE_NUMBER(258);
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
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedMap$OrderedMapEntries_next_R_arc_struct_ObjectMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedMap$OrderedMapEntries:next", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(264);
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(265);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((arc_struct_OrderedMap$OrderedMapEntries *) NULL_CHECK((frame[0].o)))->F_keys;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex));
	((arc_struct_ObjectMap$Entry *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[2].o = (jobject)((arc_struct_ObjectMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[2].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK(sp[2].o))->F_key;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((arc_struct_ObjectMap$Entry *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) + (jint(1)));
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex;
	sp[1].o = (jobject)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp += 1;
	if (temp0 >= ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_hasNext = sp[1].i;
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_OrderedMap$OrderedMapEntries_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedMap$OrderedMapEntries:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next must be called before remove."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK(sp[1].o))->F_key;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) - (jint(1)));
	LINE_NUMBER(278);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (jint(-1));
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedMap$OrderedMapEntries_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedMap$OrderedMapEntries:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap$OrderedMapEntries_next_R_arc_struct_ObjectMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_OrderedMap$OrderedMapEntries_next_R_arc_struct_ObjectMap$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_OrderedMap$OrderedMapEntries[] {
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
	(void *) M_arc_struct_ObjectMap$Entries_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectMap$Entries_hasNext_R_boolean,
	(void *) M_arc_struct_OrderedMap$OrderedMapEntries_next_R_java_lang_Object,
	(void *) M_arc_struct_OrderedMap$OrderedMapEntries_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_arc_struct_OrderedMap$OrderedMapEntries_reset,
	(void *) M_arc_struct_ObjectMap$MapIterator_findNextIndex,
	(void *) M_arc_struct_OrderedMap$OrderedMapEntries_next_R_arc_struct_ObjectMap$Entry,
	(void *) M_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries,
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
	{ "next", "()Larc/struct/ObjectMap$Entry;" },
	{ "iterator", "()Larc/struct/ObjectMap$Entries;" },
};

static FieldMetadata fields[] {
	{ "keys", &class_arc_struct_Seq, offsetof(arc_struct_OrderedMap$OrderedMapEntries, F_keys), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_OrderedMap$OrderedMapEntries_arc_struct_OrderedMap, 0, "(Larc/struct/OrderedMap;)V", 1 },
	{ "reset", (intptr_t) M_arc_struct_OrderedMap$OrderedMapEntries_reset, VTABLE_arc_struct_OrderedMap$OrderedMapEntries_reset, "()V", 1 },
	{ "next", (intptr_t) M_arc_struct_OrderedMap$OrderedMapEntries_next_R_arc_struct_ObjectMap$Entry, VTABLE_arc_struct_OrderedMap$OrderedMapEntries_next_R_arc_struct_ObjectMap$Entry, "()Larc/struct/ObjectMap$Entry;", 1 },
	{ "remove", (intptr_t) M_arc_struct_OrderedMap$OrderedMapEntries_remove, VTABLE_arc_struct_OrderedMap$OrderedMapEntries_remove, "()V", 1 },
	{ "next", (intptr_t) M_arc_struct_OrderedMap$OrderedMapEntries_next_R_java_lang_Object, VTABLE_arc_struct_OrderedMap$OrderedMapEntries_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_arc_struct_OrderedMap$OrderedMapEntries{
		.nativeName = (intptr_t) "arc/struct/OrderedMap$OrderedMapEntries",
		.parentClass = (intptr_t) &class_arc_struct_ObjectMap$Entries,
		.size = sizeof(arc_struct_OrderedMap$OrderedMapEntries),
		.classVtable = (intptr_t) vtable_arc_struct_OrderedMap$OrderedMapEntries,
		.staticInitializer = (intptr_t) clinit_arc_struct_OrderedMap$OrderedMapEntries,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_OrderedMap$OrderedMapEntries,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_OrderedMap$OrderedMapEntries = registerClass(&class_arc_struct_OrderedMap$OrderedMapEntries);

}

