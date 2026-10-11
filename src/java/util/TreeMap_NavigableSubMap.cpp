#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/util/NavigableMap.h"
#include "java/util/Iterator.h"
#include "java/util/NavigableSet.h"
#include "java/lang/Comparable.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Map.h"
#include "java/util/TreeMap.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/TreeMap_SubMap.h"
#include "java/util/Comparator.h"
#include "java/util/TreeMap_SubMapValuesCollection.h"
#include "java/lang/NullPointerException.h"
#include "java/util/SortedMap.h"
#include "java/util/TreeMap_AscendingSubMap.h"
#include "java/util/MapEntry.h"
#include "java/util/TreeMap_Entry.h"
#include "java/util/AbstractMap.h"

extern "C" {


void mark_java_util_TreeMap$NavigableSubMap(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_TreeMap$NavigableSubMap *) object;
	if (self->F_m)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_m)->clazz)->markFunction)((jobject) self->F_m, mark, depth + 1);
	if (self->F_lo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lo)->clazz)->markFunction)((jobject) self->F_lo, mark, depth + 1);
	if (self->F_hi)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hi)->clazz)->markFunction)((jobject) self->F_hi, mark, depth + 1);
}

void clinit_java_util_TreeMap$NavigableSubMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractMap(ctx);
}

void init_java_util_TreeMap$NavigableSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(2313);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(2314);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m = (jref) (frame[3].o);
	LINE_NUMBER(2315);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(1);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_toEnd = temp0;
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart = temp0;
	LINE_NUMBER(2316);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo = (jref) (frame[1].o);
	LINE_NUMBER(2317);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi = (jref) (frame[4].o);
	LINE_NUMBER(2318);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive = (frame[2].i);
	LINE_NUMBER(2319);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive = (frame[5].i);
	LINE_NUMBER(2320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$NavigableSubMap_java_lang_Object_boolean_java_util_TreeMap(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2323);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(2324);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m = (jref) (frame[3].o);
	LINE_NUMBER(2325);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart = (jint(1));
	LINE_NUMBER(2326);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd = (jint(0));
	LINE_NUMBER(2327);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo = (jref) (frame[1].o);
	LINE_NUMBER(2328);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi = (jref) (jobject(nullptr));
	LINE_NUMBER(2329);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive = (frame[2].i);
	LINE_NUMBER(2330);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive = (jint(0));
	LINE_NUMBER(2331);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$NavigableSubMap_java_util_TreeMap_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2334);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(2335);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m = (jref) (frame[1].o);
	LINE_NUMBER(2336);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart = (jint(0));
	LINE_NUMBER(2337);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd = (jint(1));
	LINE_NUMBER(2338);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo = (jref) (jobject(nullptr));
	LINE_NUMBER(2339);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi = (jref) (frame[2].o);
	LINE_NUMBER(2340);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive = (jint(0));
	LINE_NUMBER(2341);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive = (frame[3].i);
	LINE_NUMBER(2342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$NavigableSubMap_java_util_TreeMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2345);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(2346);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m = (jref) (frame[1].o);
	LINE_NUMBER(2347);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_toEnd = temp0;
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_fromStart = temp0;
	LINE_NUMBER(2348);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = jobject(nullptr);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hi = (jref) sp[2].o;
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_lo = (jref) sp[2].o;
	LINE_NUMBER(2349);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp3 = jint(0);
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[1].o))->F_hiInclusive = temp3;
	((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_loInclusive = temp3;
	LINE_NUMBER(2350);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_findNode_java_lang_Object_R_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:findNode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2353);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findNode_java_lang_Object_R_java_util_TreeMap$Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findNode_java_lang_Object_R_java_util_TreeMap$Node])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:comparator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2361);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$NavigableSubMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2367);
	M_java_util_TreeMap$NavigableSubMap_checkNull_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2368);
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2369);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_java_util_TreeMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(2371);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_TreeMap$NavigableSubMap_checkNull_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:checkNull", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2375);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(2376);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(2378);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$NavigableSubMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:isEmpty", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2382);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_keySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_keySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2383);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2384);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(2386);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap$NavigableSubMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2391);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Set_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2396);
	M_java_util_TreeMap$NavigableSubMap_checkNull_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2397);
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2398);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2400);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2406);
	M_java_util_TreeMap$NavigableSubMap_checkNull_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2407);
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2408);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2410);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2416);
	M_java_util_TreeMap$NavigableSubMap_checkNull_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2417);
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2418);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2420);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_firstKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:firstKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2446);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2447);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2448);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2450);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_lastKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:lastKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2454);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2455);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2456);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2458);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_higherKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:higherKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2462);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2463);
	if ((jobject(nullptr)) != (frame[2].o)) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_lowerKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:lowerKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2467);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2468);
	if ((jobject(nullptr)) != (frame[2].o)) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_ceilingKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:ceilingKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2472);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2473);
	if ((jobject(nullptr)) != (frame[2].o)) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_floorKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:floorKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2477);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2478);
	if ((jobject(nullptr)) != (frame[2].o)) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:keySet", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2492);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_navigableKeySet_R_java_util_NavigableSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_navigableKeySet_R_java_util_NavigableSet])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_descendingKeySet_R_java_util_NavigableSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:descendingKeySet", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2496);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_descendingMap_R_java_util_NavigableMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_descendingMap_R_java_util_NavigableMap])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_NavigableMap_navigableKeySet_R_java_util_NavigableSet) resolveInterfaceMethod(ctx, &class_java_util_NavigableMap, INDEX_java_util_NavigableMap_navigableKeySet_R_java_util_NavigableSet, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:subMap", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2502);
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2503);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2505);
	frame[3].i = (jint(-1));
	LINE_NUMBER(2506);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2507);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(2508);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[2].o));
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	INST_ISTORE(3);
label_4:;
	{
	LINE_NUMBER(2510);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) != 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	INST_ILOAD(3);
	if ((--sp)->i >= 0) goto label_9;
	goto label_10;
label_8:;
	INST_ILOAD(3);
	if ((--sp)->i > 0) goto label_9;
label_10:;
	{
	LINE_NUMBER(2511);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	if (temp0 <= 0) goto label_12;
	}
	goto label_13;
label_11:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(2512);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	if (temp0 <= 0) goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(2513);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(2515);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = frame[1].o;
	jint temp0 = jint(1);
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(2518);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_headMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:headMap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2522);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2523);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2524);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(2525);
	if ((frame[2].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(2526);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2529);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_7;
	}
	{
	LINE_NUMBER(2530);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(2531);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[2].i = (-sp[0].i);
	LINE_NUMBER(2532);
	if ((frame[2].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(2533);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(2536);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_tailMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:tailMap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2540);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2541);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2542);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[2].i = (-sp[0].i);
	LINE_NUMBER(2543);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) == 0) goto label_6;
	}
	INST_ILOAD(2);
	if ((--sp)->i >= 0) goto label_1;
	goto label_7;
label_6:;
	INST_ILOAD(2);
	if ((--sp)->i > 0) goto label_1;
label_7:;
	{
	LINE_NUMBER(2544);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2547);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_8;
	}
	{
	LINE_NUMBER(2548);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(2549);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(2550);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) == 0) goto label_13;
	}
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_8;
	goto label_14;
label_13:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_8;
label_14:;
	{
	LINE_NUMBER(2551);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(2554);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:checkUpperBound", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2570);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2571);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2572);
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(2573);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) == 0) goto label_6;
	}
	INST_ILOAD(2);
	if ((--sp)->i > 0) goto label_7;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
	goto label_8;
label_6:;
	INST_ILOAD(2);
	if ((--sp)->i >= 0) goto label_9;
	INST_ICONST(1);
	goto label_8;
label_9:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2575);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:checkLowerBound", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2584);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2585);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2586);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[2].i = (-sp[0].i);
	LINE_NUMBER(2587);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) == 0) goto label_6;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_7;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
	goto label_8;
label_6:;
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_9;
	INST_ICONST(1);
	goto label_8;
label_9:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2589);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:isInRange", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2593);
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
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

jobject M_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:theSmallestEntry", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2597);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(2598);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) != 0) goto label_2;
	}
	{
	LINE_NUMBER(2599);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(2601);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(2602);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_6:;
	INST_ASTORE(1);
label_4:;
	{
	LINE_NUMBER(2604);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_7;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
label_8:;
	INST_ALOAD(1);
	goto label_9;
label_7:;
	LINE_NUMBER(2605);
	INST_ACONST_NULL();
label_9:;
	LINE_NUMBER(2604);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_theBiggestEntry_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:theBiggestEntry", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2609);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(2610);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) != 0) goto label_2;
	}
	{
	LINE_NUMBER(2611);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(2613);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(2614);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_6:;
	INST_ASTORE(1);
label_4:;
	{
	LINE_NUMBER(2616);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_7;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
label_8:;
	INST_ALOAD(1);
	goto label_9;
label_7:;
	LINE_NUMBER(2617);
	INST_ACONST_NULL();
label_9:;
	LINE_NUMBER(2616);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_smallerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:smallerOrEqualEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2621);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2622);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_2;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_3:;
	INST_ALOAD(2);
	goto label_4;
label_2:;
	LINE_NUMBER(2623);
	INST_ACONST_NULL();
label_4:;
	LINE_NUMBER(2622);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:findFloorEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2627);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findFloorEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2629);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2630);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(2633);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(2634);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findEndNode_R_java_util_TreeMap$Entry(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2637);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(2638);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_9;
	}
label_8:;
	LINE_NUMBER(2639);
	INST_ACONST_NULL();
label_9:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2640);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(2641);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findStartNode_R_java_util_TreeMap$Entry(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2642);
	if ((frame[2].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 >= 0) goto label_6;
	}
label_14:;
	{
	LINE_NUMBER(2643);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(2646);
	frame[2].o = (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(2649);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:cmp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2653);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[2].o), (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_findFloorEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:findFloorEntryImpl", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2658);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(2659);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2660);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(2661);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2662);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(2663);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2664);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2665);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[7].o = sp[0].o;
	LINE_NUMBER(2666);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(2667);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[2].o)))(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i))), (frame[3].o));
	jint temp1 = -temp0;
	sp[0].i = temp1;
	sp += 1;
	}
label_13:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(2669);
	if ((frame[9].i) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(2670);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(2672);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2673);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(2674);
	if ((frame[9].i) != 0) goto label_20;
	}
	LINE_NUMBER(2675);
	goto label_8;
label_20:;
	{
	LINE_NUMBER(2677);
	frame[10].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(2678);
	if ((frame[8].i) == (frame[10].i)) goto label_23;
	}
	{
	LINE_NUMBER(2679);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[10].i))));
	frame[9].i = temp0;
	}
label_23:;
	{
	LINE_NUMBER(2681);
	if ((frame[9].i) < 0) goto label_25;
	}
	{
	LINE_NUMBER(2682);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2683);
	frame[6].i = (frame[10].i);
	LINE_NUMBER(2684);
	if ((frame[9].i) != 0) goto label_29;
	}
	LINE_NUMBER(2685);
	goto label_8;
label_29:;
	{
	LINE_NUMBER(2687);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_17;
	}
label_25:;
	{
	LINE_NUMBER(2689);
	frame[11].i = ((frame[8].i) + (jint(1)));
	frame[12].i = (jint(0));
	frame[13].i = ((frame[10].i) - (jint(1)));
	}
label_33:;
	{
	LINE_NUMBER(2690);
	if ((frame[11].i) > (frame[13].i)) goto label_8;
	}
	INST_ILOAD(9);
	if ((--sp)->i == 0) goto label_8;
	{
	LINE_NUMBER(2691);
	frame[12].i = (((frame[11].i) + (frame[13].i)) >> (jint(1)));
	LINE_NUMBER(2692);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[12].i))));
	frame[9].i = temp0;
	LINE_NUMBER(2693);
	if ((frame[9].i) < 0) goto label_37;
	}
	{
	LINE_NUMBER(2694);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2695);
	frame[6].i = (frame[12].i);
	LINE_NUMBER(2696);
	frame[11].i = ((frame[12].i) + (jint(1)));
	goto label_41;
	}
label_37:;
	{
	LINE_NUMBER(2698);
	frame[13].i = (frame[12].i);
	}
label_41:;
	{
	LINE_NUMBER(2700);
	if ((frame[11].i) != (frame[13].i)) goto label_33;
	}
	{
	if ((frame[13].i) != (frame[12].i)) goto label_33;
	}
	LINE_NUMBER(2701);
	goto label_8;
label_17:;
	LINE_NUMBER(2707);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(2708);
	if ((frame[5].o) == nullptr) goto label_43;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[6].i));
	LINE_NUMBER(2709);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 >= 0) goto label_43;
	}
	{
	LINE_NUMBER(2710);
	frame[5].o = (jobject(nullptr));
	}
label_43:;
	{
	LINE_NUMBER(2712);
	if ((frame[5].o) == nullptr) goto label_46;
	}
	{
	LINE_NUMBER(2713);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[5].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_46:;
	{
	LINE_NUMBER(2715);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:createEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2719);
	clinit_java_util_TreeMap$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$Entry);
	sp[1].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_keys;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i));
	sp[2].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[1].o)))->F_values;
	init_java_util_TreeMap$Entry_java_lang_Object_java_lang_Object(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2720);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_node = (jref) (frame[1].o);
	LINE_NUMBER(2721);
	((java_util_TreeMap$Entry *) NULL_CHECK((frame[3].o)))->F_index = (frame[2].i);
	LINE_NUMBER(2722);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_biggerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:biggerOrEqualEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2726);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2727);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_2;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_3:;
	INST_ALOAD(2);
	goto label_4;
label_2:;
	LINE_NUMBER(2728);
	INST_ACONST_NULL();
label_4:;
	LINE_NUMBER(2727);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_findStartNode_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:findStartNode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2734);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2735);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2736);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2738);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2741);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_findEndNode_R_java_util_TreeMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:findEndNode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2748);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2749);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findFloorEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2751);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findLowerEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:findCeilingEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2756);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findCeilingEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2758);
	if ((jobject(nullptr)) != (frame[2].o)) goto label_2;
	}
	{
	LINE_NUMBER(2759);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(2762);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(2763);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_7;
	}
label_6:;
	LINE_NUMBER(2764);
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2765);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 >= 0) goto label_9;
	}
	{
	LINE_NUMBER(2766);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findEndNode_R_java_util_TreeMap$Entry(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2767);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 <= 0) goto label_4;
	}
	{
	LINE_NUMBER(2768);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(2771);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(2775);
	if ((frame[2].o) == nullptr) goto label_13;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(2776);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findStartNode_R_java_util_TreeMap$Entry(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(2779);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_findLowerEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:findLowerEntryImpl", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2783);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(2784);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2785);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(2786);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2787);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(2788);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2789);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2790);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[7].o = sp[0].o;
	LINE_NUMBER(2791);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(2792);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[2].o)))(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	{
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i))), (frame[3].o));
	jint temp1 = -temp0;
	sp[0].i = temp1;
	sp += 1;
	}
label_13:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(2794);
	if ((frame[9].i) > 0) goto label_15;
	}
	{
	LINE_NUMBER(2795);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(2797);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2798);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(2799);
	frame[10].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(2800);
	if ((frame[8].i) == (frame[10].i)) goto label_21;
	}
	{
	LINE_NUMBER(2801);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[10].i))));
	frame[9].i = temp0;
	}
label_21:;
	{
	LINE_NUMBER(2803);
	if ((frame[9].i) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(2804);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2805);
	frame[6].i = (frame[10].i);
	LINE_NUMBER(2806);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_17;
	}
label_23:;
	{
	LINE_NUMBER(2808);
	frame[11].i = ((frame[8].i) + (jint(1)));
	frame[12].i = (jint(0));
	frame[13].i = ((frame[10].i) - (jint(1)));
	}
label_29:;
	{
	LINE_NUMBER(2809);
	if ((frame[11].i) > (frame[13].i)) goto label_8;
	}
	{
	LINE_NUMBER(2810);
	frame[12].i = (((frame[11].i) + (frame[13].i)) >> (jint(1)));
	LINE_NUMBER(2811);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[12].i))));
	frame[9].i = temp0;
	LINE_NUMBER(2812);
	if ((frame[9].i) <= 0) goto label_33;
	}
	{
	LINE_NUMBER(2813);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2814);
	frame[6].i = (frame[12].i);
	LINE_NUMBER(2815);
	frame[11].i = ((frame[12].i) + (jint(1)));
	goto label_37;
	}
label_33:;
	{
	LINE_NUMBER(2817);
	frame[13].i = (frame[12].i);
	}
label_37:;
	{
	LINE_NUMBER(2819);
	if ((frame[11].i) != (frame[13].i)) goto label_29;
	}
	{
	if ((frame[13].i) != (frame[12].i)) goto label_29;
	}
	LINE_NUMBER(2820);
	goto label_8;
label_17:;
	LINE_NUMBER(2826);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(2827);
	if ((frame[5].o) == nullptr) goto label_39;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[6].i));
	LINE_NUMBER(2828);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 > 0) goto label_39;
	}
	{
	LINE_NUMBER(2829);
	frame[5].o = (jobject(nullptr));
	}
label_39:;
	{
	LINE_NUMBER(2831);
	if ((frame[5].o) == nullptr) goto label_42;
	}
	{
	LINE_NUMBER(2832);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[5].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(2834);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_findCeilingEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:findCeilingEntryImpl", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2838);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(2839);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2840);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(2841);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2842);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(2843);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2844);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2845);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[7].o = sp[0].o;
	LINE_NUMBER(2846);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(2847);
	frame[9].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(2848);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i))));
	frame[10].i = temp0;
	LINE_NUMBER(2849);
	if ((frame[10].i) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(2850);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2851);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(2852);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(2853);
	if ((frame[10].i) != 0) goto label_19;
	}
	{
	LINE_NUMBER(2854);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2855);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(2856);
	goto label_8;
	}
label_19:;
	{
	LINE_NUMBER(2858);
	if ((frame[8].i) == (frame[9].i)) goto label_23;
	}
	{
	LINE_NUMBER(2859);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i))));
	frame[10].i = temp0;
	}
label_23:;
	{
	LINE_NUMBER(2861);
	if ((frame[10].i) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(2862);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_18;
	}
label_25:;
	{
	LINE_NUMBER(2864);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2865);
	frame[6].i = (frame[9].i);
	LINE_NUMBER(2866);
	if ((frame[10].i) != 0) goto label_29;
	}
	LINE_NUMBER(2867);
	goto label_8;
label_29:;
	{
	LINE_NUMBER(2869);
	frame[11].i = ((frame[8].i) + (jint(1)));
	frame[12].i = (jint(0));
	frame[13].i = ((frame[9].i) - (jint(1)));
	}
label_33:;
	{
	LINE_NUMBER(2870);
	if ((frame[11].i) > (frame[13].i)) goto label_8;
	}
	INST_ILOAD(10);
	if ((--sp)->i == 0) goto label_8;
	{
	LINE_NUMBER(2871);
	frame[12].i = (((frame[11].i) + (frame[13].i)) >> (jint(1)));
	LINE_NUMBER(2872);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[12].i))));
	frame[10].i = temp0;
	LINE_NUMBER(2873);
	if ((frame[10].i) > 0) goto label_37;
	}
	{
	LINE_NUMBER(2874);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2875);
	frame[6].i = (frame[12].i);
	LINE_NUMBER(2876);
	frame[13].i = ((frame[12].i) - (jint(1)));
	goto label_41;
	}
label_37:;
	{
	LINE_NUMBER(2878);
	frame[11].i = ((frame[12].i) + (jint(1)));
	}
label_41:;
	{
	LINE_NUMBER(2880);
	if ((frame[10].i) == 0) goto label_8;
	}
	{
	if ((frame[11].i) != (frame[13].i)) goto label_33;
	}
	{
	if ((frame[13].i) != (frame[12].i)) goto label_33;
	}
	LINE_NUMBER(2881);
	goto label_8;
label_18:;
	LINE_NUMBER(2887);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(2888);
	if ((frame[5].o) == nullptr) goto label_43;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[6].i));
	LINE_NUMBER(2889);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 <= 0) goto label_43;
	}
	{
	LINE_NUMBER(2890);
	frame[5].o = (jobject(nullptr));
	}
label_43:;
	{
	LINE_NUMBER(2892);
	if ((frame[5].o) == nullptr) goto label_46;
	}
	{
	LINE_NUMBER(2893);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[5].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_46:;
	{
	LINE_NUMBER(2895);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_smallerEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:smallerEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2899);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2900);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_2;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_3:;
	INST_ALOAD(2);
	goto label_4;
label_2:;
	LINE_NUMBER(2901);
	INST_ACONST_NULL();
label_4:;
	LINE_NUMBER(2900);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:findLowerEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2905);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findLowerEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2907);
	if ((jobject(nullptr)) != (frame[2].o)) goto label_2;
	}
	{
	LINE_NUMBER(2908);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(2911);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(2912);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findEndNode_R_java_util_TreeMap$Entry(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2915);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(2916);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_9;
	}
label_8:;
	LINE_NUMBER(2917);
	INST_ACONST_NULL();
label_9:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2918);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(2919);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findStartNode_R_java_util_TreeMap$Entry(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2920);
	if ((frame[2].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 > 0) goto label_6;
	}
label_14:;
	{
	LINE_NUMBER(2921);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(2924);
	frame[2].o = (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(2928);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_biggerEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:biggerEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2932);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2933);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_2;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_TreeMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_TreeMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_3:;
	INST_ALOAD(2);
	goto label_4;
label_2:;
	LINE_NUMBER(2934);
	INST_ACONST_NULL();
label_4:;
	LINE_NUMBER(2933);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:findHigherEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2938);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_findHigherEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_findHigherEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2940);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2941);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(2944);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(2945);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_7;
	}
label_6:;
	LINE_NUMBER(2946);
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2947);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 >= 0) goto label_9;
	}
	{
	LINE_NUMBER(2948);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findEndNode_R_java_util_TreeMap$Entry(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2949);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 < 0) goto label_4;
	}
	{
	LINE_NUMBER(2950);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(2953);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(2957);
	if ((frame[2].o) == nullptr) goto label_13;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(2958);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findStartNode_R_java_util_TreeMap$Entry(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(2961);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_findHigherEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:findHigherEntryImpl", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2965);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	LINE_NUMBER(2966);
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2967);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(2968);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((java_util_TreeMap *) NULL_CHECK(sp[0].o))->F_root;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2969);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(2970);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2971);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2972);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_keys;
	frame[7].o = sp[0].o;
	LINE_NUMBER(2973);
	frame[8].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right_idx);
	LINE_NUMBER(2974);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i))));
	frame[9].i = temp0;
	LINE_NUMBER(2975);
	if ((frame[9].i) < 0) goto label_13;
	}
	{
	LINE_NUMBER(2976);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_right;
	frame[4].o = sp[0].o;
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(2978);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2979);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(2980);
	frame[10].i = ((jint)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left_idx);
	LINE_NUMBER(2981);
	if ((frame[10].i) == (frame[8].i)) goto label_19;
	}
	{
	LINE_NUMBER(2982);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[10].i))));
	frame[9].i = temp0;
	}
label_19:;
	{
	LINE_NUMBER(2984);
	if ((frame[9].i) >= 0) goto label_21;
	}
	{
	LINE_NUMBER(2985);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2986);
	frame[6].i = (frame[10].i);
	LINE_NUMBER(2987);
	sp[0].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[4].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_15;
	}
label_21:;
	{
	LINE_NUMBER(2989);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2990);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(2991);
	frame[11].i = ((frame[10].i) + (jint(1)));
	frame[12].i = (jint(0));
	frame[13].i = ((frame[8].i) - (jint(1)));
	}
label_29:;
	{
	LINE_NUMBER(2992);
	if ((frame[11].i) > (frame[13].i)) goto label_8;
	}
	{
	LINE_NUMBER(2993);
	frame[12].i = (((frame[11].i) + (frame[13].i)) >> (jint(1)));
	LINE_NUMBER(2994);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[12].i))));
	frame[9].i = temp0;
	LINE_NUMBER(2995);
	if ((frame[9].i) >= 0) goto label_33;
	}
	{
	LINE_NUMBER(2996);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2997);
	frame[6].i = (frame[12].i);
	LINE_NUMBER(2998);
	frame[13].i = ((frame[12].i) - (jint(1)));
	goto label_37;
	}
label_33:;
	{
	LINE_NUMBER(3000);
	frame[11].i = ((frame[12].i) + (jint(1)));
	}
label_37:;
	{
	LINE_NUMBER(3002);
	if ((frame[11].i) != (frame[13].i)) goto label_29;
	}
	{
	if ((frame[13].i) != (frame[12].i)) goto label_29;
	}
	LINE_NUMBER(3003);
	goto label_8;
label_15:;
	LINE_NUMBER(3009);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(3010);
	if ((frame[5].o) == nullptr) goto label_39;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((java_util_TreeMap$Node *) NULL_CHECK((frame[5].o)))->F_keys;
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[6].i));
	LINE_NUMBER(3011);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 < 0) goto label_39;
	}
	{
	LINE_NUMBER(3012);
	frame[5].o = (jobject(nullptr));
	}
label_39:;
	{
	LINE_NUMBER(3014);
	if ((frame[5].o) == nullptr) goto label_42;
	}
	{
	LINE_NUMBER(3015);
	sp[0].o = (jobject)((func_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry])(ctx, (frame[0].o), (frame[5].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(3017);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$NavigableSubMap_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:values", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3021);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3022);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) != 0) goto label_3;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3023);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_AbstractMap_values_R_java_util_Collection(ctx, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(3026);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) == 0) goto label_5;
	}
	{
	LINE_NUMBER(3027);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	sp++;
label_8:;
	INST_ASTORE(1);
	goto label_10;
label_5:;
	{
	LINE_NUMBER(3029);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp[0].o = (jobject)((func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry])(ctx, sp[0].o);
	sp++;
label_12:;
	INST_ASTORE(1);
label_10:;
	{
	LINE_NUMBER(3031);
	if ((frame[1].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(3032);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_java_util_TreeMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	sp += 1;
	goto label_16;
	}
label_15:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_firstKey_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_firstKey_R_java_lang_Object])(ctx, sp[0].o);
	sp += 1;
	}
label_16:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3033);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap$SubMapValuesCollection(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMapValuesCollection);
	clinit_java_util_TreeMap$SubMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMap);
	sp[3].o = frame[2].o;
	jint temp0 = jint(1);
	sp[4].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$SubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[2].o, sp[3].o, temp0, sp[4].o, (frame[2].o), (jint(1)));
	init_java_util_TreeMap$SubMapValuesCollection_java_util_TreeMap$SubMap(ctx, sp[1].o, sp[2].o);
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(3035);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(3039);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_20;
	}
label_19:;
	INST_ACONST_NULL();
label_20:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3040);
	if ((frame[2].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(3041);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(3042);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	sp[0].o = (jobject)((func_java_util_TreeMap_higherEntry_java_lang_Object_R_java_util_Map$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_higherEntry_java_lang_Object_R_java_util_Map$Entry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(3046);
	if ((frame[1].o) != nullptr) goto label_25;
	}
	INST_ACONST_NULL();
	goto label_26;
label_25:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_26:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(3047);
	if ((frame[2].o) != nullptr) goto label_28;
	}
	INST_ACONST_NULL();
	goto label_29;
label_28:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp++;
label_29:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(3049);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeMap$SubMapValuesCollection(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMapValuesCollection);
	clinit_java_util_TreeMap$SubMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_TreeMap$SubMap);
	sp[3].o = frame[3].o;
	jint temp0 = jint(1);
	sp[4].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[5].o = frame[4].o;
	LINE_NUMBER(3050);
	jobject temp1 = sp[2].o;
	sp[2].o = sp[1].o;
	jobject temp2 = sp[3].o;
	sp[3].o = temp1;
	jobject temp3 = sp[4].o;
	sp[4].o = temp1;
	jobject temp4 = sp[5].o;
	sp[5].o = temp2;
	sp[6].i = temp0;
	sp[7].o = temp3;
	sp[8].o = temp4;
	sp += 9;
	if ((frame[4].o) != nullptr) goto label_34;
	}
	INST_ICONST(0);
	goto label_35;
label_34:;
	INST_ALOAD(0);
	sp[-1].i = ((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[-1].o))->F_toEnd;
label_35:;
	{
	sp -= 10;
	init_java_util_TreeMap$SubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[3].o, sp[5].o, sp[6].i, sp[7].o, sp[8].o, sp[9].i);
	init_java_util_TreeMap$SubMapValuesCollection_java_util_TreeMap$SubMap(ctx, sp[1].o, sp[3].o);
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(3053);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap$NavigableSubMap_access$000_java_util_TreeMap$NavigableSubMap_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2300);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findStartNode_R_java_util_TreeMap$Entry(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap$NavigableSubMap_access$700_java_util_TreeMap$NavigableSubMap_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:access$700", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2300);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findEndNode_R_java_util_TreeMap$Entry(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:access$800", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2300);
	jint temp0 = (jint)M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap$NavigableSubMap_access$900_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:access$900", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2300);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findFloorEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap$NavigableSubMap_access$1000_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:access$1000", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2300);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findLowerEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap$NavigableSubMap_access$1100_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:access$1100", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2300);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findCeilingEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap$NavigableSubMap_access$1200_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:access$1200", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2300);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap$NavigableSubMap_access$1300_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:access$1300", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2300);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap$NavigableSubMap_access$1400_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:access$1400", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2300);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TreeMap$NavigableSubMap_access$1500_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$NavigableSubMap:access$1500", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$NavigableSubMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2300);
	sp[0].o = (jobject)M_java_util_TreeMap$NavigableSubMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$NavigableSubMap[] {
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
	(void *) M_java_util_AbstractMap_clear,
	(void *) M_java_util_TreeMap$NavigableSubMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractMap_containsValue_java_lang_Object_R_boolean,
	(void *) nullptr,
	(void *) M_java_util_TreeMap$NavigableSubMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$NavigableSubMap_isEmpty_R_boolean,
	(void *) M_java_util_TreeMap$NavigableSubMap_keySet_R_java_util_Set,
	(void *) M_java_util_TreeMap$NavigableSubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$NavigableSubMap_remove_java_lang_Object_R_java_lang_Object,
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
	(void *) M_java_util_TreeMap$NavigableSubMap_size_R_int,
	(void *) M_java_util_TreeMap$NavigableSubMap_values_R_java_util_Collection,
	(void *) M_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator,
	(void *) M_java_util_TreeMap$NavigableSubMap_firstKey_R_java_lang_Object,
	(void *) M_java_util_TreeMap$NavigableSubMap_headMap_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_TreeMap$NavigableSubMap_lastKey_R_java_lang_Object,
	(void *) M_java_util_TreeMap$NavigableSubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap,
	(void *) M_java_util_TreeMap$NavigableSubMap_tailMap_java_lang_Object_R_java_util_SortedMap,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_util_TreeMap$NavigableSubMap_ceilingKey_java_lang_Object_R_java_lang_Object,
	(void *) nullptr,
	(void *) M_java_util_TreeMap$NavigableSubMap_higherKey_java_lang_Object_R_java_lang_Object,
	(void *) nullptr,
	(void *) M_java_util_TreeMap$NavigableSubMap_floorKey_java_lang_Object_R_java_lang_Object,
	(void *) nullptr,
	(void *) M_java_util_TreeMap$NavigableSubMap_lowerKey_java_lang_Object_R_java_lang_Object,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_util_TreeMap$NavigableSubMap_descendingKeySet_R_java_util_NavigableSet,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_util_TreeMap$NavigableSubMap_findNode_java_lang_Object_R_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap$NavigableSubMap_checkNull_java_lang_Object,
	(void *) nullptr,
	(void *) M_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean,
	(void *) M_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_theBiggestEntry_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_smallerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_TreeMap$NavigableSubMap_findFloorEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_biggerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findStartNode_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findEndNode_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findLowerEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findCeilingEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_smallerEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_biggerEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_findHigherEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry,
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
	{ "firstEntry", "()Ljava/util/Map$Entry;" },
	{ "lastEntry", "()Ljava/util/Map$Entry;" },
	{ "pollFirstEntry", "()Ljava/util/Map$Entry;" },
	{ "pollLastEntry", "()Ljava/util/Map$Entry;" },
	{ "ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;" },
	{ "ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;" },
	{ "higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;" },
	{ "floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;" },
	{ "lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "navigableKeySet", "()Ljava/util/NavigableSet;" },
	{ "descendingMap", "()Ljava/util/NavigableMap;" },
	{ "descendingKeySet", "()Ljava/util/NavigableSet;" },
	{ "subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;" },
	{ "headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;" },
	{ "tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;" },
	{ "findNode", "(Ljava/lang/Object;)Ljava/util/TreeMap$Node;" },
	{ "checkNull", "(Ljava/lang/Object;)V" },
	{ "descendingSubMap", "()Ljava/util/TreeMap$NavigableSubMap;" },
	{ "checkUpperBound", "(Ljava/lang/Object;)Z" },
	{ "checkLowerBound", "(Ljava/lang/Object;)Z" },
	{ "isInRange", "(Ljava/lang/Object;)Z" },
	{ "theSmallestEntry", "()Ljava/util/TreeMap$Entry;" },
	{ "theBiggestEntry", "()Ljava/util/TreeMap$Entry;" },
	{ "smallerOrEqualEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findFloorEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "cmp", "(Ljava/lang/Comparable;Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "findFloorEntryImpl", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "createEntry", "(Ljava/util/TreeMap$Node;I)Ljava/util/TreeMap$Entry;" },
	{ "biggerOrEqualEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findStartNode", "()Ljava/util/TreeMap$Entry;" },
	{ "findEndNode", "()Ljava/util/TreeMap$Entry;" },
	{ "findCeilingEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findLowerEntryImpl", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findCeilingEntryImpl", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "smallerEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findLowerEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "biggerEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findHigherEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
	{ "findHigherEntryImpl", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;" },
};

static jclass interfaces[] { &class_java_util_NavigableMap, };

static FieldMetadata fields[] {
	{ "m", &class_java_util_TreeMap, offsetof(java_util_TreeMap$NavigableSubMap, F_m), "Ljava/util/TreeMap;", 16 },
	{ "lo", &class_java_lang_Object, offsetof(java_util_TreeMap$NavigableSubMap, F_lo), "Ljava/lang/Object;", 16 },
	{ "hi", &class_java_lang_Object, offsetof(java_util_TreeMap$NavigableSubMap, F_hi), "Ljava/lang/Object;", 16 },
	{ "fromStart", &class_boolean, offsetof(java_util_TreeMap$NavigableSubMap, F_fromStart), "Z", 16 },
	{ "toEnd", &class_boolean, offsetof(java_util_TreeMap$NavigableSubMap, F_toEnd), "Z", 16 },
	{ "loInclusive", &class_boolean, offsetof(java_util_TreeMap$NavigableSubMap, F_loInclusive), "Z", 16 },
	{ "hiInclusive", &class_boolean, offsetof(java_util_TreeMap$NavigableSubMap, F_hiInclusive), "Z", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$NavigableSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean, 0, "(Ljava/lang/Object;ZLjava/util/TreeMap;Ljava/lang/Object;Z)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$NavigableSubMap_java_lang_Object_boolean_java_util_TreeMap, 0, "(Ljava/lang/Object;ZLjava/util/TreeMap;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$NavigableSubMap_java_util_TreeMap_java_lang_Object_boolean, 0, "(Ljava/util/TreeMap;Ljava/lang/Object;Z)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$NavigableSubMap_java_util_TreeMap, 0, "(Ljava/util/TreeMap;)V", 0 },
	{ "findNode", (intptr_t) M_java_util_TreeMap$NavigableSubMap_findNode_java_lang_Object_R_java_util_TreeMap$Node, VTABLE_java_util_TreeMap$NavigableSubMap_findNode_java_lang_Object_R_java_util_TreeMap$Node, "(Ljava/lang/Object;)Ljava/util/TreeMap$Node;", 0 },
	{ "comparator", (intptr_t) M_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator, VTABLE_java_util_TreeMap$NavigableSubMap_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "containsKey", (intptr_t) M_java_util_TreeMap$NavigableSubMap_containsKey_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap$NavigableSubMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "checkNull", (intptr_t) M_java_util_TreeMap$NavigableSubMap_checkNull_java_lang_Object, VTABLE_java_util_TreeMap$NavigableSubMap_checkNull_java_lang_Object, "(Ljava/lang/Object;)V", 2 },
	{ "isEmpty", (intptr_t) M_java_util_TreeMap$NavigableSubMap_isEmpty_R_boolean, VTABLE_java_util_TreeMap$NavigableSubMap_isEmpty_R_boolean, "()Z", 1 },
	{ "size", (intptr_t) M_java_util_TreeMap$NavigableSubMap_size_R_int, VTABLE_java_util_TreeMap$NavigableSubMap_size_R_int, "()I", 1 },
	{ "put", (intptr_t) M_java_util_TreeMap$NavigableSubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$NavigableSubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_java_util_TreeMap$NavigableSubMap_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$NavigableSubMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_TreeMap$NavigableSubMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$NavigableSubMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "firstEntry", 0, VTABLE_java_util_TreeMap$NavigableSubMap_firstEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1025 },
	{ "lastEntry", 0, VTABLE_java_util_TreeMap$NavigableSubMap_lastEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1025 },
	{ "pollFirstEntry", 0, VTABLE_java_util_TreeMap$NavigableSubMap_pollFirstEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1025 },
	{ "pollLastEntry", 0, VTABLE_java_util_TreeMap$NavigableSubMap_pollLastEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1025 },
	{ "higherEntry", 0, VTABLE_java_util_TreeMap$NavigableSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1025 },
	{ "lowerEntry", 0, VTABLE_java_util_TreeMap$NavigableSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1025 },
	{ "ceilingEntry", 0, VTABLE_java_util_TreeMap$NavigableSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1025 },
	{ "floorEntry", 0, VTABLE_java_util_TreeMap$NavigableSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1025 },
	{ "descendingSubMap", 0, VTABLE_java_util_TreeMap$NavigableSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap, "()Ljava/util/TreeMap$NavigableSubMap;", 1024 },
	{ "firstKey", (intptr_t) M_java_util_TreeMap$NavigableSubMap_firstKey_R_java_lang_Object, VTABLE_java_util_TreeMap$NavigableSubMap_firstKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "lastKey", (intptr_t) M_java_util_TreeMap$NavigableSubMap_lastKey_R_java_lang_Object, VTABLE_java_util_TreeMap$NavigableSubMap_lastKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "higherKey", (intptr_t) M_java_util_TreeMap$NavigableSubMap_higherKey_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$NavigableSubMap_higherKey_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "lowerKey", (intptr_t) M_java_util_TreeMap$NavigableSubMap_lowerKey_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$NavigableSubMap_lowerKey_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "ceilingKey", (intptr_t) M_java_util_TreeMap$NavigableSubMap_ceilingKey_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$NavigableSubMap_ceilingKey_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "floorKey", (intptr_t) M_java_util_TreeMap$NavigableSubMap_floorKey_java_lang_Object_R_java_lang_Object, VTABLE_java_util_TreeMap$NavigableSubMap_floorKey_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "navigableKeySet", 0, VTABLE_java_util_TreeMap$NavigableSubMap_navigableKeySet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1025 },
	{ "entrySet", 0, VTABLE_java_util_TreeMap$NavigableSubMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1025 },
	{ "keySet", (intptr_t) M_java_util_TreeMap$NavigableSubMap_keySet_R_java_util_Set, VTABLE_java_util_TreeMap$NavigableSubMap_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "descendingKeySet", (intptr_t) M_java_util_TreeMap$NavigableSubMap_descendingKeySet_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$NavigableSubMap_descendingKeySet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1 },
	{ "subMap", (intptr_t) M_java_util_TreeMap$NavigableSubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_TreeMap$NavigableSubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "headMap", (intptr_t) M_java_util_TreeMap$NavigableSubMap_headMap_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_TreeMap$NavigableSubMap_headMap_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "tailMap", (intptr_t) M_java_util_TreeMap$NavigableSubMap_tailMap_java_lang_Object_R_java_util_SortedMap, VTABLE_java_util_TreeMap$NavigableSubMap_tailMap_java_lang_Object_R_java_util_SortedMap, "(Ljava/lang/Object;)Ljava/util/SortedMap;", 1 },
	{ "subMap", 0, VTABLE_java_util_TreeMap$NavigableSubMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;", 1025 },
	{ "headMap", 0, VTABLE_java_util_TreeMap$NavigableSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", 1025 },
	{ "tailMap", 0, VTABLE_java_util_TreeMap$NavigableSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", 1025 },
	{ "checkUpperBound", (intptr_t) M_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap$NavigableSubMap_checkUpperBound_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 16 },
	{ "checkLowerBound", (intptr_t) M_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap$NavigableSubMap_checkLowerBound_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 16 },
	{ "isInRange", (intptr_t) M_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean, VTABLE_java_util_TreeMap$NavigableSubMap_isInRange_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 16 },
	{ "theSmallestEntry", (intptr_t) M_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_theSmallestEntry_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 16 },
	{ "theBiggestEntry", (intptr_t) M_java_util_TreeMap$NavigableSubMap_theBiggestEntry_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_theBiggestEntry_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 16 },
	{ "smallerOrEqualEntry", (intptr_t) M_java_util_TreeMap$NavigableSubMap_smallerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_smallerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 16 },
	{ "findFloorEntry", (intptr_t) M_java_util_TreeMap$NavigableSubMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 2 },
	{ "cmp", (intptr_t) M_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int, VTABLE_java_util_TreeMap$NavigableSubMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Comparable;Ljava/lang/Object;Ljava/lang/Object;)I", 2 },
	{ "findFloorEntryImpl", (intptr_t) M_java_util_TreeMap$NavigableSubMap_findFloorEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_findFloorEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 2 },
	{ "createEntry", (intptr_t) M_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry, "(Ljava/util/TreeMap$Node;I)Ljava/util/TreeMap$Entry;", 0 },
	{ "biggerOrEqualEntry", (intptr_t) M_java_util_TreeMap$NavigableSubMap_biggerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_biggerOrEqualEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 16 },
	{ "findStartNode", (intptr_t) M_java_util_TreeMap$NavigableSubMap_findStartNode_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_findStartNode_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 2 },
	{ "findEndNode", (intptr_t) M_java_util_TreeMap$NavigableSubMap_findEndNode_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_findEndNode_R_java_util_TreeMap$Entry, "()Ljava/util/TreeMap$Entry;", 2 },
	{ "findCeilingEntry", (intptr_t) M_java_util_TreeMap$NavigableSubMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 2 },
	{ "findLowerEntryImpl", (intptr_t) M_java_util_TreeMap$NavigableSubMap_findLowerEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_findLowerEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 2 },
	{ "findCeilingEntryImpl", (intptr_t) M_java_util_TreeMap$NavigableSubMap_findCeilingEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_findCeilingEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 2 },
	{ "smallerEntry", (intptr_t) M_java_util_TreeMap$NavigableSubMap_smallerEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_smallerEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 16 },
	{ "findLowerEntry", (intptr_t) M_java_util_TreeMap$NavigableSubMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 2 },
	{ "biggerEntry", (intptr_t) M_java_util_TreeMap$NavigableSubMap_biggerEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_biggerEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 16 },
	{ "findHigherEntry", (intptr_t) M_java_util_TreeMap$NavigableSubMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 2 },
	{ "findHigherEntryImpl", (intptr_t) M_java_util_TreeMap$NavigableSubMap_findHigherEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry, VTABLE_java_util_TreeMap$NavigableSubMap_findHigherEntryImpl_java_lang_Object_R_java_util_TreeMap$Entry, "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 0 },
	{ "values", (intptr_t) M_java_util_TreeMap$NavigableSubMap_values_R_java_util_Collection, VTABLE_java_util_TreeMap$NavigableSubMap_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "access$000", (intptr_t) SM_java_util_TreeMap$NavigableSubMap_access$000_java_util_TreeMap$NavigableSubMap_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$NavigableSubMap;)Ljava/util/TreeMap$Entry;", 4104 },
	{ "access$700", (intptr_t) SM_java_util_TreeMap$NavigableSubMap_access$700_java_util_TreeMap$NavigableSubMap_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$NavigableSubMap;)Ljava/util/TreeMap$Entry;", 4104 },
	{ "access$800", (intptr_t) SM_java_util_TreeMap$NavigableSubMap_access$800_java_util_TreeMap$NavigableSubMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int, 0, "(Ljava/util/TreeMap$NavigableSubMap;Ljava/lang/Comparable;Ljava/lang/Object;Ljava/lang/Object;)I", 4104 },
	{ "access$900", (intptr_t) SM_java_util_TreeMap$NavigableSubMap_access$900_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$NavigableSubMap;Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 4104 },
	{ "access$1000", (intptr_t) SM_java_util_TreeMap$NavigableSubMap_access$1000_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$NavigableSubMap;Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 4104 },
	{ "access$1100", (intptr_t) SM_java_util_TreeMap$NavigableSubMap_access$1100_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$NavigableSubMap;Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 4104 },
	{ "access$1200", (intptr_t) SM_java_util_TreeMap$NavigableSubMap_access$1200_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$NavigableSubMap;Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 4104 },
	{ "access$1300", (intptr_t) SM_java_util_TreeMap$NavigableSubMap_access$1300_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$NavigableSubMap;Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 4104 },
	{ "access$1400", (intptr_t) SM_java_util_TreeMap$NavigableSubMap_access$1400_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$NavigableSubMap;Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 4104 },
	{ "access$1500", (intptr_t) SM_java_util_TreeMap$NavigableSubMap_access$1500_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry, 0, "(Ljava/util/TreeMap$NavigableSubMap;Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", 4104 },
};

Class class_java_util_TreeMap$NavigableSubMap{
		.nativeName = (intptr_t) "java/util/TreeMap$NavigableSubMap",
		.parentClass = (intptr_t) &class_java_util_AbstractMap,
		.size = sizeof(java_util_TreeMap$NavigableSubMap),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$NavigableSubMap,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$NavigableSubMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$NavigableSubMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 70,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 82,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$NavigableSubMap = registerClass(&class_java_util_TreeMap$NavigableSubMap);

}

