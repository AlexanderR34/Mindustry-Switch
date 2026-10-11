#include "java/util/TreeMap_AscendingSubMapIterator.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/util/TreeMap_AbstractSubMapIterator.h"
#include "java/util/TreeMap_Entry.h"
#include "java/util/TreeMap_AscendingSubMapIterator.h"

extern "C" {


void mark_java_util_TreeMap$AscendingSubMapIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_TreeMap$AbstractSubMapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_TreeMap$AscendingSubMapIterator *) object;
}

void clinit_java_util_TreeMap$AscendingSubMapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_TreeMap$AbstractSubMapIterator(ctx);
}

void init_java_util_TreeMap$AscendingSubMapIterator_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AscendingSubMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(230);
	init_java_util_TreeMap$AbstractSubMapIterator_java_util_TreeMap$NavigableSubMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapIterator:getBoundaryNode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(235);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_2;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) == 0) goto label_4;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_smallerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_smallerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_smallerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_smallerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_6:;
	INST_ASTORE(1);
	goto label_7;
label_2:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_theBiggestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_theBiggestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(242);
	if ((frame[1].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$000_java_util_TreeMap$NavigableSubMap_R_java_util_TreeMap$Entry(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapIterator_getStartNode_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapIterator:getStartNode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart) == 0) goto label_1;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive) == 0) goto label_3;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_biggerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_biggerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_biggerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_biggerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMapIterator_getNext_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapIterator:getNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	jint temp0 = (jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	if (temp0 == ((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(260);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(262);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_lastNode = (jref) sp[1].o;
	LINE_NUMBER(265);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset = ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(266);
	jint temp0 = (jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (temp0 == ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) goto label_7;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_offset = (((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_offset) + (jint(1)));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(270);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_offset = ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_left_idx);
	}
label_9:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$AscendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_boundaryPair = (jref) sp[1].o;
	LINE_NUMBER(276);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_boundaryPair;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_boundaryPair;
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK(sp[0].o))->F_node;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_boundaryPair;
	if (((jint)((java_util_TreeMap$Entry *) NULL_CHECK(sp[0].o))->F_index) != ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset)) goto label_15;
	}
	{
	LINE_NUMBER(277);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$AscendingSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o, ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$AscendingSubMapIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMapIterator:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(287);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$AscendingSubMapIterator[] {
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
	(void *) M_java_util_TreeMap$AbstractSubMapIterator_remove,
	(void *) M_java_util_TreeMap$AbstractSubMapIterator_makeNext,
	(void *) M_java_util_TreeMap$AbstractSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMapIterator_getStartNode_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMapIterator_hasNext_R_boolean,
	(void *) M_java_util_TreeMap$AscendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMapIterator_getNext_R_java_util_TreeMap$Entry,
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
	{ "remove", "()V" },
	{ "makeNext", "()V" },
	{ "createEntry", "(Ljava/util/TreeMap$Node;I)Ljava/util/TreeMap$Entry;" },
	{ "getStartNode", "()Ljava/util/TreeMap$Entry;" },
	{ "hasNext", "()Z" },
	{ "getBoundaryNode", "()Ljava/util/TreeMap$Entry;" },
	{ "getNext", "()Ljava/util/TreeMap$Entry;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$AscendingSubMapIterator_java_util_TreeMap$NavigableSubMap, 0, "(Ljava/util/TreeMap$NavigableSubMap;)V", 0 },
	{ "getBoundaryNode", (intptr_t) M_java_util_TreeMap$AscendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$AscendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 16 },
	{ "getStartNode", (intptr_t) M_java_util_TreeMap$AscendingSubMapIterator_getStartNode_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$AscendingSubMapIterator_getStartNode_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 16 },
	{ "getNext", (intptr_t) M_java_util_TreeMap$AscendingSubMapIterator_getNext_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$AscendingSubMapIterator_getNext_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 0 },
	{ "hasNext", (intptr_t) M_java_util_TreeMap$AscendingSubMapIterator_hasNext_R_boolean, VTABLE_java_util_TreeMap$AscendingSubMapIterator_hasNext_R_boolean, "()Z", 17 },
};

Class class_java_util_TreeMap$AscendingSubMapIterator{
		.nativeName = (intptr_t) "java/util/TreeMap$AscendingSubMapIterator",
		.parentClass = (intptr_t) &class_java_util_TreeMap$AbstractSubMapIterator,
		.size = sizeof(java_util_TreeMap$AscendingSubMapIterator),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$AscendingSubMapIterator,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$AscendingSubMapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$AscendingSubMapIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$AscendingSubMapIterator = registerClass(&class_java_util_TreeMap$AscendingSubMapIterator);

}

