#include "java/util/TreeMap_DescendingSubMapIterator.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/TreeMap_DescendingSubMapIterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/TreeMap_AbstractSubMapIterator.h"
#include "java/util/TreeMap_Entry.h"

extern "C" {


void mark_java_util_TreeMap$DescendingSubMapIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeMap$DescendingSubMapIterator *) object;
}

void clinit_java_util_TreeMap$DescendingSubMapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_TreeMap$AbstractSubMapIterator(ctx);
}

void init_java_util_TreeMap$DescendingSubMapIterator_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapIterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$DescendingSubMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(320);
	init_java_util_TreeMap$AbstractSubMapIterator_java_util_TreeMap$NavigableSubMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(322);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_fromStart) == 0) goto label_2;
	}
	{
	LINE_NUMBER(323);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_loInclusive) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	INST_ASTORE(2);
	goto label_7;
label_2:;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(327);
	if ((frame[2].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(328);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(329);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[2].o)))->F_node;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(333);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset = ((jint)((java_util_TreeMap$Entry *) NULL_CHECK((frame[2].o)))->F_index);
	goto label_14;
	}
label_8:;
	{
	LINE_NUMBER(335);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_boundaryPair = (jref) sp[1].o;
	LINE_NUMBER(339);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_boundaryPair;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_boundaryPair;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK(sp[1].o))->F_key;
	sp[2].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_17;
	}
	{
	LINE_NUMBER(341);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	}
label_17:;
	{
	LINE_NUMBER(344);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_toEnd) == 0) goto label_20;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_hiInclusive) != 0) goto label_20;
	}
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_hi;
	sp[2].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(347);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	}
label_20:;
	LINE_NUMBER(350);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapIterator_getStartNode_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapIterator:getStartNode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) == 0) goto label_3;
	}
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_smallerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_smallerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_smallerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_smallerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	LINE_NUMBER(355);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_theBiggestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_theBiggestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapIterator:getBoundaryNode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_hiInclusive) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMapIterator_getNext_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapIterator:getNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(371);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(373);
	jint temp0 = (jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	if (temp0 == ((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_3;
	}
	{
	LINE_NUMBER(374);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_lastNode = (jref) sp[1].o;
	LINE_NUMBER(378);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset = ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(379);
	jint temp0 = (jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (temp0 == ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx)) goto label_7;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_offset = (((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_offset) - (jint(1)));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_prev;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(383);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(384);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_offset = ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_right_idx);
	}
label_9:;
	{
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_boundaryPair = (jref) sp[1].o;
	LINE_NUMBER(388);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_boundaryPair;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_boundaryPair;
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK(sp[0].o))->F_node;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_boundaryPair;
	if (((jint)((java_util_TreeMap$Entry *) NULL_CHECK(sp[0].o))->F_index) != ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset)) goto label_13;
	}
	{
	LINE_NUMBER(389);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	}
label_13:;
	{
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((func_java_util_TreeMap$DescendingSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o, ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$DescendingSubMapIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapIterator:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_1;
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

void M_java_util_TreeMap$DescendingSubMapIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMapIterator:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(400);
	jint temp0 = (jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	if (temp0 != ((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(401);
	jint temp0 = (jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	if (temp0 != ((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_3;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_keys;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset));
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ACONST_NULL();
label_6:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(403);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(404);
	frame[2].i = ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset);
	LINE_NUMBER(405);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (temp0 != ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx)) goto label_11;
	}
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((func_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(407);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (temp0 != ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) goto label_14;
	}
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((func_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((func_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	}
label_13:;
	{
	LINE_NUMBER(412);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_16;
	}
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_node;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(416);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset = ((jint)((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_index);
	LINE_NUMBER(417);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$DescendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_boundaryPair = (jref) sp[1].o;
	LINE_NUMBER(418);
	goto label_22;
	}
label_16:;
	{
	LINE_NUMBER(419);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	}
label_22:;
	{
	LINE_NUMBER(421);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode = (jref) (jobject(nullptr));
	LINE_NUMBER(422);
	sp[0].o = frame[0].o;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = (((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount) + (jint(1)));
	LINE_NUMBER(423);
	goto label_25;
	}
label_8:;
	{
	LINE_NUMBER(424);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_25:;
	LINE_NUMBER(426);
	goto label_3;
label_1:;
	{
	LINE_NUMBER(428);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(430);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$DescendingSubMapIterator[] {
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
	(void *) M_java_util_TreeMap$DescendingSubMapIterator_remove,
	(void *) M_java_util_TreeMap$AbstractSubMapIterator_makeNext,
	(void *) M_java_util_TreeMap$AbstractSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMapIterator_getStartNode_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMapIterator_hasNext_R_boolean,
	(void *) M_java_util_TreeMap$DescendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$DescendingSubMapIterator_getNext_R_java_util_TreeMap$Entry,
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
	{ "<init>", (intptr_t) init_java_util_TreeMap$DescendingSubMapIterator_java_util_TreeMap$NavigableSubMap, 0, "(Ljava/util/TreeMap$NavigableSubMap;)V", 0 },
	{ "getStartNode", (intptr_t) M_java_util_TreeMap$DescendingSubMapIterator_getStartNode_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$DescendingSubMapIterator_getStartNode_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 16 },
	{ "getBoundaryNode", (intptr_t) M_java_util_TreeMap$DescendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$DescendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 16 },
	{ "getNext", (intptr_t) M_java_util_TreeMap$DescendingSubMapIterator_getNext_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$DescendingSubMapIterator_getNext_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 0 },
	{ "hasNext", (intptr_t) M_java_util_TreeMap$DescendingSubMapIterator_hasNext_R_boolean, VTABLE_java_util_TreeMap$DescendingSubMapIterator_hasNext_R_boolean, "()Z", 17 },
	{ "remove", (intptr_t) M_java_util_TreeMap$DescendingSubMapIterator_remove, VTABLE_java_util_TreeMap$DescendingSubMapIterator_remove, "()V", 17 },
};

Class class_java_util_TreeMap$DescendingSubMapIterator{
		.nativeName = (intptr_t) "java/util/TreeMap$DescendingSubMapIterator",
		.parentClass = (intptr_t) &class_java_util_TreeMap$AbstractSubMapIterator,
		.size = sizeof(java_util_TreeMap$DescendingSubMapIterator),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$DescendingSubMapIterator,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$DescendingSubMapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$DescendingSubMapIterator,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$DescendingSubMapIterator = registerClass(&class_java_util_TreeMap$DescendingSubMapIterator);

}

