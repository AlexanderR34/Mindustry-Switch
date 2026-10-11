#include "rhino/EmbeddedSlotMap_Iter.h"
#include "rhino/EmbeddedSlotMap_Iter.h"
#include "java/lang/Object.h"
#include "rhino/EmbeddedSlotMap.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "rhino/ScriptableObject_Slot.h"

extern "C" {


void mark_rhino_EmbeddedSlotMap$Iter(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_EmbeddedSlotMap$Iter *) object;
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
}

void clinit_rhino_EmbeddedSlotMap$Iter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_EmbeddedSlotMap$Iter_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap$Iter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EmbeddedSlotMap$Iter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	((rhino_EmbeddedSlotMap$Iter *) NULL_CHECK((frame[0].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_EmbeddedSlotMap$Iter_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap$Iter:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap$Iter *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_rhino_EmbeddedSlotMap$Iter_next_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap$Iter:next", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((rhino_EmbeddedSlotMap$Iter *) NULL_CHECK((frame[0].o)))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(44);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(45);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_EmbeddedSlotMap$Iter *) NULL_CHECK((frame[0].o)))->F_next;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[1].o))->F_orderedNext;
	((rhino_EmbeddedSlotMap$Iter *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_EmbeddedSlotMap$Iter_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EmbeddedSlotMap$Iter:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_rhino_EmbeddedSlotMap$Iter_next_R_rhino_ScriptableObject$Slot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_EmbeddedSlotMap$Iter_next_R_rhino_ScriptableObject$Slot])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_EmbeddedSlotMap$Iter[] {
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
	(void *) M_rhino_EmbeddedSlotMap$Iter_hasNext_R_boolean,
	(void *) M_rhino_EmbeddedSlotMap$Iter_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_rhino_EmbeddedSlotMap$Iter_next_R_rhino_ScriptableObject$Slot,
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
	{ "next", "()Lrhino/ScriptableObject$Slot;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "next", &class_rhino_ScriptableObject$Slot, offsetof(rhino_EmbeddedSlotMap$Iter, F_next), "Lrhino/ScriptableObject$Slot;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_EmbeddedSlotMap$Iter_rhino_ScriptableObject$Slot, 0, "(Lrhino/ScriptableObject$Slot;)V", 0 },
	{ "hasNext", (intptr_t) M_rhino_EmbeddedSlotMap$Iter_hasNext_R_boolean, VTABLE_rhino_EmbeddedSlotMap$Iter_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_rhino_EmbeddedSlotMap$Iter_next_R_rhino_ScriptableObject$Slot, VTABLE_rhino_EmbeddedSlotMap$Iter_next_R_rhino_ScriptableObject$Slot, "()Lrhino/ScriptableObject$Slot;", 1 },
	{ "next", (intptr_t) M_rhino_EmbeddedSlotMap$Iter_next_R_java_lang_Object, VTABLE_rhino_EmbeddedSlotMap$Iter_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_rhino_EmbeddedSlotMap$Iter{
		.nativeName = (intptr_t) "rhino/EmbeddedSlotMap$Iter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_EmbeddedSlotMap$Iter),
		.classVtable = (intptr_t) vtable_rhino_EmbeddedSlotMap$Iter,
		.staticInitializer = (intptr_t) clinit_rhino_EmbeddedSlotMap$Iter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_EmbeddedSlotMap$Iter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_EmbeddedSlotMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_EmbeddedSlotMap$Iter = registerClass(&class_rhino_EmbeddedSlotMap$Iter);

}

