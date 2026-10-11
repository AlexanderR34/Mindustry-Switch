#include "rhino/Hashtable.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/AssertionError.h"
#include "rhino/Hashtable_Iter.h"
#include "java/util/HashMap.h"
#include "rhino/Hashtable.h"
#include "rhino/Hashtable_invoke_java_util_function_Consumer_0.h"
#include "java/util/function/Consumer.h"
#include "java/lang/Iterable.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "rhino/Hashtable_Entry.h"

extern "C" {

jbool SF_rhino_Hashtable_$assertionsDisabled;

void mark_rhino_Hashtable(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Hashtable *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
	if (self->F_first)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_first)->clazz)->markFunction)((jobject) self->F_first, mark, depth + 1);
	if (self->F_last)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_last)->clazz)->markFunction)((jobject) self->F_last, mark, depth + 1);
}

void init_rhino_Hashtable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Hashtable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((rhino_Hashtable *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(23);
	((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_first = (jref) (jobject(nullptr));
	LINE_NUMBER(24);
	((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_last = (jref) (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Hashtable_makeDummy_R_rhino_Hashtable$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable:makeDummy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	clinit_rhino_Hashtable$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Hashtable$Entry);
	init_rhino_Hashtable$Entry(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_rhino_Hashtable$Entry_clear_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Hashtable$Entry_clear_R_java_lang_Object])(ctx, (frame[1].o));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_Hashtable_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_util_HashMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_rhino_Hashtable_put_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(113);
	clinit_rhino_Hashtable$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Hashtable$Entry);
	init_rhino_Hashtable$Entry_java_lang_Object_java_lang_Object(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_HashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o), (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_rhino_Hashtable$Entry, sp[0].o));
	LINE_NUMBER(115);
	if ((frame[4].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[3].o;
	((rhino_Hashtable *) NULL_CHECK(sp[1].o))->F_last = (jref) sp[2].o;
	((rhino_Hashtable *) NULL_CHECK(sp[0].o))->F_first = (jref) sp[2].o;
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_last;
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(121);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_last;
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	LINE_NUMBER(122);
	((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[3].o);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(126);
	((rhino_Hashtable$Entry *) NULL_CHECK((frame[4].o)))->F_value = (jref) (frame[2].o);
	}
label_7:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Hashtable_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	clinit_rhino_Hashtable$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Hashtable$Entry);
	init_rhino_Hashtable$Entry_java_lang_Object_java_lang_Object(ctx, sp[0].o, (frame[1].o), (jobject(nullptr)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(132);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_Hashtable$Entry, sp[0].o));
	LINE_NUMBER(133);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Hashtable_has_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable:has", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	clinit_rhino_Hashtable$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Hashtable$Entry);
	init_rhino_Hashtable$Entry_java_lang_Object_java_lang_Object(ctx, sp[0].o, (frame[1].o), (jobject(nullptr)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(141);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_util_HashMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Hashtable_delete_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable:delete", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(145);
	clinit_rhino_Hashtable$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Hashtable$Entry);
	init_rhino_Hashtable$Entry_java_lang_Object_java_lang_Object(ctx, sp[0].o, (frame[1].o), (jobject(nullptr)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(146);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_Hashtable$Entry, sp[0].o));
	LINE_NUMBER(147);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_rhino_Hashtable$Entry_clear_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Hashtable$Entry_clear_R_java_lang_Object])(ctx, (frame[3].o));
	LINE_NUMBER(164);
	((rhino_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_prev = (jref) (jobject(nullptr));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	((rhino_Hashtable *) NULL_CHECK(sp[0].o))->F_first = (jref) sp[1].o;
	LINE_NUMBER(167);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_first;
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_prev = (jref) (jobject(nullptr));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_first;
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_first;
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next;
	sp[1].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_first;
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_prev;
	frame[4].o = sp[0].o;
	LINE_NUMBER(174);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(175);
	((rhino_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_prev = (jref) (jobject(nullptr));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_prev = (jref) (frame[4].o);
	goto label_10;
	}
label_17:;
	{
	LINE_NUMBER(179);
	if ((clinit_rhino_Hashtable(ctx), (jint)SF_rhino_Hashtable_$assertionsDisabled) != 0) goto label_19;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o == sp[1].o) goto label_19;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(180);
	((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[4].o);
	}
label_10:;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_rhino_Hashtable$Entry_clear_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Hashtable$Entry_clear_R_java_lang_Object])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Hashtable_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable:clear", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_rhino_Hashtable_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Hashtable_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(190);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_rhino_Hashtable_invoke_java_util_function_Consumer_0(ctx);
		auto proxy = (rhino_Hashtable_invoke_java_util_function_Consumer_0 *) gcAlloc(ctx, &class_rhino_Hashtable_invoke_java_util_function_Consumer_0);
		sp[1].o = (jobject) proxy;
	}
	((func_java_util_Iterator_forEachRemaining_java_util_function_Consumer) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_forEachRemaining_java_util_function_Consumer, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(196);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(197);
	clinit_rhino_Hashtable$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Hashtable$Entry);
	init_rhino_Hashtable$Entry(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_rhino_Hashtable$Entry_clear_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Hashtable$Entry_clear_R_java_lang_Object])(ctx, (frame[2].o));
	LINE_NUMBER(199);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_last;
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[2].o;
	((rhino_Hashtable *) NULL_CHECK(sp[1].o))->F_last = (jref) sp[2].o;
	((rhino_Hashtable *) NULL_CHECK(sp[0].o))->F_first = (jref) sp[2].o;
	}
label_3:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_map;
	((func_java_util_HashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Hashtable_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	clinit_rhino_Hashtable$Iter(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Hashtable$Iter);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((rhino_Hashtable *) NULL_CHECK((frame[0].o)))->F_first;
	init_rhino_Hashtable$Iter_rhino_Hashtable_rhino_Hashtable$Entry(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Hashtable_access$000_rhino_Hashtable_R_rhino_Hashtable$Entry(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Hashtable(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)M_rhino_Hashtable_makeDummy_R_rhino_Hashtable$Entry(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_Hashtable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Hashtable(ctx);
	{
	LINE_NUMBER(20);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_Hashtable)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_Hashtable)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_rhino_Hashtable(ctx);
	SF_rhino_Hashtable_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_Hashtable[] {
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
	(void *) M_rhino_Hashtable_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_rhino_Hashtable_makeDummy_R_rhino_Hashtable$Entry,
	(void *) M_rhino_Hashtable_size_R_int,
	(void *) M_rhino_Hashtable_put_java_lang_Object_java_lang_Object,
	(void *) M_rhino_Hashtable_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_Hashtable_has_java_lang_Object_R_boolean,
	(void *) M_rhino_Hashtable_delete_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_Hashtable_clear,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "makeDummy", "()Lrhino/Hashtable$Entry;" },
	{ "size", "()I" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/Object;)Z" },
	{ "delete", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "clear", "()V" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_rhino_Hashtable$Iter,
	&class_rhino_Hashtable$Entry,
};

static FieldMetadata fields[] {
	{ "map", &class_java_util_HashMap, offsetof(rhino_Hashtable, F_map), "Ljava/util/HashMap;", 18 },
	{ "first", &class_rhino_Hashtable$Entry, offsetof(rhino_Hashtable, F_first), "Lrhino/Hashtable$Entry;", 2 },
	{ "last", &class_rhino_Hashtable$Entry, offsetof(rhino_Hashtable, F_last), "Lrhino/Hashtable$Entry;", 2 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_Hashtable_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Hashtable, 0, "()V", 1 },
	{ "makeDummy", (intptr_t) M_rhino_Hashtable_makeDummy_R_rhino_Hashtable$Entry, VTABLE_rhino_Hashtable_makeDummy_R_rhino_Hashtable$Entry, "()Lrhino/Hashtable$Entry;", 2 },
	{ "size", (intptr_t) M_rhino_Hashtable_size_R_int, VTABLE_rhino_Hashtable_size_R_int, "()I", 1 },
	{ "put", (intptr_t) M_rhino_Hashtable_put_java_lang_Object_java_lang_Object, VTABLE_rhino_Hashtable_put_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 1 },
	{ "get", (intptr_t) M_rhino_Hashtable_get_java_lang_Object_R_java_lang_Object, VTABLE_rhino_Hashtable_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "has", (intptr_t) M_rhino_Hashtable_has_java_lang_Object_R_boolean, VTABLE_rhino_Hashtable_has_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "delete", (intptr_t) M_rhino_Hashtable_delete_java_lang_Object_R_java_lang_Object, VTABLE_rhino_Hashtable_delete_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "clear", (intptr_t) M_rhino_Hashtable_clear, VTABLE_rhino_Hashtable_clear, "()V", 1 },
	{ "iterator", (intptr_t) M_rhino_Hashtable_iterator_R_java_util_Iterator, VTABLE_rhino_Hashtable_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "access$000", (intptr_t) SM_rhino_Hashtable_access$000_rhino_Hashtable_R_rhino_Hashtable$Entry, 0, "(Lrhino/Hashtable;)Lrhino/Hashtable$Entry;", 4104 },
	{ "<clinit>", (intptr_t) clinit_rhino_Hashtable, 0, "()V", 8 },
};

Class class_rhino_Hashtable{
		.nativeName = (intptr_t) "rhino/Hashtable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Hashtable),
		.classVtable = (intptr_t) vtable_rhino_Hashtable,
		.staticInitializer = (intptr_t) clinit_rhino_Hashtable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Hashtable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Hashtable = registerClass(&class_rhino_Hashtable);

}
