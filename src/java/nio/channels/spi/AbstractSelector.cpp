#include "java/nio/channels/spi/AbstractSelector.h"
#include "java/nio/channels/spi/AbstractSelector.h"
#include "java/util/Set.h"
#include "java/lang/Object.h"
#include "java/nio/channels/spi/AbstractSelectableChannel.h"
#include "java/nio/channels/SelectionKey.h"
#include "java/util/concurrent/atomic/AtomicBoolean.h"
#include "java/nio/channels/spi/AbstractSelectionKey.h"
#include "java/nio/channels/Selector.h"
#include "java/nio/channels/SelectableChannel.h"
#include "java/util/HashSet.h"
#include "java/nio/channels/spi/SelectorProvider.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_nio_channels_spi_AbstractSelector(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_nio_channels_Selector(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_nio_channels_spi_AbstractSelector *) object;
	if (self->F_selectorOpen)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectorOpen)->clazz)->markFunction)((jobject) self->F_selectorOpen, mark, depth + 1);
	if (self->F_provider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_provider)->clazz)->markFunction)((jobject) self->F_provider, mark, depth + 1);
	if (self->F_cancelledKeys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cancelledKeys)->clazz)->markFunction)((jobject) self->F_cancelledKeys, mark, depth + 1);
}

void clinit_java_nio_channels_spi_AbstractSelector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_channels_Selector(ctx);
}

void init_java_nio_channels_spi_AbstractSelector_java_nio_channels_spi_SelectorProvider(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelector:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_spi_AbstractSelector(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	init_java_nio_channels_Selector(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_atomic_AtomicBoolean(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_atomic_AtomicBoolean);
	init_java_util_concurrent_atomic_AtomicBoolean_boolean(ctx, sp[1].o, (jint(1)));
	((java_nio_channels_spi_AbstractSelector *) NULL_CHECK(sp[0].o))->F_selectorOpen = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_java_util_HashSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[1].o);
	((java_nio_channels_spi_AbstractSelector *) NULL_CHECK(sp[0].o))->F_cancelledKeys = (jref) sp[1].o;
	LINE_NUMBER(18);
	((java_nio_channels_spi_AbstractSelector *) NULL_CHECK((frame[0].o)))->F_provider = (jref) (frame[1].o);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractSelector_cancel_java_nio_channels_SelectionKey(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelector:cancel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelector *) NULL_CHECK((frame[0].o)))->F_cancelledKeys;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelector *) NULL_CHECK((frame[0].o)))->F_cancelledKeys;
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(24);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
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
	label_8:;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractSelector_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelector:close", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelector *) NULL_CHECK((frame[0].o)))->F_selectorOpen;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicBoolean_getAndSet_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicBoolean_getAndSet_boolean_R_boolean])(ctx, sp[0].o, (jint(0)));
	frame[1].i = temp0;
	LINE_NUMBER(29);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(30);
	((func_java_nio_channels_spi_AbstractSelector_implCloseSelector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelector_implCloseSelector])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_nio_channels_spi_AbstractSelector_isOpen_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelector:isOpen", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelector *) NULL_CHECK((frame[0].o)))->F_selectorOpen;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_channels_spi_AbstractSelector_provider_R_java_nio_channels_spi_SelectorProvider(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelector:provider", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelector *) NULL_CHECK((frame[0].o)))->F_provider;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_channels_spi_AbstractSelector_cancelledKeys_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelector:cancelledKeys", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((java_nio_channels_spi_AbstractSelector *) NULL_CHECK((frame[0].o)))->F_cancelledKeys;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractSelector_deregister_java_nio_channels_spi_AbstractSelectionKey(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelector:deregister", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_java_nio_channels_spi_AbstractSelectionKey_channel_R_java_nio_channels_SelectableChannel) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelectionKey_channel_R_java_nio_channels_SelectableChannel])(ctx, (frame[1].o));
	((func_java_nio_channels_spi_AbstractSelectableChannel_removeKey_java_nio_channels_SelectionKey) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_nio_channels_spi_AbstractSelectableChannel, sp[0].o)))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelectableChannel_removeKey_java_nio_channels_SelectionKey])(ctx, (checkCast(ctx, &class_java_nio_channels_spi_AbstractSelectableChannel, sp[0].o)), (frame[1].o));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractSelector_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelector:begin", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractSelector_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelector:end", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_spi_AbstractSelector[] {
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
	(void *) M_java_nio_channels_spi_AbstractSelector_close,
	(void *) M_java_nio_channels_spi_AbstractSelector_isOpen_R_boolean,
	(void *) M_java_nio_channels_spi_AbstractSelector_provider_R_java_nio_channels_spi_SelectorProvider,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_nio_channels_Selector_select_java_util_function_Consumer_long_R_int,
	(void *) M_java_nio_channels_Selector_select_java_util_function_Consumer_R_int,
	(void *) M_java_nio_channels_Selector_selectNow_java_util_function_Consumer_R_int,
	(void *) M_java_nio_channels_Selector_doSelect_java_util_function_Consumer_long_R_int,
	(void *) nullptr,
	(void *) M_java_nio_channels_spi_AbstractSelector_cancel_java_nio_channels_SelectionKey,
	(void *) nullptr,
	(void *) M_java_nio_channels_spi_AbstractSelector_cancelledKeys_R_java_util_Set,
	(void *) nullptr,
	(void *) M_java_nio_channels_spi_AbstractSelector_deregister_java_nio_channels_spi_AbstractSelectionKey,
	(void *) M_java_nio_channels_spi_AbstractSelector_begin,
	(void *) M_java_nio_channels_spi_AbstractSelector_end,
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
	{ "provider", "()Ljava/nio/channels/spi/SelectorProvider;" },
	{ "keys", "()Ljava/util/Set;" },
	{ "selectedKeys", "()Ljava/util/Set;" },
	{ "selectNow", "()I" },
	{ "select", "(J)I" },
	{ "select", "()I" },
	{ "select", "(Ljava/util/function/Consumer;J)I" },
	{ "select", "(Ljava/util/function/Consumer;)I" },
	{ "selectNow", "(Ljava/util/function/Consumer;)I" },
	{ "doSelect", "(Ljava/util/function/Consumer;J)I" },
	{ "wakeup", "()Ljava/nio/channels/Selector;" },
	{ "cancel", "(Ljava/nio/channels/SelectionKey;)V" },
	{ "implCloseSelector", "()V" },
	{ "cancelledKeys", "()Ljava/util/Set;" },
	{ "register", "(Ljava/nio/channels/spi/AbstractSelectableChannel;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;" },
	{ "deregister", "(Ljava/nio/channels/spi/AbstractSelectionKey;)V" },
	{ "begin", "()V" },
	{ "end", "()V" },
};

static FieldMetadata fields[] {
	{ "selectorOpen", &class_java_util_concurrent_atomic_AtomicBoolean, offsetof(java_nio_channels_spi_AbstractSelector, F_selectorOpen), "Ljava/util/concurrent/atomic/AtomicBoolean;", 18 },
	{ "provider", &class_java_nio_channels_spi_SelectorProvider, offsetof(java_nio_channels_spi_AbstractSelector, F_provider), "Ljava/nio/channels/spi/SelectorProvider;", 18 },
	{ "cancelledKeys", &class_java_util_Set, offsetof(java_nio_channels_spi_AbstractSelector, F_cancelledKeys), "Ljava/util/Set;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_spi_AbstractSelector_java_nio_channels_spi_SelectorProvider, 0, "(Ljava/nio/channels/spi/SelectorProvider;)V", 4 },
	{ "cancel", (intptr_t) M_java_nio_channels_spi_AbstractSelector_cancel_java_nio_channels_SelectionKey, VTABLE_java_nio_channels_spi_AbstractSelector_cancel_java_nio_channels_SelectionKey, "(Ljava/nio/channels/SelectionKey;)V", 0 },
	{ "close", (intptr_t) M_java_nio_channels_spi_AbstractSelector_close, VTABLE_java_nio_channels_spi_AbstractSelector_close, "()V", 17 },
	{ "implCloseSelector", 0, VTABLE_java_nio_channels_spi_AbstractSelector_implCloseSelector, "()V", 1028 },
	{ "isOpen", (intptr_t) M_java_nio_channels_spi_AbstractSelector_isOpen_R_boolean, VTABLE_java_nio_channels_spi_AbstractSelector_isOpen_R_boolean, "()Z", 17 },
	{ "provider", (intptr_t) M_java_nio_channels_spi_AbstractSelector_provider_R_java_nio_channels_spi_SelectorProvider, VTABLE_java_nio_channels_spi_AbstractSelector_provider_R_java_nio_channels_spi_SelectorProvider, "()Ljava/nio/channels/spi/SelectorProvider;", 17 },
	{ "cancelledKeys", (intptr_t) M_java_nio_channels_spi_AbstractSelector_cancelledKeys_R_java_util_Set, VTABLE_java_nio_channels_spi_AbstractSelector_cancelledKeys_R_java_util_Set, "()Ljava/util/Set;", 20 },
	{ "register", 0, VTABLE_java_nio_channels_spi_AbstractSelector_register_java_nio_channels_spi_AbstractSelectableChannel_int_java_lang_Object_R_java_nio_channels_SelectionKey, "(Ljava/nio/channels/spi/AbstractSelectableChannel;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;", 1028 },
	{ "deregister", (intptr_t) M_java_nio_channels_spi_AbstractSelector_deregister_java_nio_channels_spi_AbstractSelectionKey, VTABLE_java_nio_channels_spi_AbstractSelector_deregister_java_nio_channels_spi_AbstractSelectionKey, "(Ljava/nio/channels/spi/AbstractSelectionKey;)V", 20 },
	{ "begin", (intptr_t) M_java_nio_channels_spi_AbstractSelector_begin, VTABLE_java_nio_channels_spi_AbstractSelector_begin, "()V", 20 },
	{ "end", (intptr_t) M_java_nio_channels_spi_AbstractSelector_end, VTABLE_java_nio_channels_spi_AbstractSelector_end, "()V", 20 },
};

Class class_java_nio_channels_spi_AbstractSelector{
		.nativeName = (intptr_t) "java/nio/channels/spi/AbstractSelector",
		.parentClass = (intptr_t) &class_java_nio_channels_Selector,
		.size = sizeof(java_nio_channels_spi_AbstractSelector),
		.classVtable = (intptr_t) vtable_java_nio_channels_spi_AbstractSelector,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_spi_AbstractSelector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_spi_AbstractSelector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_spi_AbstractSelector = registerClass(&class_java_nio_channels_spi_AbstractSelector);

}
