#include "rhino/module/provider/SoftCachingModuleScriptProvider.h"
#include "rhino/module/provider/ModuleSourceProvider.h"
#include "rhino/module/ModuleScript.h"
#include "java/lang/ref/Reference.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "java/util/Map.h"
#include "java/lang/Object.h"
#include "rhino/module/provider/CachingModuleScriptProviderBase.h"
#include "java/lang/String.h"
#include "java/lang/ref/ReferenceQueue.h"
#include "java/util/concurrent/ConcurrentHashMap.h"
#include "java/util/concurrent/ConcurrentMap.h"
#include "java/net/URI.h"
#include "rhino/module/provider/SoftCachingModuleScriptProvider_ScriptReference.h"
#include "rhino/module/provider/CachingModuleScriptProviderBase_CachedModuleScript.h"
#include "rhino/Script.h"
#include "rhino/module/provider/SoftCachingModuleScriptProvider.h"

extern "C" {


void mark_rhino_module_provider_SoftCachingModuleScriptProvider(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_module_provider_CachingModuleScriptProviderBase(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_module_provider_SoftCachingModuleScriptProvider *) object;
	if (self->F_scriptRefQueue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scriptRefQueue)->clazz)->markFunction)((jobject) self->F_scriptRefQueue, mark, depth + 1);
	if (self->F_scripts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scripts)->clazz)->markFunction)((jobject) self->F_scripts, mark, depth + 1);
}

void clinit_rhino_module_provider_SoftCachingModuleScriptProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_module_provider_CachingModuleScriptProviderBase(ctx);
}

void init_rhino_module_provider_SoftCachingModuleScriptProvider_rhino_module_provider_ModuleSourceProvider(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/SoftCachingModuleScriptProvider:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_SoftCachingModuleScriptProvider(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	init_rhino_module_provider_CachingModuleScriptProviderBase_rhino_module_provider_ModuleSourceProvider(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_java_lang_ref_ReferenceQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_ref_ReferenceQueue);
	init_java_lang_ref_ReferenceQueue(ctx, sp[1].o);
	((rhino_module_provider_SoftCachingModuleScriptProvider *) NULL_CHECK(sp[0].o))->F_scriptRefQueue = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ConcurrentHashMap);
	jint temp0 = 16;
	jfloat temp1 = jfloat(0.75f);
	jint temp2 = (jint)SM_rhino_module_provider_CachingModuleScriptProviderBase_getConcurrencyLevel_R_int(ctx);
	init_java_util_concurrent_ConcurrentHashMap_int_float_int(ctx, sp[1].o, temp0, temp1, temp2);
	((rhino_module_provider_SoftCachingModuleScriptProvider *) NULL_CHECK(sp[0].o))->F_scripts = (jref) sp[1].o;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_SoftCachingModuleScriptProvider_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/SoftCachingModuleScriptProvider:getModuleScript", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
label_0:;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((rhino_module_provider_SoftCachingModuleScriptProvider *) NULL_CHECK((frame[0].o)))->F_scriptRefQueue;
	sp[0].o = (jobject)((func_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference])(ctx, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference, sp[0].o));
	LINE_NUMBER(40);
	if ((frame[6].o) != nullptr) goto label_2;
	}
	LINE_NUMBER(41);
	goto label_4;
label_2:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((rhino_module_provider_SoftCachingModuleScriptProvider *) NULL_CHECK((frame[0].o)))->F_scripts;
	sp[1].o = (jobject)((func_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getModuleId_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getModuleId_R_java_lang_String])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_util_concurrent_ConcurrentMap_remove_java_lang_Object_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ConcurrentMap, INDEX_java_util_concurrent_ConcurrentMap_remove_java_lang_Object_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[6].o));
	LINE_NUMBER(44);
	goto label_0;
	}
label_4:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)M_rhino_module_provider_CachingModuleScriptProviderBase_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_SoftCachingModuleScriptProvider_getLoadedModule_java_lang_String_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/SoftCachingModuleScriptProvider:getLoadedModule", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((rhino_module_provider_SoftCachingModuleScriptProvider *) NULL_CHECK((frame[0].o)))->F_scripts;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference, sp[0].o));
	LINE_NUMBER(51);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getCachedModuleScript_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_getCachedModuleScript_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript])(ctx, (frame[2].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_rhino_module_provider_SoftCachingModuleScriptProvider_putLoadedModule_java_lang_String_rhino_module_ModuleScript_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/SoftCachingModuleScriptProvider:putLoadedModule", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((rhino_module_provider_SoftCachingModuleScriptProvider *) NULL_CHECK((frame[0].o)))->F_scripts;
	sp[1].o = frame[1].o;
	clinit_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference(ctx);
	sp[2].o = gcAlloc(ctx, &class_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference);
	sp[3].o = (jobject)((func_rhino_module_ModuleScript_getScript_R_rhino_Script) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_module_ModuleScript_getScript_R_rhino_Script])(ctx, (frame[2].o));
	sp[4].o = frame[1].o;
	sp[5].o = frame[2].o;
	LINE_NUMBER(58);
	sp[5].o = (jobject)((func_rhino_module_ModuleScript_getUri_R_java_net_URI) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_rhino_module_ModuleScript_getUri_R_java_net_URI])(ctx, sp[5].o);
	sp[6].o = (jobject)((func_rhino_module_ModuleScript_getBase_R_java_net_URI) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_module_ModuleScript_getBase_R_java_net_URI])(ctx, (frame[2].o));
	sp[7].o = frame[3].o;
	sp[8].o = (jobject)((rhino_module_provider_SoftCachingModuleScriptProvider *) NULL_CHECK((frame[0].o)))->F_scriptRefQueue;
	init_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference_rhino_Script_java_lang_String_java_net_URI_java_net_URI_java_lang_Object_java_lang_ref_ReferenceQueue(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o);
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_module_provider_SoftCachingModuleScriptProvider[] {
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
	(void *) M_rhino_module_provider_SoftCachingModuleScriptProvider_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript,
	(void *) M_rhino_module_provider_SoftCachingModuleScriptProvider_putLoadedModule_java_lang_String_rhino_module_ModuleScript_java_lang_Object,
	(void *) M_rhino_module_provider_SoftCachingModuleScriptProvider_getLoadedModule_java_lang_String_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript,
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
	{ "getModuleScript", "(Lrhino/Context;Ljava/lang/String;Ljava/net/URI;Ljava/net/URI;Lrhino/Scriptable;)Lrhino/module/ModuleScript;" },
	{ "putLoadedModule", "(Ljava/lang/String;Lrhino/module/ModuleScript;Ljava/lang/Object;)V" },
	{ "getLoadedModule", "(Ljava/lang/String;)Lrhino/module/provider/CachingModuleScriptProviderBase$CachedModuleScript;" },
};

static jclass innerClasses[] {
	&class_rhino_module_provider_SoftCachingModuleScriptProvider$ScriptReference,
};

static FieldMetadata fields[] {
	{ "scriptRefQueue", &class_java_lang_ref_ReferenceQueue, offsetof(rhino_module_provider_SoftCachingModuleScriptProvider, F_scriptRefQueue), "Ljava/lang/ref/ReferenceQueue;", 130 },
	{ "scripts", &class_java_util_concurrent_ConcurrentMap, offsetof(rhino_module_provider_SoftCachingModuleScriptProvider, F_scripts), "Ljava/util/concurrent/ConcurrentMap;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_provider_SoftCachingModuleScriptProvider_rhino_module_provider_ModuleSourceProvider, 0, "(Lrhino/module/provider/ModuleSourceProvider;)V", 1 },
	{ "getModuleScript", (intptr_t) M_rhino_module_provider_SoftCachingModuleScriptProvider_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript, VTABLE_rhino_module_provider_SoftCachingModuleScriptProvider_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript, "(Lrhino/Context;Ljava/lang/String;Ljava/net/URI;Ljava/net/URI;Lrhino/Scriptable;)Lrhino/module/ModuleScript;", 1 },
	{ "getLoadedModule", (intptr_t) M_rhino_module_provider_SoftCachingModuleScriptProvider_getLoadedModule_java_lang_String_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript, VTABLE_rhino_module_provider_SoftCachingModuleScriptProvider_getLoadedModule_java_lang_String_R_rhino_module_provider_CachingModuleScriptProviderBase$CachedModuleScript, "(Ljava/lang/String;)Lrhino/module/provider/CachingModuleScriptProviderBase$CachedModuleScript;", 4 },
	{ "putLoadedModule", (intptr_t) M_rhino_module_provider_SoftCachingModuleScriptProvider_putLoadedModule_java_lang_String_rhino_module_ModuleScript_java_lang_Object, VTABLE_rhino_module_provider_SoftCachingModuleScriptProvider_putLoadedModule_java_lang_String_rhino_module_ModuleScript_java_lang_Object, "(Ljava/lang/String;Lrhino/module/ModuleScript;Ljava/lang/Object;)V", 4 },
};

Class class_rhino_module_provider_SoftCachingModuleScriptProvider{
		.nativeName = (intptr_t) "rhino/module/provider/SoftCachingModuleScriptProvider",
		.parentClass = (intptr_t) &class_rhino_module_provider_CachingModuleScriptProviderBase,
		.size = sizeof(rhino_module_provider_SoftCachingModuleScriptProvider),
		.classVtable = (intptr_t) vtable_rhino_module_provider_SoftCachingModuleScriptProvider,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_SoftCachingModuleScriptProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_SoftCachingModuleScriptProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_SoftCachingModuleScriptProvider = registerClass(&class_rhino_module_provider_SoftCachingModuleScriptProvider);

}
