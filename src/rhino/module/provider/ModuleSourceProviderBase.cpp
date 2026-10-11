#include "rhino/module/provider/ModuleSourceProviderBase.h"
#include "rhino/module/provider/ModuleSourceProvider.h"
#include "java/net/MalformedURLException.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Scriptable.h"
#include "java/net/URISyntaxException.h"
#include "rhino/module/provider/ModuleSourceProviderBase.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "java/net/URI.h"
#include "rhino/module/provider/ModuleSource.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_rhino_module_provider_ModuleSourceProviderBase(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_module_provider_ModuleSourceProviderBase *) object;
}

void clinit_rhino_module_provider_ModuleSourceProviderBase(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_module_provider_ModuleSourceProviderBase(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSourceProviderBase:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_ModuleSourceProviderBase(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_ModuleSourceProviderBase_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSourceProviderBase:loadSource", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(23);
	jint temp0 = (jint)((func_rhino_module_provider_ModuleSourceProviderBase_entityNeedsRevalidation_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_module_provider_ModuleSourceProviderBase_entityNeedsRevalidation_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(24);
	clinit_rhino_module_provider_ModuleSourceProviderBase(ctx);
	sp[0].o = (jobject)SF_rhino_module_provider_ModuleSourceProvider_NOT_MODIFIED;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_rhino_module_provider_ModuleSourceProviderBase_loadFromPrivilegedLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_module_provider_ModuleSourceProviderBase_loadFromPrivilegedLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource])(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(28);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_4:;
	{
	LINE_NUMBER(31);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)M_rhino_module_provider_ModuleSourceProviderBase_loadFromPathArray_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(33);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_6:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((func_rhino_module_provider_ModuleSourceProviderBase_loadFromFallbackLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_module_provider_ModuleSourceProviderBase_loadFromFallbackLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource])(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_ModuleSourceProviderBase_loadSource_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSourceProviderBase:loadSource", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_rhino_module_provider_ModuleSourceProviderBase_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_module_provider_ModuleSourceProviderBase_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_ModuleSourceProviderBase_loadFromPathArray_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSourceProviderBase:loadFromPathArray", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"length"_j));
	LINE_NUMBER(49);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	jlong temp0 = (jlong)SM_rhino_ScriptRuntime_toUint32_java_lang_Object_R_long(ctx, sp[0].o);
	frame[4].l = temp0;
	LINE_NUMBER(51);
	if ((longCompare((frame[4].l), (jlong(2147483647ll)))) <= 0) goto label_8;
	}
	(sp++)->i = jint(2147483647);
	goto label_9;
label_8:;
	INST_LLOAD(4);
	INST_L2I();
label_9:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(54);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = frame[2].o;
	jint temp0 = frame[7].i;
	sp[1].o = ((jobject) &class_java_lang_String);
	LINE_NUMBER(56);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTypedProperty_rhino_Scriptable_int_java_lang_Class_R_java_lang_Object(ctx, sp[0].o, temp0, sp[1].o);
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	LINE_NUMBER(55);
	sp[0].o = (jobject)SM_rhino_module_provider_ModuleSourceProviderBase_ensureTrailingSlash_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(58);
	clinit_java_net_URI(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URI);
	init_java_net_URI_java_lang_String(ctx, sp[0].o, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(59);
	jint temp0 = (jint)((func_java_net_URI_isAbsolute_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_net_URI_isAbsolute_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(60);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (frame[8].o));
	sp[0].o = (jobject)((func_java_io_File_toURI_R_java_net_URI) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_toURI_R_java_net_URI])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_net_URI_resolve_java_lang_String_R_java_net_URI) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_resolve_java_lang_String_R_java_net_URI])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[9].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = frame[9].o;
	sp[2].o = frame[1].o;
	LINE_NUMBER(63);
	sp[1].o = (jobject)((func_java_net_URI_resolve_java_lang_String_R_java_net_URI) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_URI_resolve_java_lang_String_R_java_net_URI])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[9].o;
	sp[3].o = frame[3].o;
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_rhino_module_provider_ModuleSourceProviderBase_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_module_provider_ModuleSourceProviderBase_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(64);
	if ((frame[10].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	LINE_NUMBER(65);
	INST_ALOAD(10);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_22:;
	LINE_NUMBER(69);
	goto label_24;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(67);
	frame[9].o = sp[0].o;
	LINE_NUMBER(68);
	clinit_java_net_MalformedURLException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_MalformedURLException);
	sp[1].o = (jobject)((func_java_net_URISyntaxException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_net_URISyntaxException_getMessage_R_java_lang_String])(ctx, (frame[9].o));
	init_java_net_MalformedURLException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_24:;
	{
	LINE_NUMBER(54);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_module_provider_ModuleSourceProviderBase_ensureTrailingSlash_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSourceProviderBase:ensureTrailingSlash", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_ModuleSourceProviderBase(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_1;
	}
	INST_ALOAD(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_java_lang_String_concat_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_concat_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_rhino_module_provider_ModuleSourceProviderBase_entityNeedsRevalidation_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSourceProviderBase:entityNeedsRevalidation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_ModuleSourceProviderBase_loadFromPrivilegedLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSourceProviderBase:loadFromPrivilegedLocations", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_ModuleSourceProviderBase_loadFromFallbackLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSourceProviderBase:loadFromFallbackLocations", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_module_provider_ModuleSourceProviderBase[] {
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
	(void *) M_rhino_module_provider_ModuleSourceProviderBase_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_ModuleSourceProviderBase_loadSource_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_ModuleSourceProviderBase_loadFromPathArray_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_ModuleSourceProviderBase_entityNeedsRevalidation_java_lang_Object_R_boolean,
	(void *) nullptr,
	(void *) M_rhino_module_provider_ModuleSourceProviderBase_loadFromPrivilegedLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource,
	(void *) M_rhino_module_provider_ModuleSourceProviderBase_loadFromFallbackLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource,
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
	{ "loadSource", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadSource", "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromPathArray", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "entityNeedsRevalidation", "(Ljava/lang/Object;)Z" },
	{ "loadFromUri", "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromPrivilegedLocations", "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
	{ "loadFromFallbackLocations", "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;" },
};

static jclass interfaces[] { &class_rhino_module_provider_ModuleSourceProvider, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_provider_ModuleSourceProviderBase, 0, "()V", 1 },
	{ "loadSource", (intptr_t) M_rhino_module_provider_ModuleSourceProviderBase_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource, VTABLE_rhino_module_provider_ModuleSourceProviderBase_loadSource_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 1 },
	{ "loadSource", (intptr_t) M_rhino_module_provider_ModuleSourceProviderBase_loadSource_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource, VTABLE_rhino_module_provider_ModuleSourceProviderBase_loadSource_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 1 },
	{ "loadFromPathArray", (intptr_t) M_rhino_module_provider_ModuleSourceProviderBase_loadFromPathArray_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource, VTABLE_rhino_module_provider_ModuleSourceProviderBase_loadFromPathArray_java_lang_String_rhino_Scriptable_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 2 },
	{ "ensureTrailingSlash", (intptr_t) SM_rhino_module_provider_ModuleSourceProviderBase_ensureTrailingSlash_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "entityNeedsRevalidation", (intptr_t) M_rhino_module_provider_ModuleSourceProviderBase_entityNeedsRevalidation_java_lang_Object_R_boolean, VTABLE_rhino_module_provider_ModuleSourceProviderBase_entityNeedsRevalidation_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 4 },
	{ "loadFromUri", 0, VTABLE_rhino_module_provider_ModuleSourceProviderBase_loadFromUri_java_net_URI_java_net_URI_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 1028 },
	{ "loadFromPrivilegedLocations", (intptr_t) M_rhino_module_provider_ModuleSourceProviderBase_loadFromPrivilegedLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource, VTABLE_rhino_module_provider_ModuleSourceProviderBase_loadFromPrivilegedLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 4 },
	{ "loadFromFallbackLocations", (intptr_t) M_rhino_module_provider_ModuleSourceProviderBase_loadFromFallbackLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource, VTABLE_rhino_module_provider_ModuleSourceProviderBase_loadFromFallbackLocations_java_lang_String_java_lang_Object_R_rhino_module_provider_ModuleSource, "(Ljava/lang/String;Ljava/lang/Object;)Lrhino/module/provider/ModuleSource;", 4 },
};

Class class_rhino_module_provider_ModuleSourceProviderBase{
		.nativeName = (intptr_t) "rhino/module/provider/ModuleSourceProviderBase",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_module_provider_ModuleSourceProviderBase),
		.classVtable = (intptr_t) vtable_rhino_module_provider_ModuleSourceProviderBase,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_ModuleSourceProviderBase,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_ModuleSourceProviderBase,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_ModuleSourceProviderBase = registerClass(&class_rhino_module_provider_ModuleSourceProviderBase);

}
