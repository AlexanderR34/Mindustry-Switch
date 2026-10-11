#include "java/util/zip/ZipOutputStream_XEntry.h"
#include "java/lang/Object.h"
#include "java/util/zip/ZipEntry.h"
#include "java/util/zip/ZipOutputStream_XEntry.h"
#include "java/util/zip/ZipOutputStream.h"

extern "C" {


void mark_java_util_zip_ZipOutputStream$XEntry(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_zip_ZipOutputStream$XEntry *) object;
	if (self->F_entry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entry)->clazz)->markFunction)((jobject) self->F_entry, mark, depth + 1);
}

void clinit_java_util_zip_ZipOutputStream$XEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_zip_ZipOutputStream$XEntry_java_util_zip_ZipEntry_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream$XEntry:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipOutputStream$XEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(64);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(65);
	((java_util_zip_ZipOutputStream$XEntry *) NULL_CHECK((frame[0].o)))->F_entry = (jref) (frame[1].o);
	LINE_NUMBER(66);
	((java_util_zip_ZipOutputStream$XEntry *) NULL_CHECK((frame[0].o)))->F_offset = (frame[2].l);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_ZipOutputStream$XEntry[] {
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
};

static FieldMetadata fields[] {
	{ "entry", &class_java_util_zip_ZipEntry, offsetof(java_util_zip_ZipOutputStream$XEntry, F_entry), "Ljava/util/zip/ZipEntry;", 16 },
	{ "offset", &class_long, offsetof(java_util_zip_ZipOutputStream$XEntry, F_offset), "J", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_ZipOutputStream$XEntry_java_util_zip_ZipEntry_long, 0, "(Ljava/util/zip/ZipEntry;J)V", 1 },
};

Class class_java_util_zip_ZipOutputStream$XEntry{
		.nativeName = (intptr_t) "java/util/zip/ZipOutputStream$XEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_zip_ZipOutputStream$XEntry),
		.classVtable = (intptr_t) vtable_java_util_zip_ZipOutputStream$XEntry,
		.staticInitializer = (intptr_t) clinit_java_util_zip_ZipOutputStream$XEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_ZipOutputStream$XEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_zip_ZipOutputStream,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_ZipOutputStream$XEntry = registerClass(&class_java_util_zip_ZipOutputStream$XEntry);

}

