#include "java/nio/Buffer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/nio/InvalidMarkException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"

extern "C" {

jint SF_java_nio_Buffer_SPLITERATOR_CHARACTERISTICS;

void mark_java_nio_Buffer(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_Buffer *) object;
}

void clinit_java_nio_Buffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_nio_Buffer_SPLITERATOR_CHARACTERISTICS = jint(16464);
}

void init_java_nio_Buffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Buffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_mark = (jint(-1));
	LINE_NUMBER(33);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_position = (jint(0));
	LINE_NUMBER(40);
	if ((frame[4].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(41);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Negative capacity: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(42);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_capacity = (frame[4].i);
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(45);
	if ((frame[1].i) < 0) goto label_9;
	}
	{
	LINE_NUMBER(46);
	if ((frame[1].i) <= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(47);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"mark > position: ("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(49);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_mark = (frame[1].i);
	}
label_9:;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_nio_Buffer_capacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:capacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return ((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_capacity);
	}

	popStackFrame(ctx);
}

jint M_java_nio_Buffer_position_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:position", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return ((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_position);
	}

	popStackFrame(ctx);
}

jint M_java_nio_Buffer_limit_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:limit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return ((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_limit);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_Buffer_mark_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:mark", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_mark = ((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_position);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_Buffer_reset_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	frame[1].i = ((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_mark);
	LINE_NUMBER(89);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(90);
	clinit_java_nio_InvalidMarkException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_InvalidMarkException);
	init_java_nio_InvalidMarkException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(91);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_position = (frame[1].i);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_Buffer_clear_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_position = (jint(0));
	LINE_NUMBER(97);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_limit = ((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_capacity);
	LINE_NUMBER(98);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_mark = (jint(-1));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_Buffer_flip_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:flip", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_limit = ((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_position);
	LINE_NUMBER(104);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_position = (jint(0));
	LINE_NUMBER(105);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_mark = (jint(-1));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_Buffer_rewind_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:rewind", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_position = (jint(0));
	LINE_NUMBER(111);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_mark = (jint(-1));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_java_nio_Buffer_remaining_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:remaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	frame[1].i = (((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_limit) - ((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_position));
	LINE_NUMBER(117);
	if ((frame[1].i) <= 0) goto label_2;
	}
	INST_ILOAD(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_nio_Buffer_hasRemaining_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:hasRemaining", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	if (((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_position) >= ((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_limit)) goto label_1;
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

jint M_java_nio_Buffer_markValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:markValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return ((jint)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_mark);
	}

	popStackFrame(ctx);
}

void M_java_nio_Buffer_truncate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:truncate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_mark = (jint(-1));
	LINE_NUMBER(184);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_position = (jint(0));
	LINE_NUMBER(185);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_limit = (jint(0));
	LINE_NUMBER(186);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_capacity = (jint(0));
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_nio_Buffer_discardMark(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:discardMark", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_mark = (jint(-1));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Buffer_checkBounds_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Buffer:checkBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Buffer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(194);
	if (((((frame[0].i) | (frame[1].i)) | ((frame[0].i) + (frame[1].i))) | ((frame[2].i) - ((frame[0].i) + (frame[1].i)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(195);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_nio_Buffer[] {
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
	(void *) M_java_nio_Buffer_capacity_R_int,
	(void *) M_java_nio_Buffer_position_R_int,
	(void *) M_java_nio_Buffer_position_int_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_limit_R_int,
	(void *) M_java_nio_Buffer_limit_int_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_mark_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_reset_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_clear_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_flip_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_rewind_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_remaining_R_int,
	(void *) M_java_nio_Buffer_hasRemaining_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_nio_Buffer_nextGetIndex_R_int,
	(void *) M_java_nio_Buffer_nextGetIndex_int_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_int_R_int,
	(void *) M_java_nio_Buffer_markValue_R_int,
	(void *) M_java_nio_Buffer_truncate,
	(void *) M_java_nio_Buffer_discardMark,
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
	{ "capacity", "()I" },
	{ "position", "()I" },
	{ "position", "(I)Ljava/nio/Buffer;" },
	{ "limit", "()I" },
	{ "limit", "(I)Ljava/nio/Buffer;" },
	{ "mark", "()Ljava/nio/Buffer;" },
	{ "reset", "()Ljava/nio/Buffer;" },
	{ "clear", "()Ljava/nio/Buffer;" },
	{ "flip", "()Ljava/nio/Buffer;" },
	{ "rewind", "()Ljava/nio/Buffer;" },
	{ "remaining", "()I" },
	{ "hasRemaining", "()Z" },
	{ "isReadOnly", "()Z" },
	{ "hasArray", "()Z" },
	{ "array", "()Ljava/lang/Object;" },
	{ "arrayOffset", "()I" },
	{ "isDirect", "()Z" },
	{ "nextGetIndex", "()I" },
	{ "nextGetIndex", "(I)I" },
	{ "nextPutIndex", "()I" },
	{ "nextPutIndex", "(I)I" },
	{ "checkIndex", "(I)I" },
	{ "checkIndex", "(II)I" },
	{ "markValue", "()I" },
	{ "truncate", "()V" },
	{ "discardMark", "()V" },
};

static FieldMetadata fields[] {
	{ "SPLITERATOR_CHARACTERISTICS", &class_int, (intptr_t) &SF_java_nio_Buffer_SPLITERATOR_CHARACTERISTICS, "I", 24 },
	{ "mark", &class_int, offsetof(java_nio_Buffer, F_mark), "I", 2 },
	{ "position", &class_int, offsetof(java_nio_Buffer, F_position), "I", 2 },
	{ "limit", &class_int, offsetof(java_nio_Buffer, F_limit), "I", 2 },
	{ "capacity", &class_int, offsetof(java_nio_Buffer, F_capacity), "I", 2 },
	{ "address", &class_long, offsetof(java_nio_Buffer, F_address), "J", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_Buffer_int_int_int_int, 0, "(IIII)V", 0 },
	{ "capacity", (intptr_t) M_java_nio_Buffer_capacity_R_int, VTABLE_java_nio_Buffer_capacity_R_int, "()I", 17 },
	{ "position", (intptr_t) M_java_nio_Buffer_position_R_int, VTABLE_java_nio_Buffer_position_R_int, "()I", 17 },
	{ "position", (intptr_t) M_java_nio_Buffer_position_int_R_java_nio_Buffer, VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer, "(I)Ljava/nio/Buffer;", 257 },
	{ "limit", (intptr_t) M_java_nio_Buffer_limit_R_int, VTABLE_java_nio_Buffer_limit_R_int, "()I", 17 },
	{ "limit", (intptr_t) M_java_nio_Buffer_limit_int_R_java_nio_Buffer, VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer, "(I)Ljava/nio/Buffer;", 257 },
	{ "mark", (intptr_t) M_java_nio_Buffer_mark_R_java_nio_Buffer, VTABLE_java_nio_Buffer_mark_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 1 },
	{ "reset", (intptr_t) M_java_nio_Buffer_reset_R_java_nio_Buffer, VTABLE_java_nio_Buffer_reset_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 1 },
	{ "clear", (intptr_t) M_java_nio_Buffer_clear_R_java_nio_Buffer, VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 1 },
	{ "flip", (intptr_t) M_java_nio_Buffer_flip_R_java_nio_Buffer, VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 1 },
	{ "rewind", (intptr_t) M_java_nio_Buffer_rewind_R_java_nio_Buffer, VTABLE_java_nio_Buffer_rewind_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 1 },
	{ "remaining", (intptr_t) M_java_nio_Buffer_remaining_R_int, VTABLE_java_nio_Buffer_remaining_R_int, "()I", 17 },
	{ "hasRemaining", (intptr_t) M_java_nio_Buffer_hasRemaining_R_boolean, VTABLE_java_nio_Buffer_hasRemaining_R_boolean, "()Z", 17 },
	{ "isReadOnly", 0, VTABLE_java_nio_Buffer_isReadOnly_R_boolean, "()Z", 1025 },
	{ "hasArray", 0, VTABLE_java_nio_Buffer_hasArray_R_boolean, "()Z", 1025 },
	{ "array", 0, VTABLE_java_nio_Buffer_array_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "arrayOffset", 0, VTABLE_java_nio_Buffer_arrayOffset_R_int, "()I", 1025 },
	{ "isDirect", 0, VTABLE_java_nio_Buffer_isDirect_R_boolean, "()Z", 1025 },
	{ "nextGetIndex", (intptr_t) M_java_nio_Buffer_nextGetIndex_R_int, VTABLE_java_nio_Buffer_nextGetIndex_R_int, "()I", 272 },
	{ "nextGetIndex", (intptr_t) M_java_nio_Buffer_nextGetIndex_int_R_int, VTABLE_java_nio_Buffer_nextGetIndex_int_R_int, "(I)I", 272 },
	{ "nextPutIndex", (intptr_t) M_java_nio_Buffer_nextPutIndex_R_int, VTABLE_java_nio_Buffer_nextPutIndex_R_int, "()I", 272 },
	{ "nextPutIndex", (intptr_t) M_java_nio_Buffer_nextPutIndex_int_R_int, VTABLE_java_nio_Buffer_nextPutIndex_int_R_int, "(I)I", 272 },
	{ "checkIndex", (intptr_t) M_java_nio_Buffer_checkIndex_int_R_int, VTABLE_java_nio_Buffer_checkIndex_int_R_int, "(I)I", 272 },
	{ "checkIndex", (intptr_t) M_java_nio_Buffer_checkIndex_int_int_R_int, VTABLE_java_nio_Buffer_checkIndex_int_int_R_int, "(II)I", 272 },
	{ "markValue", (intptr_t) M_java_nio_Buffer_markValue_R_int, VTABLE_java_nio_Buffer_markValue_R_int, "()I", 16 },
	{ "truncate", (intptr_t) M_java_nio_Buffer_truncate, VTABLE_java_nio_Buffer_truncate, "()V", 16 },
	{ "discardMark", (intptr_t) M_java_nio_Buffer_discardMark, VTABLE_java_nio_Buffer_discardMark, "()V", 16 },
	{ "checkBounds", (intptr_t) SM_java_nio_Buffer_checkBounds_int_int_int, 0, "(III)V", 8 },
};

Class class_java_nio_Buffer{
		.nativeName = (intptr_t) "java/nio/Buffer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_Buffer),
		.classVtable = (intptr_t) vtable_java_nio_Buffer,
		.staticInitializer = (intptr_t) clinit_java_nio_Buffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_Buffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_Buffer = registerClass(&class_java_nio_Buffer);

}
