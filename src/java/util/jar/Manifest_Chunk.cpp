#include "java/util/jar/Manifest_Chunk.h"
#include "java/lang/Object.h"
#include "java/util/jar/Manifest_Chunk.h"
#include "java/util/jar/Manifest.h"

extern "C" {


void mark_java_util_jar_Manifest$Chunk(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_jar_Manifest$Chunk *) object;
}

void clinit_java_util_jar_Manifest$Chunk(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_jar_Manifest$Chunk_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest$Chunk:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Manifest$Chunk(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(67);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(68);
	((java_util_jar_Manifest$Chunk *) NULL_CHECK((frame[0].o)))->F_start = (frame[1].i);
	LINE_NUMBER(69);
	((java_util_jar_Manifest$Chunk *) NULL_CHECK((frame[0].o)))->F_end = (frame[2].i);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_jar_Manifest$Chunk[] {
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
	{ "start", &class_int, offsetof(java_util_jar_Manifest$Chunk, F_start), "I", 0 },
	{ "end", &class_int, offsetof(java_util_jar_Manifest$Chunk, F_end), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_jar_Manifest$Chunk_int_int, 0, "(II)V", 0 },
};

Class class_java_util_jar_Manifest$Chunk{
		.nativeName = (intptr_t) "java/util/jar/Manifest$Chunk",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_jar_Manifest$Chunk),
		.classVtable = (intptr_t) vtable_java_util_jar_Manifest$Chunk,
		.staticInitializer = (intptr_t) clinit_java_util_jar_Manifest$Chunk,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_jar_Manifest$Chunk,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_jar_Manifest,
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
static bool registered_java_util_jar_Manifest$Chunk = registerClass(&class_java_util_jar_Manifest$Chunk);

}

