#include "java/util/TreeMap_SubMap.h"
#include "java/util/Iterator.h"
#include "java/lang/Comparable.h"
#include "java/util/TreeMap_Node.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Map.h"
#include "java/util/TreeMap.h"
#include "java/util/Collection.h"
#include "java/util/TreeMap_SubMap.h"
#include "java/util/Set.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Comparator.h"
#include "java/util/TreeMap_SubMapValuesCollection.h"
#include "java/util/SortedMap.h"
#include "java/util/TreeMap_SubMapEntrySet.h"
#include "java/util/TreeMap_SubMapKeySet.h"
#include "java/util/AbstractMap.h"

extern "C" {


void mark_java_util_TreeMap$SubMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_TreeMap$SubMap *) object;
	if (self->F_backingMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backingMap)->clazz)->markFunction)((jobject) self->F_backingMap, mark, depth + 1);
	if (self->F_startKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_startKey)->clazz)->markFunction)((jobject) self->F_startKey, mark, depth + 1);
	if (self->F_endKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_endKey)->clazz)->markFunction)((jobject) self->F_endKey, mark, depth + 1);
	if (self->F_entrySet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entrySet)->clazz)->markFunction)((jobject) self->F_entrySet, mark, depth + 1);
	if (self->F_firstKeyNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_firstKeyNode)->clazz)->markFunction)((jobject) self->F_firstKeyNode, mark, depth + 1);
	if (self->F_lastKeyNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastKeyNode)->clazz)->markFunction)((jobject) self->F_lastKeyNode, mark, depth + 1);
}

void clinit_java_util_TreeMap$SubMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractMap(ctx);
}

void init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$SubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(479);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(465);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_entrySet = (jref) (jobject(nullptr));
	LINE_NUMBER(467);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyModCount = (jint(-1));
	LINE_NUMBER(469);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyModCount = (jint(-1));
	LINE_NUMBER(480);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap = (jref) (frame[2].o);
	LINE_NUMBER(481);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart = (jint(1));
	LINE_NUMBER(482);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey = (jref) (frame[1].o);
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$SubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(485);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(465);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_entrySet = (jref) (jobject(nullptr));
	LINE_NUMBER(467);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyModCount = (jint(-1));
	LINE_NUMBER(469);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyModCount = (jint(-1));
	LINE_NUMBER(486);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap = (jref) (frame[2].o);
	LINE_NUMBER(487);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(1);
	((java_util_TreeMap$SubMap *) NULL_CHECK(sp[1].o))->F_hasEnd = temp0;
	((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_hasStart = temp0;
	LINE_NUMBER(488);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey = (jref) (frame[1].o);
	LINE_NUMBER(489);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey = (jref) (frame[3].o);
	LINE_NUMBER(490);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$SubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$SubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(492);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(465);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_entrySet = (jref) (jobject(nullptr));
	LINE_NUMBER(467);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyModCount = (jint(-1));
	LINE_NUMBER(469);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyModCount = (jint(-1));
	LINE_NUMBER(493);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap = (jref) (frame[3].o);
	LINE_NUMBER(494);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart = (frame[2].i);
	LINE_NUMBER(495);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd = (frame[5].i);
	LINE_NUMBER(496);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey = (jref) (frame[1].o);
	LINE_NUMBER(497);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey = (jref) (frame[4].o);
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$SubMap_java_util_TreeMap_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$SubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(500);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(465);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_entrySet = (jref) (jobject(nullptr));
	LINE_NUMBER(467);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyModCount = (jint(-1));
	LINE_NUMBER(469);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyModCount = (jint(-1));
	LINE_NUMBER(501);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap = (jref) (frame[1].o);
	LINE_NUMBER(502);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd = (jint(1));
	LINE_NUMBER(503);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey = (jref) (frame[2].o);
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap$SubMap_checkRange_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:checkRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	frame[2].o = sp[0].o;
	LINE_NUMBER(508);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(510);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_5;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 >= 0) goto label_5;
	}
	{
	LINE_NUMBER(511);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(513);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_7;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 < 0) goto label_7;
	}
	{
	LINE_NUMBER(514);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(516);
	goto label_9;
label_2:;
	{
	LINE_NUMBER(517);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	LINE_NUMBER(518);
	sp[0].o = (jobject)((func_java_util_TreeMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_10;
	}
	{
	LINE_NUMBER(519);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(521);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_TreeMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_9;
	}
	{
	LINE_NUMBER(522);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(525);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:isInRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	frame[2].o = sp[0].o;
	LINE_NUMBER(529);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(531);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_5;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 >= 0) goto label_5;
	}
	{
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(534);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_7;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 < 0) goto label_7;
	}
	{
	LINE_NUMBER(535);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	LINE_NUMBER(537);
	goto label_9;
label_2:;
	{
	LINE_NUMBER(538);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_10;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_10;
	}
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(541);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_9;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_9;
	}
	{
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$SubMap_checkUpperBound_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:checkUpperBound", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(549);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	frame[2].o = sp[0].o;
	LINE_NUMBER(551);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 >= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(554);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$SubMap_checkLowerBound_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:checkLowerBound", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(560);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	frame[2].o = sp[0].o;
	LINE_NUMBER(562);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 < 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(565);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_comparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:comparator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_TreeMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$SubMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(577);
	jint temp0 = (jint)M_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)((func_java_util_TreeMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap$SubMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(585);
	sp[0].o = (jobject)((func_java_util_TreeMap$SubMap_keySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$SubMap_keySet_R_java_util_Set])(ctx, (frame[0].o));
	((func_java_util_Set_clear) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$SubMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:containsValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((func_java_util_TreeMap$SubMap_values_R_java_util_Collection) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$SubMap_values_R_java_util_Collection])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(591);
	if ((frame[1].o) == nullptr) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(592);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(593);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(598);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(600);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(604);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:entrySet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_entrySet;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(610);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap$SubMapEntrySet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMapEntrySet);
	init_java_util_TreeMap$SubMapEntrySet_java_util_TreeMap$SubMap(ctx, sp[1].o, (frame[0].o));
	((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_entrySet = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(612);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_entrySet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap$SubMap_setFirstKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:setFirstKey", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(616);
	jint temp0 = (jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyModCount;
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	if (temp0 != ((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	LINE_NUMBER(617);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	LINE_NUMBER(620);
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(621);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	frame[2].o = sp[0].o;
	LINE_NUMBER(622);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root;
	frame[3].o = sp[0].o;
	LINE_NUMBER(623);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(624);
	frame[5].i = (jint(-1));
	}
label_9:;
	{
	LINE_NUMBER(625);
	if ((frame[3].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(626);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_keys;
	frame[6].o = sp[0].o;
	LINE_NUMBER(627);
	frame[7].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_left_idx);
	LINE_NUMBER(628);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, (frame[1].o), (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))));
	frame[8].i = temp0;
	LINE_NUMBER(629);
	if ((frame[8].i) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(630);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(631);
	frame[5].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_left_idx);
	LINE_NUMBER(632);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_left;
	frame[3].o = sp[0].o;
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(633);
	if ((frame[8].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(634);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(635);
	frame[5].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_left_idx);
	LINE_NUMBER(636);
	goto label_10;
	}
label_20:;
	{
	LINE_NUMBER(638);
	frame[9].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_right_idx);
	LINE_NUMBER(639);
	if ((frame[7].i) == (frame[9].i)) goto label_25;
	}
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, (frame[1].o), (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[9].i))));
	frame[8].i = temp0;
	}
label_25:;
	{
	LINE_NUMBER(642);
	if ((frame[8].i) <= 0) goto label_27;
	}
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_right;
	frame[3].o = sp[0].o;
	goto label_19;
	}
label_27:;
	{
	LINE_NUMBER(644);
	if ((frame[8].i) != 0) goto label_29;
	}
	{
	LINE_NUMBER(645);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(646);
	frame[5].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_right_idx);
	LINE_NUMBER(647);
	goto label_10;
	}
label_29:;
	{
	LINE_NUMBER(649);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(650);
	frame[5].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_right_idx);
	LINE_NUMBER(651);
	frame[10].i = ((frame[7].i) + (jint(1)));
	frame[11].i = (jint(0));
	frame[12].i = ((frame[9].i) - (jint(1)));
	}
label_37:;
	{
	LINE_NUMBER(652);
	if ((frame[10].i) > (frame[12].i)) goto label_10;
	}
	{
	LINE_NUMBER(653);
	frame[11].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[10].i) + (frame[12].i))) >> (jint(1))));
	LINE_NUMBER(654);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, (frame[1].o), (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[11].i))));
	frame[8].i = temp0;
	LINE_NUMBER(655);
	if ((frame[8].i) <= 0) goto label_41;
	}
	{
	LINE_NUMBER(656);
	frame[10].i = ((frame[11].i) + (jint(1)));
	goto label_37;
	}
label_41:;
	{
	LINE_NUMBER(657);
	if ((frame[8].i) != 0) goto label_43;
	}
	{
	LINE_NUMBER(658);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(659);
	frame[5].i = (frame[11].i);
	LINE_NUMBER(660);
	goto label_10;
	}
label_43:;
	{
	LINE_NUMBER(662);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(663);
	frame[5].i = (frame[11].i);
	LINE_NUMBER(664);
	frame[12].i = ((frame[11].i) - (jint(1)));
	goto label_37;
	}
label_19:;
	LINE_NUMBER(670);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(674);
	frame[6].i = (jint(1));
	LINE_NUMBER(675);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_50;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_50;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	frame[7].o = sp[0].o;
	LINE_NUMBER(677);
	if ((frame[7].o) != nullptr) goto label_53;
	}
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))));
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 > 0) goto label_55;
	}
	INST_ICONST(1);
	goto label_56;
label_55:;
	INST_ICONST(0);
label_56:;
	INST_ISTORE(6);
	goto label_50;
label_53:;
	{
	LINE_NUMBER(680);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i));
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_57;
	}
	INST_ICONST(1);
	goto label_58;
label_57:;
	INST_ICONST(0);
label_58:;
	INST_ISTORE(6);
label_50:;
	{
	LINE_NUMBER(683);
	if ((frame[4].o) == nullptr) goto label_59;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_59;
	{
	LINE_NUMBER(685);
	frame[4].o = (jobject(nullptr));
	}
label_59:;
	{
	LINE_NUMBER(687);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyNode = (jref) (frame[4].o);
	LINE_NUMBER(688);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyIndex = (frame[5].i);
	LINE_NUMBER(689);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_firstKeyModCount = ((jint)((java_util_TreeMap *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_firstKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:firstKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	if (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(694);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) != 0) goto label_3;
	}
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root;
	sp[0].o = (jobject)SM_java_util_TreeMap_minimum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(696);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx));
	LINE_NUMBER(697);
	jint temp0 = (jint)M_java_util_TreeMap$SubMap_checkUpperBound_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx)));
	}
label_6:;
	LINE_NUMBER(700);
	goto label_1;
label_3:;
	{
	LINE_NUMBER(701);
	M_java_util_TreeMap$SubMap_setFirstKey(ctx, (frame[0].o));
	LINE_NUMBER(702);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyNode;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyNode;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyIndex)));
	}
label_1:;
	{
	LINE_NUMBER(707);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(713);
	jint temp0 = (jint)M_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_TreeMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(716);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_headMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:headMap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	frame[2].o = sp[0].o;
	LINE_NUMBER(721);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(723);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_5;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 >= 0) goto label_5;
	}
	{
	LINE_NUMBER(724);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(726);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_7;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 <= 0) goto label_7;
	}
	{
	LINE_NUMBER(727);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(729);
	goto label_9;
label_2:;
	{
	LINE_NUMBER(730);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	LINE_NUMBER(731);
	sp[0].o = (jobject)((func_java_util_TreeMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_10;
	}
	{
	LINE_NUMBER(732);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(734);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_TreeMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_9;
	}
	{
	LINE_NUMBER(735);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(738);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_14;
	}
	{
	LINE_NUMBER(739);
	clinit_java_util_TreeMap$SubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMap);
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(741);
	clinit_java_util_TreeMap$SubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMap);
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	init_java_util_TreeMap$SubMap_java_util_TreeMap_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$SubMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:isEmpty", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(746);
	sp[0].o = (jobject)((func_java_util_TreeMap$SubMap_keySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$SubMap_keySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(747);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(748);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(750);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:keySet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(756);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap$SubMapKeySet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMapKeySet);
	init_java_util_TreeMap$SubMapKeySet_java_util_TreeMap$SubMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_keySet = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap$SubMap_setLastKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:setLastKey", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(762);
	jint temp0 = (jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyModCount;
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	if (temp0 != ((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	LINE_NUMBER(763);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(765);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	LINE_NUMBER(766);
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(767);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	frame[2].o = sp[0].o;
	LINE_NUMBER(768);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root;
	frame[3].o = sp[0].o;
	LINE_NUMBER(769);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(770);
	frame[5].i = (jint(-1));
	}
label_9:;
	{
	LINE_NUMBER(771);
	if ((frame[3].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(772);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_keys;
	frame[6].o = sp[0].o;
	LINE_NUMBER(773);
	frame[7].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_left_idx);
	LINE_NUMBER(775);
	if ((frame[1].o) == nullptr) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))), (frame[2].o));
	jint temp1 = -temp0;
	sp[0].i = temp1;
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(778);
	if ((frame[8].i) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_left;
	frame[3].o = sp[0].o;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(781);
	frame[9].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_right_idx);
	LINE_NUMBER(782);
	if ((frame[7].i) == (frame[9].i)) goto label_21;
	}
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, (frame[1].o), (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[9].i))));
	frame[8].i = temp0;
	}
label_21:;
	{
	LINE_NUMBER(785);
	if ((frame[8].i) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(786);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(787);
	frame[5].i = (frame[9].i);
	LINE_NUMBER(788);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_right;
	frame[3].o = sp[0].o;
	goto label_19;
	}
label_23:;
	{
	LINE_NUMBER(789);
	if ((frame[8].i) != 0) goto label_27;
	}
	{
	LINE_NUMBER(790);
	if (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_left_idx) != ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_right_idx)) goto label_29;
	}
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[3].o)))->F_prev;
	frame[4].o = sp[0].o;
	LINE_NUMBER(792);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(793);
	frame[5].i = (((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx) - (jint(1)));
	goto label_10;
	}
label_29:;
	{
	LINE_NUMBER(796);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(797);
	frame[5].i = (frame[9].i);
	LINE_NUMBER(799);
	goto label_10;
	}
label_27:;
	{
	LINE_NUMBER(801);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(802);
	frame[5].i = (frame[7].i);
	LINE_NUMBER(803);
	frame[10].i = ((frame[7].i) + (jint(1)));
	frame[11].i = (jint(0));
	frame[12].i = ((frame[9].i) - (jint(1)));
	}
label_39:;
	{
	LINE_NUMBER(804);
	if ((frame[10].i) > (frame[12].i)) goto label_10;
	}
	{
	LINE_NUMBER(805);
	frame[11].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[10].i) + (frame[12].i))) >> (jint(1))));
	LINE_NUMBER(806);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	jint temp0 = (jint)SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, (frame[1].o), (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[11].i))));
	frame[8].i = temp0;
	LINE_NUMBER(807);
	if ((frame[8].i) <= 0) goto label_43;
	}
	{
	LINE_NUMBER(808);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(809);
	frame[5].i = (frame[11].i);
	LINE_NUMBER(810);
	frame[10].i = ((frame[11].i) + (jint(1)));
	goto label_39;
	}
label_43:;
	{
	LINE_NUMBER(811);
	if ((frame[8].i) != 0) goto label_47;
	}
	{
	LINE_NUMBER(812);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(813);
	frame[5].i = (frame[11].i);
	LINE_NUMBER(814);
	goto label_10;
	}
label_47:;
	{
	LINE_NUMBER(816);
	frame[12].i = ((frame[11].i) - (jint(1)));
	goto label_39;
	}
label_19:;
	LINE_NUMBER(822);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(823);
	if ((frame[4].o) == nullptr) goto label_51;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i));
	LINE_NUMBER(824);
	jint temp0 = (jint)M_java_util_TreeMap$SubMap_checkLowerBound_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_51;
	}
	{
	LINE_NUMBER(825);
	frame[4].o = (jobject(nullptr));
	}
label_51:;
	{
	LINE_NUMBER(827);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyNode = (jref) (frame[4].o);
	LINE_NUMBER(828);
	((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyIndex = (frame[5].i);
	LINE_NUMBER(829);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	((java_util_TreeMap$SubMap *) NULL_CHECK(sp[0].o))->F_lastKeyModCount = ((jint)((java_util_TreeMap *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(830);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_lastKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:lastKey", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(833);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	if (((jint)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	sp[1].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(834);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) != 0) goto label_3;
	}
	{
	LINE_NUMBER(835);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root;
	sp[0].o = (jobject)SM_java_util_TreeMap_maximum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(836);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx));
	LINE_NUMBER(837);
	jint temp0 = (jint)M_java_util_TreeMap$SubMap_checkLowerBound_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx)));
	}
label_6:;
	LINE_NUMBER(840);
	goto label_1;
label_3:;
	{
	LINE_NUMBER(841);
	M_java_util_TreeMap$SubMap_setLastKey(ctx, (frame[0].o));
	LINE_NUMBER(842);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyNode;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(843);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp += 1;
	goto label_12;
	}
label_11:;
	LINE_NUMBER(844);
	INST_ACONST_NULL();
label_12:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(845);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	sp[3].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyNode;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[3].o))->F_keys;
	jint temp0 = (jint)SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, ((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyIndex))));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyNode;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyIndex)));
	}
label_14:;
	{
	LINE_NUMBER(849);
	jint temp0 = (jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyIndex;
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyNode;
	if (temp0 == ((jint)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_left_idx)) goto label_16;
	}
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp += 1;
	goto label_19;
	}
label_18:;
	LINE_NUMBER(851);
	INST_ACONST_NULL();
label_19:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(853);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	sp[3].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyNode;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[3].o))->F_keys;
	jint temp0 = (jint)SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyIndex) - (jint(1))))));
	if (temp0 > 0) goto label_1;
	}
	{
	LINE_NUMBER(854);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyNode;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyIndex) - (jint(1)))));
	}
label_16:;
	{
	LINE_NUMBER(857);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyNode;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK(sp[0].o))->F_prev;
	frame[2].o = sp[0].o;
	LINE_NUMBER(858);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(859);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_right_idx)));
	}
label_1:;
	{
	LINE_NUMBER(866);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(871);
	jint temp0 = (jint)M_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(872);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_TreeMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(874);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(880);
	jint temp0 = (jint)M_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(881);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(883);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:subMap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(887);
	M_java_util_TreeMap$SubMap_checkRange_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(888);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	frame[3].o = sp[0].o;
	LINE_NUMBER(889);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(890);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(891);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o));
	if (temp0 >= 0) goto label_6;
	}
	{
	LINE_NUMBER(892);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(894);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[2].o));
	if (temp0 <= 0) goto label_8;
	}
	{
	LINE_NUMBER(895);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(897);
	goto label_10;
label_3:;
	{
	LINE_NUMBER(898);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	LINE_NUMBER(899);
	sp[0].o = (jobject)((func_java_util_TreeMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_startKey;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_11;
	}
	{
	LINE_NUMBER(900);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(902);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_TreeMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_10;
	}
	{
	LINE_NUMBER(903);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(906);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((func_java_util_TreeMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(907);
	if ((frame[4].o) != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(908);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	if (temp0 > 0) goto label_18;
	}
	{
	LINE_NUMBER(909);
	clinit_java_util_TreeMap$SubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMap);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(912);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o), (frame[2].o));
	if (temp0 > 0) goto label_18;
	}
	{
	LINE_NUMBER(913);
	clinit_java_util_TreeMap$SubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMap);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(916);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_tailMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:tailMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(920);
	M_java_util_TreeMap$SubMap_checkRange_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(921);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_2;
	}
	{
	LINE_NUMBER(922);
	clinit_java_util_TreeMap$SubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMap);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[3].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(924);
	clinit_java_util_TreeMap$SubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMap);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$SubMap_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(929);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(930);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap$SubMapValuesCollection(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMapValuesCollection);
	init_java_util_TreeMap$SubMapValuesCollection_java_util_TreeMap$SubMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(932);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap$SubMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:size", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(938);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasStart) == 0) goto label_1;
	}
	{
	LINE_NUMBER(939);
	M_java_util_TreeMap$SubMap_setFirstKey(ctx, (frame[0].o));
	LINE_NUMBER(940);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyNode;
	frame[1].o = sp[0].o;
	LINE_NUMBER(941);
	frame[3].i = ((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_firstKeyIndex);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(943);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root;
	sp[0].o = (jobject)SM_java_util_TreeMap_minimum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(944);
	if ((frame[1].o) != nullptr) goto label_8;
	}
	INST_ICONST(0);
	goto label_9;
label_8:;
	INST_ALOAD(1);
	sp[-1].i = ((java_util_TreeMap$Node *) NULL_CHECK(sp[-1].o))->F_left_idx;
label_9:;
	INST_ISTORE(3);
label_6:;
	{
	LINE_NUMBER(946);
	if ((frame[1].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(947);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(949);
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_12;
	}
	{
	LINE_NUMBER(950);
	M_java_util_TreeMap$SubMap_setLastKey(ctx, (frame[0].o));
	LINE_NUMBER(951);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyNode;
	frame[2].o = sp[0].o;
	LINE_NUMBER(952);
	frame[4].i = ((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_lastKeyIndex);
	LINE_NUMBER(953);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	sp += 1;
	goto label_18;
	}
label_17:;
	LINE_NUMBER(954);
	INST_ACONST_NULL();
label_18:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(955);
	if ((frame[2].o) != nullptr) goto label_20;
	}
	{
	LINE_NUMBER(956);
	popStackFrame(ctx);
	return (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(957);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_endKey;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_keys;
	jint temp0 = (jint)SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[4].i))));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(958);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_keys;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_24;
	}
	{
	LINE_NUMBER(959);
	INST_IINC(4, 1);
	goto label_22;
	}
label_24:;
	{
	LINE_NUMBER(961);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(962);
	if ((frame[2].o) != nullptr) goto label_27;
	}
	INST_ICONST(0);
	goto label_28;
label_27:;
	INST_ALOAD(2);
	sp[-1].i = ((java_util_TreeMap$Node *) NULL_CHECK(sp[-1].o))->F_left_idx;
label_28:;
	INST_ISTORE(4);
label_22:;
	LINE_NUMBER(965);
	goto label_29;
label_12:;
	{
	LINE_NUMBER(966);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root;
	sp[0].o = (jobject)SM_java_util_TreeMap_maximum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(967);
	if ((frame[2].o) != nullptr) goto label_31;
	}
	INST_ICONST(0);
	goto label_32;
label_31:;
	INST_ALOAD(2);
	sp[-1].i = ((java_util_TreeMap$Node *) NULL_CHECK(sp[-1].o))->F_right_idx;
label_32:;
	INST_ISTORE(4);
label_29:;
	{
	LINE_NUMBER(969);
	if ((frame[2].o) != nullptr) goto label_33;
	}
	{
	LINE_NUMBER(970);
	popStackFrame(ctx);
	return (jint(0));
	}
label_33:;
	{
	LINE_NUMBER(973);
	if ((frame[1].o) != (frame[2].o)) goto label_35;
	}
	{
	LINE_NUMBER(974);
	jint temp0 = (frame[4].i) - (frame[3].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_37;
	}
	INST_ICONST(0);
	goto label_38;
label_37:;
	INST_ICONST(1);
label_38:;
	INST_IADD();
	popStackFrame(ctx);
	INST_IRETURN();
label_35:;
	{
	LINE_NUMBER(976);
	frame[5].i = (jint(0));
	}
label_39:;
	{
	LINE_NUMBER(977);
	if ((frame[1].o) == (frame[2].o)) goto label_40;
	}
	{
	LINE_NUMBER(978);
	frame[5].i = ((frame[5].i) + ((((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_right_idx) - (frame[3].i)) + (jint(1))));
	LINE_NUMBER(979);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(980);
	frame[3].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_left_idx);
	goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(982);
	jint temp0 = ((frame[5].i) + (frame[4].i)) - (frame[3].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_hasEnd) == 0) goto label_44;
	}
	INST_ICONST(0);
	goto label_45;
label_44:;
	INST_ICONST(1);
label_45:;
	INST_IADD();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_java_util_TreeMap$SubMap_access$300_java_util_TreeMap$SubMap(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$SubMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(457);
	M_java_util_TreeMap$SubMap_setFirstKey(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap$SubMap_access$400_java_util_TreeMap$SubMap_R_java_util_TreeMap(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$SubMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((java_util_TreeMap$SubMap *) NULL_CHECK((frame[0].o)))->F_backingMap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_util_TreeMap$SubMap_access$500_java_util_TreeMap$SubMap(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:access$500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$SubMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(457);
	M_java_util_TreeMap$SubMap_setLastKey(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_TreeMap$SubMap_access$600_java_util_TreeMap$SubMap_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$SubMap:access$600", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$SubMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(457);
	jint temp0 = (jint)M_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$SubMap[] {
	(void *) M_java_util_AbstractMap_hashCode_R_int,
	(void *) M_java_util_AbstractMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_TreeMap$SubMap_clear,
	(void *) M_java_util_TreeMap$SubMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$SubMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$SubMap_entrySet_R_java_util_Set,
	(void *) M_java_util_TreeMap$SubMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$SubMap_isEmpty_R_boolean,
	(void *) M_java_util_TreeMap$SubMap_keySet_R_java_util_Set,
	(void *) M_java_util_TreeMap$SubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$SubMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_Map_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_TreeMap$SubMap_size_R_int,
	(void *) M_java_util_TreeMap$SubMap_values_R_java_util_Collection,
	(void *) M_java_util_TreeMap$SubMap_comparator_R_java_util_Comparator,
	(void *) M_java_util_TreeMap$SubMap_firstKey_R_java_lang_Object,
	(void *) M_java_util_TreeMap$SubMap_headMap_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_TreeMap$SubMap_lastKey_R_java_lang_Object,
	(void *) M_java_util_TreeMap$SubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_TreeMap$SubMap_tailMap_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_TreeMap$SubMap_checkRange_java_lang_Object,
	(void *) M_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$SubMap_checkUpperBound_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$SubMap_checkLowerBound_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$SubMap_setFirstKey,
	(void *) M_java_util_TreeMap$SubMap_setLastKey,
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
	{ "clear", "()V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;)Z" },
	{ "entrySet", "()Ljava/util/Set;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "keySet", "()Ljava/util/Set;" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Ljava/util/Map;)V" },
	{ "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "forEach", "(Ljava/util/function/BiConsumer;)V" },
	{ "replaceAll", "(Ljava/util/function/BiFunction;)V" },
	{ "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" },
	{ "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "size", "()I" },
	{ "values", "()Ljava/util/Collection;" },
	{ "comparator", "()Ljava/util/Comparator;" },
	{ "firstKey", "()Ljava/lang/Object;" },
	{ "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;" },
	{ "lastKey", "()Ljava/lang/Object;" },
	{ "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;" },
	{ "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;" },
	{ "checkRange", "(Ljava/lang/Object;)V" },
	{ "isInRange", "(Ljava/lang/Object;)Z" },
	{ "checkUpperBound", "(Ljava/lang/Object;)Z" },
	{ "checkLowerBound", "(Ljava/lang/Object;)Z" },
	{ "setFirstKey", "()V" },
	{ "setLastKey", "()V" },
};

static jclass interfaces[] { &class_java_util_SortedMap, };

static FieldMetadata fields[] {
	{ "backingMap", &class_java_util_TreeMap, offsetof(java_util_TreeMap$SubMap, F_backingMap), "Ljava/util/TreeMap;", 2 },
	{ "hasStart", &class_boolean, offsetof(java_util_TreeMap$SubMap, F_hasStart), "Z", 0 },
	{ "hasEnd", &class_boolean, offsetof(java_util_TreeMap$SubMap, F_hasEnd), "Z", 0 },
	{ "startKey", &class_java_lang_Object, offsetof(java_util_TreeMap$SubMap, F_startKey), "Ljava/lang/Object;", 0 },
	{ "endKey", &class_java_lang_Object, offsetof(java_util_TreeMap$SubMap, F_endKey), "Ljava/lang/Object;", 0 },
	{ "entrySet", &class_java_util_Set, offsetof(java_util_TreeMap$SubMap, F_entrySet), "Ljava/util/Set;", 128 },
	{ "firstKeyModCount", &class_int, offsetof(java_util_TreeMap$SubMap, F_firstKeyModCount), "I", 128 },
	{ "lastKeyModCount", &class_int, offsetof(java_util_TreeMap$SubMap, F_lastKeyModCount), "I", 128 },
	{ "firstKeyNode", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$SubMap, F_firstKeyNode), "Ljava/util/TreeMap$Node;", 128 },
	{ "firstKeyIndex", &class_int, offsetof(java_util_TreeMap$SubMap, F_firstKeyIndex), "I", 128 },
	{ "lastKeyNode", &class_java_util_TreeMap$Node, offsetof(java_util_TreeMap$SubMap, F_lastKeyNode), "Ljava/util/TreeMap$Node;", 128 },
	{ "lastKeyIndex", &class_int, offsetof(java_util_TreeMap$SubMap, F_lastKeyIndex), "I", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap, 0, "(Ljava/lang/Object;Ljava/util/TreeMap;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/util/TreeMap;Ljava/lang/Object;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$SubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean, 0, "(Ljava/lang/Object;ZLjava/util/TreeMap;Ljava/lang/Object;Z)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$SubMap_java_util_TreeMap_java_lang_Object, 0, "(Ljava/util/TreeMap;Ljava/lang/Object;)V", 0 },
	{ "checkRange", (intptr_t) M_java_util_TreeMap$SubMap_checkRange_java_lang_Object, VTABLE_java_util_TreeMap$SubMap_checkRange_java_lang_Object, "(Ljava/lang/Object;)V", 2 },
	{ "isInRange", (intptr_t) M_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 2 },
	{ "checkUpperBound", (intptr_t) M_java_util_TreeMap$SubMap_checkUpperBound_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap$SubMap_checkUpperBound_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 2 },
	{ "checkLowerBound", (intptr_t) M_java_util_TreeMap$SubMap_checkLowerBound_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap$SubMap_checkLowerBound_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 2 },
	{ "comparator", (intptr_t) M_java_util_TreeMap$SubMap_comparator_R_java_util_Comparator, VTABLE_java_util_TreeMap$SubMap_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "containsKey", (intptr_t) M_java_util_TreeMap$SubMap_containsKey_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap$SubMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_TreeMap$SubMap_clear, VTABLE_java_util_TreeMap$SubMap_clear, "()V", 1 },
	{ "containsValue", (intptr_t) M_java_util_TreeMap$SubMap_containsValue_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap$SubMap_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "entrySet", (intptr_t) M_java_util_TreeMap$SubMap_entrySet_R_java_util_Set, VTABLE_java_util_TreeMap$SubMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "setFirstKey", (intptr_t) M_java_util_TreeMap$SubMap_setFirstKey, VTABLE_java_util_TreeMap$SubMap_setFirstKey, "()V", 2 },
	{ "firstKey", (intptr_t) M_java_util_TreeMap$SubMap_firstKey_R_java_lang_Object, VTABLE_java_util_TreeMap$SubMap_firstKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_java_util_TreeMap$SubMap_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$SubMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "headMap", (intptr_t) M_java_util_TreeMap$SubMap_headMap_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_TreeMap$SubMap_headMap_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "isEmpty", (intptr_t) M_java_util_TreeMap$SubMap_isEmpty_R_boolean, VTABLE_java_util_TreeMap$SubMap_isEmpty_R_boolean, "()Z", 1 },
	{ "keySet", (intptr_t) M_java_util_TreeMap$SubMap_keySet_R_java_util_Set, VTABLE_java_util_TreeMap$SubMap_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "setLastKey", (intptr_t) M_java_util_TreeMap$SubMap_setLastKey, VTABLE_java_util_TreeMap$SubMap_setLastKey, "()V", 2 },
	{ "lastKey", (intptr_t) M_java_util_TreeMap$SubMap_lastKey_R_java_lang_Object, VTABLE_java_util_TreeMap$SubMap_lastKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "put", (intptr_t) M_java_util_TreeMap$SubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$SubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_TreeMap$SubMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$SubMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "subMap", (intptr_t) M_java_util_TreeMap$SubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_TreeMap$SubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "tailMap", (intptr_t) M_java_util_TreeMap$SubMap_tailMap_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_TreeMap$SubMap_tailMap_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "values", (intptr_t) M_java_util_TreeMap$SubMap_values_R_java_util_Collection, VTABLE_java_util_TreeMap$SubMap_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "size", (intptr_t) M_java_util_TreeMap$SubMap_size_R_int, VTABLE_java_util_TreeMap$SubMap_size_R_int, "()I", 1 },
	{ "access$300", (intptr_t) SM_java_util_TreeMap$SubMap_access$300_java_util_TreeMap$SubMap, 0, "(Ljava/util/TreeMap$SubMap;)V", 4104 },
	{ "access$400", (intptr_t) SM_java_util_TreeMap$SubMap_access$400_java_util_TreeMap$SubMap_R_java_util_TreeMap, 0, "(Ljava/util/TreeMap$SubMap;)Ljava/util/TreeMap;", 4104 },
	{ "access$500", (intptr_t) SM_java_util_TreeMap$SubMap_access$500_java_util_TreeMap$SubMap, 0, "(Ljava/util/TreeMap$SubMap;)V", 4104 },
	{ "access$600", (intptr_t) SM_java_util_TreeMap$SubMap_access$600_java_util_TreeMap$SubMap_java_lang_Object_R_boolean, 0, "(Ljava/util/TreeMap$SubMap;Ljava/lang/Object;)Z", 4104 },
};

Class class_java_util_TreeMap$SubMap{
		.nativeName = (intptr_t) "java/util/TreeMap$SubMap",
		.parentClass = (intptr_t) &class_java_util_AbstractMap,
		.size = sizeof(java_util_TreeMap$SubMap),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$SubMap,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$SubMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$SubMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 46,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$SubMap = registerClass(&class_java_util_TreeMap$SubMap);

}

