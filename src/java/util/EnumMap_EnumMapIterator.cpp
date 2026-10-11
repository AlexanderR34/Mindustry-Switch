#include "java/util/EnumMap_EnumMapIterator.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/EnumMap.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/EnumMap_EnumMapIterator.h"
#include "java/util/EnumMap_1.h"

extern "C" {


void mark_java_util_EnumMap$EnumMapIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_EnumMap$EnumMapIterator *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_EnumMap$EnumMapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_EnumMap$EnumMapIterator_java_util_EnumMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EnumMapIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$EnumMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(518);
	((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(520);
	((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(523);
	((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedIndex = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_EnumMap$EnumMapIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EnumMapIterator:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(526);
	jint temp0 = (jint)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[0].o);
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[0].o);
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_index))) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(527);
	sp[0].o = frame[0].o;
	((java_util_EnumMap$EnumMapIterator *) NULL_CHECK(sp[0].o))->F_index = (((jint)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(528);
	jint temp0 = (jint)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[0].o);
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_EnumMap$EnumMapIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EnumMapIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(532);
	M_java_util_EnumMap$EnumMapIterator_checkLastReturnedIndex(ctx, (frame[0].o));
	LINE_NUMBER(534);
	sp[0].o = (jobject)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[0].o);
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedIndex))) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(ctx, sp[0].o);
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedIndex)) = (jobject(nullptr));
	LINE_NUMBER(536);
	sp[0].o = (jobject)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_EnumMap_access$210_java_util_EnumMap_R_int(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(538);
	((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedIndex = (jint(-1));
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_EnumMap$EnumMapIterator_checkLastReturnedIndex(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EnumMapIterator:checkLastReturnedIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(542);
	if (((jint)((java_util_EnumMap$EnumMapIterator *) NULL_CHECK((frame[0].o)))->F_lastReturnedIndex) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(543);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(544);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_EnumMap$EnumMapIterator_java_util_EnumMap_java_util_EnumMap$1(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/EnumMap$EnumMapIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_EnumMap$EnumMapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(518);
	init_java_util_EnumMap$EnumMapIterator_java_util_EnumMap(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_EnumMap$EnumMapIterator[] {
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
	(void *) nullptr,
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

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(java_util_EnumMap$EnumMapIterator, F_index), "I", 0 },
	{ "lastReturnedIndex", &class_int, offsetof(java_util_EnumMap$EnumMapIterator, F_lastReturnedIndex), "I", 0 },
	{ "this$0", &class_java_util_EnumMap, offsetof(java_util_EnumMap$EnumMapIterator, F_this$0), "Ljava/util/EnumMap;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_EnumMap$EnumMapIterator_java_util_EnumMap, 0, "(Ljava/util/EnumMap;)V", 2 },
	{ "hasNext", (intptr_t) M_java_util_EnumMap$EnumMapIterator_hasNext_R_boolean, VTABLE_java_util_EnumMap$EnumMapIterator_hasNext_R_boolean, "()Z", 1 },
	{ "remove", (intptr_t) M_java_util_EnumMap$EnumMapIterator_remove, VTABLE_java_util_EnumMap$EnumMapIterator_remove, "()V", 1 },
	{ "checkLastReturnedIndex", (intptr_t) M_java_util_EnumMap$EnumMapIterator_checkLastReturnedIndex, VTABLE_java_util_EnumMap$EnumMapIterator_checkLastReturnedIndex, "()V", 2 },
	{ "<init>", (intptr_t) init_java_util_EnumMap$EnumMapIterator_java_util_EnumMap_java_util_EnumMap$1, 0, "(Ljava/util/EnumMap;Ljava/util/EnumMap$1;)V", 4096 },
};

Class class_java_util_EnumMap$EnumMapIterator{
		.nativeName = (intptr_t) "java/util/EnumMap$EnumMapIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_EnumMap$EnumMapIterator),
		.classVtable = (intptr_t) vtable_java_util_EnumMap$EnumMapIterator,
		.staticInitializer = (intptr_t) clinit_java_util_EnumMap$EnumMapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_EnumMap$EnumMapIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_EnumMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_EnumMap$EnumMapIterator = registerClass(&class_java_util_EnumMap$EnumMapIterator);

}

