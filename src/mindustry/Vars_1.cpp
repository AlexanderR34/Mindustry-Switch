#include "mindustry/Vars_1.h"
#include "java/lang/Object.h"
#include "mindustry/core/Platform.h"

extern "C" {


void mark_mindustry_Vars$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_Vars$1 *) object;
}

void clinit_mindustry_Vars$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_Vars$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars$1:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars$1(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(274);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_Vars$1[] {
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

static jclass interfaces[] { &class_mindustry_core_Platform, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_Vars$1, 0, "()V", 0 },
};

Class class_mindustry_Vars$1{
		.nativeName = (intptr_t) "mindustry/Vars$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_Vars$1),
		.classVtable = (intptr_t) vtable_mindustry_Vars$1,
		.staticInitializer = (intptr_t) clinit_mindustry_Vars$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_Vars$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_Vars$1 = registerClass(&class_mindustry_Vars$1);

}

