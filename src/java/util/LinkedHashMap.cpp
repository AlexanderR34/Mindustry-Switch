#include "java/util/LinkedHashMap.h"
#include "java/util/HashMap_Entry.h"
#include "java/util/LinkedHashMap_EntryIterator.h"
#include "java/util/HashMap.h"
#include "java/util/Map_Entry.h"
#include "java/util/LinkedHashMap_LinkedHashMapEntrySet.h"
#include "java/util/Map.h"
#include "java/util/LinkedHashMap_KeyIterator.h"
#include "java/util/LinkedHashMap_ValueIterator.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/LinkedHashMap_LinkedHashMapEntry.h"
#include "java/util/LinkedHashMap_AbstractMapIterator.h"
#include "java/util/LinkedHashMap.h"
#include "java/util/LinkedHashMap_1.h"
#include "java/util/LinkedHashMap_2.h"
#include "java/util/AbstractMap.h"

extern "C" {

jlong SF_java_util_LinkedHashMap_serialVersionUID;

void mark_java_util_LinkedHashMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_HashMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_LinkedHashMap *) object;
	if (self->F_head)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_head)->clazz)->markFunction)((jobject) self->F_head, mark, depth + 1);
	if (self->F_tail)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tail)->clazz)->markFunction)((jobject) self->F_tail, mark, depth + 1);
}

void clinit_java_util_LinkedHashMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_HashMap(ctx);
	SF_java_util_LinkedHashMap_serialVersionUID = jlong(3801124242820219131ll);
}

void init_java_util_LinkedHashMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(63);
	init_java_util_HashMap(ctx, (frame[0].o));
	LINE_NUMBER(64);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_accessOrder = (jint(0));
	LINE_NUMBER(65);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head = (jref) (jobject(nullptr));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_LinkedHashMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(78);
	init_java_util_HashMap_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(79);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_accessOrder = (jint(0));
	LINE_NUMBER(80);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head = (jref) (jobject(nullptr));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_LinkedHashMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(96);
	init_java_util_HashMap_int_float(ctx, (frame[0].o), (frame[1].i), (frame[2].f));
	LINE_NUMBER(97);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_accessOrder = (jint(0));
	LINE_NUMBER(98);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head = (jref) (jobject(nullptr));
	LINE_NUMBER(99);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail = (jref) (jobject(nullptr));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_LinkedHashMap_int_float_boolean(jcontext ctx, jobject self, jint param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(120);
	init_java_util_HashMap_int_float(ctx, (frame[0].o), (frame[1].i), (frame[2].f));
	LINE_NUMBER(121);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_accessOrder = (frame[3].i);
	LINE_NUMBER(122);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head = (jref) (jobject(nullptr));
	LINE_NUMBER(123);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail = (jref) (jobject(nullptr));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_LinkedHashMap_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	init_java_util_HashMap(ctx, (frame[0].o));
	LINE_NUMBER(134);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_accessOrder = (jint(0));
	LINE_NUMBER(135);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head = (jref) (jobject(nullptr));
	LINE_NUMBER(136);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail = (jref) (jobject(nullptr));
	LINE_NUMBER(137);
	((func_java_util_LinkedHashMap_putAll_java_util_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_putAll_java_util_Map])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedHashMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:containsValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head;
	frame[2].o = sp[0].o;
	LINE_NUMBER(268);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(269);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_4;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_value;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[2].o)))->F_chainForward;
	frame[2].o = sp[0].o;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(276);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_4;
	}
	{
	LINE_NUMBER(277);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[2].o)))->F_chainForward;
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:newElementArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_LinkedHashMap$LinkedHashMapEntry, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_findNullKeyEntry_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_findNullKeyEntry_R_java_util_HashMap$Entry])(ctx, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_java_util_LinkedHashMap$LinkedHashMapEntry, sp[0].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(312);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(313);
	jint temp1 = (frame[3].i) & (jint(2147483647));
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[4].i = (temp1 % (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[1].o), (frame[4].i), (frame[3].i));
	frame[2].o = (checkCast(ctx, &class_java_util_LinkedHashMap$LinkedHashMapEntry, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(316);
	if ((frame[2].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(319);
	if (((jint)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_accessOrder) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail;
	if (sp[0].o == (frame[2].o)) goto label_9;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[2].o)))->F_chainBackward;
	frame[3].o = sp[0].o;
	LINE_NUMBER(321);
	sp[0].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[2].o)))->F_chainForward;
	frame[4].o = sp[0].o;
	LINE_NUMBER(322);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[4].o)))->F_chainBackward = (jref) (frame[3].o);
	LINE_NUMBER(323);
	if ((frame[3].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(324);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[3].o)))->F_chainForward = (jref) (frame[4].o);
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(326);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head = (jref) (frame[4].o);
	}
label_16:;
	{
	LINE_NUMBER(328);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[2].o)))->F_chainForward = (jref) (jobject(nullptr));
	LINE_NUMBER(329);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail;
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK(sp[0].o))->F_chainBackward = (jref) sp[1].o;
	LINE_NUMBER(330);
	sp[0].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail;
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK(sp[0].o))->F_chainForward = (jref) (frame[2].o);
	LINE_NUMBER(331);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail = (jref) (frame[2].o);
	}
label_9:;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:createEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(341);
	clinit_java_util_LinkedHashMap$LinkedHashMapEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedHashMap$LinkedHashMapEntry);
	init_java_util_LinkedHashMap$LinkedHashMapEntry_java_lang_Object_java_lang_Object(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(342);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	((java_util_HashMap$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[4].o);
	LINE_NUMBER(344);
	((func_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:createHashedEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(349);
	clinit_java_util_LinkedHashMap$LinkedHashMapEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedHashMap$LinkedHashMapEntry);
	init_java_util_LinkedHashMap$LinkedHashMapEntry_java_lang_Object_int(ctx, sp[0].o, (frame[1].o), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(350);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	((java_util_HashMap$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(351);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[4].o);
	LINE_NUMBER(352);
	((func_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head;
	jint temp0 = (jint)((func_java_util_LinkedHashMap_removeEldestEntry_java_util_Map$Entry_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_removeEldestEntry_java_util_Map$Entry_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK(sp[1].o))->F_key;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:putImpl", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(379);
	if (((jint)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementCount) != 0) goto label_1;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = jobject(nullptr);
	((java_util_LinkedHashMap *) NULL_CHECK(sp[1].o))->F_tail = (jref) sp[2].o;
	((java_util_LinkedHashMap *) NULL_CHECK(sp[0].o))->F_head = (jref) sp[2].o;
	}
label_1:;
	{
	LINE_NUMBER(382);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_findNullKeyEntry_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_findNullKeyEntry_R_java_util_HashMap$Entry])(ctx, (frame[0].o));
	frame[3].o = (checkCast(ctx, &class_java_util_LinkedHashMap$LinkedHashMapEntry, sp[0].o));
	LINE_NUMBER(384);
	if ((frame[3].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(385);
	sp[0].o = frame[0].o;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount) + (jint(1));
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount = temp0;
	if (temp0 <= ((jint)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_9;
	}
	{
	LINE_NUMBER(390);
	((func_java_util_LinkedHashMap_rehash) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_rehash])(ctx, (frame[0].o));
	}
label_9:;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (jobject(nullptr)), (jint(0)), (jint(0)));
	frame[3].o = (checkCast(ctx, &class_java_util_LinkedHashMap$LinkedHashMapEntry, sp[0].o));
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(394);
	((func_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry])(ctx, (frame[0].o), (frame[3].o));
	goto label_11;
	}
label_3:;
	{
	LINE_NUMBER(397);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(398);
	jint temp1 = (frame[4].i) & (jint(2147483647));
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[5].i = (temp1 % (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[1].o), (frame[5].i), (frame[4].i));
	frame[3].o = (checkCast(ctx, &class_java_util_LinkedHashMap$LinkedHashMapEntry, sp[0].o));
	LINE_NUMBER(400);
	if ((frame[3].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(401);
	sp[0].o = frame[0].o;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount) + (jint(1));
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount = temp0;
	if (temp0 <= ((jint)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_18;
	}
	{
	LINE_NUMBER(403);
	((func_java_util_LinkedHashMap_rehash) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_rehash])(ctx, (frame[0].o));
	LINE_NUMBER(404);
	jint temp0 = (frame[4].i) & (jint(2147483647));
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[5].i = (temp0 % (((jarray) nullCheck(ctx, sp[0].o))->length));
	}
label_18:;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[1].o), (frame[5].i), (frame[4].i));
	frame[3].o = (checkCast(ctx, &class_java_util_LinkedHashMap$LinkedHashMapEntry, sp[0].o));
	goto label_11;
	}
label_15:;
	{
	LINE_NUMBER(409);
	((func_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry])(ctx, (frame[0].o), (frame[3].o));
	}
label_11:;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_value;
	frame[4].o = sp[0].o;
	LINE_NUMBER(414);
	((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:linkEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	LINE_NUMBER(423);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(428);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	((java_util_LinkedHashMap *) NULL_CHECK(sp[1].o))->F_tail = (jref) sp[2].o;
	((java_util_LinkedHashMap *) NULL_CHECK(sp[0].o))->F_head = (jref) sp[2].o;
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[1].o)))->F_chainBackward;
	frame[2].o = sp[0].o;
	LINE_NUMBER(435);
	sp[0].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[1].o)))->F_chainForward;
	frame[3].o = sp[0].o;
	LINE_NUMBER(436);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(437);
	if ((frame[3].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(439);
	if (((jint)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_accessOrder) == 0) goto label_12;
	}
	{
	LINE_NUMBER(440);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head = (jref) (frame[3].o);
	LINE_NUMBER(441);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[3].o)))->F_chainBackward = (jref) (jobject(nullptr));
	LINE_NUMBER(442);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail;
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK(sp[0].o))->F_chainBackward = (jref) sp[1].o;
	LINE_NUMBER(443);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[1].o)))->F_chainForward = (jref) (jobject(nullptr));
	LINE_NUMBER(444);
	sp[0].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail;
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK(sp[0].o))->F_chainForward = (jref) (frame[1].o);
	LINE_NUMBER(445);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail = (jref) (frame[1].o);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(449);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail;
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK(sp[0].o))->F_chainBackward = (jref) sp[1].o;
	LINE_NUMBER(450);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[1].o)))->F_chainForward = (jref) (jobject(nullptr));
	LINE_NUMBER(451);
	sp[0].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail;
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK(sp[0].o))->F_chainForward = (jref) (frame[1].o);
	LINE_NUMBER(452);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail = (jref) (frame[1].o);
	}
label_12:;
	LINE_NUMBER(454);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(457);
	if ((frame[3].o) != nullptr) goto label_22;
	}
	LINE_NUMBER(459);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
	{
	LINE_NUMBER(463);
	if (((jint)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_accessOrder) == 0) goto label_24;
	}
	{
	LINE_NUMBER(464);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[2].o)))->F_chainForward = (jref) (frame[3].o);
	LINE_NUMBER(465);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[3].o)))->F_chainBackward = (jref) (frame[2].o);
	LINE_NUMBER(466);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[1].o)))->F_chainForward = (jref) (jobject(nullptr));
	LINE_NUMBER(467);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail;
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK(sp[0].o))->F_chainBackward = (jref) sp[1].o;
	LINE_NUMBER(468);
	sp[0].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail;
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK(sp[0].o))->F_chainForward = (jref) (frame[1].o);
	LINE_NUMBER(469);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail = (jref) (frame[1].o);
	}
label_24:;
	LINE_NUMBER(471);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:entrySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(482);
	clinit_java_util_LinkedHashMap$LinkedHashMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedHashMap$LinkedHashMapEntrySet);
	init_java_util_LinkedHashMap$LinkedHashMapEntrySet_java_util_LinkedHashMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:keySet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(495);
	sp[0].o = frame[0].o;
	clinit_java_util_LinkedHashMap$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_LinkedHashMap$1);
	init_java_util_LinkedHashMap$1_java_util_LinkedHashMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_keySet = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(551);
	sp[0].o = frame[0].o;
	clinit_java_util_LinkedHashMap$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_LinkedHashMap$2);
	init_java_util_LinkedHashMap$2_java_util_LinkedHashMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_util_LinkedHashMap$LinkedHashMapEntry, sp[0].o));
	LINE_NUMBER(587);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(588);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[2].o)))->F_chainBackward;
	frame[3].o = sp[0].o;
	LINE_NUMBER(591);
	sp[0].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[2].o)))->F_chainForward;
	frame[4].o = sp[0].o;
	LINE_NUMBER(592);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(593);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[3].o)))->F_chainForward = (jref) (frame[4].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(595);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head = (jref) (frame[4].o);
	}
label_8:;
	{
	LINE_NUMBER(597);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(598);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[4].o)))->F_chainBackward = (jref) (frame[3].o);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(600);
	((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_tail = (jref) (frame[3].o);
	}
label_11:;
	{
	LINE_NUMBER(602);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[2].o)))->F_chainForward = (jref) (jobject(nullptr));
	LINE_NUMBER(603);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[2].o)))->F_chainBackward = (jref) (jobject(nullptr));
	LINE_NUMBER(604);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedHashMap_removeEldestEntry_java_util_Map$Entry_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:removeEldestEntry", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(618);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_LinkedHashMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:clear", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(630);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[1].o)))->F_chainForward;
	frame[2].o = sp[0].o;
	LINE_NUMBER(632);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[1].o)))->F_chainForward = (jref) (jobject(nullptr));
	LINE_NUMBER(633);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[1].o)))->F_chainBackward = (jref) (jobject(nullptr));
	LINE_NUMBER(634);
	frame[1].o = (frame[2].o);
	LINE_NUMBER(635);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(637);
	M_java_util_HashMap_clear(ctx, (frame[0].o));
	LINE_NUMBER(638);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = jobject(nullptr);
	((java_util_LinkedHashMap *) NULL_CHECK(sp[1].o))->F_tail = (jref) sp[2].o;
	((java_util_LinkedHashMap *) NULL_CHECK(sp[0].o))->F_head = (jref) sp[2].o;
	LINE_NUMBER(639);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_LinkedHashMap_access$000_java_util_LinkedHashMap_R_java_util_LinkedHashMap$LinkedHashMapEntry(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((java_util_LinkedHashMap *) NULL_CHECK((frame[0].o)))->F_head;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_LinkedHashMap_access$102_java_util_LinkedHashMap_java_util_LinkedHashMap$LinkedHashMapEntry_R_java_util_LinkedHashMap$LinkedHashMapEntry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:access$102", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	((java_util_LinkedHashMap *) NULL_CHECK(sp[0].o))->F_tail = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_LinkedHashMap_access$002_java_util_LinkedHashMap_java_util_LinkedHashMap$LinkedHashMapEntry_R_java_util_LinkedHashMap$LinkedHashMapEntry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap:access$002", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	((java_util_LinkedHashMap *) NULL_CHECK(sp[0].o))->F_head = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_LinkedHashMap[] {
	(void *) M_java_util_AbstractMap_hashCode_R_int,
	(void *) M_java_util_AbstractMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_HashMap_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_LinkedHashMap_clear,
	(void *) M_java_util_HashMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_LinkedHashMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_LinkedHashMap_entrySet_R_java_util_Set,
	(void *) M_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_isEmpty_R_boolean,
	(void *) M_java_util_LinkedHashMap_keySet_R_java_util_Set,
	(void *) M_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object,
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
	(void *) M_java_util_HashMap_size_R_int,
	(void *) M_java_util_LinkedHashMap_values_R_java_util_Collection,
	(void *) M_java_util_LinkedHashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_computeThreshold,
	(void *) M_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry,
	(void *) M_java_util_LinkedHashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_LinkedHashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_LinkedHashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_putAllImpl_java_util_Map,
	(void *) M_java_util_HashMap_rehash_int,
	(void *) M_java_util_HashMap_rehash,
	(void *) M_java_util_HashMap_removeEntry_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry,
	(void *) M_java_util_LinkedHashMap_removeEldestEntry_java_util_Map$Entry_R_boolean,
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
	{ "newElementArray", "(I)[Ljava/util/HashMap$Entry;" },
	{ "computeThreshold", "()V" },
	{ "getEntry", "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "findNonNullKeyEntry", "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;" },
	{ "findNullKeyEntry", "()Ljava/util/HashMap$Entry;" },
	{ "putImpl", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "createEntry", "(Ljava/lang/Object;ILjava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "createHashedEntry", "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;" },
	{ "putAllImpl", "(Ljava/util/Map;)V" },
	{ "rehash", "(I)V" },
	{ "rehash", "()V" },
	{ "removeEntry", "(Ljava/util/HashMap$Entry;)V" },
	{ "removeEntry", "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "linkEntry", "(Ljava/util/LinkedHashMap$LinkedHashMapEntry;)V" },
	{ "removeEldestEntry", "(Ljava/util/Map$Entry;)Z" },
};

static jclass interfaces[] { &class_java_util_Map, };

static jclass innerClasses[] {
	&class_java_util_LinkedHashMap$LinkedHashMapEntry,
	&class_java_util_LinkedHashMap$LinkedHashMapEntrySet,
	&class_java_util_LinkedHashMap$ValueIterator,
	&class_java_util_LinkedHashMap$KeyIterator,
	&class_java_util_LinkedHashMap$EntryIterator,
	&class_java_util_LinkedHashMap$AbstractMapIterator,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_LinkedHashMap_serialVersionUID, "J", 26 },
	{ "accessOrder", &class_boolean, offsetof(java_util_LinkedHashMap, F_accessOrder), "Z", 18 },
	{ "head", &class_java_util_LinkedHashMap$LinkedHashMapEntry, offsetof(java_util_LinkedHashMap, F_head), "Ljava/util/LinkedHashMap$LinkedHashMapEntry;", 130 },
	{ "tail", &class_java_util_LinkedHashMap$LinkedHashMapEntry, offsetof(java_util_LinkedHashMap, F_tail), "Ljava/util/LinkedHashMap$LinkedHashMapEntry;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_LinkedHashMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_LinkedHashMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_LinkedHashMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_java_util_LinkedHashMap_int_float_boolean, 0, "(IFZ)V", 1 },
	{ "<init>", (intptr_t) init_java_util_LinkedHashMap_java_util_Map, 0, "(Ljava/util/Map;)V", 1 },
	{ "containsValue", (intptr_t) M_java_util_LinkedHashMap_containsValue_java_lang_Object_R_boolean, VTABLE_java_util_LinkedHashMap_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "newElementArray", (intptr_t) M_java_util_LinkedHashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry, VTABLE_java_util_LinkedHashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry, "(I)[Ljava/util/HashMap$Entry;", 0 },
	{ "get", (intptr_t) M_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "createEntry", (intptr_t) M_java_util_LinkedHashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry, VTABLE_java_util_LinkedHashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry, "(Ljava/lang/Object;ILjava/lang/Object;)Ljava/util/HashMap$Entry;", 0 },
	{ "createHashedEntry", (intptr_t) M_java_util_LinkedHashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry, VTABLE_java_util_LinkedHashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry, "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;", 0 },
	{ "put", (intptr_t) M_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putImpl", (intptr_t) M_java_util_LinkedHashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_LinkedHashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 0 },
	{ "linkEntry", (intptr_t) M_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry, VTABLE_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry, "(Ljava/util/LinkedHashMap$LinkedHashMapEntry;)V", 0 },
	{ "entrySet", (intptr_t) M_java_util_LinkedHashMap_entrySet_R_java_util_Set, VTABLE_java_util_LinkedHashMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "keySet", (intptr_t) M_java_util_LinkedHashMap_keySet_R_java_util_Set, VTABLE_java_util_LinkedHashMap_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "values", (intptr_t) M_java_util_LinkedHashMap_values_R_java_util_Collection, VTABLE_java_util_LinkedHashMap_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "remove", (intptr_t) M_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "removeEldestEntry", (intptr_t) M_java_util_LinkedHashMap_removeEldestEntry_java_util_Map$Entry_R_boolean, VTABLE_java_util_LinkedHashMap_removeEldestEntry_java_util_Map$Entry_R_boolean, "(Ljava/util/Map$Entry;)Z", 4 },
	{ "clear", (intptr_t) M_java_util_LinkedHashMap_clear, VTABLE_java_util_LinkedHashMap_clear, "()V", 1 },
	{ "access$000", (intptr_t) SM_java_util_LinkedHashMap_access$000_java_util_LinkedHashMap_R_java_util_LinkedHashMap$LinkedHashMapEntry, 0, "(Ljava/util/LinkedHashMap;)Ljava/util/LinkedHashMap$LinkedHashMapEntry;", 4104 },
	{ "access$102", (intptr_t) SM_java_util_LinkedHashMap_access$102_java_util_LinkedHashMap_java_util_LinkedHashMap$LinkedHashMapEntry_R_java_util_LinkedHashMap$LinkedHashMapEntry, 0, "(Ljava/util/LinkedHashMap;Ljava/util/LinkedHashMap$LinkedHashMapEntry;)Ljava/util/LinkedHashMap$LinkedHashMapEntry;", 4104 },
	{ "access$002", (intptr_t) SM_java_util_LinkedHashMap_access$002_java_util_LinkedHashMap_java_util_LinkedHashMap$LinkedHashMapEntry_R_java_util_LinkedHashMap$LinkedHashMapEntry, 0, "(Ljava/util/LinkedHashMap;Ljava/util/LinkedHashMap$LinkedHashMapEntry;)Ljava/util/LinkedHashMap$LinkedHashMapEntry;", 4104 },
};

Class class_java_util_LinkedHashMap{
		.nativeName = (intptr_t) "java/util/LinkedHashMap",
		.parentClass = (intptr_t) &class_java_util_HashMap,
		.size = sizeof(java_util_LinkedHashMap),
		.classVtable = (intptr_t) vtable_java_util_LinkedHashMap,
		.staticInitializer = (intptr_t) clinit_java_util_LinkedHashMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_LinkedHashMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 6,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_LinkedHashMap = registerClass(&class_java_util_LinkedHashMap);

}
