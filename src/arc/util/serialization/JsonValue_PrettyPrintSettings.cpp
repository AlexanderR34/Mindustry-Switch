#include "arc/util/serialization/JsonValue_PrettyPrintSettings.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/util/serialization/JsonWriter_OutputType.h"

extern "C" {


void mark_arc_util_serialization_JsonValue$PrettyPrintSettings(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_JsonValue$PrettyPrintSettings *) object;
	if (self->F_outputType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outputType)->clazz)->markFunction)((jobject) self->F_outputType, mark, depth + 1);
}

void clinit_arc_util_serialization_JsonValue$PrettyPrintSettings(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_serialization_JsonValue$PrettyPrintSettings(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$PrettyPrintSettings:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue$PrettyPrintSettings(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1283);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_JsonValue$PrettyPrintSettings[] {
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
	{ "outputType", &class_arc_util_serialization_JsonWriter$OutputType, offsetof(arc_util_serialization_JsonValue$PrettyPrintSettings, F_outputType), "Larc/util/serialization/JsonWriter$OutputType;", 1 },
	{ "singleLineColumns", &class_int, offsetof(arc_util_serialization_JsonValue$PrettyPrintSettings, F_singleLineColumns), "I", 1 },
	{ "wrapNumericArrays", &class_boolean, offsetof(arc_util_serialization_JsonValue$PrettyPrintSettings, F_wrapNumericArrays), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonValue$PrettyPrintSettings, 0, "()V", 1 },
};

Class class_arc_util_serialization_JsonValue$PrettyPrintSettings{
		.nativeName = (intptr_t) "arc/util/serialization/JsonValue$PrettyPrintSettings",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_JsonValue$PrettyPrintSettings),
		.classVtable = (intptr_t) vtable_arc_util_serialization_JsonValue$PrettyPrintSettings,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_JsonValue$PrettyPrintSettings,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_JsonValue$PrettyPrintSettings,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_JsonValue,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_JsonValue$PrettyPrintSettings = registerClass(&class_arc_util_serialization_JsonValue$PrettyPrintSettings);

}

