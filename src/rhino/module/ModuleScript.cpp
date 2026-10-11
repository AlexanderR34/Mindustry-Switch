#include "rhino/module/ModuleScript.h"
#include "java/lang/Object.h"
#include "rhino/module/ModuleScript.h"
#include "java/net/URI.h"
#include "rhino/Script.h"

extern "C" {


void mark_rhino_module_ModuleScript(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_module_ModuleScript *) object;
	if (self->F_script)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_script)->clazz)->markFunction)((jobject) self->F_script, mark, depth + 1);
	if (self->F_uri)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uri)->clazz)->markFunction)((jobject) self->F_uri, mark, depth + 1);
	if (self->F_base)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_base)->clazz)->markFunction)((jobject) self->F_base, mark, depth + 1);
}

void clinit_rhino_module_ModuleScript(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_module_ModuleScript_rhino_Script_java_net_URI_java_net_URI(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/ModuleScript:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_ModuleScript(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((rhino_module_ModuleScript *) NULL_CHECK((frame[0].o)))->F_script = (jref) (frame[1].o);
	LINE_NUMBER(27);
	((rhino_module_ModuleScript *) NULL_CHECK((frame[0].o)))->F_uri = (jref) (frame[2].o);
	LINE_NUMBER(28);
	((rhino_module_ModuleScript *) NULL_CHECK((frame[0].o)))->F_base = (jref) (frame[3].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_ModuleScript_getScript_R_rhino_Script(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/ModuleScript:getScript", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((rhino_module_ModuleScript *) NULL_CHECK((frame[0].o)))->F_script;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_ModuleScript_getUri_R_java_net_URI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/ModuleScript:getUri", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((rhino_module_ModuleScript *) NULL_CHECK((frame[0].o)))->F_uri;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_ModuleScript_getBase_R_java_net_URI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/ModuleScript:getBase", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((rhino_module_ModuleScript *) NULL_CHECK((frame[0].o)))->F_base;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_module_ModuleScript_isSandboxed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/ModuleScript:isSandboxed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((rhino_module_ModuleScript *) NULL_CHECK((frame[0].o)))->F_base;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_module_ModuleScript *) NULL_CHECK((frame[0].o)))->F_uri;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_module_ModuleScript *) NULL_CHECK((frame[0].o)))->F_base;
	sp[1].o = (jobject)((rhino_module_ModuleScript *) NULL_CHECK((frame[0].o)))->F_uri;
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_java_net_URI_relativize_java_net_URI_R_java_net_URI) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_relativize_java_net_URI_R_java_net_URI])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_net_URI_isAbsolute_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_isAbsolute_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_module_ModuleScript[] {
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
	(void *) M_rhino_module_ModuleScript_getScript_R_rhino_Script,
	(void *) M_rhino_module_ModuleScript_getUri_R_java_net_URI,
	(void *) M_rhino_module_ModuleScript_getBase_R_java_net_URI,
	(void *) M_rhino_module_ModuleScript_isSandboxed_R_boolean,
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
	{ "getScript", "()Lrhino/Script;" },
	{ "getUri", "()Ljava/net/URI;" },
	{ "getBase", "()Ljava/net/URI;" },
	{ "isSandboxed", "()Z" },
};

static FieldMetadata fields[] {
	{ "script", &class_rhino_Script, offsetof(rhino_module_ModuleScript, F_script), "Lrhino/Script;", 18 },
	{ "uri", &class_java_net_URI, offsetof(rhino_module_ModuleScript, F_uri), "Ljava/net/URI;", 18 },
	{ "base", &class_java_net_URI, offsetof(rhino_module_ModuleScript, F_base), "Ljava/net/URI;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_ModuleScript_rhino_Script_java_net_URI_java_net_URI, 0, "(Lrhino/Script;Ljava/net/URI;Ljava/net/URI;)V", 1 },
	{ "getScript", (intptr_t) M_rhino_module_ModuleScript_getScript_R_rhino_Script, VTABLE_rhino_module_ModuleScript_getScript_R_rhino_Script, "()Lrhino/Script;", 1 },
	{ "getUri", (intptr_t) M_rhino_module_ModuleScript_getUri_R_java_net_URI, VTABLE_rhino_module_ModuleScript_getUri_R_java_net_URI, "()Ljava/net/URI;", 1 },
	{ "getBase", (intptr_t) M_rhino_module_ModuleScript_getBase_R_java_net_URI, VTABLE_rhino_module_ModuleScript_getBase_R_java_net_URI, "()Ljava/net/URI;", 1 },
	{ "isSandboxed", (intptr_t) M_rhino_module_ModuleScript_isSandboxed_R_boolean, VTABLE_rhino_module_ModuleScript_isSandboxed_R_boolean, "()Z", 1 },
};

Class class_rhino_module_ModuleScript{
		.nativeName = (intptr_t) "rhino/module/ModuleScript",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_module_ModuleScript),
		.classVtable = (intptr_t) vtable_rhino_module_ModuleScript,
		.staticInitializer = (intptr_t) clinit_rhino_module_ModuleScript,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_ModuleScript,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_ModuleScript = registerClass(&class_rhino_module_ModuleScript);

}
