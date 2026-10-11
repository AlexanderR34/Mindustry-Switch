#include "mindustry/mod/ClassLoaderCloser.h"
#include "java/lang/Object.h"
#include "java/net/URLClassLoader.h"
#include "java/lang/ClassLoader.h"

extern "C" {


void mark_mindustry_mod_ClassLoaderCloser(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_ClassLoaderCloser *) object;
}

void clinit_mindustry_mod_ClassLoaderCloser(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_ClassLoaderCloser(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ClassLoaderCloser:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ClassLoaderCloser(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_ClassLoaderCloser_close_java_lang_ClassLoader(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ClassLoaderCloser:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ClassLoaderCloser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(9);
	if ((isInstance(ctx, (frame[0].o), &class_java_net_URLClassLoader)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_java_net_URLClassLoader, (frame[0].o)));
	LINE_NUMBER(10);
	((func_java_net_URLClassLoader_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URLClassLoader_close])(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(12);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_ClassLoaderCloser[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_ClassLoaderCloser, 0, "()V", 1 },
	{ "close", (intptr_t) SM_mindustry_mod_ClassLoaderCloser_close_java_lang_ClassLoader, 0, "(Ljava/lang/ClassLoader;)V", 9 },
};

Class class_mindustry_mod_ClassLoaderCloser{
		.nativeName = (intptr_t) "mindustry/mod/ClassLoaderCloser",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_ClassLoaderCloser),
		.classVtable = (intptr_t) vtable_mindustry_mod_ClassLoaderCloser,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ClassLoaderCloser,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_ClassLoaderCloser,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_ClassLoaderCloser = registerClass(&class_mindustry_mod_ClassLoaderCloser);

}
