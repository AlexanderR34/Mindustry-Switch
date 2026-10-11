#include "java/util/TreeMap_UnboundedEntryIterator.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/Map_Entry.h"
#include "java/util/TreeMap_TreeMapEntry.h"
#include "java/util/TreeMap_AbstractMapIterator.h"
#include "java/util/TreeMap_UnboundedEntryIterator.h"

extern "C" {


void mark_java_util_TreeMap$UnboundedEntryIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_TreeMap$AbstractMapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_TreeMap$UnboundedEntryIterator *) object;
}

void clinit_java_util_TreeMap$UnboundedEntryIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_TreeMap$AbstractMapIterator(ctx);
}

void init_java_util_TreeMap$UnboundedEntryIterator_java_util_TreeMap_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$UnboundedEntryIterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$UnboundedEntryIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(5748);
	init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap_java_util_TreeMap$Node_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(5749);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$UnboundedEntryIterator_java_util_TreeMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$UnboundedEntryIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$UnboundedEntryIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5752);
	init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(5753);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$UnboundedEntryIterator_next_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$UnboundedEntryIterator:next", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5756);
	((func_java_util_TreeMap$UnboundedEntryIterator_makeNext) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$UnboundedEntryIterator_makeNext])(ctx, (frame[0].o));
	LINE_NUMBER(5757);
	frame[1].i = ((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset);
	LINE_NUMBER(5758);
	clinit_java_util_TreeMap$TreeMapEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$TreeMapEntry);
	sp[1].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_keys;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i));
	sp[2].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[2].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[2].o))->F_values;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i));
	sp[3].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	init_java_util_TreeMap$TreeMapEntry_java_lang_Object_java_lang_Object_java_util_TreeMap$Node_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$UnboundedEntryIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$UnboundedEntryIterator:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5743);
	sp[0].o = (jobject)((func_java_util_TreeMap$UnboundedEntryIterator_next_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$UnboundedEntryIterator_next_R_java_util_Map$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$UnboundedEntryIterator[] {
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
	(void *) M_java_util_TreeMap$AbstractMapIterator_hasNext_R_boolean,
	(void *) M_java_util_TreeMap$AbstractMapIterator_makeNext,
	(void *) M_java_util_TreeMap$AbstractMapIterator_remove,
	(void *) M_java_util_TreeMap$UnboundedEntryIterator_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_TreeMap$UnboundedEntryIterator_next_R_java_util_Map$Entry,
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
	{ "makeNext", "()V" },
	{ "remove", "()V" },
	{ "next", "()Ljava/lang/Object;" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "next", "()Ljava/util/Map$Entry;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$UnboundedEntryIterator_java_util_TreeMap_java_util_TreeMap$Node_int, 0, "(Ljava/util/TreeMap;Ljava/util/TreeMap$Node;I)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$UnboundedEntryIterator_java_util_TreeMap, 0, "(Ljava/util/TreeMap;)V", 0 },
	{ "next", (intptr_t) M_java_util_TreeMap$UnboundedEntryIterator_next_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$UnboundedEntryIterator_next_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "next", (intptr_t) M_java_util_TreeMap$UnboundedEntryIterator_next_R_java_lang_Object, VTABLE_java_util_TreeMap$UnboundedEntryIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_java_util_TreeMap$UnboundedEntryIterator{
		.nativeName = (intptr_t) "java/util/TreeMap$UnboundedEntryIterator",
		.parentClass = (intptr_t) &class_java_util_TreeMap$AbstractMapIterator,
		.size = sizeof(java_util_TreeMap$UnboundedEntryIterator),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$UnboundedEntryIterator,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$UnboundedEntryIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$UnboundedEntryIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$UnboundedEntryIterator = registerClass(&class_java_util_TreeMap$UnboundedEntryIterator);

}

