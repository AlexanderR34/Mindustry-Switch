#include "java/util/Hashtable_HashEnumIterator.h"
#include "java/util/MapEntry_Type.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Hashtable.h"
#include "java/util/Iterator.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/Hashtable_HashEnumIterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/Enumeration.h"
#include "java/util/Hashtable_Entry.h"
#include "java/util/MapEntry.h"
#include "java/util/Hashtable_HashIterator.h"

extern "C" {


void mark_java_util_Hashtable$HashEnumIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Hashtable$HashIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Hashtable$HashEnumIterator *) object;
	if (self->F_entry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entry)->clazz)->markFunction)((jobject) self->F_entry, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_Hashtable$HashEnumIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Hashtable$HashIterator(ctx);
}

void init_java_util_Hashtable$HashEnumIterator_java_util_Hashtable_java_util_MapEntry$Type(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$HashEnumIterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable$HashEnumIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(607);
	((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(608);
	init_java_util_Hashtable$HashIterator_java_util_Hashtable_java_util_MapEntry$Type(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(601);
	((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_isEnumeration = (jint(0));
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Hashtable$HashEnumIterator_java_util_Hashtable_java_util_MapEntry$Type_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$HashEnumIterator:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable$HashEnumIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(611);
	((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(612);
	init_java_util_Hashtable$HashIterator_java_util_Hashtable_java_util_MapEntry$Type(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(601);
	((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_isEnumeration = (jint(0));
	LINE_NUMBER(613);
	((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_isEnumeration = (frame[3].i);
	LINE_NUMBER(614);
	((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_start = (((jint)((java_util_Hashtable *) NULL_CHECK((frame[1].o)))->F_lastSlot) + (jint(1)));
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Hashtable$HashEnumIterator_hasMoreElements_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$HashEnumIterator:hasMoreElements", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(618);
	if (((jint)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_isEnumeration) == 0) goto label_1;
	}
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_entry;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(620);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(622);
	jint temp0 = (jint)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_start;
	sp[0].o = (jobject)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 <= ((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_firstSlot)) goto label_5;
	}
	{
	LINE_NUMBER(623);
	sp[0].o = (jobject)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementData;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK(sp[1].o))->F_start) - (jint(1));
	((java_util_Hashtable$HashEnumIterator *) NULL_CHECK(sp[1].o))->F_start = temp0;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(624);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((java_util_Hashtable *) NULL_CHECK(sp[1].o))->F_elementData;
	((java_util_Hashtable$HashEnumIterator *) NULL_CHECK(sp[0].o))->F_entry = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_start)));
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(628);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(631);
	jint temp0 = (jint)M_java_util_Hashtable$HashIterator_hasNext_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Hashtable$HashEnumIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$HashEnumIterator:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(635);
	if (((jint)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_isEnumeration) == 0) goto label_1;
	}
	{
	LINE_NUMBER(636);
	jint temp0 = (jint)((func_java_util_Hashtable$HashEnumIterator_hasMoreElements_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable$HashEnumIterator_hasMoreElements_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(639);
	jint temp0 = (jint)M_java_util_Hashtable$HashIterator_hasNext_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable$HashEnumIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$HashEnumIterator:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(643);
	if (((jint)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_isEnumeration) == 0) goto label_1;
	}
	{
	LINE_NUMBER(644);
	jint temp0 = (jint)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 != ((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_3;
	}
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((func_java_util_Hashtable$HashEnumIterator_nextElement_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable$HashEnumIterator_nextElement_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(647);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)M_java_util_Hashtable$HashIterator_next_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable$HashEnumIterator_nextElement_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$HashEnumIterator:nextElement", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(656);
	if (((jint)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_isEnumeration) == 0) goto label_1;
	}
	{
	LINE_NUMBER(657);
	jint temp0 = (jint)((func_java_util_Hashtable$HashEnumIterator_hasMoreElements_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable$HashEnumIterator_hasMoreElements_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((java_util_Hashtable$HashIterator *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[0].o = (jobject)((func_java_util_MapEntry$Type_get_java_util_MapEntry_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_MapEntry$Type, INDEX_java_util_MapEntry$Type_get_java_util_MapEntry_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(659);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK(sp[1].o))->F_next;
	((java_util_Hashtable$HashEnumIterator *) NULL_CHECK(sp[0].o))->F_entry = (jref) sp[1].o;
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_3:;
	{
	LINE_NUMBER(662);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)M_java_util_Hashtable$HashIterator_next_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Hashtable$HashEnumIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable$HashEnumIterator:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(669);
	if (((jint)((java_util_Hashtable$HashEnumIterator *) NULL_CHECK((frame[0].o)))->F_isEnumeration) == 0) goto label_1;
	}
	{
	LINE_NUMBER(670);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(672);
	M_java_util_Hashtable$HashIterator_remove(ctx, (frame[0].o));
	LINE_NUMBER(674);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Hashtable$HashEnumIterator[] {
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
	(void *) M_java_util_Hashtable$HashEnumIterator_hasNext_R_boolean,
	(void *) M_java_util_Hashtable$HashEnumIterator_next_R_java_lang_Object,
	(void *) M_java_util_Hashtable$HashEnumIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Hashtable$HashEnumIterator_hasMoreElements_R_boolean,
	(void *) M_java_util_Hashtable$HashEnumIterator_nextElement_R_java_lang_Object,
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
	{ "hasMoreElements", "()Z" },
	{ "nextElement", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_Enumeration, };

static FieldMetadata fields[] {
	{ "isEnumeration", &class_boolean, offsetof(java_util_Hashtable$HashEnumIterator, F_isEnumeration), "Z", 2 },
	{ "start", &class_int, offsetof(java_util_Hashtable$HashEnumIterator, F_start), "I", 0 },
	{ "entry", &class_java_util_Hashtable$Entry, offsetof(java_util_Hashtable$HashEnumIterator, F_entry), "Ljava/util/Hashtable$Entry;", 0 },
	{ "this$0", &class_java_util_Hashtable, offsetof(java_util_Hashtable$HashEnumIterator, F_this$0), "Ljava/util/Hashtable;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Hashtable$HashEnumIterator_java_util_Hashtable_java_util_MapEntry$Type, 0, "(Ljava/util/Hashtable;Ljava/util/MapEntry$Type;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_Hashtable$HashEnumIterator_java_util_Hashtable_java_util_MapEntry$Type_boolean, 0, "(Ljava/util/Hashtable;Ljava/util/MapEntry$Type;Z)V", 0 },
	{ "hasMoreElements", (intptr_t) M_java_util_Hashtable$HashEnumIterator_hasMoreElements_R_boolean, VTABLE_java_util_Hashtable$HashEnumIterator_hasMoreElements_R_boolean, "()Z", 1 },
	{ "hasNext", (intptr_t) M_java_util_Hashtable$HashEnumIterator_hasNext_R_boolean, VTABLE_java_util_Hashtable$HashEnumIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_Hashtable$HashEnumIterator_next_R_java_lang_Object, VTABLE_java_util_Hashtable$HashEnumIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "nextElement", (intptr_t) M_java_util_Hashtable$HashEnumIterator_nextElement_R_java_lang_Object, VTABLE_java_util_Hashtable$HashEnumIterator_nextElement_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_Hashtable$HashEnumIterator_remove, VTABLE_java_util_Hashtable$HashEnumIterator_remove, "()V", 1 },
};

Class class_java_util_Hashtable$HashEnumIterator{
		.nativeName = (intptr_t) "java/util/Hashtable$HashEnumIterator",
		.parentClass = (intptr_t) &class_java_util_Hashtable$HashIterator,
		.size = sizeof(java_util_Hashtable$HashEnumIterator),
		.classVtable = (intptr_t) vtable_java_util_Hashtable$HashEnumIterator,
		.staticInitializer = (intptr_t) clinit_java_util_Hashtable$HashEnumIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Hashtable$HashEnumIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Hashtable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Hashtable$HashEnumIterator = registerClass(&class_java_util_Hashtable$HashEnumIterator);

}

