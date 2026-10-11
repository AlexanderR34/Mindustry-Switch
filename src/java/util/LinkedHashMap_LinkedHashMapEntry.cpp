#include "java/util/LinkedHashMap_LinkedHashMapEntry.h"
#include "java/util/HashMap_Entry.h"
#include "java/lang/Object.h"
#include "java/util/LinkedHashMap_LinkedHashMapEntry.h"
#include "java/util/LinkedHashMap.h"
#include "java/util/MapEntry.h"

extern "C" {


void mark_java_util_LinkedHashMap$LinkedHashMapEntry(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_HashMap$Entry(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_LinkedHashMap$LinkedHashMapEntry *) object;
	if (self->F_chainForward)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chainForward)->clazz)->markFunction)((jobject) self->F_chainForward, mark, depth + 1);
	if (self->F_chainBackward)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chainBackward)->clazz)->markFunction)((jobject) self->F_chainBackward, mark, depth + 1);
}

void clinit_java_util_LinkedHashMap$LinkedHashMapEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_HashMap$Entry(ctx);
}

void init_java_util_LinkedHashMap$LinkedHashMapEntry_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$LinkedHashMapEntry:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap$LinkedHashMapEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(253);
	init_java_util_HashMap$Entry_java_lang_Object_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(254);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[0].o)))->F_chainForward = (jref) (jobject(nullptr));
	LINE_NUMBER(255);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[0].o)))->F_chainBackward = (jref) (jobject(nullptr));
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_LinkedHashMap$LinkedHashMapEntry_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$LinkedHashMapEntry:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap$LinkedHashMapEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(259);
	init_java_util_HashMap$Entry_java_lang_Object_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(260);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[0].o)))->F_chainForward = (jref) (jobject(nullptr));
	LINE_NUMBER(261);
	((java_util_LinkedHashMap$LinkedHashMapEntry *) NULL_CHECK((frame[0].o)))->F_chainBackward = (jref) (jobject(nullptr));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_LinkedHashMap$LinkedHashMapEntry[] {
	(void *) M_java_util_MapEntry_hashCode_R_int,
	(void *) M_java_util_MapEntry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_MapEntry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_MapEntry_getKey_R_java_lang_Object,
	(void *) M_java_util_MapEntry_getValue_R_java_lang_Object,
	(void *) M_java_util_MapEntry_setValue_java_lang_Object_R_java_lang_Object,
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

static FieldMetadata fields[] {
	{ "chainForward", &class_java_util_LinkedHashMap$LinkedHashMapEntry, offsetof(java_util_LinkedHashMap$LinkedHashMapEntry, F_chainForward), "Ljava/util/LinkedHashMap$LinkedHashMapEntry;", 0 },
	{ "chainBackward", &class_java_util_LinkedHashMap$LinkedHashMapEntry, offsetof(java_util_LinkedHashMap$LinkedHashMapEntry, F_chainBackward), "Ljava/util/LinkedHashMap$LinkedHashMapEntry;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_LinkedHashMap$LinkedHashMapEntry_java_lang_Object_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_LinkedHashMap$LinkedHashMapEntry_java_lang_Object_int, 0, "(Ljava/lang/Object;I)V", 0 },
};

Class class_java_util_LinkedHashMap$LinkedHashMapEntry{
		.nativeName = (intptr_t) "java/util/LinkedHashMap$LinkedHashMapEntry",
		.parentClass = (intptr_t) &class_java_util_HashMap$Entry,
		.size = sizeof(java_util_LinkedHashMap$LinkedHashMapEntry),
		.classVtable = (intptr_t) vtable_java_util_LinkedHashMap$LinkedHashMapEntry,
		.staticInitializer = (intptr_t) clinit_java_util_LinkedHashMap$LinkedHashMapEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_LinkedHashMap$LinkedHashMapEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_LinkedHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_LinkedHashMap$LinkedHashMapEntry = registerClass(&class_java_util_LinkedHashMap$LinkedHashMapEntry);

}

