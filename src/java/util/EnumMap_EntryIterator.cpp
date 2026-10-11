#include "java/util/EnumMap_EntryIterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/EnumMap_EntryIterator_Entry.h"
#include "java/util/EnumMap_EntryIterator.h"
#include "java/util/Map_Entry.h"
#include "java/util/EnumMap.h"
#include "java/util/EnumMap_EnumMapIterator.h"
#include "java/util/EnumMap_1.h"

extern "C" {


void mark_java_util_EnumMap$EntryIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_EnumMap$EnumMapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_EnumMap$EntryIterator *) object;
	if (self->F_lastReturnedEntry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastReturnedEntry)->clazz)->markFunction)((jobject) self->F_lastReturnedEntry, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_EnumMap$EntryIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_EnumMap$EnumMapIterator(ctx);
}

void init_java_util_EnumMap$EntryIterator_java_util_EnumMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$EntryIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(565);
	((java_util_EnumMap$EntryIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_util_EnumMap$EnumMapIterator_java_util_EnumMap_java_util_EnumMap$1(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$EntryIterator_next_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator:next", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(569);
	jint temp0 = (jint)((func_java_util_EnumMap$EntryIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_EnumMap$EntryIterator_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(570);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(571);
	sp[0].o = frame[0].o;
	clinit_java_util_EnumMap$EntryIterator$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_EnumMap$EntryIterator$Entry);
	sp[2].o = frame[0].o;
	sp[3].o = frame[0].o;
	jint temp0 = (jint)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK(sp[3].o))->F_index;
	((java_util_EnumMap$EnumMapIterator *) NULL_CHECK(sp[3].o))->F_index = (temp0 + (jint(1)));
	init_java_util_EnumMap$EntryIterator$Entry_java_util_EnumMap$EntryIterator_int_java_util_EnumMap$1(ctx, sp[1].o, sp[2].o, temp0, (jobject(nullptr)));
	((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[0].o))->F_lastReturnedEntry = (jref) sp[1].o;
	LINE_NUMBER(572);
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedEntry;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_EnumMap$EntryIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(576);
	sp[0].o = frame[0].o;
	LINE_NUMBER(577);
	sp[1].o = jobject(nullptr);
	sp[2].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedEntry;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ICONST(-1);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedEntry;
	jint temp0 = (jint)SM_java_util_EnumMap$EntryIterator$Entry_access$1500_java_util_EnumMap$EntryIterator$Entry_R_int(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	((java_util_EnumMap$EnumMapIterator *) NULL_CHECK(sp[0].o))->F_lastReturnedIndex = sp[1].i;
	LINE_NUMBER(578);
	M_java_util_EnumMap$EnumMapIterator_remove(ctx, (frame[0].o));
	LINE_NUMBER(579);
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedEntry;
	jint temp0 = (jint)SM_java_util_EnumMap$EntryIterator$Entry_access$1502_java_util_EnumMap$EntryIterator$Entry_int_R_int(ctx, sp[0].o, ((jint)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedIndex));
	LINE_NUMBER(580);
	((java_util_EnumMap$EntryIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedEntry = (jref) (jobject(nullptr));
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$EntryIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((func_java_util_EnumMap$EntryIterator_next_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_EnumMap$EntryIterator_next_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_EnumMap$EntryIterator_java_util_EnumMap_java_util_EnumMap$1(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$EntryIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(565);
	init_java_util_EnumMap$EntryIterator_java_util_EnumMap(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_EnumMap$EntryIterator[] {
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
	(void *) M_java_util_EnumMap$EnumMapIterator_hasNext_R_boolean,
	(void *) M_java_util_EnumMap$EntryIterator_next_R_java_lang_Object,
	(void *) M_java_util_EnumMap$EntryIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_EnumMap$EnumMapIterator_checkLastReturnedIndex,
	(void *) M_java_util_EnumMap$EntryIterator_next_R_java_util_Map$Entry,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "checkLastReturnedIndex", "()V" },
	{ "next", "()Ljava/util/Map$Entry;" },
};

static jclass innerClasses[] {
	&class_java_util_EnumMap$EntryIterator$Entry,
};

static FieldMetadata fields[] {
	{ "lastReturnedEntry", &class_java_util_EnumMap$EntryIterator$Entry, offsetof(java_util_EnumMap$EntryIterator, F_lastReturnedEntry), "Ljava/util/EnumMap$EntryIterator$Entry;", 2 },
	{ "this$0", &class_java_util_EnumMap, offsetof(java_util_EnumMap$EntryIterator, F_this$0), "Ljava/util/EnumMap;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_EnumMap$EntryIterator_java_util_EnumMap, 0, "(Ljava/util/EnumMap;)V", 2 },
	{ "next", (intptr_t) M_java_util_EnumMap$EntryIterator_next_R_java_util_Map$Entry, VTABLE_java_util_EnumMap$EntryIterator_next_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "remove", (intptr_t) M_java_util_EnumMap$EntryIterator_remove, VTABLE_java_util_EnumMap$EntryIterator_remove, "()V", 1 },
	{ "next", (intptr_t) M_java_util_EnumMap$EntryIterator_next_R_java_lang_Object, VTABLE_java_util_EnumMap$EntryIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "<init>", (intptr_t) init_java_util_EnumMap$EntryIterator_java_util_EnumMap_java_util_EnumMap$1, 0, "(Ljava/util/EnumMap;Ljava/util/EnumMap$1;)V", 4096 },
};

Class class_java_util_EnumMap$EntryIterator{
		.nativeName = (intptr_t) "java/util/EnumMap$EntryIterator",
		.parentClass = (intptr_t) &class_java_util_EnumMap$EnumMapIterator,
		.size = sizeof(java_util_EnumMap$EntryIterator),
		.classVtable = (intptr_t) vtable_java_util_EnumMap$EntryIterator,
		.staticInitializer = (intptr_t) clinit_java_util_EnumMap$EntryIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_EnumMap$EntryIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_EnumMap,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_EnumMap$EntryIterator = registerClass(&class_java_util_EnumMap$EntryIterator);

}

