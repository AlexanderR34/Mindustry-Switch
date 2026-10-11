#include "rhino/NativeIterator_WrappedJavaIterator.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "rhino/NativeIterator_WrappedJavaIterator.h"
#include "rhino/NativeIterator.h"
#include "rhino/Scriptable.h"
#include "rhino/JavaScriptException.h"

extern "C" {


void mark_rhino_NativeIterator$WrappedJavaIterator(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_NativeIterator$WrappedJavaIterator *) object;
	if (self->F_iterator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator)->clazz)->markFunction)((jobject) self->F_iterator, mark, depth + 1);
	if (self->F_scope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scope)->clazz)->markFunction)((jobject) self->F_scope, mark, depth + 1);
}

void clinit_rhino_NativeIterator$WrappedJavaIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_NativeIterator$WrappedJavaIterator_java_util_Iterator_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator$WrappedJavaIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeIterator$WrappedJavaIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(228);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(229);
	((rhino_NativeIterator$WrappedJavaIterator *) NULL_CHECK((frame[0].o)))->F_iterator = (jref) (frame[1].o);
	LINE_NUMBER(230);
	((rhino_NativeIterator$WrappedJavaIterator *) NULL_CHECK((frame[0].o)))->F_scope = (jref) (frame[2].o);
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeIterator$WrappedJavaIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator$WrappedJavaIterator:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((rhino_NativeIterator$WrappedJavaIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(236);
	clinit_rhino_JavaScriptException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	sp[1].o = (jobject)((rhino_NativeIterator$WrappedJavaIterator *) NULL_CHECK((frame[0].o)))->F_scope;
	LINE_NUMBER(237);
	sp[1].o = (jobject)SM_rhino_NativeIterator_getStopIterationObject_rhino_Scriptable_R_java_lang_Object(ctx, sp[1].o);
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (jint(0)));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((rhino_NativeIterator$WrappedJavaIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeIterator$WrappedJavaIterator___iterator___boolean_R_java_lang_Object(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator$WrappedJavaIterator:__iterator__", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeIterator$WrappedJavaIterator[] {
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
	(void *) M_rhino_NativeIterator$WrappedJavaIterator_next_R_java_lang_Object,
	(void *) M_rhino_NativeIterator$WrappedJavaIterator___iterator___boolean_R_java_lang_Object,
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
	{ "next", "()Ljava/lang/Object;" },
	{ "__iterator__", "(Z)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "iterator", &class_java_util_Iterator, offsetof(rhino_NativeIterator$WrappedJavaIterator, F_iterator), "Ljava/util/Iterator;", 18 },
	{ "scope", &class_rhino_Scriptable, offsetof(rhino_NativeIterator$WrappedJavaIterator, F_scope), "Lrhino/Scriptable;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeIterator$WrappedJavaIterator_java_util_Iterator_rhino_Scriptable, 0, "(Ljava/util/Iterator;Lrhino/Scriptable;)V", 0 },
	{ "next", (intptr_t) M_rhino_NativeIterator$WrappedJavaIterator_next_R_java_lang_Object, VTABLE_rhino_NativeIterator$WrappedJavaIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "__iterator__", (intptr_t) M_rhino_NativeIterator$WrappedJavaIterator___iterator___boolean_R_java_lang_Object, VTABLE_rhino_NativeIterator$WrappedJavaIterator___iterator___boolean_R_java_lang_Object, "(Z)Ljava/lang/Object;", 1 },
};

Class class_rhino_NativeIterator$WrappedJavaIterator{
		.nativeName = (intptr_t) "rhino/NativeIterator$WrappedJavaIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NativeIterator$WrappedJavaIterator),
		.classVtable = (intptr_t) vtable_rhino_NativeIterator$WrappedJavaIterator,
		.staticInitializer = (intptr_t) clinit_rhino_NativeIterator$WrappedJavaIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeIterator$WrappedJavaIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_NativeIterator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeIterator$WrappedJavaIterator = registerClass(&class_rhino_NativeIterator$WrappedJavaIterator);

}

