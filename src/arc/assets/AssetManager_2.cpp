#include "arc/assets/AssetManager_2.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/assets/loaders/AsynchronousAssetLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/struct/Seq.h"
#include "arc/assets/AssetManager_2.h"
#include "arc/assets/Loadable.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/assets/AssetManager.h"

extern "C" {


void mark_arc_assets_AssetManager$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_loaders_AsynchronousAssetLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_assets_AssetManager$2 *) object;
	if (self->F_val$load)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$load)->clazz)->markFunction)((jobject) self->F_val$load, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_assets_AssetManager$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_arc_assets_AssetManager$2_arc_assets_AssetManager_arc_assets_loaders_FileHandleResolver_arc_assets_Loadable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager$2:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetManager$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(381);
	((arc_assets_AssetManager$2 *) NULL_CHECK((frame[0].o)))->F_val$load = (jref) (frame[3].o);
	((arc_assets_AssetManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_assets_loaders_AsynchronousAssetLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager$2:loadAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((arc_assets_AssetManager$2 *) NULL_CHECK((frame[0].o)))->F_val$load;
	((func_arc_assets_Loadable_loadAsync) resolveInterfaceMethod(ctx, &class_arc_assets_Loadable, INDEX_arc_assets_Loadable_loadAsync, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager$2:loadSync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((arc_assets_AssetManager$2 *) NULL_CHECK((frame[0].o)))->F_val$load;
	((func_arc_assets_Loadable_loadSync) resolveInterfaceMethod(ctx, &class_arc_assets_Loadable, INDEX_arc_assets_Loadable_loadSync, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(390);
	sp[0].o = (jobject)((arc_assets_AssetManager$2 *) NULL_CHECK((frame[0].o)))->F_val$load;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager$2_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager$2:getDependencies", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((arc_assets_AssetManager$2 *) NULL_CHECK((frame[0].o)))->F_val$load;
	sp[0].o = (jobject)((func_arc_assets_Loadable_getDependencies_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_arc_assets_Loadable, INDEX_arc_assets_Loadable_getDependencies_R_arc_struct_Seq, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_AssetManager$2[] {
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
	(void *) M_arc_assets_AssetManager$2_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_arc_assets_AssetManager$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_arc_assets_AssetManager$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
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
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "val$load", &class_arc_assets_Loadable, offsetof(arc_assets_AssetManager$2, F_val$load), "Larc/assets/Loadable;", 4112 },
	{ "this$0", &class_arc_assets_AssetManager, offsetof(arc_assets_AssetManager$2, F_this$0), "Larc/assets/AssetManager;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_AssetManager$2_arc_assets_AssetManager_arc_assets_loaders_FileHandleResolver_arc_assets_Loadable, 0, "(Larc/assets/AssetManager;Larc/assets/loaders/FileHandleResolver;Larc/assets/Loadable;)V", 0 },
	{ "loadAsync", (intptr_t) M_arc_assets_AssetManager$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_arc_assets_AssetManager$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_AssetManager$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_arc_assets_AssetManager$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 1 },
	{ "getDependencies", (intptr_t) M_arc_assets_AssetManager$2_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, VTABLE_arc_assets_AssetManager$2_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 1 },
};

Class class_arc_assets_AssetManager$2{
		.nativeName = (intptr_t) "arc/assets/AssetManager$2",
		.parentClass = (intptr_t) &class_arc_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(arc_assets_AssetManager$2),
		.classVtable = (intptr_t) vtable_arc_assets_AssetManager$2,
		.staticInitializer = (intptr_t) clinit_arc_assets_AssetManager$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_AssetManager$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_assets_AssetManager$2 = registerClass(&class_arc_assets_AssetManager$2);

}

