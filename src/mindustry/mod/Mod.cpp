#include "mindustry/mod/Mod.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/MultiPacker.h"
#include "mindustry/mod/Mods.h"
#include "arc/files/Fi.h"
#include "mindustry/Vars.h"
#include "mindustry/mod/Mod.h"
#include "arc/util/CommandHandler.h"

extern "C" {


void mark_mindustry_mod_Mod(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_Mod *) object;
}

void clinit_mindustry_mod_Mod(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_Mod(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mod:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mod(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mod_getConfigFolder_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mod:getConfigFolder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(12);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_getConfigFolder_mindustry_mod_Mod_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_getConfigFolder_mindustry_mod_Mod_R_arc_files_Fi])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mod_getConfig_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mod:getConfig", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_getConfig_mindustry_mod_Mod_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_getConfig_mindustry_mod_Mod_R_arc_files_Fi])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_Mod_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mod:init", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_Mod_loadContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mod:loadContent", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(28);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_Mod_packSprites_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mod:packSprites", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_Mod_registerServerCommands_arc_util_CommandHandler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mod:registerServerCommands", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_Mod_registerClientCommands_arc_util_CommandHandler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mod:registerClientCommands", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_Mod[] {
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
	{ "<init>", (intptr_t) init_mindustry_mod_Mod, 0, "()V", 1 },
	{ "getConfigFolder", (intptr_t) M_mindustry_mod_Mod_getConfigFolder_R_arc_files_Fi, VTABLE_mindustry_mod_Mod_getConfigFolder_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "getConfig", (intptr_t) M_mindustry_mod_Mod_getConfig_R_arc_files_Fi, VTABLE_mindustry_mod_Mod_getConfig_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "init", (intptr_t) M_mindustry_mod_Mod_init, VTABLE_mindustry_mod_Mod_init, "()V", 1 },
	{ "loadContent", (intptr_t) M_mindustry_mod_Mod_loadContent, VTABLE_mindustry_mod_Mod_loadContent, "()V", 1 },
	{ "packSprites", (intptr_t) M_mindustry_mod_Mod_packSprites_mindustry_graphics_MultiPacker, VTABLE_mindustry_mod_Mod_packSprites_mindustry_graphics_MultiPacker, "(Lmindustry/graphics/MultiPacker;)V", 1 },
	{ "registerServerCommands", (intptr_t) M_mindustry_mod_Mod_registerServerCommands_arc_util_CommandHandler, VTABLE_mindustry_mod_Mod_registerServerCommands_arc_util_CommandHandler, "(Larc/util/CommandHandler;)V", 1 },
	{ "registerClientCommands", (intptr_t) M_mindustry_mod_Mod_registerClientCommands_arc_util_CommandHandler, VTABLE_mindustry_mod_Mod_registerClientCommands_arc_util_CommandHandler, "(Larc/util/CommandHandler;)V", 1 },
};

Class class_mindustry_mod_Mod{
		.nativeName = (intptr_t) "mindustry/mod/Mod",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_Mod),
		.classVtable = (intptr_t) vtable_mindustry_mod_Mod,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Mod,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_Mod,
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
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_Mod = registerClass(&class_mindustry_mod_Mod);

}
