#include "arc/util/serialization/BaseJsonReader.h"
#include "java/io/InputStream.h"
#include "arc/util/serialization/BaseJsonReader.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/files/Fi.h"

extern "C" {


void mark_arc_util_serialization_BaseJsonReader(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_BaseJsonReader *) object;
}

void clinit_arc_util_serialization_BaseJsonReader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_arc_util_serialization_BaseJsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/BaseJsonReader:parse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_read_R_java_io_InputStream])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_BaseJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue) resolveInterfaceMethod(ctx, &class_arc_util_serialization_BaseJsonReader, INDEX_arc_util_serialization_BaseJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_BaseJsonReader[] {
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
	(void *) M_arc_util_serialization_BaseJsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue,
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
	{ "parse", "(Ljava/io/InputStream;)Larc/util/serialization/JsonValue;" },
	{ "parse", "(Larc/files/Fi;)Larc/util/serialization/JsonValue;" },
};

static MethodMetadata methods[] {
	{ "parse", 0, INDEX_arc_util_serialization_BaseJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue, "(Ljava/io/InputStream;)Larc/util/serialization/JsonValue;", 1025 },
	{ "parse", (intptr_t) M_arc_util_serialization_BaseJsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue, INDEX_arc_util_serialization_BaseJsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue, "(Larc/files/Fi;)Larc/util/serialization/JsonValue;", 1 },
};

Class class_arc_util_serialization_BaseJsonReader{
		.nativeName = (intptr_t) "arc/util/serialization/BaseJsonReader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_BaseJsonReader),
		.classVtable = (intptr_t) vtable_arc_util_serialization_BaseJsonReader,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_BaseJsonReader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_BaseJsonReader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_BaseJsonReader = registerClass(&class_arc_util_serialization_BaseJsonReader);

}
