#include "java/util/AbstractMap.h"
#include "java/lang/ClassCastException.h"
#include "java/util/Iterator.h"
#include "java/util/AbstractMap_SimpleEntry.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/AbstractMap_2.h"
#include "java/util/AbstractMap_SimpleImmutableEntry.h"
#include "java/util/Map_Entry.h"
#include "java/util/AbstractMap_1.h"
#include "java/util/Map.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/lang/NullPointerException.h"
#include "java/util/AbstractMap.h"

extern "C" {


void mark_java_util_AbstractMap(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_AbstractMap *) object;
	if (self->F_keySet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keySet)->clazz)->markFunction)((jobject) self->F_keySet, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_java_util_AbstractMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_AbstractMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(272);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_AbstractMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((func_java_util_AbstractMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	((func_java_util_Set_clear) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:containsKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_java_util_AbstractMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(297);
	if ((frame[1].o) == nullptr) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(298);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (checkCast(ctx, &class_java_util_Map$Entry, sp[1].o))))(ctx, (checkCast(ctx, &class_java_util_Map$Entry, sp[1].o)));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(304);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o)));
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:containsValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_java_util_AbstractMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(323);
	if ((frame[1].o) == nullptr) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (checkCast(ctx, &class_java_util_Map$Entry, sp[1].o))))(ctx, (checkCast(ctx, &class_java_util_Map$Entry, sp[1].o)));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(330);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o)));
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(361);
	if ((frame[0].o) != (frame[1].o)) goto label_15;
	}
	{
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(364);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(365);
	frame[2].o = (checkCast(ctx, &class_java_util_Map, (frame[1].o)));
	LINE_NUMBER(366);
	jint temp0 = (jint)((func_java_util_AbstractMap_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_size_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == temp1) goto label_0;
	}
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (jint(0));
	}
label_0:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassCastException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	if (bypasses[1]) { goto label_3; }
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NullPointerException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_21; }
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_java_util_AbstractMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(372);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_13; } // goto label_8
	}
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(375);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(377);
	if ((frame[6].o) != nullptr) { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(378);
	if ((frame[7].o) != nullptr) goto label_28;
	}
	{
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[5].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 2); goto label_7; }
	}
label_28:;
	LINE_NUMBER(379);
	INST_ICONST(0);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassCastException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NullPointerException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(381);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (frame[7].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 2); goto label_7; }
	}
	LINE_NUMBER(382);
	INST_ICONST(0);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassCastException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	if (bypasses[0]) { goto label_9; }
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NullPointerException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	LINE_NUMBER(384);
	{ popExceptionFrames(frameRef, 2); bypasses[1] = true; goto label_11; } // goto label_21
label_8:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(389);
	goto label_30;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(385);
	frame[3].o = sp[0].o;
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(387);
	frame[3].o = sp[0].o;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (jint(0));
	}
label_30:;
	{
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((func_java_util_AbstractMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(405);
	if ((frame[1].o) == nullptr) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(406);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(408);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	LINE_NUMBER(411);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(415);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	LINE_NUMBER(418);
	goto label_2;
label_4:;
	{
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(432);
	frame[1].i = (jint(0));
	LINE_NUMBER(433);
	sp[0].o = (jobject)((func_java_util_AbstractMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(434);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(435);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o)))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o)));
	frame[1].i = (temp0 + temp1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(448);
	jint temp0 = (jint)((func_java_util_AbstractMap_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_size_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jobject M_java_util_AbstractMap_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:keySet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	clinit_java_util_AbstractMap$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_AbstractMap$1);
	init_java_util_AbstractMap$1_java_util_AbstractMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_keySet = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:put", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(518);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_AbstractMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:putAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(539);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_util_AbstractMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(542);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(543);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_AbstractMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((func_java_util_AbstractMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(557);
	if ((frame[1].o) == nullptr) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(560);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(561);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(562);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	LINE_NUMBER(564);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(566);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(569);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	LINE_NUMBER(572);
	goto label_2;
label_4:;
	{
	LINE_NUMBER(574);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_java_util_AbstractMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Set_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:toString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(593);
	jint temp0 = (jint)((func_java_util_AbstractMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"{}"_j)));
	}
label_1:;
	{
	LINE_NUMBER(597);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	jint temp0 = (jint)((func_java_util_AbstractMap_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_size_R_int])(ctx, (frame[0].o));
	init_java_lang_StringBuffer_int(ctx, sp[0].o, (temp0 * (28)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(598);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (123));
	LINE_NUMBER(599);
	sp[0].o = (jobject)((func_java_util_AbstractMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractMap_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(600);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(602);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(603);
	if ((frame[4].o) == (frame[0].o)) goto label_10;
	}
	{
	LINE_NUMBER(604);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer])(ctx, (frame[1].o), (frame[4].o));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"(this Map)"_j))));
	}
label_12:;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (61));
	LINE_NUMBER(609);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(610);
	if ((frame[5].o) == (frame[0].o)) goto label_15;
	}
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer])(ctx, (frame[1].o), (frame[5].o));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"(this Map)"_j))));
	}
label_17:;
	{
	LINE_NUMBER(615);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	}
label_18:;
	LINE_NUMBER(618);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (125));
	LINE_NUMBER(620);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractMap_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(644);
	sp[0].o = frame[0].o;
	clinit_java_util_AbstractMap$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_AbstractMap$2);
	init_java_util_AbstractMap$2_java_util_AbstractMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_AbstractMap[] {
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
	(void *) M_java_util_AbstractMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractMap_containsValue_java_lang_Object_R_boolean,
	(void *) nullptr,
	(void *) M_java_util_AbstractMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractMap_isEmpty_R_boolean,
	(void *) M_java_util_AbstractMap_keySet_R_java_util_Set,
	(void *) M_java_util_AbstractMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractMap_remove_java_lang_Object_R_java_lang_Object,
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
	(void *) M_java_util_AbstractMap_size_R_int,
	(void *) M_java_util_AbstractMap_values_R_java_util_Collection,
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
};

static jclass interfaces[] { &class_java_util_Map, };

static jclass innerClasses[] {
	&class_java_util_AbstractMap$SimpleEntry,
	&class_java_util_AbstractMap$SimpleImmutableEntry,
};

static FieldMetadata fields[] {
	{ "keySet", &class_java_util_Set, offsetof(java_util_AbstractMap, F_keySet), "Ljava/util/Set;", 0 },
	{ "values", &class_java_util_Collection, offsetof(java_util_AbstractMap, F_values), "Ljava/util/Collection;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_AbstractMap, 0, "()V", 4 },
	{ "clear", (intptr_t) M_java_util_AbstractMap_clear, VTABLE_java_util_AbstractMap_clear, "()V", 1 },
	{ "containsKey", (intptr_t) M_java_util_AbstractMap_containsKey_java_lang_Object_R_boolean, VTABLE_java_util_AbstractMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsValue", (intptr_t) M_java_util_AbstractMap_containsValue_java_lang_Object_R_boolean, VTABLE_java_util_AbstractMap_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "entrySet", 0, VTABLE_java_util_AbstractMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1025 },
	{ "equals", (intptr_t) M_java_util_AbstractMap_equals_java_lang_Object_R_boolean, VTABLE_java_util_AbstractMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "get", (intptr_t) M_java_util_AbstractMap_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_AbstractMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "hashCode", (intptr_t) M_java_util_AbstractMap_hashCode_R_int, VTABLE_java_util_AbstractMap_hashCode_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_java_util_AbstractMap_isEmpty_R_boolean, VTABLE_java_util_AbstractMap_isEmpty_R_boolean, "()Z", 1 },
	{ "keySet", (intptr_t) M_java_util_AbstractMap_keySet_R_java_util_Set, VTABLE_java_util_AbstractMap_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "put", (intptr_t) M_java_util_AbstractMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_AbstractMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putAll", (intptr_t) M_java_util_AbstractMap_putAll_java_util_Map, VTABLE_java_util_AbstractMap_putAll_java_util_Map, "(Ljava/util/Map;)V", 1 },
	{ "remove", (intptr_t) M_java_util_AbstractMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_AbstractMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "size", (intptr_t) M_java_util_AbstractMap_size_R_int, VTABLE_java_util_AbstractMap_size_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_util_AbstractMap_toString_R_java_lang_String, VTABLE_java_util_AbstractMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "values", (intptr_t) M_java_util_AbstractMap_values_R_java_util_Collection, VTABLE_java_util_AbstractMap_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
};

Class class_java_util_AbstractMap{
		.nativeName = (intptr_t) "java/util/AbstractMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_AbstractMap),
		.classVtable = (intptr_t) vtable_java_util_AbstractMap,
		.staticInitializer = (intptr_t) clinit_java_util_AbstractMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_AbstractMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_AbstractMap = registerClass(&class_java_util_AbstractMap);

}
