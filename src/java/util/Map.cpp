#include "java/util/Map.h"
#include "java/util/Iterator.h"
#include "java/util/function/Function.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/Map_Entry.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/function/BiConsumer.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/Objects.h"
#include "java/lang/Throwable.h"
#include "java/util/function/BiFunction.h"

extern "C" {


void mark_java_util_Map(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Map *) object;
}

void clinit_java_util_Map(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Map:putIfAbsent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(250);
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Map:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(271);
	jint temp0 = (jint)SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[3].o), (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	INST_ALOAD(3);
	if ((--sp)->o != nullptr) goto label_3;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Map:replace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(280);
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Map:replace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(288);
	jint temp0 = (jint)SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[4].o), (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) goto label_3;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(289);
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Map:getOrDefault", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	INST_ALOAD(2);
	goto label_3;
label_2:;
	INST_ALOAD(3);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_java_util_Map_forEach_java_util_function_BiConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Map:forEach", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(306);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalStateException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(311);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(315);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(312);
	frame[6].o = sp[0].o;
	LINE_NUMBER(313);
	frame[7].o = (frame[6].o);
	LINE_NUMBER(314);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException_java_lang_Throwable(ctx, sp[0].o, (frame[7].o));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(306);
	((func_java_util_function_BiConsumer_accept_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_BiConsumer, INDEX_java_util_function_BiConsumer_accept_java_lang_Object_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[3].o));
	goto label_6;
	}
label_7:;
	LINE_NUMBER(318);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_Map_replaceAll_java_util_function_BiFunction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Map:replaceAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalStateException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(332);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(336);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(333);
	frame[7].o = sp[0].o;
	LINE_NUMBER(334);
	frame[6].o = (frame[7].o);
	LINE_NUMBER(335);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException_java_lang_Throwable(ctx, sp[0].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((func_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_BiFunction, INDEX_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[4].o), (frame[5].o));
	frame[5].o = sp[0].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalStateException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_java_util_Map$Entry_setValue_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_setValue_java_lang_Object_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(345);
	goto label_17;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(342);
	frame[7].o = sp[0].o;
	LINE_NUMBER(343);
	frame[6].o = (frame[7].o);
	LINE_NUMBER(344);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException_java_lang_Throwable(ctx, sp[0].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_17:;
	LINE_NUMBER(346);
	goto label_10;
label_11:;
	LINE_NUMBER(348);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Map:computeIfAbsent", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(354);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_3:;
	{
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Map:computeIfPresent", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(365);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((func_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_BiFunction, INDEX_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(367);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_6:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Map:compute", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(382);
	sp[0].o = (jobject)((func_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_BiFunction, INDEX_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(383);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(384);
	if ((frame[3].o) != nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Map:merge", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[3].o));
	LINE_NUMBER(398);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(400);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	INST_ALOAD(2);
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((func_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_BiFunction, INDEX_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o), (frame[2].o));
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(401);
	if ((frame[5].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[5].o));
	}
label_9:;
	{
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Map[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) nullptr,
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

static jclass innerClasses[] {
	&class_java_util_Map$Entry,
};

static MethodMetadata methods[] {
	{ "clear", 0, INDEX_java_util_Map_clear, "()V", 1025 },
	{ "containsKey", 0, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "containsValue", 0, INDEX_java_util_Map_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "entrySet", 0, INDEX_java_util_Map_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1025 },
	{ "equals", 0, INDEX_java_util_Map_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "get", 0, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1025 },
	{ "hashCode", 0, INDEX_java_util_Map_hashCode_R_int, "()I", 1025 },
	{ "isEmpty", 0, INDEX_java_util_Map_isEmpty_R_boolean, "()Z", 1025 },
	{ "keySet", 0, INDEX_java_util_Map_keySet_R_java_util_Set, "()Ljava/util/Set;", 1025 },
	{ "put", 0, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1025 },
	{ "putAll", 0, INDEX_java_util_Map_putAll_java_util_Map, "(Ljava/util/Map;)V", 1025 },
	{ "putIfAbsent", (intptr_t) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object, INDEX_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "remove", 0, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1025 },
	{ "remove", (intptr_t) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean, INDEX_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 1 },
	{ "replace", (intptr_t) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object, INDEX_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "replace", (intptr_t) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean, INDEX_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", 1 },
	{ "getOrDefault", (intptr_t) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object, INDEX_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "forEach", (intptr_t) M_java_util_Map_forEach_java_util_function_BiConsumer, INDEX_java_util_Map_forEach_java_util_function_BiConsumer, "(Ljava/util/function/BiConsumer;)V", 1 },
	{ "replaceAll", (intptr_t) M_java_util_Map_replaceAll_java_util_function_BiFunction, INDEX_java_util_Map_replaceAll_java_util_function_BiFunction, "(Ljava/util/function/BiFunction;)V", 1 },
	{ "computeIfAbsent", (intptr_t) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object, INDEX_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object, "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", 1 },
	{ "computeIfPresent", (intptr_t) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object, INDEX_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object, "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", 1 },
	{ "compute", (intptr_t) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object, INDEX_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object, "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", 1 },
	{ "merge", (intptr_t) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object, INDEX_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", 1 },
	{ "size", 0, INDEX_java_util_Map_size_R_int, "()I", 1025 },
	{ "values", 0, INDEX_java_util_Map_values_R_java_util_Collection, "()Ljava/util/Collection;", 1025 },
};

Class class_java_util_Map{
		.nativeName = (intptr_t) "java/util/Map",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Map),
		.classVtable = (intptr_t) vtable_java_util_Map,
		.staticInitializer = (intptr_t) clinit_java_util_Map,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Map,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Map = registerClass(&class_java_util_Map);

}
