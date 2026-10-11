#include "java/io/DataOutput.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataOutput.h"

extern "C" {


void mark_java_io_DataOutput(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_DataOutput *) object;
}

void clinit_java_io_DataOutput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_io_DataOutput[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "close", "()V" },
	{ "write", "([B)V" },
	{ "write", "([BII)V" },
	{ "write", "(I)V" },
	{ "writeBoolean", "(Z)V" },
	{ "writeByte", "(I)V" },
	{ "writeChar", "(I)V" },
	{ "writeChars", "(Ljava/lang/String;)V" },
	{ "writeDouble", "(D)V" },
	{ "writeFloat", "(F)V" },
	{ "writeInt", "(I)V" },
	{ "writeLong", "(J)V" },
	{ "writeShort", "(I)V" },
	{ "writeUTF", "(Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_java_lang_AutoCloseable, };

static MethodMetadata methods[] {
	{ "write", 0, INDEX_java_io_DataOutput_write_Array1_byte, "([B)V", 1025 },
	{ "write", 0, INDEX_java_io_DataOutput_write_Array1_byte_int_int, "([BII)V", 1025 },
	{ "write", 0, INDEX_java_io_DataOutput_write_int, "(I)V", 1025 },
	{ "writeBoolean", 0, INDEX_java_io_DataOutput_writeBoolean_boolean, "(Z)V", 1025 },
	{ "writeByte", 0, INDEX_java_io_DataOutput_writeByte_int, "(I)V", 1025 },
	{ "writeChar", 0, INDEX_java_io_DataOutput_writeChar_int, "(I)V", 1025 },
	{ "writeChars", 0, INDEX_java_io_DataOutput_writeChars_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "writeDouble", 0, INDEX_java_io_DataOutput_writeDouble_double, "(D)V", 1025 },
	{ "writeFloat", 0, INDEX_java_io_DataOutput_writeFloat_float, "(F)V", 1025 },
	{ "writeInt", 0, INDEX_java_io_DataOutput_writeInt_int, "(I)V", 1025 },
	{ "writeLong", 0, INDEX_java_io_DataOutput_writeLong_long, "(J)V", 1025 },
	{ "writeShort", 0, INDEX_java_io_DataOutput_writeShort_int, "(I)V", 1025 },
	{ "writeUTF", 0, INDEX_java_io_DataOutput_writeUTF_java_lang_String, "(Ljava/lang/String;)V", 1025 },
};

Class class_java_io_DataOutput{
		.nativeName = (intptr_t) "java/io/DataOutput",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_io_DataOutput),
		.classVtable = (intptr_t) vtable_java_io_DataOutput,
		.staticInitializer = (intptr_t) clinit_java_io_DataOutput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_DataOutput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_DataOutput = registerClass(&class_java_io_DataOutput);

}
