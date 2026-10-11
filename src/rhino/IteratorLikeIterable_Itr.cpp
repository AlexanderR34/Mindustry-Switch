#include "rhino/IteratorLikeIterable_Itr.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/IteratorLikeIterable_Itr.h"
#include "rhino/IteratorLikeIterable.h"
#include "rhino/Callable.h"
#include "rhino/Undefined.h"

extern "C" {


void mark_rhino_IteratorLikeIterable$Itr(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_IteratorLikeIterable$Itr *) object;
	if (self->F_nextVal)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nextVal)->clazz)->markFunction)((jobject) self->F_nextVal, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_rhino_IteratorLikeIterable$Itr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_IteratorLikeIterable$Itr_rhino_IteratorLikeIterable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IteratorLikeIterable$Itr:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IteratorLikeIterable$Itr(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	((rhino_IteratorLikeIterable$Itr *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_IteratorLikeIterable$Itr_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IteratorLikeIterable$Itr:hasNext", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((rhino_IteratorLikeIterable$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_rhino_IteratorLikeIterable_access$300_rhino_IteratorLikeIterable_R_rhino_Callable(ctx, sp[0].o);
	sp[1].o = (jobject)((rhino_IteratorLikeIterable$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)SM_rhino_IteratorLikeIterable_access$000_rhino_IteratorLikeIterable_R_rhino_Context(ctx, sp[1].o);
	sp[2].o = (jobject)((rhino_IteratorLikeIterable$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)SM_rhino_IteratorLikeIterable_access$100_rhino_IteratorLikeIterable_R_rhino_Scriptable(ctx, sp[2].o);
	sp[3].o = (jobject)((rhino_IteratorLikeIterable$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)SM_rhino_IteratorLikeIterable_access$200_rhino_IteratorLikeIterable_R_rhino_Scriptable(ctx, sp[3].o);
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(69);
	sp[0].o = frame[1].o;
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	LINE_NUMBER(69);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(71);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(72);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(76);
	((rhino_IteratorLikeIterable$Itr *) NULL_CHECK((frame[0].o)))->F_isDone = (jint(1));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"value"_j));
	sp[3].o = (jobject)((rhino_IteratorLikeIterable$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)SM_rhino_IteratorLikeIterable_access$000_rhino_IteratorLikeIterable_R_rhino_Context(ctx, sp[3].o);
	sp[4].o = (jobject)((rhino_IteratorLikeIterable$Itr *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[4].o = (jobject)SM_rhino_IteratorLikeIterable_access$100_rhino_IteratorLikeIterable_R_rhino_Scriptable(ctx, sp[4].o);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getObjectPropNoWarn_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((rhino_IteratorLikeIterable$Itr *) NULL_CHECK(sp[0].o))->F_nextVal = (jref) sp[1].o;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_rhino_IteratorLikeIterable$Itr_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IteratorLikeIterable$Itr:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	if (((jint)((rhino_IteratorLikeIterable$Itr *) NULL_CHECK((frame[0].o)))->F_isDone) == 0) goto label_1;
	}
	{
	LINE_NUMBER(86);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((rhino_IteratorLikeIterable$Itr *) NULL_CHECK((frame[0].o)))->F_nextVal;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_IteratorLikeIterable$Itr[] {
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
	(void *) M_rhino_IteratorLikeIterable$Itr_hasNext_R_boolean,
	(void *) M_rhino_IteratorLikeIterable$Itr_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "nextVal", &class_java_lang_Object, offsetof(rhino_IteratorLikeIterable$Itr, F_nextVal), "Ljava/lang/Object;", 2 },
	{ "isDone", &class_boolean, offsetof(rhino_IteratorLikeIterable$Itr, F_isDone), "Z", 2 },
	{ "this$0", &class_rhino_IteratorLikeIterable, offsetof(rhino_IteratorLikeIterable$Itr, F_this$0), "Lrhino/IteratorLikeIterable;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_IteratorLikeIterable$Itr_rhino_IteratorLikeIterable, 0, "(Lrhino/IteratorLikeIterable;)V", 1 },
	{ "hasNext", (intptr_t) M_rhino_IteratorLikeIterable$Itr_hasNext_R_boolean, VTABLE_rhino_IteratorLikeIterable$Itr_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_rhino_IteratorLikeIterable$Itr_next_R_java_lang_Object, VTABLE_rhino_IteratorLikeIterable$Itr_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_rhino_IteratorLikeIterable$Itr{
		.nativeName = (intptr_t) "rhino/IteratorLikeIterable$Itr",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_IteratorLikeIterable$Itr),
		.classVtable = (intptr_t) vtable_rhino_IteratorLikeIterable$Itr,
		.staticInitializer = (intptr_t) clinit_rhino_IteratorLikeIterable$Itr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_IteratorLikeIterable$Itr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_IteratorLikeIterable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_IteratorLikeIterable$Itr = registerClass(&class_rhino_IteratorLikeIterable$Itr);

}

