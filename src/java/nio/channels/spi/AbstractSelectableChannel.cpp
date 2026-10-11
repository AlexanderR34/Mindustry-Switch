#include "java/nio/channels/spi/AbstractSelectableChannel.h"
#include "java/nio/channels/spi/AbstractSelector.h"
#include "java/nio/channels/SelectionKey.h"
#include "java/nio/channels/spi/AbstractSelectionKey.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/nio/channels/spi/SelectorProvider.h"
#include "java/nio/channels/IllegalBlockingModeException.h"
#include "java/lang/Object.h"
#include "java/nio/channels/spi/AbstractSelectableChannel.h"
#include "java/nio/channels/Channel.h"
#include "java/nio/channels/ClosedChannelException.h"
#include "java/nio/channels/SelectableChannel.h"
#include "java/nio/channels/Selector.h"
#include "java/lang/Throwable.h"
#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"

extern "C" {


void mark_java_nio_channels_spi_AbstractSelectableChannel(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_nio_channels_SelectableChannel(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_nio_channels_spi_AbstractSelectableChannel *) object;
	if (self->F_provider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_provider)->clazz)->markFunction)((jobject) self->F_provider, mark, depth + 1);
	if (self->F_keys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys)->clazz)->markFunction)((jobject) self->F_keys, mark, depth + 1);
	if (self->F_keyLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyLock)->clazz)->markFunction)((jobject) self->F_keyLock, mark, depth + 1);
	if (self->F_regLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regLock)->clazz)->markFunction)((jobject) self->F_regLock, mark, depth + 1);
}

void clinit_java_nio_channels_spi_AbstractSelectableChannel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_channels_SelectableChannel(ctx);
}

void init_java_nio_channels_spi_AbstractSelectableChannel_java_nio_channels_spi_SelectorProvider(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_spi_AbstractSelectableChannel(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	init_java_nio_channels_SelectableChannel(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys = (jref) (jobject(nullptr));
	LINE_NUMBER(13);
	((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keyCount = (jint(0));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK(sp[0].o))->F_keyLock = (jref) sp[1].o;
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK(sp[0].o))->F_regLock = (jref) sp[1].o;
	LINE_NUMBER(19);
	((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_provider = (jref) (frame[1].o);
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_channels_spi_AbstractSelectableChannel_provider_R_java_nio_channels_spi_SelectorProvider(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:provider", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_provider;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractSelectableChannel_addKey_java_nio_channels_SelectionKey(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:addKey", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	frame[2].i = (jint(0));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keyCount;
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(31);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_5;
	}
	INST_IINC(2, 1);
	goto label_4;
label_2:;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_nio_channels_SelectionKey, (jint(2)));
	((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[3].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2)));
	LINE_NUMBER(37);
	sp[0].o = (jobject)createArray(ctx, &class_java_nio_channels_SelectionKey, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(39);
	frame[2].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = frame[4].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(39);
	INST_IINC(2, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(43);
	((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys = (jref) (frame[4].o);
	LINE_NUMBER(44);
	frame[2].i = ((jint)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keyCount);
	}
label_5:;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[1].o);
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK(sp[0].o))->F_keyCount = (((jint)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK(sp[0].o))->F_keyCount) + (jint(1)));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_channels_spi_AbstractSelectableChannel_findKey_java_nio_channels_Selector_R_java_nio_channels_SelectionKey(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:findKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(57);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	sp[0].o = (jobject)((func_java_nio_channels_SelectionKey_selector_R_java_nio_channels_Selector) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_java_nio_channels_SelectionKey_selector_R_java_nio_channels_Selector])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	if (sp[0].o != (frame[1].o)) goto label_6;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	}
label_6:;
	{
	LINE_NUMBER(57);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractSelectableChannel_removeKey_java_nio_channels_SelectionKey(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:removeKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keyLock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(69);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != (frame[1].o)) goto label_10;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK(sp[0].o))->F_keyCount = (((jint)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK(sp[0].o))->F_keyCount) - (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(69);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(76);
	((func_java_nio_channels_spi_AbstractSelectionKey_invalidate) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_nio_channels_spi_AbstractSelectionKey, (frame[1].o))))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelectionKey_invalidate])(ctx, (checkCast(ctx, &class_java_nio_channels_spi_AbstractSelectionKey, (frame[1].o))));
	LINE_NUMBER(77);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_14:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_nio_channels_spi_AbstractSelectableChannel_haveValidKeys_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:haveValidKeys", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keyLock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(82);
	if (((jint)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keyCount) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(83);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_14; }
	{
	LINE_NUMBER(85);
	frame[2].i = (jint(0));
	}
label_14:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_15
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = (jint)((func_java_nio_channels_SelectionKey_isValid_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_java_nio_channels_SelectionKey_isValid_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(87);
	jint temp0 = jint(1);
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_15; }
	{
	LINE_NUMBER(85);
	INST_IINC(2, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_6; } // goto label_14
	}
label_15:;
	{
	LINE_NUMBER(91);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(93);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_nio_channels_spi_AbstractSelectableChannel_isRegistered_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:isRegistered", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keyLock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(98);
	if (((jint)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keyCount) == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	INST_ALOAD(1);
	INST_MONITOREXIT();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(99);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_nio_channels_spi_AbstractSelectableChannel_keyFor_java_nio_channels_Selector_R_java_nio_channels_SelectionKey(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:keyFor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keyLock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)M_java_nio_channels_spi_AbstractSelectableChannel_findKey_java_nio_channels_Selector_R_java_nio_channels_SelectionKey(ctx, (frame[0].o), (frame[1].o));
	monitorExit(ctx, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(105);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_nio_channels_spi_AbstractSelectableChannel_register_java_nio_channels_Selector_int_java_lang_Object_R_java_nio_channels_SelectionKey(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:register", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(109);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_nio_channels_spi_AbstractSelectableChannel_validOps_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelectableChannel_validOps_R_int])(ctx, (frame[0].o));
	if ((temp0 & (temp1 ^ (jint(-1)))) == 0) goto label_13;
	}
	{
	LINE_NUMBER(110);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_java_nio_channels_spi_AbstractSelectableChannel_isOpen_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelectableChannel_isOpen_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(112);
	clinit_java_nio_channels_ClosedChannelException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_ClosedChannelException);
	init_java_nio_channels_ClosedChannelException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_regLock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(115);
	jint temp0 = (jint)((func_java_nio_channels_spi_AbstractSelectableChannel_isBlocking_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelectableChannel_isBlocking_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(116);
	clinit_java_nio_channels_IllegalBlockingModeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_IllegalBlockingModeException);
	init_java_nio_channels_IllegalBlockingModeException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keyLock;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_java_nio_channels_spi_AbstractSelectableChannel_isOpen_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelectableChannel_isOpen_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_19;
	}
	{
	LINE_NUMBER(121);
	clinit_java_nio_channels_ClosedChannelException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_ClosedChannelException);
	init_java_nio_channels_ClosedChannelException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)M_java_nio_channels_spi_AbstractSelectableChannel_findKey_java_nio_channels_Selector_R_java_nio_channels_SelectionKey(ctx, (frame[0].o), (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(125);
	if ((frame[7].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_java_nio_channels_SelectionKey_attach_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_nio_channels_SelectionKey_attach_java_lang_Object_R_java_lang_Object])(ctx, (frame[7].o), (frame[3].o));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_java_nio_channels_SelectionKey_interestOps_int_R_java_nio_channels_SelectionKey) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_nio_channels_SelectionKey_interestOps_int_R_java_nio_channels_SelectionKey])(ctx, (frame[7].o), (frame[2].i));
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_java_nio_channels_spi_AbstractSelector_register_java_nio_channels_spi_AbstractSelectableChannel_int_java_lang_Object_R_java_nio_channels_SelectionKey) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_nio_channels_spi_AbstractSelector, (frame[1].o))))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelector_register_java_nio_channels_spi_AbstractSelectableChannel_int_java_lang_Object_R_java_nio_channels_SelectionKey])(ctx, (checkCast(ctx, &class_java_nio_channels_spi_AbstractSelector, (frame[1].o))), (frame[0].o), (frame[2].i), (frame[3].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(130);
	M_java_nio_channels_spi_AbstractSelectableChannel_addKey_java_nio_channels_SelectionKey(ctx, (frame[0].o), (frame[7].o));
	}
label_25:;
	{
	LINE_NUMBER(133);
	frame[5].o = (frame[7].o);
	LINE_NUMBER(134);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_28;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	label_28:;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[5].o;
	monitorExit(ctx, (frame[4].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	LINE_NUMBER(138);
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractSelectableChannel_implCloseChannel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:implCloseChannel", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	((func_java_nio_channels_spi_AbstractSelectableChannel_implCloseSelectableChannel) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelectableChannel_implCloseSelectableChannel])(ctx, (frame[0].o));
	LINE_NUMBER(144);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keyLock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_keys;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, getArrayClass(&class_java_nio_channels_SelectionKey, 1), sp[0].o));
	}
label_9:;
	{
	LINE_NUMBER(149);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_11;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_11:;
	{
	LINE_NUMBER(151);
	if ((frame[1].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(152);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(153);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(155);
	frame[4].i = (jint(0));
	}
label_16:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(156);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(157);
	if ((frame[5].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(158);
	((func_java_nio_channels_SelectionKey_cancel) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_channels_SelectionKey_cancel])(ctx, (frame[5].o));
	}
label_19:;
	{
	LINE_NUMBER(155);
	INST_IINC(4, 1);
	goto label_16;
	}
label_12:;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_nio_channels_spi_AbstractSelectableChannel_isBlocking_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:isBlocking", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	if (((jint)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_nonBlocking) != 0) goto label_1;
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

jobject M_java_nio_channels_spi_AbstractSelectableChannel_blockingLock_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:blockingLock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_regLock;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_channels_spi_AbstractSelectableChannel_configureBlocking_boolean_R_java_nio_channels_SelectableChannel(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectableChannel:configureBlocking", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_regLock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(177);
	jint temp0 = (jint)((func_java_nio_channels_spi_AbstractSelectableChannel_isOpen_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelectableChannel_isOpen_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(178);
	clinit_java_nio_channels_ClosedChannelException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_ClosedChannelException);
	init_java_nio_channels_ClosedChannelException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(180);
	if (((jint)((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK((frame[0].o)))->F_nonBlocking) != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(181);
	if ((frame[1].i) == (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(182);
	if ((frame[1].i) == 0) goto label_14;
	}
	{
	jint temp0 = (jint)M_java_nio_channels_spi_AbstractSelectableChannel_haveValidKeys_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(183);
	clinit_java_nio_channels_IllegalBlockingModeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_IllegalBlockingModeException);
	init_java_nio_channels_IllegalBlockingModeException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(186);
	((func_java_nio_channels_spi_AbstractSelectableChannel_implConfigureBlocking_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelectableChannel_implConfigureBlocking_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) != 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	sp -= 2;
	((java_nio_channels_spi_AbstractSelectableChannel *) NULL_CHECK(sp[0].o))->F_nonBlocking = sp[1].i;
label_12:;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	monitorExit(ctx, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(192);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void *vtable_java_nio_channels_spi_AbstractSelectableChannel[] {
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
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_close,
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_isOpen_R_boolean,
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_begin,
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_end_boolean,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_provider_R_java_nio_channels_spi_SelectorProvider,
	(void *) nullptr,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_isRegistered_R_boolean,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_keyFor_java_nio_channels_Selector_R_java_nio_channels_SelectionKey,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_register_java_nio_channels_Selector_int_java_lang_Object_R_java_nio_channels_SelectionKey,
	(void *) M_java_nio_channels_SelectableChannel_register_java_nio_channels_Selector_int_R_java_nio_channels_SelectionKey,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_configureBlocking_boolean_R_java_nio_channels_SelectableChannel,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_isBlocking_R_boolean,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_blockingLock_R_java_lang_Object,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_addKey_java_nio_channels_SelectionKey,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_findKey_java_nio_channels_Selector_R_java_nio_channels_SelectionKey,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_removeKey_java_nio_channels_SelectionKey,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_haveValidKeys_R_boolean,
	(void *) M_java_nio_channels_spi_AbstractSelectableChannel_implCloseChannel,
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
	{ "close", "()V" },
	{ "isOpen", "()Z" },
	{ "begin", "()V" },
	{ "end", "(Z)V" },
	{ "provider", "()Ljava/nio/channels/spi/SelectorProvider;" },
	{ "validOps", "()I" },
	{ "isRegistered", "()Z" },
	{ "keyFor", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;" },
	{ "register", "(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;" },
	{ "register", "(Ljava/nio/channels/Selector;I)Ljava/nio/channels/SelectionKey;" },
	{ "configureBlocking", "(Z)Ljava/nio/channels/SelectableChannel;" },
	{ "isBlocking", "()Z" },
	{ "blockingLock", "()Ljava/lang/Object;" },
	{ "addKey", "(Ljava/nio/channels/SelectionKey;)V" },
	{ "findKey", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;" },
	{ "removeKey", "(Ljava/nio/channels/SelectionKey;)V" },
	{ "haveValidKeys", "()Z" },
	{ "implCloseChannel", "()V" },
	{ "implCloseSelectableChannel", "()V" },
	{ "implConfigureBlocking", "(Z)V" },
};

static FieldMetadata fields[] {
	{ "provider", &class_java_nio_channels_spi_SelectorProvider, offsetof(java_nio_channels_spi_AbstractSelectableChannel, F_provider), "Ljava/nio/channels/spi/SelectorProvider;", 18 },
	{ "keys", getArrayClass(&class_java_nio_channels_SelectionKey, 1), offsetof(java_nio_channels_spi_AbstractSelectableChannel, F_keys), "[Ljava/nio/channels/SelectionKey;", 2 },
	{ "keyCount", &class_int, offsetof(java_nio_channels_spi_AbstractSelectableChannel, F_keyCount), "I", 2 },
	{ "keyLock", &class_java_lang_Object, offsetof(java_nio_channels_spi_AbstractSelectableChannel, F_keyLock), "Ljava/lang/Object;", 18 },
	{ "regLock", &class_java_lang_Object, offsetof(java_nio_channels_spi_AbstractSelectableChannel, F_regLock), "Ljava/lang/Object;", 18 },
	{ "nonBlocking", &class_boolean, offsetof(java_nio_channels_spi_AbstractSelectableChannel, F_nonBlocking), "Z", 66 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_spi_AbstractSelectableChannel_java_nio_channels_spi_SelectorProvider, 0, "(Ljava/nio/channels/spi/SelectorProvider;)V", 4 },
	{ "provider", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_provider_R_java_nio_channels_spi_SelectorProvider, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_provider_R_java_nio_channels_spi_SelectorProvider, "()Ljava/nio/channels/spi/SelectorProvider;", 17 },
	{ "addKey", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_addKey_java_nio_channels_SelectionKey, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_addKey_java_nio_channels_SelectionKey, "(Ljava/nio/channels/SelectionKey;)V", 2 },
	{ "findKey", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_findKey_java_nio_channels_Selector_R_java_nio_channels_SelectionKey, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_findKey_java_nio_channels_Selector_R_java_nio_channels_SelectionKey, "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;", 2 },
	{ "removeKey", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_removeKey_java_nio_channels_SelectionKey, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_removeKey_java_nio_channels_SelectionKey, "(Ljava/nio/channels/SelectionKey;)V", 0 },
	{ "haveValidKeys", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_haveValidKeys_R_boolean, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_haveValidKeys_R_boolean, "()Z", 2 },
	{ "isRegistered", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_isRegistered_R_boolean, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_isRegistered_R_boolean, "()Z", 17 },
	{ "keyFor", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_keyFor_java_nio_channels_Selector_R_java_nio_channels_SelectionKey, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_keyFor_java_nio_channels_Selector_R_java_nio_channels_SelectionKey, "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;", 17 },
	{ "register", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_register_java_nio_channels_Selector_int_java_lang_Object_R_java_nio_channels_SelectionKey, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_register_java_nio_channels_Selector_int_java_lang_Object_R_java_nio_channels_SelectionKey, "(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;", 17 },
	{ "implCloseChannel", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_implCloseChannel, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_implCloseChannel, "()V", 20 },
	{ "implCloseSelectableChannel", 0, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_implCloseSelectableChannel, "()V", 1028 },
	{ "isBlocking", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_isBlocking_R_boolean, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_isBlocking_R_boolean, "()Z", 17 },
	{ "blockingLock", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_blockingLock_R_java_lang_Object, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_blockingLock_R_java_lang_Object, "()Ljava/lang/Object;", 17 },
	{ "configureBlocking", (intptr_t) M_java_nio_channels_spi_AbstractSelectableChannel_configureBlocking_boolean_R_java_nio_channels_SelectableChannel, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_configureBlocking_boolean_R_java_nio_channels_SelectableChannel, "(Z)Ljava/nio/channels/SelectableChannel;", 17 },
	{ "implConfigureBlocking", 0, VTABLE_java_nio_channels_spi_AbstractSelectableChannel_implConfigureBlocking_boolean, "(Z)V", 1028 },
};

Class class_java_nio_channels_spi_AbstractSelectableChannel{
		.nativeName = (intptr_t) "java/nio/channels/spi/AbstractSelectableChannel",
		.parentClass = (intptr_t) &class_java_nio_channels_SelectableChannel,
		.size = sizeof(java_nio_channels_spi_AbstractSelectableChannel),
		.classVtable = (intptr_t) vtable_java_nio_channels_spi_AbstractSelectableChannel,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_spi_AbstractSelectableChannel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_spi_AbstractSelectableChannel,
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
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_spi_AbstractSelectableChannel = registerClass(&class_java_nio_channels_spi_AbstractSelectableChannel);

}
