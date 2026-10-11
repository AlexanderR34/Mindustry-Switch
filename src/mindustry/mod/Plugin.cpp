#include "mindustry/mod/Plugin.h"
#include "java/lang/Object.h"
#include "mindustry/mod/Mod.h"

extern "C" {


void mark_mindustry_mod_Plugin(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_mod_Mod(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_mod_Plugin *) object;
}

void clinit_mindustry_mod_Plugin(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_mod_Mod(ctx);
}

void init_mindustry_mod_Plugin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Plugin:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Plugin(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(4);
	init_mindustry_mod_Mod(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_Plugin[] {
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
	(void *) M_mindustry_mod_Mod_getConfigFolder_R_arc_files_Fi,
	(void *) M_mindustry_mod_Mod_getConfig_R_arc_files_Fi,
	(void *) M_mindustry_mod_Mod_init,
	(void *) M_mindustry_mod_Mod_loadContent,
	(void *) M_mindustry_mod_Mod_packSprites_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_mod_Mod_registerServerCommands_arc_util_CommandHandler,
	(void *) M_mindustry_mod_Mod_registerClientCommands_arc_util_CommandHandler,
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
	{ "getConfigFolder", "()Larc/files/Fi;" },
	{ "getConfig", "()Larc/files/Fi;" },
	{ "init", "()V" },
	{ "loadContent", "()V" },
	{ "packSprites", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "registerServerCommands", "(Larc/util/CommandHandler;)V" },
	{ "registerClientCommands", "(Larc/util/CommandHandler;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_Plugin, 0, "()V", 1 },
};

Class class_mindustry_mod_Plugin{
		.nativeName = (intptr_t) "mindustry/mod/Plugin",
		.parentClass = (intptr_t) &class_mindustry_mod_Mod,
		.size = sizeof(mindustry_mod_Plugin),
		.classVtable = (intptr_t) vtable_mindustry_mod_Plugin,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Plugin,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_Plugin,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_Plugin = registerClass(&class_mindustry_mod_Plugin);

}
