#include "java/util/TreeMap_BoundedValueIterator.h"
#include "java/util/TreeMap.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/TreeMap_BoundedMapIterator.h"
#include "java/util/TreeMap_BoundedValueIterator.h"
#include "java/util/TreeMap_AbstractMapIterator.h"

extern "C" {


void mark_java_util_TreeMap$BoundedValueIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_TreeMap$BoundedMapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_TreeMap$BoundedValueIterator *) object;
}

void clinit_java_util_TreeMap$BoundedValueIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_TreeMap$BoundedMapIterator(ctx);
}

void init_java_util_TreeMap$BoundedValueIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$BoundedValueIterator:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$BoundedValueIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1151);
	init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o), (frame[5].i));
	LINE_NUMBER(1152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$BoundedValueIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$BoundedValueIterator:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1155);
	jint temp0 = (jint)((func_java_util_TreeMap$BoundedValueIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$BoundedValueIterator_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1156);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1158);
	((func_java_util_TreeMap$BoundedValueIterator_makeBoundedNext) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$BoundedValueIterator_makeBoundedNext])(ctx, (frame[0].o));
	LINE_NUMBER(1159);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$AbstractMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset)));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$BoundedValueIterator[] {
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
	(void *) M_java_util_TreeMap$BoundedMapIterator_hasNext_R_boolean,
	(void *) M_java_util_TreeMap$AbstractMapIterator_makeNext,
	(void *) M_java_util_TreeMap$AbstractMapIterator_remove,
	(void *) M_java_util_TreeMap$BoundedMapIterator_makeBoundedNext,
	(void *) M_java_util_TreeMap$BoundedValueIterator_next_R_java_lang_Object,
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
	{ "makeBoundedNext", "()V" },
	{ "next", "()Ljava/lang/Object;" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$BoundedValueIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node_int, 0, "(Ljava/util/TreeMap$Node;ILjava/util/TreeMap;Ljava/util/TreeMap$Node;I)V", 1 },
	{ "next", (intptr_t) M_java_util_TreeMap$BoundedValueIterator_next_R_java_lang_Object, VTABLE_java_util_TreeMap$BoundedValueIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_java_util_TreeMap$BoundedValueIterator{
		.nativeName = (intptr_t) "java/util/TreeMap$BoundedValueIterator",
		.parentClass = (intptr_t) &class_java_util_TreeMap$BoundedMapIterator,
		.size = sizeof(java_util_TreeMap$BoundedValueIterator),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$BoundedValueIterator,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$BoundedValueIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$BoundedValueIterator,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$BoundedValueIterator = registerClass(&class_java_util_TreeMap$BoundedValueIterator);

}

