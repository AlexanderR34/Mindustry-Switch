#include "java/util/TreeMap_AbstractSubMapIterator.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/TreeMap_AbstractSubMapIterator.h"
#include "java/util/TreeMap_Entry.h"

extern "C" {


void mark_java_util_TreeMap$AbstractSubMapIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeMap$AbstractSubMapIterator *) object;
	if (self->F_subMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_subMap)->clazz)->markFunction)((jobject) self->F_subMap, mark, depth + 1);
	if (self->F_node)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_node)->clazz)->markFunction)((jobject) self->F_node, mark, depth + 1);
	if (self->F_lastNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastNode)->clazz)->markFunction)((jobject) self->F_lastNode, mark, depth + 1);
	if (self->F_boundaryPair)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_boundaryPair)->clazz)->markFunction)((jobject) self->F_boundaryPair, mark, depth + 1);
}

void clinit_java_util_TreeMap$AbstractSubMapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_TreeMap$AbstractSubMapIterator_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AbstractSubMapIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AbstractSubMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(129);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_getToEnd = (jint(0));
	LINE_NUMBER(132);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap = (jref) (frame[1].o);
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_m;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = ((jint)((java_util_TreeMap *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(135);
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$000_java_util_TreeMap$NavigableSubMap_R_java_util_TreeMap$Entry(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(136);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(137);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[1].o)))->F_toEnd) == 0) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_8;
	}
	goto label_6;
label_8:;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[2].o)))->F_node;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(140);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset = ((jint)((java_util_TreeMap$Entry *) NULL_CHECK((frame[2].o)))->F_index);
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$AbstractSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AbstractSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_boundaryPair = (jref) sp[1].o;
	}
label_6:;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_TreeMap$AbstractSubMapIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AbstractSubMapIterator:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	if (temp0 != ((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	if (temp0 != ((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_3;
	}
	{
	LINE_NUMBER(149);
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
	LINE_NUMBER(150);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(151);
	frame[2].i = ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset);
	LINE_NUMBER(152);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (temp0 != ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx)) goto label_11;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((func_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(154);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (temp0 != ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) goto label_14;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((func_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	frame[3].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	sp[0].o = (jobject)((func_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(159);
	if ((frame[1].o) != nullptr) goto label_13;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (temp0 <= ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) goto label_13;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_offset = (((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_offset) - (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(164);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_19;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(167);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_node;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(169);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset = ((jint)((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_index);
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$AbstractSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AbstractSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_boundaryPair = (jref) sp[1].o;
	goto label_19;
	}
label_22:;
	{
	LINE_NUMBER(172);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	}
label_19:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_keys;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset))));
	if (temp0 != 0) goto label_26;
	}
	{
	LINE_NUMBER(176);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	}
label_26:;
	{
	LINE_NUMBER(178);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode = (jref) (jobject(nullptr));
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = (((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount) + (jint(1)));
	LINE_NUMBER(180);
	goto label_30;
	}
label_8:;
	{
	LINE_NUMBER(181);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_30:;
	LINE_NUMBER(183);
	goto label_3;
label_1:;
	{
	LINE_NUMBER(185);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_TreeMap$AbstractSubMapIterator_makeNext(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AbstractSubMapIterator:makeNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	jint temp0 = (jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	if (temp0 == ((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(191);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(193);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_lastNode = (jref) sp[1].o;
	LINE_NUMBER(196);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset = ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(197);
	jint temp0 = (jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_offset;
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (temp0 == ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_right_idx)) goto label_7;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_offset = (((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_offset) + (jint(1)));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(201);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node;
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK(sp[0].o))->F_offset = ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[1].o))->F_left_idx);
	}
label_9:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_boundaryPair;
	sp[0].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK(sp[0].o))->F_node;
	sp[1].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastNode;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_boundaryPair;
	if (((jint)((java_util_TreeMap$Entry *) NULL_CHECK(sp[0].o))->F_index) != ((jint)((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_lastOffset)) goto label_12;
	}
	{
	LINE_NUMBER(207);
	((java_util_TreeMap$AbstractSubMapIterator *) NULL_CHECK((frame[0].o)))->F_node = (jref) (jobject(nullptr));
	}
label_12:;
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AbstractSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AbstractSubMapIterator:createEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(213);
	clinit_java_util_TreeMap$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$Entry);
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i));
	sp[2].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	init_java_util_TreeMap$Entry_java_lang_Object_java_lang_Object(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(214);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_node = (jref) (frame[1].o);
	LINE_NUMBER(215);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_index = (frame[2].i);
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$AbstractSubMapIterator[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
};

static FieldMetadata fields[] {
	{ "subMap", &class_java_util_TreeMap$NavigableSubMap, offsetof(java_util_TreeMap$AbstractSubMapIterator, F_subMap), "Ljava/util/TreeMap$NavigableSubMap;", 16 },
	{ "expectedModCount", &class_int, offsetof(java_util_TreeMap$AbstractSubMapIterator, F_expectedModCount), "I", 0 },
	{ "node", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$AbstractSubMapIterator, F_node), "Ljava/util/TreeMap$Node;", 0 },
	{ "lastNode", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$AbstractSubMapIterator, F_lastNode), "Ljava/util/TreeMap$Node;", 0 },
	{ "boundaryPair", &class_java_util_TreeMap$Entry, offsetof(java_util_TreeMap$AbstractSubMapIterator, F_boundaryPair), "Ljava/util/TreeMap$Entry;", 0 },
	{ "offset", &class_int, offsetof(java_util_TreeMap$AbstractSubMapIterator, F_offset), "I", 0 },
	{ "lastOffset", &class_int, offsetof(java_util_TreeMap$AbstractSubMapIterator, F_lastOffset), "I", 0 },
	{ "getToEnd", &class_boolean, offsetof(java_util_TreeMap$AbstractSubMapIterator, F_getToEnd), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$AbstractSubMapIterator_java_util_TreeMap$NavigableSubMap, 0, "(Ljava/util/TreeMap$NavigableSubMap;)V", 0 },
	{ "remove", (intptr_t) M_java_util_TreeMap$AbstractSubMapIterator_remove, VTABLE_java_util_TreeMap$AbstractSubMapIterator_remove, "()V", 1 },
	{ "makeNext", (intptr_t) M_java_util_TreeMap$AbstractSubMapIterator_makeNext, VTABLE_java_util_TreeMap$AbstractSubMapIterator_makeNext, "()V", 16 },
	{ "createEntry", (intptr_t) M_java_util_TreeMap$AbstractSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$AbstractSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry, "(Ljava/util/TreeMap$Node;I)Ljava/util/TreeMap$Entry;", 0 },
	{ "getStartNode", 0, VTABLE_java_util_TreeMap$AbstractSubMapIterator_getStartNode_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 1024 },
	{ "hasNext", 0, VTABLE_java_util_TreeMap$AbstractSubMapIterator_hasNext_R_boolean, "()Z", 1024 },
	{ "getBoundaryNode", 0, VTABLE_java_util_TreeMap$AbstractSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 1024 },
};

Class class_java_util_TreeMap$AbstractSubMapIterator{
		.nativeName = (intptr_t) "java/util/TreeMap$AbstractSubMapIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_TreeMap$AbstractSubMapIterator),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$AbstractSubMapIterator,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$AbstractSubMapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$AbstractSubMapIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$AbstractSubMapIterator = registerClass(&class_java_util_TreeMap$AbstractSubMapIterator);

}

