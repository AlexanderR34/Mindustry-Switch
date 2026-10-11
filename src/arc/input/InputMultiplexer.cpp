#include "arc/input/InputMultiplexer.h"
#include "java/lang/Object.h"
#include "arc/input/InputProcessor.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/lang/NullPointerException.h"
#include "arc/struct/SnapshotSeq.h"
#include "java/lang/Throwable.h"
#include "arc/input/InputMultiplexer.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_input_InputMultiplexer(jobject object, jint mark, jint depth) {
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
	auto self = (arc_input_InputMultiplexer *) object;
	if (self->F_processors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_processors)->clazz)->markFunction)((jobject) self->F_processors, mark, depth + 1);
}

void clinit_arc_input_InputMultiplexer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_input_InputMultiplexer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_InputMultiplexer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_arc_struct_SnapshotSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_SnapshotSeq);
	init_arc_struct_SnapshotSeq_int(ctx, sp[1].o, (jint(4)));
	((arc_input_InputMultiplexer *) NULL_CHECK(sp[0].o))->F_processors = (jref) sp[1].o;
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_input_InputMultiplexer_Array1_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_InputMultiplexer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_arc_struct_SnapshotSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_SnapshotSeq);
	init_arc_struct_SnapshotSeq_int(ctx, sp[1].o, (jint(4)));
	((arc_input_InputMultiplexer *) NULL_CHECK(sp[0].o))->F_processors = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_InputMultiplexer_addProcessor_int_arc_input_InputProcessor(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:addProcessor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(21);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"processor cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_InputMultiplexer_removeProcessor_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:removeProcessor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_InputMultiplexer_addProcessor_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:addProcessor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"processor cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_InputMultiplexer_removeProcessor_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:removeProcessor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_input_InputMultiplexer_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	popStackFrame(ctx);
	return ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

void M_arc_input_InputMultiplexer_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_input_InputMultiplexer_getProcessors_R_arc_struct_SnapshotSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:getProcessors", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_input_InputMultiplexer_setProcessors_Array1_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:setProcessors", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_InputMultiplexer_setProcessors_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:setProcessors", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputMultiplexer_keyDown_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:keyDown", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(65);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[4].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)((func_arc_input_InputProcessor_keyDown_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_keyDown_arc_input_KeyCode_R_boolean, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))))))(ctx, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))), (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(5);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(65);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(69);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(68);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(69);
	throwException(ctx, (frame[6].o));	}
label_15:;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputMultiplexer_keyUp_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:keyUp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(77);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[4].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(78);
	jint temp0 = (jint)((func_arc_input_InputProcessor_keyUp_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_keyUp_arc_input_KeyCode_R_boolean, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))))))(ctx, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))), (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(5);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(77);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(81);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(80);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(81);
	throwException(ctx, (frame[6].o));	}
label_15:;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputMultiplexer_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:keyTyped", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(89);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[4].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)((func_arc_input_InputProcessor_keyTyped_char_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_keyTyped_char_R_boolean, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))))))(ctx, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))), (frame[1].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(5);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(89);
	INST_IINC(3, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(93);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(92);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(93);
	throwException(ctx, (frame[6].o));	}
label_15:;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputMultiplexer_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:touchDown", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(101);
	frame[6].i = (jint(0));
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[6].i) >= (frame[7].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_arc_input_InputProcessor_touchDown_int_int_int_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_touchDown_int_int_int_arc_input_KeyCode_R_boolean, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)))))))(ctx, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))))), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(8);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (frame[8].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(101);
	INST_IINC(6, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(105);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(104);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(105);
	throwException(ctx, (frame[9].o));	}
label_15:;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputMultiplexer_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:touchUp", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(113);
	frame[6].i = (jint(0));
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[6].i) >= (frame[7].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(114);
	jint temp0 = (jint)((func_arc_input_InputProcessor_touchUp_int_int_int_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_touchUp_int_int_int_arc_input_KeyCode_R_boolean, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)))))))(ctx, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))))), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(8);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (frame[8].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(113);
	INST_IINC(6, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(117);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(116);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(117);
	throwException(ctx, (frame[9].o));	}
label_15:;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputMultiplexer_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:touchDragged", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(125);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[6].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_arc_input_InputProcessor_touchDragged_int_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_touchDragged_int_int_int_R_boolean, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)))))))(ctx, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))))), (frame[1].i), (frame[2].i), (frame[3].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(7);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(125);
	INST_IINC(5, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(129);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(128);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(129);
	throwException(ctx, (frame[8].o));	}
label_15:;
	{
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputMultiplexer_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:mouseMoved", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(137);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[5].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(138);
	jint temp0 = (jint)((func_arc_input_InputProcessor_mouseMoved_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_mouseMoved_int_int_R_boolean, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))))))(ctx, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))))), (frame[1].i), (frame[2].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(6);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(137);
	INST_IINC(4, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(141);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(140);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(141);
	throwException(ctx, (frame[7].o));	}
label_15:;
	{
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputMultiplexer_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputMultiplexer:scrolled", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(149);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[5].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_arc_input_InputProcessor_scrolled_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_scrolled_float_float_R_boolean, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))))))(ctx, (checkCast(ctx, &class_arc_input_InputProcessor, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))))), (frame[1].f), (frame[2].f));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(6);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(149);
	INST_IINC(4, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(153);
	goto label_15;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(152);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((arc_input_InputMultiplexer *) NULL_CHECK((frame[0].o)))->F_processors;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(153);
	throwException(ctx, (frame[7].o));	}
label_15:;
	{
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_arc_input_InputMultiplexer[] {
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
	(void *) M_arc_input_InputMultiplexer_keyDown_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputMultiplexer_keyUp_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputMultiplexer_keyTyped_char_R_boolean,
	(void *) M_arc_input_InputMultiplexer_touchDown_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputMultiplexer_touchUp_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputMultiplexer_touchDragged_int_int_int_R_boolean,
	(void *) M_arc_input_InputMultiplexer_mouseMoved_int_int_R_boolean,
	(void *) M_arc_input_InputMultiplexer_scrolled_float_float_R_boolean,
	(void *) M_arc_input_InputMultiplexer_addProcessor_int_arc_input_InputProcessor,
	(void *) M_arc_input_InputMultiplexer_removeProcessor_int,
	(void *) M_arc_input_InputMultiplexer_addProcessor_arc_input_InputProcessor,
	(void *) M_arc_input_InputMultiplexer_removeProcessor_arc_input_InputProcessor,
	(void *) M_arc_input_InputMultiplexer_size_R_int,
	(void *) M_arc_input_InputMultiplexer_clear,
	(void *) M_arc_input_InputMultiplexer_getProcessors_R_arc_struct_SnapshotSeq,
	(void *) M_arc_input_InputMultiplexer_setProcessors_Array1_arc_input_InputProcessor,
	(void *) M_arc_input_InputMultiplexer_setProcessors_arc_struct_Seq,
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
	{ "keyDown", "(Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIILarc/input/KeyCode;)Z" },
	{ "touchUp", "(IIILarc/input/KeyCode;)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
	{ "addProcessor", "(ILarc/input/InputProcessor;)V" },
	{ "removeProcessor", "(I)V" },
	{ "addProcessor", "(Larc/input/InputProcessor;)V" },
	{ "removeProcessor", "(Larc/input/InputProcessor;)V" },
	{ "size", "()I" },
	{ "clear", "()V" },
	{ "getProcessors", "()Larc/struct/SnapshotSeq;" },
	{ "setProcessors", "([Larc/input/InputProcessor;)V" },
	{ "setProcessors", "(Larc/struct/Seq;)V" },
};

static jclass interfaces[] { &class_arc_input_InputProcessor, };

static FieldMetadata fields[] {
	{ "processors", &class_arc_struct_SnapshotSeq, offsetof(arc_input_InputMultiplexer, F_processors), "Larc/struct/SnapshotSeq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_input_InputMultiplexer, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_input_InputMultiplexer_Array1_arc_input_InputProcessor, 0, "([Larc/input/InputProcessor;)V", 129 },
	{ "addProcessor", (intptr_t) M_arc_input_InputMultiplexer_addProcessor_int_arc_input_InputProcessor, VTABLE_arc_input_InputMultiplexer_addProcessor_int_arc_input_InputProcessor, "(ILarc/input/InputProcessor;)V", 1 },
	{ "removeProcessor", (intptr_t) M_arc_input_InputMultiplexer_removeProcessor_int, VTABLE_arc_input_InputMultiplexer_removeProcessor_int, "(I)V", 1 },
	{ "addProcessor", (intptr_t) M_arc_input_InputMultiplexer_addProcessor_arc_input_InputProcessor, VTABLE_arc_input_InputMultiplexer_addProcessor_arc_input_InputProcessor, "(Larc/input/InputProcessor;)V", 1 },
	{ "removeProcessor", (intptr_t) M_arc_input_InputMultiplexer_removeProcessor_arc_input_InputProcessor, VTABLE_arc_input_InputMultiplexer_removeProcessor_arc_input_InputProcessor, "(Larc/input/InputProcessor;)V", 1 },
	{ "size", (intptr_t) M_arc_input_InputMultiplexer_size_R_int, VTABLE_arc_input_InputMultiplexer_size_R_int, "()I", 1 },
	{ "clear", (intptr_t) M_arc_input_InputMultiplexer_clear, VTABLE_arc_input_InputMultiplexer_clear, "()V", 1 },
	{ "getProcessors", (intptr_t) M_arc_input_InputMultiplexer_getProcessors_R_arc_struct_SnapshotSeq, VTABLE_arc_input_InputMultiplexer_getProcessors_R_arc_struct_SnapshotSeq, "()Larc/struct/SnapshotSeq;", 1 },
	{ "setProcessors", (intptr_t) M_arc_input_InputMultiplexer_setProcessors_Array1_arc_input_InputProcessor, VTABLE_arc_input_InputMultiplexer_setProcessors_Array1_arc_input_InputProcessor, "([Larc/input/InputProcessor;)V", 129 },
	{ "setProcessors", (intptr_t) M_arc_input_InputMultiplexer_setProcessors_arc_struct_Seq, VTABLE_arc_input_InputMultiplexer_setProcessors_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "keyDown", (intptr_t) M_arc_input_InputMultiplexer_keyDown_arc_input_KeyCode_R_boolean, VTABLE_arc_input_InputMultiplexer_keyDown_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "keyUp", (intptr_t) M_arc_input_InputMultiplexer_keyUp_arc_input_KeyCode_R_boolean, VTABLE_arc_input_InputMultiplexer_keyUp_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "keyTyped", (intptr_t) M_arc_input_InputMultiplexer_keyTyped_char_R_boolean, VTABLE_arc_input_InputMultiplexer_keyTyped_char_R_boolean, "(C)Z", 1 },
	{ "touchDown", (intptr_t) M_arc_input_InputMultiplexer_touchDown_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_arc_input_InputMultiplexer_touchDown_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 1 },
	{ "touchUp", (intptr_t) M_arc_input_InputMultiplexer_touchUp_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_arc_input_InputMultiplexer_touchUp_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 1 },
	{ "touchDragged", (intptr_t) M_arc_input_InputMultiplexer_touchDragged_int_int_int_R_boolean, VTABLE_arc_input_InputMultiplexer_touchDragged_int_int_int_R_boolean, "(III)Z", 1 },
	{ "mouseMoved", (intptr_t) M_arc_input_InputMultiplexer_mouseMoved_int_int_R_boolean, VTABLE_arc_input_InputMultiplexer_mouseMoved_int_int_R_boolean, "(II)Z", 1 },
	{ "scrolled", (intptr_t) M_arc_input_InputMultiplexer_scrolled_float_float_R_boolean, VTABLE_arc_input_InputMultiplexer_scrolled_float_float_R_boolean, "(FF)Z", 1 },
};

Class class_arc_input_InputMultiplexer{
		.nativeName = (intptr_t) "arc/input/InputMultiplexer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_input_InputMultiplexer),
		.classVtable = (intptr_t) vtable_arc_input_InputMultiplexer,
		.staticInitializer = (intptr_t) clinit_arc_input_InputMultiplexer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_input_InputMultiplexer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_input_InputMultiplexer = registerClass(&class_arc_input_InputMultiplexer);

}
