#include "java/util/TreeMap_UnboundedValueIterator.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/TreeMap_UnboundedValueIterator.h"
#include "java/util/TreeMap_AbstractMapIterator.h"

extern "C" {


void mark_java_util_TreeMap$UnboundedValueIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeMap$UnboundedValueIterator *) object;
}

void clinit_java_util_TreeMap$UnboundedValueIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_TreeMap$AbstractMapIterator(ctx);
}

void init_java_util_TreeMap$UnboundedValueIterator_java_util_TreeMap_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$UnboundedValueIterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$UnboundedValueIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(5785);
	init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap_java_util_TreeMap$Node_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(5786);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$UnboundedValueIterator_java_util_TreeMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$UnboundedValueIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$UnboundedValueIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5789);
	init_java_util_TreeMap$AbstractMapIterator_java_util_TreeMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(5790);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$UnboundedValueIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$UnboundedValueIterator:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5793);
	((func_java_util_TreeMap$UnboundedValueIterator_makeNext) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$UnboundedValueIterator_makeNext])(ctx, (frame[0].o));
	LINE_NUMBER(5794);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset)));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$UnboundedValueIterator[] {
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
	(void *) M_java_util_TreeMap$UnboundedValueIterator_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
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
};

static jclass interfaces[] { &class_java_util_Iterator, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$UnboundedValueIterator_java_util_TreeMap_java_util_TreeMap$Node_int, 0, "(Ljava/util/TreeMap;Ljava/util/TreeMap$Node;I)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$UnboundedValueIterator_java_util_TreeMap, 0, "(Ljava/util/TreeMap;)V", 0 },
	{ "next", (intptr_t) M_java_util_TreeMap$UnboundedValueIterator_next_R_java_lang_Object, VTABLE_java_util_TreeMap$UnboundedValueIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_java_util_TreeMap$UnboundedValueIterator{
		.nativeName = (intptr_t) "java/util/TreeMap$UnboundedValueIterator",
		.parentClass = (intptr_t) &class_java_util_TreeMap$AbstractMapIterator,
		.size = sizeof(java_util_TreeMap$UnboundedValueIterator),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$UnboundedValueIterator,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$UnboundedValueIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$UnboundedValueIterator,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$UnboundedValueIterator = registerClass(&class_java_util_TreeMap$UnboundedValueIterator);

}

