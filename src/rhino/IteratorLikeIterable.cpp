#include "rhino/IteratorLikeIterable.h"
#include "java/util/Iterator.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "java/lang/Iterable.h"
#include "rhino/IteratorLikeIterable.h"
#include "rhino/Callable.h"
#include "rhino/Undefined.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "java/io/Closeable.h"
#include "java/lang/RuntimeException.h"
#include "rhino/IteratorLikeIterable_Itr.h"

extern "C" {


void mark_rhino_IteratorLikeIterable(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_IteratorLikeIterable *) object;
	if (self->F_cx)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cx)->clazz)->markFunction)((jobject) self->F_cx, mark, depth + 1);
	if (self->F_scope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scope)->clazz)->markFunction)((jobject) self->F_scope, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_returnFunc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_returnFunc)->clazz)->markFunction)((jobject) self->F_returnFunc, mark, depth + 1);
	if (self->F_iterator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator)->clazz)->markFunction)((jobject) self->F_iterator, mark, depth + 1);
}

void clinit_rhino_IteratorLikeIterable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_IteratorLikeIterable_rhino_Context_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IteratorLikeIterable:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IteratorLikeIterable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_cx = (jref) (frame[1].o);
	LINE_NUMBER(29);
	((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_scope = (jref) (frame[2].o);
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getPropFunctionAndThis_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"next"_j))), (frame[1].o), (frame[2].o));
	((rhino_IteratorLikeIterable *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[1].o));
	((rhino_IteratorLikeIterable *) NULL_CHECK(sp[0].o))->F_iterator = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectPropNoWarn_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"return"_j))), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(35);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[4].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(36);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Callable)) != 0) goto label_9;
	}
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_java_lang_String_R_java_lang_RuntimeException(ctx, (frame[3].o), (frame[4].o), (((jobject) createStringLiteral(ctx, u8"return"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(39);
	((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_returnFunc = (jref) (checkCast(ctx, &class_rhino_Callable, (frame[4].o)));
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(41);
	((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_returnFunc = (jref) (jobject(nullptr));
	}
label_11:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_IteratorLikeIterable_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IteratorLikeIterable:close", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	if (((jint)((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_closed) != 0) goto label_1;
	}
	{
	LINE_NUMBER(48);
	((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_closed = (jint(1));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_returnFunc;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_returnFunc;
	sp[1].o = (jobject)((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[2].o = (jobject)((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[3].o = (jobject)((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_iterator;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_1:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IteratorLikeIterable:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	clinit_rhino_IteratorLikeIterable$Itr(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IteratorLikeIterable$Itr);
	init_rhino_IteratorLikeIterable$Itr_rhino_IteratorLikeIterable(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IteratorLikeIterable_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IteratorLikeIterable:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((func_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_IteratorLikeIterable_access$000_rhino_IteratorLikeIterable_R_rhino_Context(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IteratorLikeIterable:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IteratorLikeIterable(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_cx;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_IteratorLikeIterable_access$100_rhino_IteratorLikeIterable_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IteratorLikeIterable:access$100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IteratorLikeIterable(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_scope;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_IteratorLikeIterable_access$200_rhino_IteratorLikeIterable_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IteratorLikeIterable:access$200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IteratorLikeIterable(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_iterator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_IteratorLikeIterable_access$300_rhino_IteratorLikeIterable_R_rhino_Callable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IteratorLikeIterable:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IteratorLikeIterable(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((rhino_IteratorLikeIterable *) NULL_CHECK((frame[0].o)))->F_next;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_IteratorLikeIterable[] {
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
	(void *) M_rhino_IteratorLikeIterable_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_rhino_IteratorLikeIterable_close,
	(void *) M_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr,
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
	{ "close", "()V" },
	{ "iterator", "()Lrhino/IteratorLikeIterable$Itr;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_java_io_Closeable, };

static jclass innerClasses[] {
	&class_rhino_IteratorLikeIterable$Itr,
};

static FieldMetadata fields[] {
	{ "cx", &class_rhino_Context, offsetof(rhino_IteratorLikeIterable, F_cx), "Lrhino/Context;", 18 },
	{ "scope", &class_rhino_Scriptable, offsetof(rhino_IteratorLikeIterable, F_scope), "Lrhino/Scriptable;", 18 },
	{ "next", &class_rhino_Callable, offsetof(rhino_IteratorLikeIterable, F_next), "Lrhino/Callable;", 18 },
	{ "returnFunc", &class_rhino_Callable, offsetof(rhino_IteratorLikeIterable, F_returnFunc), "Lrhino/Callable;", 18 },
	{ "iterator", &class_rhino_Scriptable, offsetof(rhino_IteratorLikeIterable, F_iterator), "Lrhino/Scriptable;", 18 },
	{ "closed", &class_boolean, offsetof(rhino_IteratorLikeIterable, F_closed), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_IteratorLikeIterable_rhino_Context_rhino_Scriptable_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "close", (intptr_t) M_rhino_IteratorLikeIterable_close, VTABLE_rhino_IteratorLikeIterable_close, "()V", 1 },
	{ "iterator", (intptr_t) M_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr, VTABLE_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr, "()Lrhino/IteratorLikeIterable$Itr;", 1 },
	{ "iterator", (intptr_t) M_rhino_IteratorLikeIterable_iterator_R_java_util_Iterator, VTABLE_rhino_IteratorLikeIterable_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
	{ "access$000", (intptr_t) SM_rhino_IteratorLikeIterable_access$000_rhino_IteratorLikeIterable_R_rhino_Context, 0, "(Lrhino/IteratorLikeIterable;)Lrhino/Context;", 4104 },
	{ "access$100", (intptr_t) SM_rhino_IteratorLikeIterable_access$100_rhino_IteratorLikeIterable_R_rhino_Scriptable, 0, "(Lrhino/IteratorLikeIterable;)Lrhino/Scriptable;", 4104 },
	{ "access$200", (intptr_t) SM_rhino_IteratorLikeIterable_access$200_rhino_IteratorLikeIterable_R_rhino_Scriptable, 0, "(Lrhino/IteratorLikeIterable;)Lrhino/Scriptable;", 4104 },
	{ "access$300", (intptr_t) SM_rhino_IteratorLikeIterable_access$300_rhino_IteratorLikeIterable_R_rhino_Callable, 0, "(Lrhino/IteratorLikeIterable;)Lrhino/Callable;", 4104 },
};

Class class_rhino_IteratorLikeIterable{
		.nativeName = (intptr_t) "rhino/IteratorLikeIterable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_IteratorLikeIterable),
		.classVtable = (intptr_t) vtable_rhino_IteratorLikeIterable,
		.staticInitializer = (intptr_t) clinit_rhino_IteratorLikeIterable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_IteratorLikeIterable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_IteratorLikeIterable = registerClass(&class_rhino_IteratorLikeIterable);

}
