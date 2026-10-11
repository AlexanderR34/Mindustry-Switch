#include "java/util/TreeMap_AscendingSubMap.h"
#include "java/util/NavigableMap.h"
#include "java/util/TreeMap_AscendingSubMapEntrySet.h"
#include "java/util/NavigableSet.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/util/AbstractMap_SimpleImmutableEntry.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/TreeMap_DescendingSubMap.h"
#include "java/util/Map.h"
#include "java/util/TreeMap.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/TreeMap_AscendingSubMapKeySet.h"
#include "java/util/TreeMap_AscendingSubMap.h"
#include "java/util/TreeMap_Entry.h"
#include "java/util/AbstractMap.h"

extern "C" {


void mark_java_util_TreeMap$AscendingSubMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_TreeMap$NavigableSubMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_TreeMap$AscendingSubMap *) object;
}

void clinit_java_util_TreeMap$AscendingSubMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_TreeMap$NavigableSubMap(ctx);
}

void init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(3097);
	init_java_util_TreeMap$NavigableSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o), (frame[5].i));
	LINE_NUMBER(3098);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(3101);
	init_java_util_TreeMap$NavigableSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(3102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(3105);
	init_java_util_TreeMap$NavigableSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	LINE_NUMBER(3106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3109);
	init_java_util_TreeMap$NavigableSubMap_java_util_TreeMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(3110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_firstEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:firstEntry", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3114);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMap_theSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMap_theSmallestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3115);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(3116);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(3118);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_lastEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:lastEntry", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3124);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMap_theBiggestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMap_theBiggestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3125);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(3126);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(3128);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_pollFirstEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:pollFirstEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3134);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMap_theSmallestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMap_theSmallestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3135);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	LINE_NUMBER(3136);
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3137);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(3138);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(3140);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_pollLastEntry_R_java_util_Map$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:pollLastEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3145);
	sp[0].o = (jobject)((func_java_util_TreeMap$AscendingSubMap_theBiggestEntry_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMap_theBiggestEntry_R_java_util_TreeMap$Entry])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3146);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	LINE_NUMBER(3147);
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3148);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(3149);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	sp[0].o = (jobject)((func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(3151);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:higherEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3156);
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$1300_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3157);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$AscendingSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$AscendingSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(3158);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(3160);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:lowerEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3166);
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$1400_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3167);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$AscendingSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$AscendingSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(3168);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(3170);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:ceilingEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3176);
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$1500_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3177);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$AscendingSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$AscendingSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(3178);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(3180);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:floorEntry", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3186);
	sp[0].o = (jobject)SM_java_util_TreeMap$NavigableSubMap_access$1200_java_util_TreeMap$NavigableSubMap_java_lang_Object_R_java_util_TreeMap$Entry(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3187);
	if ((jobject(nullptr)) == (frame[2].o)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_util_TreeMap$AscendingSubMap_isInRange_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$AscendingSubMap_isInRange_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(3188);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[0].o = (jobject)((func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(3190);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:entrySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3196);
	clinit_java_util_TreeMap$AscendingSubMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapEntrySet);
	init_java_util_TreeMap$AscendingSubMapEntrySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_navigableKeySet_R_java_util_NavigableSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:navigableKeySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3202);
	clinit_java_util_TreeMap$AscendingSubMapKeySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMapKeySet);
	init_java_util_TreeMap$AscendingSubMapKeySet_java_util_TreeMap$NavigableSubMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_descendingMap_R_java_util_NavigableMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:descendingMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3206);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_1;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3207);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3210);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_3;
	}
	{
	LINE_NUMBER(3211);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(3213);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_5;
	}
	{
	LINE_NUMBER(3214);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(3216);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:descendingSubMap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3220);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_1;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3221);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3224);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_3;
	}
	{
	LINE_NUMBER(3225);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(3227);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_5;
	}
	{
	LINE_NUMBER(3228);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(3230);
	clinit_java_util_TreeMap$DescendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$DescendingSubMap_java_util_TreeMap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:subMap", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(3236);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_1;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) != 0) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_2;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	LINE_NUMBER(3237);
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_1;
	}
	goto label_4;
label_2:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	LINE_NUMBER(3238);
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_4;
	}
label_1:;
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_6;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) != 0) goto label_7;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_8;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_7;
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	LINE_NUMBER(3239);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
label_8:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_6;
	}
	goto label_4;
label_7:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	LINE_NUMBER(3241);
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(3242);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(3244);
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(3245);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(3247);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:headMap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3253);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_1;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) != 0) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_2;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_1;
	}
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(3254);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3256);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_4;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) != 0) goto label_5;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_5;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_4;
	}
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(3257);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(3259);
	jint temp0 = (jint)((func_java_util_TreeMap$AscendingSubMap_checkUpperBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMap_checkUpperBound_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(3260);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_9;
	}
	{
	LINE_NUMBER(3261);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(3264);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(3266);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$AscendingSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$AscendingSubMap:tailMap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3272);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_fromStart) == 0) goto label_1;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_loInclusive) != 0) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_2;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_1;
	}
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_lo;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 >= 0) goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(3273);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3275);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_4;
	}
	{
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive) != 0) goto label_5;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_5;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 < 0) goto label_4;
	}
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	jint temp0 = (jint)((func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(3276);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(3278);
	jint temp0 = (jint)((func_java_util_TreeMap$AscendingSubMap_checkLowerBound_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TreeMap$AscendingSubMap_checkLowerBound_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(3279);
	if (((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_toEnd) == 0) goto label_9;
	}
	{
	LINE_NUMBER(3280);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	sp[3].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hi;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, ((jint)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_hiInclusive));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(3283);
	clinit_java_util_TreeMap$AscendingSubMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$AscendingSubMap);
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK((frame[0].o)))->F_m;
	init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(3285);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$AscendingSubMap[] {
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
	(void *) M_java_util_TreeMap$AscendingSubMap_entrySet_R_java_util_Set,
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
	(void *) M_java_util_TreeMap$AscendingSubMap_firstEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMap_lastEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMap_pollFirstEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMap_pollLastEntry_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$AscendingSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_ceilingKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_higherKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_floorKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry,
	(void *) M_java_util_TreeMap$NavigableSubMap_lowerKey_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMap_navigableKeySet_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMap_descendingMap_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap$NavigableSubMap_descendingKeySet_R_java_util_NavigableSet,
	(void *) M_java_util_TreeMap$AscendingSubMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap$AscendingSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap$AscendingSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap,
	(void *) M_java_util_TreeMap$NavigableSubMap_findNode_java_lang_Object_R_java_util_TreeMap$Node,
	(void *) M_java_util_TreeMap$NavigableSubMap_checkNull_java_lang_Object,
	(void *) M_java_util_TreeMap$AscendingSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean, 0, "(Ljava/lang/Object;ZLjava/util/TreeMap;Ljava/lang/Object;Z)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap_java_lang_Object_boolean, 0, "(Ljava/util/TreeMap;Ljava/lang/Object;Z)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$AscendingSubMap_java_lang_Object_boolean_java_util_TreeMap, 0, "(Ljava/lang/Object;ZLjava/util/TreeMap;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_TreeMap$AscendingSubMap_java_util_TreeMap, 0, "(Ljava/util/TreeMap;)V", 0 },
	{ "firstEntry", (intptr_t) M_java_util_TreeMap$AscendingSubMap_firstEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMap_firstEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "lastEntry", (intptr_t) M_java_util_TreeMap$AscendingSubMap_lastEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMap_lastEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "pollFirstEntry", (intptr_t) M_java_util_TreeMap$AscendingSubMap_pollFirstEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMap_pollFirstEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "pollLastEntry", (intptr_t) M_java_util_TreeMap$AscendingSubMap_pollLastEntry_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMap_pollLastEntry_R_java_util_Map$Entry, "()Ljava/util/Map$Entry;", 1 },
	{ "higherEntry", (intptr_t) M_java_util_TreeMap$AscendingSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMap_higherEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "lowerEntry", (intptr_t) M_java_util_TreeMap$AscendingSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "ceilingEntry", (intptr_t) M_java_util_TreeMap$AscendingSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "floorEntry", (intptr_t) M_java_util_TreeMap$AscendingSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry, VTABLE_java_util_TreeMap$AscendingSubMap_floorEntry_java_lang_Object_R_java_util_Map$Entry, "(Ljava/lang/Object;)Ljava/util/Map$Entry;", 1 },
	{ "entrySet", (intptr_t) M_java_util_TreeMap$AscendingSubMap_entrySet_R_java_util_Set, VTABLE_java_util_TreeMap$AscendingSubMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "navigableKeySet", (intptr_t) M_java_util_TreeMap$AscendingSubMap_navigableKeySet_R_java_util_NavigableSet, VTABLE_java_util_TreeMap$AscendingSubMap_navigableKeySet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1 },
	{ "descendingMap", (intptr_t) M_java_util_TreeMap$AscendingSubMap_descendingMap_R_java_util_NavigableMap, VTABLE_java_util_TreeMap$AscendingSubMap_descendingMap_R_java_util_NavigableMap, "()Ljava/util/NavigableMap;", 1 },
	{ "descendingSubMap", (intptr_t) M_java_util_TreeMap$AscendingSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap, VTABLE_java_util_TreeMap$AscendingSubMap_descendingSubMap_R_java_util_TreeMap$NavigableSubMap, "()Ljava/util/TreeMap$NavigableSubMap;", 0 },
	{ "subMap", (intptr_t) M_java_util_TreeMap$AscendingSubMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap, VTABLE_java_util_TreeMap$AscendingSubMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;", 1 },
	{ "headMap", (intptr_t) M_java_util_TreeMap$AscendingSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap, VTABLE_java_util_TreeMap$AscendingSubMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", 1 },
	{ "tailMap", (intptr_t) M_java_util_TreeMap$AscendingSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap, VTABLE_java_util_TreeMap$AscendingSubMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap, "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", 1 },
};

Class class_java_util_TreeMap$AscendingSubMap{
		.nativeName = (intptr_t) "java/util/TreeMap$AscendingSubMap",
		.parentClass = (intptr_t) &class_java_util_TreeMap$NavigableSubMap,
		.size = sizeof(java_util_TreeMap$AscendingSubMap),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$AscendingSubMap,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$AscendingSubMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$AscendingSubMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 82,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$AscendingSubMap = registerClass(&class_java_util_TreeMap$AscendingSubMap);

}

