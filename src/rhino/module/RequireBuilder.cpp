#include "rhino/module/RequireBuilder.h"
#include "java/lang/Object.h"
#include "rhino/module/RequireBuilder.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "rhino/module/ModuleScriptProvider.h"
#include "rhino/module/Require.h"
#include "rhino/Script.h"

extern "C" {


void mark_rhino_module_RequireBuilder(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_module_RequireBuilder *) object;
	if (self->F_moduleScriptProvider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moduleScriptProvider)->clazz)->markFunction)((jobject) self->F_moduleScriptProvider, mark, depth + 1);
	if (self->F_preExec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_preExec)->clazz)->markFunction)((jobject) self->F_preExec, mark, depth + 1);
	if (self->F_postExec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_postExec)->clazz)->markFunction)((jobject) self->F_postExec, mark, depth + 1);
}

void clinit_rhino_module_RequireBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_module_RequireBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/RequireBuilder:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_RequireBuilder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((rhino_module_RequireBuilder *) NULL_CHECK((frame[0].o)))->F_sandboxed = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_RequireBuilder_setModuleScriptProvider_rhino_module_ModuleScriptProvider_R_rhino_module_RequireBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/RequireBuilder:setModuleScriptProvider", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	((rhino_module_RequireBuilder *) NULL_CHECK((frame[0].o)))->F_moduleScriptProvider = (jref) (frame[1].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_RequireBuilder_setPostExec_rhino_Script_R_rhino_module_RequireBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/RequireBuilder:setPostExec", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	((rhino_module_RequireBuilder *) NULL_CHECK((frame[0].o)))->F_postExec = (jref) (frame[1].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_RequireBuilder_setPreExec_rhino_Script_R_rhino_module_RequireBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/RequireBuilder:setPreExec", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	((rhino_module_RequireBuilder *) NULL_CHECK((frame[0].o)))->F_preExec = (jref) (frame[1].o);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_RequireBuilder_setSandboxed_boolean_R_rhino_module_RequireBuilder(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/RequireBuilder:setSandboxed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(65);
	((rhino_module_RequireBuilder *) NULL_CHECK((frame[0].o)))->F_sandboxed = (frame[1].i);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_RequireBuilder_createRequire_rhino_Context_rhino_Scriptable_R_rhino_module_Require(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/RequireBuilder:createRequire", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	clinit_rhino_module_Require(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_module_Require);
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((rhino_module_RequireBuilder *) NULL_CHECK((frame[0].o)))->F_moduleScriptProvider;
	sp[4].o = (jobject)((rhino_module_RequireBuilder *) NULL_CHECK((frame[0].o)))->F_preExec;
	sp[5].o = (jobject)((rhino_module_RequireBuilder *) NULL_CHECK((frame[0].o)))->F_postExec;
	init_rhino_module_Require_rhino_Context_rhino_Scriptable_rhino_module_ModuleScriptProvider_rhino_Script_rhino_Script_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, ((jint)((rhino_module_RequireBuilder *) NULL_CHECK((frame[0].o)))->F_sandboxed));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_module_RequireBuilder[] {
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
	(void *) M_rhino_module_RequireBuilder_setModuleScriptProvider_rhino_module_ModuleScriptProvider_R_rhino_module_RequireBuilder,
	(void *) M_rhino_module_RequireBuilder_setPostExec_rhino_Script_R_rhino_module_RequireBuilder,
	(void *) M_rhino_module_RequireBuilder_setPreExec_rhino_Script_R_rhino_module_RequireBuilder,
	(void *) M_rhino_module_RequireBuilder_setSandboxed_boolean_R_rhino_module_RequireBuilder,
	(void *) M_rhino_module_RequireBuilder_createRequire_rhino_Context_rhino_Scriptable_R_rhino_module_Require,
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
	{ "setModuleScriptProvider", "(Lrhino/module/ModuleScriptProvider;)Lrhino/module/RequireBuilder;" },
	{ "setPostExec", "(Lrhino/Script;)Lrhino/module/RequireBuilder;" },
	{ "setPreExec", "(Lrhino/Script;)Lrhino/module/RequireBuilder;" },
	{ "setSandboxed", "(Z)Lrhino/module/RequireBuilder;" },
	{ "createRequire", "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/module/Require;" },
};

static FieldMetadata fields[] {
	{ "sandboxed", &class_boolean, offsetof(rhino_module_RequireBuilder, F_sandboxed), "Z", 2 },
	{ "moduleScriptProvider", &class_rhino_module_ModuleScriptProvider, offsetof(rhino_module_RequireBuilder, F_moduleScriptProvider), "Lrhino/module/ModuleScriptProvider;", 2 },
	{ "preExec", &class_rhino_Script, offsetof(rhino_module_RequireBuilder, F_preExec), "Lrhino/Script;", 2 },
	{ "postExec", &class_rhino_Script, offsetof(rhino_module_RequireBuilder, F_postExec), "Lrhino/Script;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_RequireBuilder, 0, "()V", 1 },
	{ "setModuleScriptProvider", (intptr_t) M_rhino_module_RequireBuilder_setModuleScriptProvider_rhino_module_ModuleScriptProvider_R_rhino_module_RequireBuilder, VTABLE_rhino_module_RequireBuilder_setModuleScriptProvider_rhino_module_ModuleScriptProvider_R_rhino_module_RequireBuilder, "(Lrhino/module/ModuleScriptProvider;)Lrhino/module/RequireBuilder;", 1 },
	{ "setPostExec", (intptr_t) M_rhino_module_RequireBuilder_setPostExec_rhino_Script_R_rhino_module_RequireBuilder, VTABLE_rhino_module_RequireBuilder_setPostExec_rhino_Script_R_rhino_module_RequireBuilder, "(Lrhino/Script;)Lrhino/module/RequireBuilder;", 1 },
	{ "setPreExec", (intptr_t) M_rhino_module_RequireBuilder_setPreExec_rhino_Script_R_rhino_module_RequireBuilder, VTABLE_rhino_module_RequireBuilder_setPreExec_rhino_Script_R_rhino_module_RequireBuilder, "(Lrhino/Script;)Lrhino/module/RequireBuilder;", 1 },
	{ "setSandboxed", (intptr_t) M_rhino_module_RequireBuilder_setSandboxed_boolean_R_rhino_module_RequireBuilder, VTABLE_rhino_module_RequireBuilder_setSandboxed_boolean_R_rhino_module_RequireBuilder, "(Z)Lrhino/module/RequireBuilder;", 1 },
	{ "createRequire", (intptr_t) M_rhino_module_RequireBuilder_createRequire_rhino_Context_rhino_Scriptable_R_rhino_module_Require, VTABLE_rhino_module_RequireBuilder_createRequire_rhino_Context_rhino_Scriptable_R_rhino_module_Require, "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/module/Require;", 1 },
};

Class class_rhino_module_RequireBuilder{
		.nativeName = (intptr_t) "rhino/module/RequireBuilder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_module_RequireBuilder),
		.classVtable = (intptr_t) vtable_rhino_module_RequireBuilder,
		.staticInitializer = (intptr_t) clinit_rhino_module_RequireBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_RequireBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_RequireBuilder = registerClass(&class_rhino_module_RequireBuilder);

}
