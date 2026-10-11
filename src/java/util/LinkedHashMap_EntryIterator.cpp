#include "java/util/LinkedHashMap_EntryIterator.h"
#include "java/util/LinkedHashMap_EntryIterator.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/LinkedHashMap_LinkedHashMapEntry.h"
#include "java/util/LinkedHashMap_AbstractMapIterator.h"
#include "java/util/Map_Entry.h"
#include "java/util/LinkedHashMap.h"

extern "C" {


void mark_java_util_LinkedHashMap$EntryIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_LinkedHashMap$AbstractMapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_LinkedHashMap$EntryIterator *) object;
}

void clinit_java_util_LinkedHashMap$EntryIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_LinkedHashMap$AbstractMapIterator(ctx);
}

void init_java_util_LinkedHashMap$EntryIterator_java_util_LinkedHashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$EntryIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap$EntryIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	init_java_util_LinkedHashMap$AbstractMapIterator_java_util_LinkedHashMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap$EntryIterator_next_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$EntryIterator:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	((func_java_util_LinkedHashMap$EntryIterator_makeNext) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap$EntryIterator_makeNext])(ctx, (frame[0].o));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((java_util_LinkedHashMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_currentEntry;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap$EntryIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$EntryIterator:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((func_java_util_LinkedHashMap$EntryIterator_next_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap$EntryIterator_next_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_LinkedHashMap$EntryIterator[] {
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
	(void *) M_java_util_LinkedHashMap$AbstractMapIterator_hasNext_R_boolean,
	(void *) M_java_util_LinkedHashMap$AbstractMapIterator_checkConcurrentMod,
	(void *) M_java_util_LinkedHashMap$AbstractMapIterator_makeNext,
	(void *) M_java_util_LinkedHashMap$AbstractMapIterator_remove,
	(void *) M_java_util_LinkedHashMap$EntryIterator_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_LinkedHashMap$EntryIterator_next_R_java_util_Map$Entry,
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
	{ "checkConcurrentMod", "()V" },
	{ "makeNext", "()V" },
	{ "remove", "()V" },
	{ "next", "()Ljava/lang/Object;" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "next", "()Ljava/util/Map$Entry;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_LinkedHashMap$EntryIterator_java_util_LinkedHashMap, 0, "(Ljava/util/LinkedHashMap;)V", 0 },
	{ "next", (intptr_t) M_java_util_LinkedHashMap$EntryIterator_next_R_java_util_Map$Entry, VTABLE_java_util_LinkedHashMap$EntryIterator_next_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "next", (intptr_t) M_java_util_LinkedHashMap$EntryIterator_next_R_java_lang_Object, VTABLE_java_util_LinkedHashMap$EntryIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_java_util_LinkedHashMap$EntryIterator{
		.nativeName = (intptr_t) "java/util/LinkedHashMap$EntryIterator",
		.parentClass = (intptr_t) &class_java_util_LinkedHashMap$AbstractMapIterator,
		.size = sizeof(java_util_LinkedHashMap$EntryIterator),
		.classVtable = (intptr_t) vtable_java_util_LinkedHashMap$EntryIterator,
		.staticInitializer = (intptr_t) clinit_java_util_LinkedHashMap$EntryIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_LinkedHashMap$EntryIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_LinkedHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_LinkedHashMap$EntryIterator = registerClass(&class_java_util_LinkedHashMap$EntryIterator);

}

