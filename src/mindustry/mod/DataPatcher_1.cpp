#include "mindustry/mod/DataPatcher_1.h"
#include "mindustry/mod/DataPatcher_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/mod/Mods_ModMeta.h"

extern "C" {


void mark_mindustry_mod_DataPatcher$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_mod_Mods$ModMeta(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_mod_DataPatcher$1 *) object;
}

void clinit_mindustry_mod_DataPatcher$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_mod_Mods$ModMeta(ctx);
}

void init_mindustry_mod_DataPatcher$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher$1(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(34);
	init_mindustry_mod_Mods$ModMeta(ctx, (frame[0].o));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"dp"_j));
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[1].o))->F_internalName = (jref) sp[2].o;
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[2].o;
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_DataPatcher$1[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_mod_Mods$ModMeta_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_mod_Mods$ModMeta_isBlacklisted_R_boolean,
	(void *) M_mindustry_mod_Mods$ModMeta_shortDescription_R_java_lang_String,
	(void *) M_mindustry_mod_Mods$ModMeta_cleanup,
	(void *) M_mindustry_mod_Mods$ModMeta_getMinMajor_R_int,
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
	{ "isBlacklisted", "()Z" },
	{ "shortDescription", "()Ljava/lang/String;" },
	{ "cleanup", "()V" },
	{ "getMinMajor", "()I" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_DataPatcher$1, 0, "()V", 0 },
};

Class class_mindustry_mod_DataPatcher$1{
		.nativeName = (intptr_t) "mindustry/mod/DataPatcher$1",
		.parentClass = (intptr_t) &class_mindustry_mod_Mods$ModMeta,
		.size = sizeof(mindustry_mod_DataPatcher$1),
		.classVtable = (intptr_t) vtable_mindustry_mod_DataPatcher$1,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_DataPatcher$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_DataPatcher$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_mod_DataPatcher$1 = registerClass(&class_mindustry_mod_DataPatcher$1);

}

