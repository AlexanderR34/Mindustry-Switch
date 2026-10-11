#include "java/util/Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableMapEntry.h"
#include "java/lang/Object.h"
#include "java/util/Collections_UnmodifiableMap_UnmodifiableEntrySet.h"
#include "java/lang/String.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/Map_Entry.h"
#include "java/util/Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableMapEntry.h"

extern "C" {


void mark_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry *) object;
	if (self->F_mapEntry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mapEntry)->clazz)->markFunction)((jobject) self->F_mapEntry, mark, depth + 1);
}

void clinit_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1166);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1167);
	((java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry *) NULL_CHECK((frame[0].o)))->F_mapEntry = (jref) (frame[1].o);
	LINE_NUMBER(1168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry *) NULL_CHECK((frame[0].o)))->F_mapEntry;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_getKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry:getKey", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1176);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry *) NULL_CHECK((frame[0].o)))->F_mapEntry;
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_getValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1180);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry *) NULL_CHECK((frame[0].o)))->F_mapEntry;
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1185);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry *) NULL_CHECK((frame[0].o)))->F_mapEntry;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry:setValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1189);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1194);
	sp[0].o = (jobject)((java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry *) NULL_CHECK((frame[0].o)))->F_mapEntry;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry[] {
	(void *) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_hashCode_R_int,
	(void *) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_getKey_R_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_getValue_R_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_setValue_java_lang_Object_R_java_lang_Object,
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
	{ "getKey", "()Ljava/lang/Object;" },
	{ "getValue", "()Ljava/lang/Object;" },
	{ "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_Map$Entry, };

static FieldMetadata fields[] {
	{ "mapEntry", &class_java_util_Map$Entry, offsetof(java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry, F_mapEntry), "Ljava/util/Map$Entry;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_java_util_Map$Entry, 0, "(Ljava/util/Map$Entry;)V", 0 },
	{ "equals", (intptr_t) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_equals_java_lang_Object_R_boolean, VTABLE_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "getKey", (intptr_t) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_getKey_R_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_getKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getValue", (intptr_t) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_getValue_R_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_getValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "hashCode", (intptr_t) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_hashCode_R_int, VTABLE_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_hashCode_R_int, "()I", 1 },
	{ "setValue", (intptr_t) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_setValue_java_lang_Object_R_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_setValue_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_toString_R_java_lang_String, VTABLE_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry{
		.nativeName = (intptr_t) "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry),
		.classVtable = (intptr_t) vtable_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry = registerClass(&class_java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableMapEntry);

}

