#include "java/io/DataInput.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInput.h"

extern "C" {


void mark_java_io_DataInput(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_DataInput *) object;
}

void clinit_java_io_DataInput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_io_DataInput[] {
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
	{ "readBoolean", "()Z" },
	{ "readByte", "()B" },
	{ "readChar", "()C" },
	{ "readDouble", "()D" },
	{ "readFloat", "()F" },
	{ "readFully", "([B)V" },
	{ "readFully", "([BII)V" },
	{ "readInt", "()I" },
	{ "readLong", "()J" },
	{ "readShort", "()S" },
	{ "readUnsignedByte", "()I" },
	{ "readUnsignedShort", "()I" },
	{ "readUTF", "()Ljava/lang/String;" },
	{ "skipBytes", "(I)I" },
};

static jclass interfaces[] { &class_java_lang_AutoCloseable, };

static MethodMetadata methods[] {
	{ "readBoolean", 0, INDEX_java_io_DataInput_readBoolean_R_boolean, "()Z", 1025 },
	{ "readByte", 0, INDEX_java_io_DataInput_readByte_R_byte, "()B", 1025 },
	{ "readChar", 0, INDEX_java_io_DataInput_readChar_R_char, "()C", 1025 },
	{ "readDouble", 0, INDEX_java_io_DataInput_readDouble_R_double, "()D", 1025 },
	{ "readFloat", 0, INDEX_java_io_DataInput_readFloat_R_float, "()F", 1025 },
	{ "readFully", 0, INDEX_java_io_DataInput_readFully_Array1_byte, "([B)V", 1025 },
	{ "readFully", 0, INDEX_java_io_DataInput_readFully_Array1_byte_int_int, "([BII)V", 1025 },
	{ "readInt", 0, INDEX_java_io_DataInput_readInt_R_int, "()I", 1025 },
	{ "readLong", 0, INDEX_java_io_DataInput_readLong_R_long, "()J", 1025 },
	{ "readShort", 0, INDEX_java_io_DataInput_readShort_R_short, "()S", 1025 },
	{ "readUnsignedByte", 0, INDEX_java_io_DataInput_readUnsignedByte_R_int, "()I", 1025 },
	{ "readUnsignedShort", 0, INDEX_java_io_DataInput_readUnsignedShort_R_int, "()I", 1025 },
	{ "readUTF", 0, INDEX_java_io_DataInput_readUTF_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "skipBytes", 0, INDEX_java_io_DataInput_skipBytes_int_R_int, "(I)I", 1025 },
};

Class class_java_io_DataInput{
		.nativeName = (intptr_t) "java/io/DataInput",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_io_DataInput),
		.classVtable = (intptr_t) vtable_java_io_DataInput,
		.staticInitializer = (intptr_t) clinit_java_io_DataInput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_DataInput,
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
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_DataInput = registerClass(&class_java_io_DataInput);

}
