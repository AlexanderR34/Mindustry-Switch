#include "java/util/EnumMap_ValueIterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/EnumMap.h"
#include "java/util/EnumMap_ValueIterator.h"
#include "java/util/EnumMap_EnumMapIterator.h"
#include "java/util/EnumMap_1.h"

extern "C" {


void mark_java_util_EnumMap$ValueIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_EnumMap$EnumMapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_EnumMap$ValueIterator *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_EnumMap$ValueIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_EnumMap$EnumMapIterator(ctx);
}

void init_java_util_EnumMap$ValueIterator_java_util_EnumMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$ValueIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$ValueIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(556);
	((java_util_EnumMap$ValueIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_util_EnumMap$EnumMapIterator_java_util_EnumMap_java_util_EnumMap$1(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_EnumMap$ValueIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$ValueIterator:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_java_util_EnumMap$ValueIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_EnumMap$ValueIterator_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(559);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(560);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK(sp[1].o))->F_index;
	((java_util_EnumMap$EnumMapIterator *) NULL_CHECK(sp[1].o))->F_index = (temp0 + (jint(1)));
	((java_util_EnumMap$EnumMapIterator *) NULL_CHECK(sp[0].o))->F_lastReturnedIndex = temp0;
	LINE_NUMBER(561);
	sp[0].o = (jobject)((java_util_EnumMap$ValueIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((java_util_EnumMap$ValueIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_util_EnumMap_access$1200_java_util_EnumMap_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedIndex))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_EnumMap$ValueIterator_java_util_EnumMap_java_util_EnumMap$1(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$ValueIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$ValueIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(556);
	init_java_util_EnumMap$ValueIterator_java_util_EnumMap(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_EnumMap$ValueIterator[] {
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
	(void *) M_java_util_EnumMap$EnumMapIterator_hasNext_R_boolean,
	(void *) M_java_util_EnumMap$ValueIterator_next_R_java_lang_Object,
	(void *) M_java_util_EnumMap$EnumMapIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_EnumMap$EnumMapIterator_checkLastReturnedIndex,
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
	{ "checkLastReturnedIndex", "()V" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_java_util_EnumMap, offsetof(java_util_EnumMap$ValueIterator, F_this$0), "Ljava/util/EnumMap;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_EnumMap$ValueIterator_java_util_EnumMap, 0, "(Ljava/util/EnumMap;)V", 2 },
	{ "next", (intptr_t) M_java_util_EnumMap$ValueIterator_next_R_java_lang_Object, VTABLE_java_util_EnumMap$ValueIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "<init>", (intptr_t) init_java_util_EnumMap$ValueIterator_java_util_EnumMap_java_util_EnumMap$1, 0, "(Ljava/util/EnumMap;Ljava/util/EnumMap$1;)V", 4096 },
};

Class class_java_util_EnumMap$ValueIterator{
		.nativeName = (intptr_t) "java/util/EnumMap$ValueIterator",
		.parentClass = (intptr_t) &class_java_util_EnumMap$EnumMapIterator,
		.size = sizeof(java_util_EnumMap$ValueIterator),
		.classVtable = (intptr_t) vtable_java_util_EnumMap$ValueIterator,
		.staticInitializer = (intptr_t) clinit_java_util_EnumMap$ValueIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_EnumMap$ValueIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_EnumMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_EnumMap$ValueIterator = registerClass(&class_java_util_EnumMap$ValueIterator);

}

