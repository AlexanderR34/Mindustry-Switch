#include "java/util/EnumMap_EntryIterator_Entry.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/EnumMap_EntryIterator_Entry.h"
#include "java/util/EnumMap_EntryIterator.h"
#include "java/util/Map_Entry.h"
#include "java/util/EnumMap.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Enum.h"
#include "java/util/EnumMap_1.h"

extern "C" {


void mark_java_util_EnumMap$EntryIterator$Entry(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_EnumMap$EntryIterator$Entry *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_java_util_EnumMap$EntryIterator$Entry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_EnumMap$EntryIterator$Entry_java_util_EnumMap$EntryIterator_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$EntryIterator$Entry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(586);
	((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(587);
	((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index = (frame[2].i);
	LINE_NUMBER(588);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Enum(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:getKey", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(591);
	M_java_util_EnumMap$EntryIterator$Entry_checkIndexForEntryUse(ctx, (frame[0].o));
	LINE_NUMBER(592);
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)SM_java_util_EnumMap_access$1100_java_util_EnumMap_R_Array1_java_lang_Enum(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index)));
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$EntryIterator$Entry_getValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:getValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(596);
	M_java_util_EnumMap$EntryIterator$Entry_checkIndexForEntryUse(ctx, (frame[0].o));
	LINE_NUMBER(597);
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_util_EnumMap_access$1200_java_util_EnumMap_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$EntryIterator$Entry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:setValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(601);
	M_java_util_EnumMap$EntryIterator$Entry_checkIndexForEntryUse(ctx, (frame[0].o));
	LINE_NUMBER(602);
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_util_EnumMap_access$1200_java_util_EnumMap_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(603);
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[0].o);
	jint temp0 = (jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index;
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)SM_java_util_EnumMap_access$500_java_util_EnumMap_java_lang_Object_R_java_lang_Object(ctx, sp[1].o, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(604);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap$EntryIterator$Entry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:equals", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(608);
	if (((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(609);
	if ((frame[1].o) != (frame[0].o)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(611);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map$Entry)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(612);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(614);
	frame[2].o = (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o)));
	LINE_NUMBER(615);
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_util_EnumMap_access$1200_java_util_EnumMap_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(617);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)SM_java_util_EnumMap_access$1100_java_util_EnumMap_R_Array1_java_lang_Enum(ctx, sp[1].o);
	if (sp[0].o != ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index)))) goto label_10;
	}
	{
	if ((frame[3].o) == (frame[4].o)) goto label_11;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_10;
	{
	sp[0].o = frame[3].o;
	sp[1].o = frame[4].o;
	LINE_NUMBER(619);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
label_11:;
	INST_ICONST(1);
	goto label_13;
label_10:;
	INST_ICONST(0);
label_13:;
	LINE_NUMBER(617);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_EnumMap$EntryIterator$Entry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(623);
	if (((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(624);
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(626);
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[0].o))->F_this$0;
	jint temp0 = (jint)SM_java_util_EnumMap_access$1600_java_util_EnumMap_int_R_int(ctx, sp[0].o, ((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$EntryIterator$Entry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(630);
	if (((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(633);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)SM_java_util_EnumMap_access$1100_java_util_EnumMap_R_Array1_java_lang_Enum(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[2].o = (jobject)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[2].o = (jobject)((java_util_EnumMap$EntryIterator *) NULL_CHECK(sp[2].o))->F_this$0;
	LINE_NUMBER(634);
	sp[2].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[2].o);
	sp[1].o = (jobject)SM_java_util_EnumMap_access$1200_java_util_EnumMap_java_lang_Object_R_java_lang_Object(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_EnumMap$EntryIterator$Entry_checkIndexForEntryUse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:checkIndexForEntryUse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(638);
	if (((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(639);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Entry was removed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(640);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:getKey", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Enum) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Enum])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_EnumMap$EntryIterator$Entry_java_util_EnumMap$EntryIterator_int_java_util_EnumMap$1(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$EntryIterator$Entry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(583);
	init_java_util_EnumMap$EntryIterator$Entry_java_util_EnumMap$EntryIterator_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_util_EnumMap$EntryIterator$Entry_access$1500_java_util_EnumMap$EntryIterator$Entry_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:access$1500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$EntryIterator$Entry(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return ((jint)((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK((frame[0].o)))->F_index);
	}

	popStackFrame(ctx);
}

jint SM_java_util_EnumMap$EntryIterator$Entry_access$1502_java_util_EnumMap$EntryIterator$Entry_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EntryIterator$Entry:access$1502", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$EntryIterator$Entry(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(583);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	((java_util_EnumMap$EntryIterator$Entry *) NULL_CHECK(sp[0].o))->F_index = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_EnumMap$EntryIterator$Entry[] {
	(void *) M_java_util_EnumMap$EntryIterator$Entry_hashCode_R_int,
	(void *) M_java_util_EnumMap$EntryIterator$Entry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_EnumMap$EntryIterator$Entry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Object,
	(void *) M_java_util_EnumMap$EntryIterator$Entry_getValue_R_java_lang_Object,
	(void *) M_java_util_EnumMap$EntryIterator$Entry_setValue_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Enum,
	(void *) M_java_util_EnumMap$EntryIterator$Entry_checkIndexForEntryUse,
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
	{ "getKey", "()Ljava/lang/Object;" },
	{ "getValue", "()Ljava/lang/Object;" },
	{ "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "getKey", "()Ljava/lang/Enum;" },
	{ "checkIndexForEntryUse", "()V" },
};

static jclass interfaces[] { &class_java_util_Map$Entry, };

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(java_util_EnumMap$EntryIterator$Entry, F_index), "I", 2 },
	{ "this$1", &class_java_util_EnumMap$EntryIterator, offsetof(java_util_EnumMap$EntryIterator$Entry, F_this$1), "Ljava/util/EnumMap$EntryIterator;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_EnumMap$EntryIterator$Entry_java_util_EnumMap$EntryIterator_int, 0, "(Ljava/util/EnumMap$EntryIterator;I)V", 2 },
	{ "getKey", (intptr_t) M_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Enum, VTABLE_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Enum, "()Ljava/lang/Enum;", 1 },
	{ "getValue", (intptr_t) M_java_util_EnumMap$EntryIterator$Entry_getValue_R_java_lang_Object, VTABLE_java_util_EnumMap$EntryIterator$Entry_getValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setValue", (intptr_t) M_java_util_EnumMap$EntryIterator$Entry_setValue_java_lang_Object_R_java_lang_Object, VTABLE_java_util_EnumMap$EntryIterator$Entry_setValue_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "equals", (intptr_t) M_java_util_EnumMap$EntryIterator$Entry_equals_java_lang_Object_R_boolean, VTABLE_java_util_EnumMap$EntryIterator$Entry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_util_EnumMap$EntryIterator$Entry_hashCode_R_int, VTABLE_java_util_EnumMap$EntryIterator$Entry_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_util_EnumMap$EntryIterator$Entry_toString_R_java_lang_String, VTABLE_java_util_EnumMap$EntryIterator$Entry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "checkIndexForEntryUse", (intptr_t) M_java_util_EnumMap$EntryIterator$Entry_checkIndexForEntryUse, VTABLE_java_util_EnumMap$EntryIterator$Entry_checkIndexForEntryUse, "()V", 2 },
	{ "getKey", (intptr_t) M_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Object, VTABLE_java_util_EnumMap$EntryIterator$Entry_getKey_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "<init>", (intptr_t) init_java_util_EnumMap$EntryIterator$Entry_java_util_EnumMap$EntryIterator_int_java_util_EnumMap$1, 0, "(Ljava/util/EnumMap$EntryIterator;ILjava/util/EnumMap$1;)V", 4096 },
	{ "access$1500", (intptr_t) SM_java_util_EnumMap$EntryIterator$Entry_access$1500_java_util_EnumMap$EntryIterator$Entry_R_int, 0, "(Ljava/util/EnumMap$EntryIterator$Entry;)I", 4104 },
	{ "access$1502", (intptr_t) SM_java_util_EnumMap$EntryIterator$Entry_access$1502_java_util_EnumMap$EntryIterator$Entry_int_R_int, 0, "(Ljava/util/EnumMap$EntryIterator$Entry;I)I", 4104 },
};

Class class_java_util_EnumMap$EntryIterator$Entry{
		.nativeName = (intptr_t) "java/util/EnumMap$EntryIterator$Entry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_EnumMap$EntryIterator$Entry),
		.classVtable = (intptr_t) vtable_java_util_EnumMap$EntryIterator$Entry,
		.staticInitializer = (intptr_t) clinit_java_util_EnumMap$EntryIterator$Entry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_EnumMap$EntryIterator$Entry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_EnumMap$EntryIterator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_EnumMap$EntryIterator$Entry = registerClass(&class_java_util_EnumMap$EntryIterator$Entry);

}

