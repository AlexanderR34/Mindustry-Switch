#include "mindustry/core/Platform.h"
#include "mindustry/net/ArcNetProvider.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "arc/Core.h"
#include "arc/math/Rand.h"
#include "java/net/URL.h"
#include "rhino/Context.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/core/Platform_FileWriter.h"
#include "mindustry/core/Platform.h"
#include "arc/util/serialization/Base64Coder.h"
#include "mindustry/core/Platform_1.h"
#include "arc/files/Fi.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/URI.h"
#include "arc/struct/Seq.h"
#include "mindustry/mod/Scripts.h"
#include "mindustry/type/Publishable.h"
#include "mindustry/net/Net_NetProvider.h"
#include "arc/Settings.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "java/lang/ClassLoader.h"

extern "C" {


void mark_mindustry_core_Platform(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_Platform *) object;
}

void clinit_mindustry_core_Platform(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_core_Platform_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:loadJar", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(21);
	clinit_mindustry_core_Platform$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_Platform$1);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)createArray(ctx, &class_java_net_URL, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((func_arc_files_Fi_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_file_R_java_io_File])(ctx, (frame[1].o));
	sp[3].o = (jobject)((func_java_io_File_toURI_R_java_net_URI) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_io_File_toURI_R_java_net_URI])(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_net_URI_toURL_R_java_net_URL) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_net_URI_toURL_R_java_net_URL])(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	init_mindustry_core_Platform$1_mindustry_core_Platform_Array1_java_net_URL_java_lang_ClassLoader_java_lang_ClassLoader(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_updateLobby(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:updateLobby", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_inviteFriends(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:inviteFriends", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_publish_mindustry_type_Publishable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:publish", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_viewListing_mindustry_type_Publishable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:viewListing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_viewListingID_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:viewListingID", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:getWorkshopContent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_openWorkshop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:openWorkshop", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_Platform_getNet_R_mindustry_net_Net$NetProvider(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:getNet", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	clinit_mindustry_net_ArcNetProvider(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ArcNetProvider);
	init_mindustry_net_ArcNetProvider(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_Platform_createScripts_R_mindustry_mod_Scripts(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:createScripts", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	clinit_mindustry_mod_Scripts(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_Scripts);
	init_mindustry_mod_Scripts(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_Platform_getScriptContext_R_rhino_Context(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:getScriptContext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(91);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	sp->o = (jobject)SM_rhino_Context_enter_R_rhino_Context(ctx);
	sp++;
	INST_ASTORE(1);
label_2:;
	{
	LINE_NUMBER(92);
	((func_rhino_Context_setOptimizationLevel_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_setOptimizationLevel_int])(ctx, (frame[1].o), (9));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_updateRPC(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:updateRPC", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_Platform_getUUID_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:getUUID", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uuid"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(103);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (8));
	frame[2].o = sp[0].o;
	LINE_NUMBER(105);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	((func_arc_math_Rand_nextBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextBytes_Array1_byte])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(106);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_R_Array1_char(ctx, (frame[2].o));
	init_java_lang_String_Array1_char(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(107);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uuid"_j))), (frame[1].o));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_shareFile_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:shareFile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:showFileChooser", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not implemented on this platform!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:hide", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_beginForceLandscape(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:beginForceLandscape", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Platform_endForceLandscape(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform:endForceLandscape", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_core_Platform[] {
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
	(void *) M_mindustry_core_Platform_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader,
	(void *) M_mindustry_core_Platform_updateLobby,
	(void *) M_mindustry_core_Platform_inviteFriends,
	(void *) M_mindustry_core_Platform_publish_mindustry_type_Publishable,
	(void *) M_mindustry_core_Platform_viewListing_mindustry_type_Publishable,
	(void *) M_mindustry_core_Platform_viewListingID_java_lang_String,
	(void *) M_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq,
	(void *) M_mindustry_core_Platform_openWorkshop,
	(void *) M_mindustry_core_Platform_getNet_R_mindustry_net_Net$NetProvider,
	(void *) M_mindustry_core_Platform_createScripts_R_mindustry_mod_Scripts,
	(void *) M_mindustry_core_Platform_getScriptContext_R_rhino_Context,
	(void *) M_mindustry_core_Platform_updateRPC,
	(void *) M_mindustry_core_Platform_getUUID_R_java_lang_String,
	(void *) M_mindustry_core_Platform_shareFile_arc_files_Fi,
	(void *) M_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams,
	(void *) M_mindustry_core_Platform_hide,
	(void *) M_mindustry_core_Platform_beginForceLandscape,
	(void *) M_mindustry_core_Platform_endForceLandscape,
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
	{ "loadJar", "(Larc/files/Fi;Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;" },
	{ "updateLobby", "()V" },
	{ "inviteFriends", "()V" },
	{ "publish", "(Lmindustry/type/Publishable;)V" },
	{ "viewListing", "(Lmindustry/type/Publishable;)V" },
	{ "viewListingID", "(Ljava/lang/String;)V" },
	{ "getWorkshopContent", "(Ljava/lang/Class;)Larc/struct/Seq;" },
	{ "openWorkshop", "()V" },
	{ "getNet", "()Lmindustry/net/Net$NetProvider;" },
	{ "createScripts", "()Lmindustry/mod/Scripts;" },
	{ "getScriptContext", "()Lrhino/Context;" },
	{ "updateRPC", "()V" },
	{ "getUUID", "()Ljava/lang/String;" },
	{ "shareFile", "(Larc/files/Fi;)V" },
	{ "showFileChooser", "(Lmindustry/ui/FileChooser$FileChooserParams;)V" },
	{ "hide", "()V" },
	{ "beginForceLandscape", "()V" },
	{ "endForceLandscape", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_core_Platform$FileWriter,
};

static MethodMetadata methods[] {
	{ "loadJar", (intptr_t) M_mindustry_core_Platform_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader, INDEX_mindustry_core_Platform_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader, "(Larc/files/Fi;Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;", 1 },
	{ "updateLobby", (intptr_t) M_mindustry_core_Platform_updateLobby, INDEX_mindustry_core_Platform_updateLobby, "()V", 1 },
	{ "inviteFriends", (intptr_t) M_mindustry_core_Platform_inviteFriends, INDEX_mindustry_core_Platform_inviteFriends, "()V", 1 },
	{ "publish", (intptr_t) M_mindustry_core_Platform_publish_mindustry_type_Publishable, INDEX_mindustry_core_Platform_publish_mindustry_type_Publishable, "(Lmindustry/type/Publishable;)V", 1 },
	{ "viewListing", (intptr_t) M_mindustry_core_Platform_viewListing_mindustry_type_Publishable, INDEX_mindustry_core_Platform_viewListing_mindustry_type_Publishable, "(Lmindustry/type/Publishable;)V", 1 },
	{ "viewListingID", (intptr_t) M_mindustry_core_Platform_viewListingID_java_lang_String, INDEX_mindustry_core_Platform_viewListingID_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getWorkshopContent", (intptr_t) M_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq, INDEX_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq, "(Ljava/lang/Class;)Larc/struct/Seq;", 1 },
	{ "openWorkshop", (intptr_t) M_mindustry_core_Platform_openWorkshop, INDEX_mindustry_core_Platform_openWorkshop, "()V", 1 },
	{ "getNet", (intptr_t) M_mindustry_core_Platform_getNet_R_mindustry_net_Net$NetProvider, INDEX_mindustry_core_Platform_getNet_R_mindustry_net_Net$NetProvider, "()Lmindustry/net/Net$NetProvider;", 1 },
	{ "createScripts", (intptr_t) M_mindustry_core_Platform_createScripts_R_mindustry_mod_Scripts, INDEX_mindustry_core_Platform_createScripts_R_mindustry_mod_Scripts, "()Lmindustry/mod/Scripts;", 1 },
	{ "getScriptContext", (intptr_t) M_mindustry_core_Platform_getScriptContext_R_rhino_Context, INDEX_mindustry_core_Platform_getScriptContext_R_rhino_Context, "()Lrhino/Context;", 1 },
	{ "updateRPC", (intptr_t) M_mindustry_core_Platform_updateRPC, INDEX_mindustry_core_Platform_updateRPC, "()V", 1 },
	{ "getUUID", (intptr_t) M_mindustry_core_Platform_getUUID_R_java_lang_String, INDEX_mindustry_core_Platform_getUUID_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "shareFile", (intptr_t) M_mindustry_core_Platform_shareFile_arc_files_Fi, INDEX_mindustry_core_Platform_shareFile_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "showFileChooser", (intptr_t) M_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams, INDEX_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams, "(Lmindustry/ui/FileChooser$FileChooserParams;)V", 1 },
	{ "hide", (intptr_t) M_mindustry_core_Platform_hide, INDEX_mindustry_core_Platform_hide, "()V", 1 },
	{ "beginForceLandscape", (intptr_t) M_mindustry_core_Platform_beginForceLandscape, INDEX_mindustry_core_Platform_beginForceLandscape, "()V", 1 },
	{ "endForceLandscape", (intptr_t) M_mindustry_core_Platform_endForceLandscape, INDEX_mindustry_core_Platform_endForceLandscape, "()V", 1 },
};

Class class_mindustry_core_Platform{
		.nativeName = (intptr_t) "mindustry/core/Platform",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_Platform),
		.classVtable = (intptr_t) vtable_mindustry_core_Platform,
		.staticInitializer = (intptr_t) clinit_mindustry_core_Platform,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_core_Platform,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_Platform = registerClass(&class_mindustry_core_Platform);

}
