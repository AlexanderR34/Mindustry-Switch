#include "rhino/classfile/ExceptionTableEntry.h"
#include "java/lang/Object.h"
#include "rhino/classfile/ExceptionTableEntry.h"

extern "C" {


void mark_rhino_classfile_ExceptionTableEntry(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_ExceptionTableEntry *) object;
}

void clinit_rhino_classfile_ExceptionTableEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_classfile_ExceptionTableEntry_int_int_int_short(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jshort param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ExceptionTableEntry:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ExceptionTableEntry(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(6);
	((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[0].o)))->F_itsStartLabel = (frame[1].i);
	LINE_NUMBER(7);
	((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[0].o)))->F_itsEndLabel = (frame[2].i);
	LINE_NUMBER(8);
	((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[0].o)))->F_itsHandlerLabel = (frame[3].i);
	LINE_NUMBER(9);
	((rhino_classfile_ExceptionTableEntry *) NULL_CHECK((frame[0].o)))->F_itsCatchType = (frame[4].i);
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_ExceptionTableEntry[] {
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
	{ "itsStartLabel", &class_int, offsetof(rhino_classfile_ExceptionTableEntry, F_itsStartLabel), "I", 0 },
	{ "itsEndLabel", &class_int, offsetof(rhino_classfile_ExceptionTableEntry, F_itsEndLabel), "I", 0 },
	{ "itsHandlerLabel", &class_int, offsetof(rhino_classfile_ExceptionTableEntry, F_itsHandlerLabel), "I", 0 },
	{ "itsCatchType", &class_short, offsetof(rhino_classfile_ExceptionTableEntry, F_itsCatchType), "S", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_ExceptionTableEntry_int_int_int_short, 0, "(IIIS)V", 0 },
};

Class class_rhino_classfile_ExceptionTableEntry{
		.nativeName = (intptr_t) "rhino/classfile/ExceptionTableEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_ExceptionTableEntry),
		.classVtable = (intptr_t) vtable_rhino_classfile_ExceptionTableEntry,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_ExceptionTableEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_ExceptionTableEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_ExceptionTableEntry = registerClass(&class_rhino_classfile_ExceptionTableEntry);

}
