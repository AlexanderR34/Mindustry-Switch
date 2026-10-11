#include "java/util/WeakHashMap_Entry.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/WeakHashMap_Entry.h"
#include "java/util/WeakHashMap.h"
#include "java/util/Map_Entry.h"
#include "java/lang/ref/WeakReference.h"
#include "java/util/Objects.h"

extern "C" {


void mark_java_util_WeakHashMap$Entry(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ref_WeakReference(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_WeakHashMap$Entry *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
}

void clinit_java_util_WeakHashMap$Entry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ref_WeakReference(ctx);
}

void init_java_util_WeakHashMap$Entry_java_lang_Object_java_lang_Object_int_java_util_WeakHashMap$Entry(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$Entry:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_WeakHashMap$Entry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(672);
	init_java_lang_ref_WeakReference_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(673);
	((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(674);
	((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[0].o)))->F_hash = (frame[3].i);
	LINE_NUMBER(675);
	((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[0].o)))->F_next = (jref) (frame[4].o);
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$Entry:getKey", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(680);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$Entry_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_get_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_util_WeakHashMap_unmaskNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$Entry:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(684);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$Entry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$Entry:setValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject)((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].o = sp[0].o;
	LINE_NUMBER(689);
	((java_util_WeakHashMap$Entry *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_WeakHashMap$Entry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$Entry:equals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(694);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map$Entry)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(696);
	frame[2].o = (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o)));
	LINE_NUMBER(697);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(698);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(699);
	if ((frame[3].o) == (frame[4].o)) goto label_6;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_7;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(700);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(701);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(702);
	if ((frame[5].o) == (frame[6].o)) goto label_10;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_7;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(703);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(705);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_util_WeakHashMap$Entry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$Entry:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(709);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(710);
	sp[0].o = (jobject)((func_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(711);
	jint temp0 = (jint)SM_java_util_Objects_hashCode_java_lang_Object_R_int(ctx, (frame[1].o));
	jint temp1 = (jint)SM_java_util_Objects_hashCode_java_lang_Object_R_int(ctx, (frame[2].o));
	popStackFrame(ctx);
	return (temp0 ^ temp1);
	}

	popStackFrame(ctx);
}

jobject M_java_util_WeakHashMap$Entry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/WeakHashMap$Entry:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(715);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	sp[1].o = (jobject)((func_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_WeakHashMap$Entry[] {
	(void *) M_java_util_WeakHashMap$Entry_hashCode_R_int,
	(void *) M_java_util_WeakHashMap$Entry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_WeakHashMap$Entry_toString_R_java_lang_String,
	(void *) M_java_lang_ref_WeakReference_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_ref_WeakReference_clear,
	(void *) M_java_lang_ref_WeakReference_get_R_java_lang_Object,
	(void *) M_java_lang_ref_WeakReference_refersTo_java_lang_Object_R_boolean,
	(void *) M_java_lang_ref_WeakReference_init_java_lang_Object,
	(void *) M_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object,
	(void *) M_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object,
	(void *) M_java_util_WeakHashMap$Entry_setValue_java_lang_Object_R_java_lang_Object,
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
	{ "clear", "()V" },
	{ "get", "()Ljava/lang/Object;" },
	{ "refersTo", "(Ljava/lang/Object;)Z" },
	{ "init", "(Ljava/lang/Object;)V" },
	{ "getKey", "()Ljava/lang/Object;" },
	{ "getValue", "()Ljava/lang/Object;" },
	{ "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_Map$Entry, };

static FieldMetadata fields[] {
	{ "value", &class_java_lang_Object, offsetof(java_util_WeakHashMap$Entry, F_value), "Ljava/lang/Object;", 0 },
	{ "hash", &class_int, offsetof(java_util_WeakHashMap$Entry, F_hash), "I", 16 },
	{ "next", &class_java_util_WeakHashMap$Entry, offsetof(java_util_WeakHashMap$Entry, F_next), "Ljava/util/WeakHashMap$Entry;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_WeakHashMap$Entry_java_lang_Object_java_lang_Object_int_java_util_WeakHashMap$Entry, 0, "(Ljava/lang/Object;Ljava/lang/Object;ILjava/util/WeakHashMap$Entry;)V", 0 },
	{ "getKey", (intptr_t) M_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object, VTABLE_java_util_WeakHashMap$Entry_getKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getValue", (intptr_t) M_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object, VTABLE_java_util_WeakHashMap$Entry_getValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setValue", (intptr_t) M_java_util_WeakHashMap$Entry_setValue_java_lang_Object_R_java_lang_Object, VTABLE_java_util_WeakHashMap$Entry_setValue_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "equals", (intptr_t) M_java_util_WeakHashMap$Entry_equals_java_lang_Object_R_boolean, VTABLE_java_util_WeakHashMap$Entry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_util_WeakHashMap$Entry_hashCode_R_int, VTABLE_java_util_WeakHashMap$Entry_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_util_WeakHashMap$Entry_toString_R_java_lang_String, VTABLE_java_util_WeakHashMap$Entry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_util_WeakHashMap$Entry{
		.nativeName = (intptr_t) "java/util/WeakHashMap$Entry",
		.parentClass = (intptr_t) &class_java_lang_ref_WeakReference,
		.size = sizeof(java_util_WeakHashMap$Entry),
		.classVtable = (intptr_t) vtable_java_util_WeakHashMap$Entry,
		.staticInitializer = (intptr_t) clinit_java_util_WeakHashMap$Entry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_WeakHashMap$Entry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_WeakHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_WeakHashMap$Entry = registerClass(&class_java_util_WeakHashMap$Entry);

}

