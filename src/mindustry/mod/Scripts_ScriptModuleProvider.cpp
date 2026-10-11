#include "mindustry/mod/Scripts_ScriptModuleProvider.h"
#include "rhino/Scriptable.h"
#include "java/util/regex/Matcher.h"
#include "java/lang/Iterable.h"
#include "arc/files/Fi.h"
#include "java/io/BufferedReader.h"
#include "rhino/module/provider/ModuleSourceProviderBase.h"
#include "java/lang/CharSequence.h"
#include "mindustry/mod/Scripts_ScriptModuleProvider.h"
#include "java/lang/Object.h"
#include "java/util/regex/Pattern.h"
#include "java/lang/String.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "rhino/module/provider/UrlModuleSourceProvider.h"
#include "mindustry/mod/Scripts.h"
#include "java/net/URI.h"
#include "rhino/module/provider/ModuleSource.h"
#include "java/io/Reader.h"
#include "mindustry/Vars.h"
#include "java/io/File.h"

extern "C" {


void mark_mindustry_mod_Scripts$ScriptModuleProvider(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_module_provider_UrlModuleSourceProvider(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_mod_Scripts$ScriptModuleProvider *) object;
	if (self->F_directory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_directory)->clazz)->markFunction)((jobject) self->F_directory, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_mod_Scripts$ScriptModuleProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_module_provider_UrlModuleSourceProvider(ctx);
}

void init_mindustry_mod_Scripts$ScriptModuleProvider_mindustry_mod_Scripts(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts$ScriptModuleProvider:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Scripts$ScriptModuleProvider(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	((mindustry_mod_Scripts$ScriptModuleProvider *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(117);
	init_rhino_module_provider_UrlModuleSourceProvider_java_lang_Iterable_java_lang_Iterable(ctx, (frame[0].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"^(.+?)/(.+)"_j))));
	((mindustry_mod_Scripts$ScriptModuleProvider *) NULL_CHECK(sp[0].o))->F_directory = (jref) sp[1].o;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts$ScriptModuleProvider:loadSource", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_mod_Scripts$ScriptModuleProvider *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK(sp[0].o))->F_currentMod;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_Scripts$ScriptModuleProvider *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK(sp[1].o))->F_currentMod;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_mod_Scripts$ScriptModuleProvider *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)((mindustry_mod_Scripts *) NULL_CHECK(sp[3].o))->F_currentMod;
	sp[3].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[3].o))->F_root;
	sp[3].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"scripts"_j))));
	sp[0].o = (jobject)((func_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_mindustry_mod_Mods$LoadedMod_java_lang_String_arc_files_Fi_java_lang_Object_R_rhino_module_provider_ModuleSource) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_mindustry_mod_Mods$LoadedMod_java_lang_String_arc_files_Fi_java_lang_Object_R_rhino_module_provider_ModuleSource])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_mindustry_mod_Mods$LoadedMod_java_lang_String_arc_files_Fi_java_lang_Object_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Scripts$ScriptModuleProvider:loadSource", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_mod_Scripts$ScriptModuleProvider *) NULL_CHECK((frame[0].o)))->F_directory;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(128);
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(129);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[1].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[5].o), (jint(1)));
	sp[0].o = (jobject)((func_mindustry_mod_Mods_locateMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_locateMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[5].o), (jint(2)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(131);
	if ((frame[6].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[5].o), (jint(1)));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_9;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_mindustry_mod_Mods$LoadedMod_java_lang_String_arc_files_Fi_java_lang_Object_R_rhino_module_provider_ModuleSource) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_mindustry_mod_Mods$LoadedMod_java_lang_String_arc_files_Fi_java_lang_Object_R_rhino_module_provider_ModuleSource])(ctx, (frame[0].o), (frame[1].o), (frame[7].o), (frame[8].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_mod_Scripts$ScriptModuleProvider *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_mod_Scripts *) NULL_CHECK(sp[0].o))->F_currentMod = (jref) (frame[6].o);
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[7].o;
	sp[3].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[6].o)))->F_root;
	sp[3].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"scripts"_j))));
	sp[0].o = (jobject)((func_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_mindustry_mod_Mods$LoadedMod_java_lang_String_arc_files_Fi_java_lang_Object_R_rhino_module_provider_ModuleSource) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_mindustry_mod_Mods$LoadedMod_java_lang_String_arc_files_Fi_java_lang_Object_R_rhino_module_provider_ModuleSource])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(141);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.js"_j.string, 1, (frame[2].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_13;
	}
label_12:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(143);
	clinit_rhino_module_provider_ModuleSource(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_module_provider_ModuleSource);
	sp[1].o = (jobject)((func_arc_files_Fi_reader_int_R_java_io_BufferedReader) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_reader_int_R_java_io_BufferedReader])(ctx, (frame[6].o), (8192));
	clinit_java_net_URI(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_net_URI);
	sp[3].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001/\u0001.js"_j.string, 2, sp[3].o, (frame[2].o));
	init_java_net_URI_java_lang_String(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((func_arc_files_Fi_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_file_R_java_io_File])(ctx, (frame[3].o));
	sp[3].o = (jobject)((func_java_io_File_toURI_R_java_net_URI) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_io_File_toURI_R_java_net_URI])(ctx, sp[3].o);
	init_rhino_module_provider_ModuleSource_java_io_Reader_java_net_URI_java_net_URI_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_Scripts$ScriptModuleProvider[] {
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
	(void *) M_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_ModuleSourceProviderBase_loadSource_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_ModuleSourceProviderBase_loadFromPathArray_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_entityNeedsRevalidation_java_lang_Object_R_boolean,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_loadFromPrivilegedLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_loadFromFallbackLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_loadFromPathList_java_lang_String_java_lang_Object_java_lang_Iterable_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_loadFromActualUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_close_java_net_URLConnection,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_onFailedClosingUrlConnection_java_net_URLConnection_java_io_IOException,
	(void *) M_rhino_module_provider_UrlModuleSourceProvider_openUrlConnection_java_net_URL_R_java_net_URLConnection,
	(void *) M_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_mindustry_mod_Mods$LoadedMod_java_lang_String_arc_files_Fi_java_lang_Object_R_rhino_module_provider_ModuleSource,
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
	{ "loadFromPathArray", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "entityNeedsRevalidation", "(Ljava/lang/Object;)Z" },
	{ "loadFromUri", "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromPrivilegedLocations", "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromFallbackLocations", "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromPathList", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Iterable;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromActualUri", "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "close", "(Ljava/net/URLConnection;)V" },
	{ "onFailedClosingUrlConnection", "(Ljava/net/URLConnection;Ljava/io/IOException;)V" },
	{ "openUrlConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;" },
	{ "loadSource", "(Lmindustry/mod/Mods$LoadedMod;Ljava/lang/String;Larc/files/Fi;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
};

static FieldMetadata fields[] {
	{ "directory", &class_java_util_regex_Pattern, offsetof(mindustry_mod_Scripts$ScriptModuleProvider, F_directory), "Ljava/util/regex/Pattern;", 18 },
	{ "this$0", &class_mindustry_mod_Scripts, offsetof(mindustry_mod_Scripts$ScriptModuleProvider, F_this$0), "Lmindustry/mod/Scripts;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_Scripts$ScriptModuleProvider_mindustry_mod_Scripts, 0, "(Lmindustry/mod/Scripts;)V", 1 },
	{ "loadSource", (intptr_t) M_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource, VTABLE_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 1 },
	{ "loadSource", (intptr_t) M_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_mindustry_mod_Mods$LoadedMod_java_lang_String_arc_files_Fi_java_lang_Object_R_rhino_module_provider_ModuleSource, VTABLE_mindustry_mod_Scripts$ScriptModuleProvider_loadSource_mindustry_mod_Mods$LoadedMod_java_lang_String_arc_files_Fi_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Lmindustry/mod/Mods$LoadedMod;Ljava/lang/String;Larc/files/Fi;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 2 },
};

Class class_mindustry_mod_Scripts$ScriptModuleProvider{
		.nativeName = (intptr_t) "mindustry/mod/Scripts$ScriptModuleProvider",
		.parentClass = (intptr_t) &class_rhino_module_provider_UrlModuleSourceProvider,
		.size = sizeof(mindustry_mod_Scripts$ScriptModuleProvider),
		.classVtable = (intptr_t) vtable_mindustry_mod_Scripts$ScriptModuleProvider,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Scripts$ScriptModuleProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_Scripts$ScriptModuleProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_mod_Scripts,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_Scripts$ScriptModuleProvider = registerClass(&class_mindustry_mod_Scripts$ScriptModuleProvider);

}

