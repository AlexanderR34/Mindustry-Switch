#include "arc/assets/loaders/AssetLoader.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "java/lang/Object.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"

extern "C" {


void mark_arc_assets_loaders_AssetLoader(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_AssetLoader *) object;
	if (self->F_resolver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resolver)->clazz)->markFunction)((jobject) self->F_resolver, mark, depth + 1);
}

void clinit_arc_assets_loaders_AssetLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_assets_loaders_AssetLoader_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/AssetLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_AssetLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((arc_assets_loaders_AssetLoader *) NULL_CHECK((frame[0].o)))->F_resolver = (jref) (frame[1].o);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/AssetLoader:resolve", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_assets_loaders_AssetLoader *) NULL_CHECK((frame[0].o)))->F_resolver;
	sp[0].o = (jobject)((func_arc_assets_loaders_FileHandleResolver_resolve_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_assets_loaders_FileHandleResolver, INDEX_arc_assets_loaders_FileHandleResolver_resolve_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_AssetLoader[] {
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
	(void *) M_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi,
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
	{ "resolve", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;" },
};

static FieldMetadata fields[] {
	{ "resolver", &class_arc_assets_loaders_FileHandleResolver, offsetof(arc_assets_loaders_AssetLoader, F_resolver), "Larc/assets/loaders/FileHandleResolver;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_AssetLoader_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 1 },
	{ "resolve", (intptr_t) M_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi, VTABLE_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "getDependencies", 0, VTABLE_arc_assets_loaders_AssetLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 1025 },
};

Class class_arc_assets_loaders_AssetLoader{
		.nativeName = (intptr_t) "arc/assets/loaders/AssetLoader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_assets_loaders_AssetLoader),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_AssetLoader,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_AssetLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_AssetLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
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
static bool registered_arc_assets_loaders_AssetLoader = registerClass(&class_arc_assets_loaders_AssetLoader);

}
