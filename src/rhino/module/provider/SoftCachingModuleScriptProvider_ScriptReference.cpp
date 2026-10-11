#include "rhino/module/provider/SoftCachingModuleScriptProvider_ScriptReference.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ref/ReferenceQueue.h"
#include "rhino/module/ModuleScript.h"
#include "java/net/URI.h"
#include "rhino/module/provider/SoftCachingModuleScriptProvider_ScriptReference.h"
#include "java/lang/ref/WeakReference.h"
#include "rhino/module/provider/CachingModuleScriptProviderBase_CachedModuleScript.h"
#include "java/lang/ref/SoftReference.h"
#include "rhino/Script.h"
#include "rhino/module/provider/SoftCachingModuleScriptProvider.h"

extern "C" {


void mark_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ref_SoftReference(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference *) object;
	if (self->F_moduleId)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moduleId)->clazz)->markFunction)((jobject) self->F_moduleId, mark, depth + 1);
	if (self->F_uri)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uri)->clazz)->markFunction)((jobject) self->F_uri, mark, depth + 1);
	if (self->F_base)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_base)->clazz)->markFunction)((jobject) self->F_base, mark, depth + 1);
	if (self->F_validator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_validator)->clazz)->markFunction)((jobject) self->F_validator, mark, depth + 1);
}

void clinit_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ref_SoftReference(ctx);
}

void init_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_rhino_Script_java_lang_String_java_net_URI_java_net_URI_java_lang_Object_java_lang_ref_ReferenceQueue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/SoftCachingModuleScriptProvider$ScriptReference:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(70);
	init_java_lang_ref_SoftReference_java_lang_Object_java_lang_ref_ReferenceQueue(ctx, (frame[0].o), (frame[1].o), (frame[6].o));
	LINE_NUMBER(71);
	((rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference *) NULL_CHECK((frame[0].o)))->F_moduleId = (jref) (frame[2].o);
	LINE_NUMBER(72);
	((rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference *) NULL_CHECK((frame[0].o)))->F_uri = (jref) (frame[3].o);
	LINE_NUMBER(73);
	((rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference *) NULL_CHECK((frame[0].o)))->F_base = (jref) (frame[4].o);
	LINE_NUMBER(74);
	((rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference *) NULL_CHECK((frame[0].o)))->F_validator = (jref) (frame[5].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getCachedModuleScript_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/SoftCachingModuleScriptProvider$ScriptReference:getCachedModuleScript", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_get_R_java_lang_Object])(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_rhino_Script, sp[0].o));
	LINE_NUMBER(79);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(82);
	clinit_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript);
	clinit_rhino_module_ModuleScript(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_module_ModuleScript);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference *) NULL_CHECK((frame[0].o)))->F_uri;
	sp[4].o = (jobject)((rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference *) NULL_CHECK((frame[0].o)))->F_base;
	init_rhino_module_ModuleScript_rhino_Script_java_net_URI_java_net_URI(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[2].o = (jobject)((rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference *) NULL_CHECK((frame[0].o)))->F_validator;
	init_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript_rhino_module_ModuleScript_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getModuleId_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/SoftCachingModuleScriptProvider$ScriptReference:getModuleId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference *) NULL_CHECK((frame[0].o)))->F_moduleId;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_ref_WeakReference_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_ref_WeakReference_clear,
	(void *) M_java_lang_ref_WeakReference_get_R_java_lang_Object,
	(void *) M_java_lang_ref_WeakReference_refersTo_java_lang_Object_R_boolean,
	(void *) M_java_lang_ref_WeakReference_init_java_lang_Object,
	(void *) M_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getCachedModuleScript_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript,
	(void *) M_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getModuleId_R_java_lang_String,
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
	{ "clear", "()V" },
	{ "get", "()Ljava/lang/Object;" },
	{ "refersTo", "(Ljava/lang/Object;)Z" },
	{ "init", "(Ljava/lang/Object;)V" },
	{ "getCachedModuleScript", "()Lrhino/module/provider/CachingModuleScriptProviderBase$CachedModuleScript;" },
	{ "getModuleId", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "moduleId", &class_java_lang_String, offsetof(rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference, F_moduleId), "Ljava/lang/String;", 18 },
	{ "uri", &class_java_net_URI, offsetof(rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference, F_uri), "Ljava/net/URI;", 18 },
	{ "base", &class_java_net_URI, offsetof(rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference, F_base), "Ljava/net/URI;", 18 },
	{ "validator", &class_java_lang_Object, offsetof(rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference, F_validator), "Ljava/lang/Object;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_rhino_Script_java_lang_String_java_net_URI_java_net_URI_java_lang_Object_java_lang_ref_ReferenceQueue, 0, "(Lrhino/Script;Ljava/lang/String;Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", 0 },
	{ "getCachedModuleScript", (intptr_t) M_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getCachedModuleScript_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript, VTABLE_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getCachedModuleScript_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript, "()Lrhino/module/provider/CachingModuleScriptProviderBase$CachedModuleScript;", 0 },
	{ "getModuleId", (intptr_t) M_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getModuleId_R_java_lang_String, VTABLE_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getModuleId_R_java_lang_String, "()Ljava/lang/String;", 0 },
};

Class class_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference{
		.nativeName = (intptr_t) "rhino/module/provider/SoftCachingModuleScriptProvider$ScriptReference",
		.parentClass = (intptr_t) &class_java_lang_ref_SoftReference,
		.size = sizeof(rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference),
		.classVtable = (intptr_t) vtable_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_module_provider_SoftCachingModuleScriptProvider,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference = registerClass(&class_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference);

}

