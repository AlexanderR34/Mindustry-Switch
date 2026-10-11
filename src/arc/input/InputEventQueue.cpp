#include "arc/input/InputEventQueue.h"
#include "java/lang/Object.h"
#include "arc/input/InputProcessor.h"
#include "arc/util/Time.h"
#include "arc/input/InputEventQueue.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/IntSeq.h"
#include "java/lang/Enum.h"
#include "java/lang/Throwable.h"
#include "arc/input/KeyCode.h"

extern "C" {

jint SF_arc_input_InputEventQueue_SKIP;
jint SF_arc_input_InputEventQueue_KEY_DOWN;
jint SF_arc_input_InputEventQueue_KEY_UP;
jint SF_arc_input_InputEventQueue_KEY_TYPED;
jint SF_arc_input_InputEventQueue_TOUCH_DOWN;
jint SF_arc_input_InputEventQueue_TOUCH_UP;
jint SF_arc_input_InputEventQueue_TOUCH_DRAGGED;
jint SF_arc_input_InputEventQueue_MOUSE_MOVED;
jint SF_arc_input_InputEventQueue_SCROLLED;

void mark_arc_input_InputEventQueue(jobject object, jint mark, jint depth) {
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
	auto self = (arc_input_InputEventQueue *) object;
	if (self->F_queue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queue)->clazz)->markFunction)((jobject) self->F_queue, mark, depth + 1);
	if (self->F_processingQueue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_processingQueue)->clazz)->markFunction)((jobject) self->F_processingQueue, mark, depth + 1);
	if (self->F_processor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_processor)->clazz)->markFunction)((jobject) self->F_processor, mark, depth + 1);
}

void clinit_arc_input_InputEventQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_input_InputEventQueue_SKIP = jint(-1);
	SF_arc_input_InputEventQueue_KEY_DOWN = jint(0);
	SF_arc_input_InputEventQueue_KEY_UP = jint(1);
	SF_arc_input_InputEventQueue_KEY_TYPED = jint(2);
	SF_arc_input_InputEventQueue_TOUCH_DOWN = jint(3);
	SF_arc_input_InputEventQueue_TOUCH_UP = jint(4);
	SF_arc_input_InputEventQueue_TOUCH_DRAGGED = jint(5);
	SF_arc_input_InputEventQueue_MOUSE_MOVED = jint(6);
	SF_arc_input_InputEventQueue_SCROLLED = jint(7);
}

void init_arc_input_InputEventQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_InputEventQueue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_input_InputEventQueue *) NULL_CHECK(sp[0].o))->F_queue = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_input_InputEventQueue *) NULL_CHECK(sp[0].o))->F_processingQueue = (jref) sp[1].o;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_input_InputEventQueue_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_InputEventQueue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_input_InputEventQueue *) NULL_CHECK(sp[0].o))->F_queue = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_input_InputEventQueue *) NULL_CHECK(sp[0].o))->F_processingQueue = (jref) sp[1].o;
	LINE_NUMBER(29);
	((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_processor = (jref) (frame[1].o);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_input_InputEventQueue_getProcessor_R_arc_input_InputProcessor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:getProcessor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_processor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_input_InputEventQueue_setProcessor_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:setProcessor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_processor = (jref) (frame[1].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_InputEventQueue_drain(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:drain", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_processor;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(44);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_processingQueue;
	sp[1].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_addAll_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addAll_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(48);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_14:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_processingQueue;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_processor;
	frame[2].o = sp[0].o;
	LINE_NUMBER(51);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_processingQueue;
	frame[4].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_18:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_19;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	jlong temp2 = (jlong(((jint)ARRAY_ACCESS(jint, sp[1].o, temp1)))) << (32);
	sp[1].o = frame[1].o;
	jint temp3 = frame[3].i;
	INST_IINC(3, 1);
	((arc_input_InputEventQueue *) NULL_CHECK(sp[0].o))->F_currentEventTime = (temp2 | ((jlong(((jint)ARRAY_ACCESS(jint, sp[1].o, temp3)))) & (jlong(4294967295ll))));
	LINE_NUMBER(54);
	switch((frame[5].i)) {
		case -1: goto label_23;
		case 0: goto label_24;
		case 1: goto label_25;
		case 2: goto label_26;
		case 3: goto label_27;
		case 4: goto label_28;
		case 5: goto label_29;
		case 6: goto label_30;
		case 7: goto label_31;
		default: goto label_32;
	}
	}
label_23:;
	{
	LINE_NUMBER(56);
	frame[3].i = ((frame[3].i) + ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(57);
	goto label_34;
	}
label_24:;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)SM_arc_input_KeyCode_byOrdinal_int_R_arc_input_KeyCode(ctx, ((jint)ARRAY_ACCESS(jint, sp[1].o, temp0)));
	jint temp1 = (jint)((func_arc_input_InputProcessor_keyDown_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_keyDown_arc_input_KeyCode_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	goto label_34;
	}
label_25:;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)SM_arc_input_KeyCode_byOrdinal_int_R_arc_input_KeyCode(ctx, ((jint)ARRAY_ACCESS(jint, sp[1].o, temp0)));
	jint temp1 = (jint)((func_arc_input_InputProcessor_keyUp_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_keyUp_arc_input_KeyCode_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	goto label_34;
	}
label_26:;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)((func_arc_input_InputProcessor_keyTyped_char_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_keyTyped_char_R_boolean, sp[0].o))(ctx, sp[0].o, (jchar(((jint)ARRAY_ACCESS(jint, sp[1].o, temp0)))));
	LINE_NUMBER(66);
	goto label_34;
	}
label_27:;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp0);
	sp[1].o = frame[1].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp2);
	sp[1].o = frame[1].o;
	jint temp4 = frame[3].i;
	INST_IINC(3, 1);
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp4);
	sp[1].o = frame[1].o;
	jint temp6 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)SM_arc_input_KeyCode_byOrdinal_int_R_arc_input_KeyCode(ctx, ((jint)ARRAY_ACCESS(jint, sp[1].o, temp6)));
	jint temp7 = (jint)((func_arc_input_InputProcessor_touchDown_int_int_int_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_touchDown_int_int_int_arc_input_KeyCode_R_boolean, sp[0].o))(ctx, sp[0].o, temp1, temp3, temp5, sp[1].o);
	LINE_NUMBER(69);
	goto label_34;
	}
label_28:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp0);
	sp[1].o = frame[1].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp2);
	sp[1].o = frame[1].o;
	jint temp4 = frame[3].i;
	INST_IINC(3, 1);
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp4);
	sp[1].o = frame[1].o;
	jint temp6 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)SM_arc_input_KeyCode_byOrdinal_int_R_arc_input_KeyCode(ctx, ((jint)ARRAY_ACCESS(jint, sp[1].o, temp6)));
	jint temp7 = (jint)((func_arc_input_InputProcessor_touchUp_int_int_int_arc_input_KeyCode_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_touchUp_int_int_int_arc_input_KeyCode_R_boolean, sp[0].o))(ctx, sp[0].o, temp1, temp3, temp5, sp[1].o);
	LINE_NUMBER(72);
	goto label_34;
	}
label_29:;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp0);
	sp[1].o = frame[1].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp2);
	sp[1].o = frame[1].o;
	jint temp4 = frame[3].i;
	INST_IINC(3, 1);
	jint temp5 = (jint)((func_arc_input_InputProcessor_touchDragged_int_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_touchDragged_int_int_int_R_boolean, sp[0].o))(ctx, sp[0].o, temp1, temp3, ((jint)ARRAY_ACCESS(jint, sp[1].o, temp4)));
	LINE_NUMBER(75);
	goto label_34;
	}
label_30:;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp0);
	sp[1].o = frame[1].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	jint temp3 = (jint)((func_arc_input_InputProcessor_mouseMoved_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_mouseMoved_int_int_R_boolean, sp[0].o))(ctx, sp[0].o, temp1, ((jint)ARRAY_ACCESS(jint, sp[1].o, temp2)));
	LINE_NUMBER(78);
	goto label_34;
	}
label_31:;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jfloat temp1 = (jfloat(((jint)ARRAY_ACCESS(jint, sp[1].o, temp0)))) / (jfloat(256.0f));
	sp[1].o = frame[1].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	jint temp3 = (jint)((func_arc_input_InputProcessor_scrolled_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_InputProcessor, INDEX_arc_input_InputProcessor_scrolled_float_float_R_boolean, sp[0].o))(ctx, sp[0].o, temp1, ((jfloat(((jint)ARRAY_ACCESS(jint, sp[1].o, temp2)))) / (jfloat(256.0f))));
	LINE_NUMBER(81);
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(83);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_34:;
	LINE_NUMBER(85);
	goto label_18;
label_19:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_processingQueue;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_input_InputEventQueue_next_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:next", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[4].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(92);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(93);
	if ((frame[5].i) != (frame[1].i)) goto label_6;
	}
	INST_ILOAD(2);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(94);
	INST_IINC(2, 3);
	LINE_NUMBER(95);
	switch((frame[5].i)) {
		case -1: goto label_8;
		case 0: goto label_9;
		case 1: goto label_10;
		case 2: goto label_11;
		case 3: goto label_12;
		case 4: goto label_13;
		case 5: goto label_14;
		case 6: goto label_15;
		case 7: goto label_16;
		default: goto label_17;
	}
	}
label_8:;
	{
	LINE_NUMBER(97);
	frame[2].i = ((frame[2].i) + ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[2].i))));
	LINE_NUMBER(98);
	goto label_19;
	}
label_9:;
	{
	LINE_NUMBER(100);
	INST_IINC(2, 1);
	LINE_NUMBER(101);
	goto label_19;
	}
label_10:;
	{
	LINE_NUMBER(103);
	INST_IINC(2, 1);
	LINE_NUMBER(104);
	goto label_19;
	}
label_11:;
	{
	LINE_NUMBER(106);
	INST_IINC(2, 1);
	LINE_NUMBER(107);
	goto label_19;
	}
label_12:;
	{
	LINE_NUMBER(109);
	INST_IINC(2, 4);
	LINE_NUMBER(110);
	goto label_19;
	}
label_13:;
	{
	LINE_NUMBER(112);
	INST_IINC(2, 4);
	LINE_NUMBER(113);
	goto label_19;
	}
label_14:;
	{
	LINE_NUMBER(115);
	INST_IINC(2, 3);
	LINE_NUMBER(116);
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(118);
	INST_IINC(2, 2);
	LINE_NUMBER(119);
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(121);
	INST_IINC(2, 2);
	LINE_NUMBER(122);
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(124);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_19:;
	LINE_NUMBER(126);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx, self);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_arc_input_InputEventQueue_queueTime(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:queueTime", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (jint(((frame[1].l) >> (32)))));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (jint((frame[1].l))));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputEventQueue_keyDown_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:keyDown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(139);
	M_arc_input_InputEventQueue_queueTime(ctx, (frame[0].o));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(141);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputEventQueue_keyUp_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:keyUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(147);
	M_arc_input_InputEventQueue_queueTime(ctx, (frame[0].o));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[1].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(149);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputEventQueue_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:keyTyped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(155);
	M_arc_input_InputEventQueue_queueTime(ctx, (frame[0].o));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(157);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputEventQueue_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:touchDown", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (jint(3)));
	LINE_NUMBER(163);
	M_arc_input_InputEventQueue_queueTime(ctx, (frame[0].o));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[4].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(168);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputEventQueue_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:touchUp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (jint(4)));
	LINE_NUMBER(174);
	M_arc_input_InputEventQueue_queueTime(ctx, (frame[0].o));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, (frame[4].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(179);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputEventQueue_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:touchDragged", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)M_arc_input_InputEventQueue_next_int_int_R_int(ctx, (frame[0].o), (jint(5)), (jint(0)));
	frame[4].i = temp0;
	}
label_1:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, ((frame[4].i) + (jint(5))));
	if (temp0 != (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_set_int_int])(ctx, sp[0].o, (frame[4].i), (jint(-1)));
	LINE_NUMBER(188);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_set_int_int])(ctx, sp[0].o, ((frame[4].i) + (jint(3))), (jint(3)));
	}
label_4:;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)M_arc_input_InputEventQueue_next_int_int_R_int(ctx, (frame[0].o), (jint(5)), ((frame[4].i) + (6)));
	frame[4].i = temp0;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (jint(5)));
	LINE_NUMBER(192);
	M_arc_input_InputEventQueue_queueTime(ctx, (frame[0].o));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(196);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputEventQueue_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:mouseMoved", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)M_arc_input_InputEventQueue_next_int_int_R_int(ctx, (frame[0].o), (6), (jint(0)));
	frame[3].i = temp0;
	}
label_1:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_set_int_int])(ctx, sp[0].o, (frame[3].i), (jint(-1)));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_set_int_int])(ctx, sp[0].o, ((frame[3].i) + (jint(3))), (jint(2)));
	LINE_NUMBER(202);
	jint temp0 = (jint)M_arc_input_InputEventQueue_next_int_int_R_int(ctx, (frame[0].o), (6), ((frame[3].i) + (jint(5))));
	frame[3].i = temp0;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (6));
	LINE_NUMBER(207);
	M_arc_input_InputEventQueue_queueTime(ctx, (frame[0].o));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(210);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_InputEventQueue_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:scrolled", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (7));
	LINE_NUMBER(216);
	M_arc_input_InputEventQueue_queueTime(ctx, (frame[0].o));
	LINE_NUMBER(217);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (jint(((frame[1].f) * (jfloat(256.0f))))));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (jint(((frame[2].f) * (jfloat(256.0f))))));
	LINE_NUMBER(219);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_arc_input_InputEventQueue_getCurrentEventTime_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/InputEventQueue:getCurrentEventTime", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return ((jlong)((arc_input_InputEventQueue *) NULL_CHECK((frame[0].o)))->F_currentEventTime);
	}

	popStackFrame(ctx);
}

void *vtable_arc_input_InputEventQueue[] {
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
	(void *) M_arc_input_InputEventQueue_keyDown_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputEventQueue_keyUp_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputEventQueue_keyTyped_char_R_boolean,
	(void *) M_arc_input_InputEventQueue_touchDown_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputEventQueue_touchUp_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputEventQueue_touchDragged_int_int_int_R_boolean,
	(void *) M_arc_input_InputEventQueue_mouseMoved_int_int_R_boolean,
	(void *) M_arc_input_InputEventQueue_scrolled_float_float_R_boolean,
	(void *) M_arc_input_InputEventQueue_getProcessor_R_arc_input_InputProcessor,
	(void *) M_arc_input_InputEventQueue_setProcessor_arc_input_InputProcessor,
	(void *) M_arc_input_InputEventQueue_drain,
	(void *) M_arc_input_InputEventQueue_next_int_int_R_int,
	(void *) M_arc_input_InputEventQueue_queueTime,
	(void *) M_arc_input_InputEventQueue_getCurrentEventTime_R_long,
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
	{ "getProcessor", "()Larc/input/InputProcessor;" },
	{ "setProcessor", "(Larc/input/InputProcessor;)V" },
	{ "drain", "()V" },
	{ "next", "(II)I" },
	{ "queueTime", "()V" },
	{ "getCurrentEventTime", "()J" },
};

static jclass interfaces[] { &class_arc_input_InputProcessor, };

static FieldMetadata fields[] {
	{ "SKIP", &class_int, (intptr_t) &SF_arc_input_InputEventQueue_SKIP, "I", 26 },
	{ "KEY_DOWN", &class_int, (intptr_t) &SF_arc_input_InputEventQueue_KEY_DOWN, "I", 26 },
	{ "KEY_UP", &class_int, (intptr_t) &SF_arc_input_InputEventQueue_KEY_UP, "I", 26 },
	{ "KEY_TYPED", &class_int, (intptr_t) &SF_arc_input_InputEventQueue_KEY_TYPED, "I", 26 },
	{ "TOUCH_DOWN", &class_int, (intptr_t) &SF_arc_input_InputEventQueue_TOUCH_DOWN, "I", 26 },
	{ "TOUCH_UP", &class_int, (intptr_t) &SF_arc_input_InputEventQueue_TOUCH_UP, "I", 26 },
	{ "TOUCH_DRAGGED", &class_int, (intptr_t) &SF_arc_input_InputEventQueue_TOUCH_DRAGGED, "I", 26 },
	{ "MOUSE_MOVED", &class_int, (intptr_t) &SF_arc_input_InputEventQueue_MOUSE_MOVED, "I", 26 },
	{ "SCROLLED", &class_int, (intptr_t) &SF_arc_input_InputEventQueue_SCROLLED, "I", 26 },
	{ "queue", &class_arc_struct_IntSeq, offsetof(arc_input_InputEventQueue, F_queue), "Larc/struct/IntSeq;", 18 },
	{ "processingQueue", &class_arc_struct_IntSeq, offsetof(arc_input_InputEventQueue, F_processingQueue), "Larc/struct/IntSeq;", 18 },
	{ "processor", &class_arc_input_InputProcessor, offsetof(arc_input_InputEventQueue, F_processor), "Larc/input/InputProcessor;", 2 },
	{ "currentEventTime", &class_long, offsetof(arc_input_InputEventQueue, F_currentEventTime), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_input_InputEventQueue, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_input_InputEventQueue_arc_input_InputProcessor, 0, "(Larc/input/InputProcessor;)V", 1 },
	{ "getProcessor", (intptr_t) M_arc_input_InputEventQueue_getProcessor_R_arc_input_InputProcessor, VTABLE_arc_input_InputEventQueue_getProcessor_R_arc_input_InputProcessor, "()Larc/input/InputProcessor;", 1 },
	{ "setProcessor", (intptr_t) M_arc_input_InputEventQueue_setProcessor_arc_input_InputProcessor, VTABLE_arc_input_InputEventQueue_setProcessor_arc_input_InputProcessor, "(Larc/input/InputProcessor;)V", 1 },
	{ "drain", (intptr_t) M_arc_input_InputEventQueue_drain, VTABLE_arc_input_InputEventQueue_drain, "()V", 1 },
	{ "next", (intptr_t) M_arc_input_InputEventQueue_next_int_int_R_int, VTABLE_arc_input_InputEventQueue_next_int_int_R_int, "(II)I", 34 },
	{ "queueTime", (intptr_t) M_arc_input_InputEventQueue_queueTime, VTABLE_arc_input_InputEventQueue_queueTime, "()V", 2 },
	{ "keyDown", (intptr_t) M_arc_input_InputEventQueue_keyDown_arc_input_KeyCode_R_boolean, VTABLE_arc_input_InputEventQueue_keyDown_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 33 },
	{ "keyUp", (intptr_t) M_arc_input_InputEventQueue_keyUp_arc_input_KeyCode_R_boolean, VTABLE_arc_input_InputEventQueue_keyUp_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 33 },
	{ "keyTyped", (intptr_t) M_arc_input_InputEventQueue_keyTyped_char_R_boolean, VTABLE_arc_input_InputEventQueue_keyTyped_char_R_boolean, "(C)Z", 33 },
	{ "touchDown", (intptr_t) M_arc_input_InputEventQueue_touchDown_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_arc_input_InputEventQueue_touchDown_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 33 },
	{ "touchUp", (intptr_t) M_arc_input_InputEventQueue_touchUp_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_arc_input_InputEventQueue_touchUp_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 33 },
	{ "touchDragged", (intptr_t) M_arc_input_InputEventQueue_touchDragged_int_int_int_R_boolean, VTABLE_arc_input_InputEventQueue_touchDragged_int_int_int_R_boolean, "(III)Z", 33 },
	{ "mouseMoved", (intptr_t) M_arc_input_InputEventQueue_mouseMoved_int_int_R_boolean, VTABLE_arc_input_InputEventQueue_mouseMoved_int_int_R_boolean, "(II)Z", 33 },
	{ "scrolled", (intptr_t) M_arc_input_InputEventQueue_scrolled_float_float_R_boolean, VTABLE_arc_input_InputEventQueue_scrolled_float_float_R_boolean, "(FF)Z", 33 },
	{ "getCurrentEventTime", (intptr_t) M_arc_input_InputEventQueue_getCurrentEventTime_R_long, VTABLE_arc_input_InputEventQueue_getCurrentEventTime_R_long, "()J", 1 },
};

Class class_arc_input_InputEventQueue{
		.nativeName = (intptr_t) "arc/input/InputEventQueue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_input_InputEventQueue),
		.classVtable = (intptr_t) vtable_arc_input_InputEventQueue,
		.staticInitializer = (intptr_t) clinit_arc_input_InputEventQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_input_InputEventQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_input_InputEventQueue = registerClass(&class_arc_input_InputEventQueue);

}
