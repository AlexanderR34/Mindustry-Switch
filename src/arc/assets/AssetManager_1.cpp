#include "arc/assets/AssetManager_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/assets/loaders/CustomLoader.h"
#include "arc/assets/AssetManager_1.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "java/lang/Runnable.h"
#include "arc/assets/AssetManager.h"

extern "C" {


void mark_arc_assets_AssetManager$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_loaders_CustomLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_assets_AssetManager$1 *) object;
	if (self->F_val$loadasync)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$loadasync)->clazz)->markFunction)((jobject) self->F_val$loadasync, mark, depth + 1);
	if (self->F_val$loadsync)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$loadsync)->clazz)->markFunction)((jobject) self->F_val$loadsync, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_assets_AssetManager$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_CustomLoader(ctx);
}

void init_arc_assets_AssetManager$1_arc_assets_AssetManager_java_lang_Runnable_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager$1:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetManager$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(357);
	((arc_assets_AssetManager$1 *) NULL_CHECK((frame[0].o)))->F_val$loadasync = (jref) (frame[2].o);
	((arc_assets_AssetManager$1 *) NULL_CHECK((frame[0].o)))->F_val$loadsync = (jref) (frame[3].o);
	((arc_assets_AssetManager$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_assets_loaders_CustomLoader(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetManager$1_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager$1:loadAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((arc_assets_AssetManager$1 *) NULL_CHECK((frame[0].o)))->F_val$loadasync;
	if (param1) printf("[AssetManager$1] loadAsync executing for '%s'...\n", stringToNative(ctx, (jstring)param1));
	fflush(stdout);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	if (param1) printf("[AssetManager$1] loadAsync finished for '%s'!\n", stringToNative(ctx, (jstring)param1));
	fflush(stdout);
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetManager$1_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager$1:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((arc_assets_AssetManager$1 *) NULL_CHECK((frame[0].o)))->F_val$loadsync;
	if (param1) printf("[AssetManager$1] loadSync executing for '%s'...\n", stringToNative(ctx, (jstring)param1));
	fflush(stdout);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(366);
	sp[0].o = (jobject)M_arc_assets_loaders_CustomLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_AssetManager$1[] {
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
	(void *) M_arc_assets_loaders_CustomLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_arc_assets_AssetManager$1_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_arc_assets_AssetManager$1_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
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
	{ "val$loadasync", &class_java_lang_Runnable, offsetof(arc_assets_AssetManager$1, F_val$loadasync), "Ljava/lang/Runnable;", 4112 },
	{ "val$loadsync", &class_java_lang_Runnable, offsetof(arc_assets_AssetManager$1, F_val$loadsync), "Ljava/lang/Runnable;", 4112 },
	{ "this$0", &class_arc_assets_AssetManager, offsetof(arc_assets_AssetManager$1, F_this$0), "Larc/assets/AssetManager;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_AssetManager$1_arc_assets_AssetManager_java_lang_Runnable_java_lang_Runnable, 0, "(Larc/assets/AssetManager;Ljava/lang/Runnable;Ljava/lang/Runnable;)V", 0 },
	{ "loadAsync", (intptr_t) M_arc_assets_AssetManager$1_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_arc_assets_AssetManager$1_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_AssetManager$1_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_arc_assets_AssetManager$1_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 1 },
};

Class class_arc_assets_AssetManager$1{
		.nativeName = (intptr_t) "arc/assets/AssetManager$1",
		.parentClass = (intptr_t) &class_arc_assets_loaders_CustomLoader,
		.size = sizeof(arc_assets_AssetManager$1),
		.classVtable = (intptr_t) vtable_arc_assets_AssetManager$1,
		.staticInitializer = (intptr_t) clinit_arc_assets_AssetManager$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_AssetManager$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_assets_AssetManager$1 = registerClass(&class_arc_assets_AssetManager$1);

}

