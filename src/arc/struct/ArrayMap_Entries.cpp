#include "arc/struct/ArrayMap_Entries.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/ArrayMap_Entries.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "arc/struct/ArrayMap.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_arc_struct_ArrayMap$Entries(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_ArrayMap$Entries *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
	if (self->F_entry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entry)->clazz)->markFunction)((jobject) self->F_entry, mark, depth + 1);
}

void clinit_arc_struct_ArrayMap$Entries(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_ArrayMap$Entries_arc_struct_ArrayMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap$Entries:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ArrayMap$Entries(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(534);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(530);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap$Entry);
	init_arc_struct_ObjectMap$Entry(ctx, sp[1].o);
	((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_entry = (jref) sp[1].o;
	LINE_NUMBER(532);
	((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_valid = (jint(1));
	LINE_NUMBER(535);
	((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(536);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ArrayMap$Entries_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap$Entries:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(539);
	if (((jint)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(540);
	jint temp0 = (jint)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_map;
	if (temp0 >= ((jint)((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap$Entries_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap$Entries:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap$Entries_next_R_arc_struct_ObjectMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap$Entries:next", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(549);
	jint temp0 = (jint)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_map;
	if (temp0 < ((jint)((arc_struct_ArrayMap *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_index));
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(550);
	if (((jint)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(551);
	sp[0].o = (jobject)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK(sp[1].o))->F_keys;
	((arc_struct_ObjectMap$Entry *) NULL_CHECK(sp[0].o))->F_key = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_index)));
	LINE_NUMBER(552);
	sp[0].o = (jobject)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((arc_struct_ArrayMap *) NULL_CHECK(sp[1].o))->F_values;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[2].o))->F_index;
	((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[2].o))->F_index = (temp0 + (jint(1)));
	((arc_struct_ObjectMap$Entry *) NULL_CHECK(sp[0].o))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap$Entries_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap$Entries:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(557);
	sp[0].o = frame[0].o;
	((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_index = (((jint)((arc_struct_ArrayMap$Entries *) NULL_CHECK(sp[0].o))->F_index) - (jint(1)));
	LINE_NUMBER(558);
	sp[0].o = (jobject)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_map;
	((func_arc_struct_ArrayMap_removeIndex_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ArrayMap_removeIndex_int])(ctx, sp[0].o, ((jint)((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_index));
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ArrayMap$Entries_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap$Entries:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(562);
	((arc_struct_ArrayMap$Entries *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ArrayMap$Entries_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ArrayMap$Entries:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((func_arc_struct_ArrayMap$Entries_next_R_arc_struct_ObjectMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ArrayMap$Entries_next_R_arc_struct_ObjectMap$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_ArrayMap$Entries[] {
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
	(void *) M_arc_struct_ArrayMap$Entries_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ArrayMap$Entries_hasNext_R_boolean,
	(void *) M_arc_struct_ArrayMap$Entries_next_R_java_lang_Object,
	(void *) M_arc_struct_ArrayMap$Entries_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_arc_struct_ArrayMap$Entries_next_R_arc_struct_ObjectMap$Entry,
	(void *) M_arc_struct_ArrayMap$Entries_reset,
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
	{ "next", "()Larc/struct/ObjectMap$Entry;" },
	{ "reset", "()V" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "map", &class_arc_struct_ArrayMap, offsetof(arc_struct_ArrayMap$Entries, F_map), "Larc/struct/ArrayMap;", 18 },
	{ "entry", &class_arc_struct_ObjectMap$Entry, offsetof(arc_struct_ArrayMap$Entries, F_entry), "Larc/struct/ObjectMap$Entry;", 0 },
	{ "index", &class_int, offsetof(arc_struct_ArrayMap$Entries, F_index), "I", 0 },
	{ "valid", &class_boolean, offsetof(arc_struct_ArrayMap$Entries, F_valid), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ArrayMap$Entries_arc_struct_ArrayMap, 0, "(Larc/struct/ArrayMap;)V", 1 },
	{ "hasNext", (intptr_t) M_arc_struct_ArrayMap$Entries_hasNext_R_boolean, VTABLE_arc_struct_ArrayMap$Entries_hasNext_R_boolean, "()Z", 1 },
	{ "iterator", (intptr_t) M_arc_struct_ArrayMap$Entries_iterator_R_java_util_Iterator, VTABLE_arc_struct_ArrayMap$Entries_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "next", (intptr_t) M_arc_struct_ArrayMap$Entries_next_R_arc_struct_ObjectMap$Entry, VTABLE_arc_struct_ArrayMap$Entries_next_R_arc_struct_ObjectMap$Entry, "()Larc/struct/ObjectMap$Entry;", 1 },
	{ "remove", (intptr_t) M_arc_struct_ArrayMap$Entries_remove, VTABLE_arc_struct_ArrayMap$Entries_remove, "()V", 1 },
	{ "reset", (intptr_t) M_arc_struct_ArrayMap$Entries_reset, VTABLE_arc_struct_ArrayMap$Entries_reset, "()V", 1 },
	{ "next", (intptr_t) M_arc_struct_ArrayMap$Entries_next_R_java_lang_Object, VTABLE_arc_struct_ArrayMap$Entries_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_arc_struct_ArrayMap$Entries{
		.nativeName = (intptr_t) "arc/struct/ArrayMap$Entries",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_ArrayMap$Entries),
		.classVtable = (intptr_t) vtable_arc_struct_ArrayMap$Entries,
		.staticInitializer = (intptr_t) clinit_arc_struct_ArrayMap$Entries,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_ArrayMap$Entries,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_ArrayMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ArrayMap$Entries = registerClass(&class_arc_struct_ArrayMap$Entries);

}

