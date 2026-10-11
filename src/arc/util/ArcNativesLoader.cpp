#include "arc/util/ArcNativesLoader.h"
#include "arc/util/ArcNativesLoader.h"
#include "arc/util/SharedLibraryLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"

extern "C" {

jbool SF_arc_util_ArcNativesLoader_disableNativesLoading;
jbool SF_arc_util_ArcNativesLoader_loaded;

void mark_arc_util_ArcNativesLoader(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_ArcNativesLoader *) object;
}

void init_arc_util_ArcNativesLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ArcNativesLoader:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ArcNativesLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_ArcNativesLoader_load(jcontext ctx) {
	clinit_arc_util_ArcNativesLoader(ctx);
	SF_arc_util_ArcNativesLoader_loaded = (jint(1));
	SF_arc_util_ArcNativesLoader_disableNativesLoading = (jint(1));
}

void clinit_arc_util_ArcNativesLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ArcNativesLoader:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ArcNativesLoader(ctx);
	{
	LINE_NUMBER(4);
	clinit_arc_util_ArcNativesLoader(ctx);
	SF_arc_util_ArcNativesLoader_disableNativesLoading = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_ArcNativesLoader[] {
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
	{ "disableNativesLoading", &class_boolean, (intptr_t) &SF_arc_util_ArcNativesLoader_disableNativesLoading, "Z", 9 },
	{ "loaded", &class_boolean, (intptr_t) &SF_arc_util_ArcNativesLoader_loaded, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_ArcNativesLoader, 0, "()V", 1 },
	{ "load", (intptr_t) SM_arc_util_ArcNativesLoader_load, 0, "()V", 41 },
	{ "<clinit>", (intptr_t) clinit_arc_util_ArcNativesLoader, 0, "()V", 8 },
};

Class class_arc_util_ArcNativesLoader{
		.nativeName = (intptr_t) "arc/util/ArcNativesLoader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_ArcNativesLoader),
		.classVtable = (intptr_t) vtable_arc_util_ArcNativesLoader,
		.staticInitializer = (intptr_t) clinit_arc_util_ArcNativesLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_ArcNativesLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_ArcNativesLoader = registerClass(&class_arc_util_ArcNativesLoader);

}
