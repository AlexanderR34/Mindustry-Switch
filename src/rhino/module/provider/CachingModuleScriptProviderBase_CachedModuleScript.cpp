#include "rhino/module/provider/CachingModuleScriptProviderBase_CachedModuleScript.h"
#include "java/lang/Object.h"
#include "rhino/module/provider/CachingModuleScriptProviderBase.h"
#include "rhino/module/ModuleScript.h"
#include "rhino/module/provider/CachingModuleScriptProviderBase_CachedModuleScript.h"

extern "C" {


void mark_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript *) object;
	if (self->F_moduleScript)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moduleScript)->clazz)->markFunction)((jobject) self->F_moduleScript, mark, depth + 1);
	if (self->F_validator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_validator)->clazz)->markFunction)((jobject) self->F_validator, mark, depth + 1);
}

void clinit_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_rhino_module_ModuleScript_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/CachingModuleScriptProviderBase$CachedModuleScript:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(124);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(125);
	((rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript *) NULL_CHECK((frame[0].o)))->F_moduleScript = (jref) (frame[1].o);
	LINE_NUMBER(126);
	((rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript *) NULL_CHECK((frame[0].o)))->F_validator = (jref) (frame[2].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getModule_R_rhino_module_ModuleScript(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/CachingModuleScriptProviderBase$CachedModuleScript:getModule", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript *) NULL_CHECK((frame[0].o)))->F_moduleScript;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getValidator_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/CachingModuleScriptProviderBase$CachedModuleScript:getValidator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript *) NULL_CHECK((frame[0].o)))->F_validator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript[] {
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
	(void *) M_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getModule_R_rhino_module_ModuleScript,
	(void *) M_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getValidator_R_java_lang_Object,
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
	{ "getModule", "()Lrhino/module/ModuleScript;" },
	{ "getValidator", "()Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "moduleScript", &class_rhino_module_ModuleScript, offsetof(rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript, F_moduleScript), "Lrhino/module/ModuleScript;", 18 },
	{ "validator", &class_java_lang_Object, offsetof(rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript, F_validator), "Ljava/lang/Object;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_rhino_module_ModuleScript_java_lang_Object, 0, "(Lrhino/module/ModuleScript;Ljava/lang/Object;)V", 1 },
	{ "getModule", (intptr_t) M_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getModule_R_rhino_module_ModuleScript, VTABLE_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getModule_R_rhino_module_ModuleScript, "()Lrhino/module/ModuleScript;", 0 },
	{ "getValidator", (intptr_t) M_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getValidator_R_java_lang_Object, VTABLE_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_getValidator_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
};

Class class_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript{
		.nativeName = (intptr_t) "rhino/module/provider/CachingModuleScriptProviderBase$CachedModuleScript",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript),
		.classVtable = (intptr_t) vtable_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_module_provider_CachingModuleScriptProviderBase,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript = registerClass(&class_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript);

}

