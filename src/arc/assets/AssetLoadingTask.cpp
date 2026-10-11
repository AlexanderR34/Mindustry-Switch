#include "arc/assets/AssetLoadingTask.h"
#include "arc/assets/AssetDescriptor.h"
#include "java/lang/Exception.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/lang/StringBuilder.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "java/util/concurrent/Future.h"
#include "arc/util/Time.h"
#include "java/lang/Void.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "java/util/concurrent/Callable.h"
#include "arc/files/Fi.h"
#include "arc/assets/AssetManager.h"
#include "arc/assets/loaders/SynchronousAssetLoader.h"
#include "java/lang/Object.h"
#include "arc/assets/loaders/AsynchronousAssetLoader.h"
#include "arc/assets/AssetLoadingTask.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "arc/util/Log.h"

extern "C" {


void mark_arc_assets_AssetLoadingTask(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_AssetLoadingTask *) object;
	if (self->F_assetDesc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assetDesc)->clazz)->markFunction)((jobject) self->F_assetDesc, mark, depth + 1);
	if (self->F_loader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loader)->clazz)->markFunction)((jobject) self->F_loader, mark, depth + 1);
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
	if (self->F_manager)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_manager)->clazz)->markFunction)((jobject) self->F_manager, mark, depth + 1);
	if (self->F_dependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dependencies)->clazz)->markFunction)((jobject) self->F_dependencies, mark, depth + 1);
	if (self->F_depsFuture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_depsFuture)->clazz)->markFunction)((jobject) self->F_depsFuture, mark, depth + 1);
	if (self->F_loadFuture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadFuture)->clazz)->markFunction)((jobject) self->F_loadFuture, mark, depth + 1);
	if (self->F_asset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_asset)->clazz)->markFunction)((jobject) self->F_asset, mark, depth + 1);
}

void clinit_arc_assets_AssetLoadingTask(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_assets_AssetLoadingTask_arc_assets_AssetManager_arc_assets_AssetDescriptor_arc_assets_loaders_AssetLoader_java_util_concurrent_ExecutorService(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetLoadingTask:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetLoadingTask(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asyncDone = (jint(0));
	LINE_NUMBER(24);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependenciesLoaded = (jint(0));
	LINE_NUMBER(26);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_depsFuture = (jref) (jobject(nullptr));
	LINE_NUMBER(27);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loadFuture = (jref) (jobject(nullptr));
	LINE_NUMBER(28);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asset = (jref) (jobject(nullptr));
	LINE_NUMBER(30);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_ticks = (jint(0));
	LINE_NUMBER(31);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_cancel = (jint(0));
	LINE_NUMBER(34);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager = (jref) (frame[1].o);
	LINE_NUMBER(35);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc = (jref) (frame[2].o);
	LINE_NUMBER(36);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader = (jref) (frame[3].o);
	LINE_NUMBER(37);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_executor = (jref) (frame[4].o);
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_startTime = temp0;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetLoadingTask_call_R_java_lang_Void(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetLoadingTask:call", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
		auto desc = (arc_assets_AssetDescriptor*) ((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
		if (desc && desc->F_fileName) {
			printf("[AssetLoadingTask] async start: %s\n", stringToNative(ctx, (jstring)desc->F_fileName));
			fflush(stdout);
		}
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	frame[1].o = (checkCast(ctx, &class_arc_assets_loaders_AsynchronousAssetLoader, sp[0].o));
	LINE_NUMBER(45);
	if (((jint)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependenciesLoaded) != 0) goto label_2;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[4].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[4].o))->F_params;
	sp[1].o = (jobject)((func_arc_assets_loaders_AsynchronousAssetLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_loaders_AsynchronousAssetLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_dependencies = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	M_arc_assets_AssetLoadingTask_removeDuplicates_arc_struct_Seq(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[1].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[1].o))->F_fileName;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	((func_arc_assets_AssetManager_injectDependencies_java_lang_String_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_injectDependencies_java_lang_String_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[4].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[4].o))->F_params;
	((func_arc_assets_loaders_AsynchronousAssetLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_loaders_AsynchronousAssetLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(53);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asyncDone = (jint(1));
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[4].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[4].o))->F_params;
	((func_arc_assets_loaders_AsynchronousAssetLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_loaders_AsynchronousAssetLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_8:;
	{
		auto desc = (arc_assets_AssetDescriptor*) ((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
		if (desc && desc->F_fileName) {
			printf("[AssetLoadingTask] async complete: %s\n", stringToNative(ctx, (jstring)desc->F_fileName));
			fflush(stdout);
		}
	}
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_arc_assets_AssetLoadingTask_update_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetLoadingTask:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_ticks = (((jint)((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_ticks) + (jint(1)));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	if ((isInstance(ctx, sp[0].o, &class_arc_assets_loaders_SynchronousAssetLoader)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(71);
	M_arc_assets_AssetLoadingTask_handleSyncLoader(ctx, (frame[0].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(73);
	M_arc_assets_AssetLoadingTask_handleAsyncLoader(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asset;
	if (sp[0].o == nullptr) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_assets_AssetLoadingTask_handleSyncLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetLoadingTask:handleSyncLoader", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	frame[1].o = (checkCast(ctx, &class_arc_assets_loaders_SynchronousAssetLoader, sp[0].o));
	LINE_NUMBER(80);
	if (((jint)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependenciesLoaded) != 0) goto label_2;
	}
	{
	LINE_NUMBER(81);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependenciesLoaded = (jint(1));
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[4].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[4].o))->F_params;
	sp[1].o = (jobject)((func_arc_assets_loaders_SynchronousAssetLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_loaders_SynchronousAssetLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_dependencies = (jref) sp[1].o;
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[3].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_fileName;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[6].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[5].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[5].o))->F_params;
	sp[1].o = (jobject)((func_arc_assets_loaders_SynchronousAssetLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_loaders_SynchronousAssetLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_asset = (jref) sp[1].o;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	M_arc_assets_AssetLoadingTask_removeDuplicates_arc_struct_Seq(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[1].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[1].o))->F_fileName;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependencies;
	((func_arc_assets_AssetManager_injectDependencies_java_lang_String_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_injectDependencies_java_lang_String_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_10;
	}
label_2:;
	{
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[3].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_fileName;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[6].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[5].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[5].o))->F_params;
	sp[1].o = (jobject)((func_arc_assets_loaders_SynchronousAssetLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_loaders_SynchronousAssetLoader_load_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_asset = (jref) sp[1].o;
	}
label_10:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_assets_AssetLoadingTask_handleAsyncLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetLoadingTask:handleAsyncLoader", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	frame[1].o = (checkCast(ctx, &class_arc_assets_loaders_AsynchronousAssetLoader, sp[0].o));
	LINE_NUMBER(96);
	if (((jint)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependenciesLoaded) != 0) goto label_10;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_depsFuture;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, sp[1].o))(ctx, sp[1].o, (frame[0].o));
	((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_depsFuture = (jref) sp[1].o;
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_depsFuture;
	jint temp0 = (jint)((func_java_util_concurrent_Future_isDone_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_isDone_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_depsFuture;
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(105);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(103);
	frame[2].o = sp[0].o;
	clinit_arc_util_Log(ctx);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(104);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load dependencies of asset: "_j))));
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(106);
	((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_dependenciesLoaded = (jint(1));
	LINE_NUMBER(107);
	if (((jint)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asyncDone) == 0) goto label_14;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[3].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_fileName;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[6].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[5].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[5].o))->F_params;
	sp[1].o = (jobject)((func_arc_assets_loaders_AsynchronousAssetLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_loaders_AsynchronousAssetLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_asset = (jref) sp[1].o;
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loadFuture;
	if (sp[0].o != nullptr) goto label_19;
	}
	{
	if (((jint)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asyncDone) != 0) goto label_19;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, sp[1].o))(ctx, sp[1].o, (frame[0].o));
	((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_loadFuture = (jref) sp[1].o;
	goto label_14;
	}
label_19:;
	{
	LINE_NUMBER(116);
	if (((jint)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asyncDone) == 0) goto label_21;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[3].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_fileName;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[6].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[5].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[5].o))->F_params;
	sp[1].o = (jobject)((func_arc_assets_loaders_AsynchronousAssetLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_loaders_AsynchronousAssetLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_asset = (jref) sp[1].o;
	goto label_14;
	}
label_21:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loadFuture;
	jint temp0 = (jint)((func_java_util_concurrent_Future_isDone_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_isDone_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loadFuture;
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(123);
	goto label_23;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(121);
	frame[2].o = sp[0].o;
	LINE_NUMBER(122);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load asset: "_j))));
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[2].o))->F_fileName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_manager;
	sp[3].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[3].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[3].o))->F_fileName;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_loader;
	sp[6].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[4].o = (jobject)M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_assetDesc;
	sp[5].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[5].o))->F_params;
	sp[1].o = (jobject)((func_arc_assets_loaders_AsynchronousAssetLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_loaders_AsynchronousAssetLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((arc_assets_AssetLoadingTask *) NULL_CHECK(sp[0].o))->F_asset = (jref) sp[1].o;
	}
label_14:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetLoadingTask:resolve", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_file;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_fileName;
	sp[1].o = (jobject)((func_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, sp[2].o);
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_file = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[2].o)))->F_file;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetLoadingTask_getAsset_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetLoadingTask:getAsset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_assets_AssetLoadingTask *) NULL_CHECK((frame[0].o)))->F_asset;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_assets_AssetLoadingTask_removeDuplicates_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetLoadingTask:removeDuplicates", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(141);
	((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_ordered = (jint(1));
	LINE_NUMBER(142);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetDescriptor, sp[0].o))))->F_fileName;
	frame[4].o = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetDescriptor, sp[0].o))))->F_type;
	frame[5].o = sp[0].o;
	LINE_NUMBER(145);
	frame[6].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1)));
	}
label_8:;
	{
	if ((frame[6].i) <= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetDescriptor, sp[1].o))))->F_type;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((checkCast(ctx, &class_arc_assets_AssetDescriptor, sp[1].o))))->F_fileName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	}
label_11:;
	{
	LINE_NUMBER(145);
	INST_IINC(6, -1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(142);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(150);
	((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_ordered = (frame[2].i);
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetLoadingTask_call_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetLoadingTask:call", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_assets_AssetLoadingTask_call_R_java_lang_Void) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_AssetLoadingTask_call_R_java_lang_Void])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_AssetLoadingTask[] {
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
	(void *) M_arc_assets_AssetLoadingTask_call_R_java_lang_Object,
	(void *) M_arc_assets_AssetLoadingTask_call_R_java_lang_Void,
	(void *) M_arc_assets_AssetLoadingTask_update_R_boolean,
	(void *) M_arc_assets_AssetLoadingTask_handleSyncLoader,
	(void *) M_arc_assets_AssetLoadingTask_handleAsyncLoader,
	(void *) M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi,
	(void *) M_arc_assets_AssetLoadingTask_getAsset_R_java_lang_Object,
	(void *) M_arc_assets_AssetLoadingTask_removeDuplicates_arc_struct_Seq,
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
	{ "call", "()Ljava/lang/Object;" },
	{ "call", "()Ljava/lang/Void;" },
	{ "update", "()Z" },
	{ "handleSyncLoader", "()V" },
	{ "handleAsyncLoader", "()V" },
	{ "resolve", "(Larc/assets/loaders/AssetLoader;Larc/assets/AssetDescriptor;)Larc/files/Fi;" },
	{ "getAsset", "()Ljava/lang/Object;" },
	{ "removeDuplicates", "(Larc/struct/Seq;)V" },
};

static jclass interfaces[] { &class_java_util_concurrent_Callable, };

static FieldMetadata fields[] {
	{ "assetDesc", &class_arc_assets_AssetDescriptor, offsetof(arc_assets_AssetLoadingTask, F_assetDesc), "Larc/assets/AssetDescriptor;", 16 },
	{ "loader", &class_arc_assets_loaders_AssetLoader, offsetof(arc_assets_AssetLoadingTask, F_loader), "Larc/assets/loaders/AssetLoader;", 16 },
	{ "executor", &class_java_util_concurrent_ExecutorService, offsetof(arc_assets_AssetLoadingTask, F_executor), "Ljava/util/concurrent/ExecutorService;", 16 },
	{ "startTime", &class_long, offsetof(arc_assets_AssetLoadingTask, F_startTime), "J", 16 },
	{ "manager", &class_arc_assets_AssetManager, offsetof(arc_assets_AssetLoadingTask, F_manager), "Larc/assets/AssetManager;", 0 },
	{ "asyncDone", &class_boolean, offsetof(arc_assets_AssetLoadingTask, F_asyncDone), "Z", 64 },
	{ "dependenciesLoaded", &class_boolean, offsetof(arc_assets_AssetLoadingTask, F_dependenciesLoaded), "Z", 64 },
	{ "dependencies", &class_arc_struct_Seq, offsetof(arc_assets_AssetLoadingTask, F_dependencies), "Larc/struct/Seq;", 64 },
	{ "depsFuture", &class_java_util_concurrent_Future, offsetof(arc_assets_AssetLoadingTask, F_depsFuture), "Ljava/util/concurrent/Future;", 64 },
	{ "loadFuture", &class_java_util_concurrent_Future, offsetof(arc_assets_AssetLoadingTask, F_loadFuture), "Ljava/util/concurrent/Future;", 64 },
	{ "asset", &class_java_lang_Object, offsetof(arc_assets_AssetLoadingTask, F_asset), "Ljava/lang/Object;", 64 },
	{ "ticks", &class_int, offsetof(arc_assets_AssetLoadingTask, F_ticks), "I", 0 },
	{ "cancel", &class_boolean, offsetof(arc_assets_AssetLoadingTask, F_cancel), "Z", 64 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_AssetLoadingTask_arc_assets_AssetManager_arc_assets_AssetDescriptor_arc_assets_loaders_AssetLoader_java_util_concurrent_ExecutorService, 0, "(Larc/assets/AssetManager;Larc/assets/AssetDescriptor;Larc/assets/loaders/AssetLoader;Ljava/util/concurrent/ExecutorService;)V", 1 },
	{ "call", (intptr_t) M_arc_assets_AssetLoadingTask_call_R_java_lang_Void, VTABLE_arc_assets_AssetLoadingTask_call_R_java_lang_Void, "()Ljava/lang/Void;", 1 },
	{ "update", (intptr_t) M_arc_assets_AssetLoadingTask_update_R_boolean, VTABLE_arc_assets_AssetLoadingTask_update_R_boolean, "()Z", 1 },
	{ "handleSyncLoader", (intptr_t) M_arc_assets_AssetLoadingTask_handleSyncLoader, VTABLE_arc_assets_AssetLoadingTask_handleSyncLoader, "()V", 2 },
	{ "handleAsyncLoader", (intptr_t) M_arc_assets_AssetLoadingTask_handleAsyncLoader, VTABLE_arc_assets_AssetLoadingTask_handleAsyncLoader, "()V", 2 },
	{ "resolve", (intptr_t) M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi, VTABLE_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi, "(Larc/assets/loaders/AssetLoader;Larc/assets/AssetDescriptor;)Larc/files/Fi;", 2 },
	{ "getAsset", (intptr_t) M_arc_assets_AssetLoadingTask_getAsset_R_java_lang_Object, VTABLE_arc_assets_AssetLoadingTask_getAsset_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "removeDuplicates", (intptr_t) M_arc_assets_AssetLoadingTask_removeDuplicates_arc_struct_Seq, VTABLE_arc_assets_AssetLoadingTask_removeDuplicates_arc_struct_Seq, "(Larc/struct/Seq;)V", 2 },
	{ "call", (intptr_t) M_arc_assets_AssetLoadingTask_call_R_java_lang_Object, VTABLE_arc_assets_AssetLoadingTask_call_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_arc_assets_AssetLoadingTask{
		.nativeName = (intptr_t) "arc/assets/AssetLoadingTask",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_assets_AssetLoadingTask),
		.classVtable = (intptr_t) vtable_arc_assets_AssetLoadingTask,
		.staticInitializer = (intptr_t) clinit_arc_assets_AssetLoadingTask,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_AssetLoadingTask,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_AssetLoadingTask = registerClass(&class_arc_assets_AssetLoadingTask);

}
