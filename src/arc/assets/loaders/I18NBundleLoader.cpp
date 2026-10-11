#include "arc/assets/loaders/I18NBundleLoader.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/assets/AssetManager.h"
#include "arc/assets/loaders/AsynchronousAssetLoader.h"
#include "arc/assets/loaders/I18NBundleLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/assets/loaders/I18NBundleLoader_I18NBundleParameter.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/util/Locale.h"

extern "C" {


void mark_arc_assets_loaders_I18NBundleLoader(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_I18NBundleLoader *) object;
	if (self->F_bundle)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bundle)->clazz)->markFunction)((jobject) self->F_bundle, mark, depth + 1);
}

void clinit_arc_assets_loaders_I18NBundleLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_arc_assets_loaders_I18NBundleLoader_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/I18NBundleLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_I18NBundleLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	init_arc_assets_loaders_AsynchronousAssetLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_I18NBundleLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/I18NBundleLoader:loadAsync", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(41);
	((arc_assets_loaders_I18NBundleLoader *) NULL_CHECK((frame[0].o)))->F_bundle = (jref) (jobject(nullptr));
	LINE_NUMBER(44);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(46);
	frame[6].o = (jobject(nullptr));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_assets_loaders_I18NBundleLoader$I18NBundleParameter *) NULL_CHECK((frame[4].o)))->F_locale;
	if (sp[0].o != nullptr) goto label_7;
	}
	sp->o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp++;
	goto label_8;
label_7:;
	INST_ALOAD(4);
	sp[-1].o = (jobject) ((arc_assets_loaders_I18NBundleLoader$I18NBundleParameter *) NULL_CHECK(sp[-1].o))->F_locale;
label_8:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_assets_loaders_I18NBundleLoader$I18NBundleParameter *) NULL_CHECK((frame[4].o)))->F_encoding;
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(51);
	if ((frame[6].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_util_Locale_R_arc_util_I18NBundle(ctx, (frame[3].o), (frame[5].o));
	((arc_assets_loaders_I18NBundleLoader *) NULL_CHECK(sp[0].o))->F_bundle = (jref) sp[1].o;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_util_Locale_java_lang_String_R_arc_util_I18NBundle(ctx, (frame[3].o), (frame[5].o), (frame[6].o));
	((arc_assets_loaders_I18NBundleLoader *) NULL_CHECK(sp[0].o))->F_bundle = (jref) sp[1].o;
	}
label_12:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_I18NBundleLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_util_I18NBundle(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/I18NBundleLoader:loadSync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_assets_loaders_I18NBundleLoader *) NULL_CHECK((frame[0].o)))->F_bundle;
	frame[5].o = sp[0].o;
	LINE_NUMBER(61);
	((arc_assets_loaders_I18NBundleLoader *) NULL_CHECK((frame[0].o)))->F_bundle = (jref) (jobject(nullptr));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_I18NBundleLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/I18NBundleLoader:getDependencies", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_I18NBundleLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/I18NBundleLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((func_arc_assets_loaders_I18NBundleLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_util_I18NBundle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_I18NBundleLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_util_I18NBundle])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_I18NBundleLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/I18NBundleLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(31);
	((func_arc_assets_loaders_I18NBundleLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_I18NBundleLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_I18NBundleLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/I18NBundleLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((func_arc_assets_loaders_I18NBundleLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_I18NBundleLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_I18NBundleLoader[] {
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
	(void *) M_arc_assets_loaders_I18NBundleLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_arc_assets_loaders_I18NBundleLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_arc_assets_loaders_I18NBundleLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_arc_assets_loaders_I18NBundleLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter,
	(void *) M_arc_assets_loaders_I18NBundleLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_util_I18NBundle,
	(void *) M_arc_assets_loaders_I18NBundleLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_struct_Seq,
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
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/I18NBundleLoader$I18NBundleParameter;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/I18NBundleLoader$I18NBundleParameter;)Larc/util/I18NBundle;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/I18NBundleLoader$I18NBundleParameter;)Larc/struct/Seq;" },
};

static jclass innerClasses[] {
	&class_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter,
};

static FieldMetadata fields[] {
	{ "bundle", &class_arc_util_I18NBundle, offsetof(arc_assets_loaders_I18NBundleLoader, F_bundle), "Larc/util/I18NBundle;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_I18NBundleLoader_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 1 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_I18NBundleLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter, VTABLE_arc_assets_loaders_I18NBundleLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/I18NBundleLoader$I18NBundleParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_I18NBundleLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_util_I18NBundle, VTABLE_arc_assets_loaders_I18NBundleLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_util_I18NBundle, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/I18NBundleLoader$I18NBundleParameter;)Larc/util/I18NBundle;", 1 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_I18NBundleLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_struct_Seq, VTABLE_arc_assets_loaders_I18NBundleLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/I18NBundleLoader$I18NBundleParameter;)Larc/struct/Seq;", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_I18NBundleLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_arc_assets_loaders_I18NBundleLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_I18NBundleLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_arc_assets_loaders_I18NBundleLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_I18NBundleLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, VTABLE_arc_assets_loaders_I18NBundleLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 4161 },
};

Class class_arc_assets_loaders_I18NBundleLoader{
		.nativeName = (intptr_t) "arc/assets/loaders/I18NBundleLoader",
		.parentClass = (intptr_t) &class_arc_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(arc_assets_loaders_I18NBundleLoader),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_I18NBundleLoader,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_I18NBundleLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_I18NBundleLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_I18NBundleLoader = registerClass(&class_arc_assets_loaders_I18NBundleLoader);

}
