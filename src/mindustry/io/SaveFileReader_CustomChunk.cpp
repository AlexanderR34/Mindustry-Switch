#include "mindustry/io/SaveFileReader_CustomChunk.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveFileReader.h"
#include "mindustry/io/SaveFileReader_CustomChunk.h"
#include "java/io/DataInput.h"
#include "java/io/DataOutput.h"

extern "C" {


void mark_mindustry_io_SaveFileReader$CustomChunk(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_io_SaveFileReader$CustomChunk *) object;
}

void clinit_mindustry_io_SaveFileReader$CustomChunk(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader$CustomChunk:read", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(209);
	((func_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput) resolveInterfaceMethod(ctx, &class_mindustry_io_SaveFileReader$CustomChunk, INDEX_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_io_SaveFileReader$CustomChunk_shouldWrite_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader$CustomChunk:shouldWrite", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_io_SaveFileReader$CustomChunk_writeNet_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveFileReader$CustomChunk:writeNet", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_SaveFileReader$CustomChunk[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput_int,
	(void *) M_mindustry_io_SaveFileReader$CustomChunk_shouldWrite_R_boolean,
	(void *) M_mindustry_io_SaveFileReader$CustomChunk_writeNet_R_boolean,
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
	{ "write", "(Ljava/io/DataOutput;)V" },
	{ "read", "(Ljava/io/DataInput;)V" },
	{ "read", "(Ljava/io/DataInput;I)V" },
	{ "shouldWrite", "()Z" },
	{ "writeNet", "()Z" },
};

static MethodMetadata methods[] {
	{ "write", 0, INDEX_mindustry_io_SaveFileReader$CustomChunk_write_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1025 },
	{ "read", 0, INDEX_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput, "(Ljava/io/DataInput;)V", 1025 },
	{ "read", (intptr_t) M_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput_int, INDEX_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput_int, "(Ljava/io/DataInput;I)V", 1 },
	{ "shouldWrite", (intptr_t) M_mindustry_io_SaveFileReader$CustomChunk_shouldWrite_R_boolean, INDEX_mindustry_io_SaveFileReader$CustomChunk_shouldWrite_R_boolean, "()Z", 1 },
	{ "writeNet", (intptr_t) M_mindustry_io_SaveFileReader$CustomChunk_writeNet_R_boolean, INDEX_mindustry_io_SaveFileReader$CustomChunk_writeNet_R_boolean, "()Z", 1 },
};

Class class_mindustry_io_SaveFileReader$CustomChunk{
		.nativeName = (intptr_t) "mindustry/io/SaveFileReader$CustomChunk",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_SaveFileReader$CustomChunk),
		.classVtable = (intptr_t) vtable_mindustry_io_SaveFileReader$CustomChunk,
		.staticInitializer = (intptr_t) clinit_mindustry_io_SaveFileReader$CustomChunk,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_SaveFileReader$CustomChunk,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_io_SaveFileReader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_SaveFileReader$CustomChunk = registerClass(&class_mindustry_io_SaveFileReader$CustomChunk);

}

