#include "rhino/module/provider/ModuleSourceProvider.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/module/provider/ModuleSourceProvider.h"
#include "java/net/URI.h"
#include "rhino/Scriptable.h"
#include "rhino/module/provider/ModuleSource.h"
#include "java/io/Reader.h"

extern "C" {

jobject SF_rhino_module_provider_ModuleSourceProvider_NOT_MODIFIED;

void mark_rhino_module_provider_ModuleSourceProvider(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_module_provider_ModuleSourceProvider_NOT_MODIFIED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_module_provider_ModuleSourceProvider_NOT_MODIFIED)->clazz)->markFunction)((jobject) SF_rhino_module_provider_ModuleSourceProvider_NOT_MODIFIED, mark, depth + 1);
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
	auto self = (rhino_module_provider_ModuleSourceProvider *) object;
}

void clinit_rhino_module_provider_ModuleSourceProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSourceProvider:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_ModuleSourceProvider(ctx);
	{
	LINE_NUMBER(20);
	clinit_rhino_module_provider_ModuleSource(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_module_provider_ModuleSource);
	init_rhino_module_provider_ModuleSource_java_io_Reader_java_net_URI_java_net_URI_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)));
	clinit_rhino_module_provider_ModuleSourceProvider(ctx);
	SF_rhino_module_provider_ModuleSourceProvider_NOT_MODIFIED = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_module_provider_ModuleSourceProvider[] {
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
	{ "loadSource", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadSource", "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
};

static FieldMetadata fields[] {
	{ "NOT_MODIFIED", &class_rhino_module_provider_ModuleSource, (intptr_t) &SF_rhino_module_provider_ModuleSourceProvider_NOT_MODIFIED, "Lrhino/module/provider/ModuleSource;", 25 },
};

static MethodMetadata methods[] {
	{ "loadSource", 0, INDEX_rhino_module_provider_ModuleSourceProvider_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 1025 },
	{ "loadSource", 0, INDEX_rhino_module_provider_ModuleSourceProvider_loadSource_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 1025 },
	{ "<clinit>", (intptr_t) clinit_rhino_module_provider_ModuleSourceProvider, 0, "()V", 8 },
};

Class class_rhino_module_provider_ModuleSourceProvider{
		.nativeName = (intptr_t) "rhino/module/provider/ModuleSourceProvider",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_module_provider_ModuleSourceProvider),
		.classVtable = (intptr_t) vtable_rhino_module_provider_ModuleSourceProvider,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_ModuleSourceProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_ModuleSourceProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_ModuleSourceProvider = registerClass(&class_rhino_module_provider_ModuleSourceProvider);

}
