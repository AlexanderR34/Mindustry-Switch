#include "rhino/ScriptRuntime_NoSuchMethodShim.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/ScriptRuntime_NoSuchMethodShim.h"
#include "java/lang/String.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "rhino/Callable.h"

extern "C" {


void mark_rhino_ScriptRuntime$NoSuchMethodShim(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ScriptRuntime$NoSuchMethodShim *) object;
	if (self->F_methodName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_methodName)->clazz)->markFunction)((jobject) self->F_methodName, mark, depth + 1);
	if (self->F_noSuchMethodMethod)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_noSuchMethodMethod)->clazz)->markFunction)((jobject) self->F_noSuchMethodMethod, mark, depth + 1);
}

void clinit_rhino_ScriptRuntime$NoSuchMethodShim(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ScriptRuntime$NoSuchMethodShim_rhino_Callable_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime$NoSuchMethodShim:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime$NoSuchMethodShim(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(51);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	((rhino_ScriptRuntime$NoSuchMethodShim *) NULL_CHECK((frame[0].o)))->F_noSuchMethodMethod = (jref) (frame[1].o);
	LINE_NUMBER(53);
	((rhino_ScriptRuntime$NoSuchMethodShim *) NULL_CHECK((frame[0].o)))->F_methodName = (jref) (frame[2].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptRuntime$NoSuchMethodShim_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime$NoSuchMethodShim:call", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(69);
	sp[0].o = frame[5].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((rhino_ScriptRuntime$NoSuchMethodShim *) NULL_CHECK((frame[0].o)))->F_methodName;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(70);
	sp[0].o = frame[5].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_newArrayLiteral_Array1_java_lang_Object_Array1_int_rhino_Context_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[4].o), (jobject(nullptr)), (frame[1].o), (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = (jobject)((rhino_ScriptRuntime$NoSuchMethodShim *) NULL_CHECK((frame[0].o)))->F_noSuchMethodMethod;
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ScriptRuntime$NoSuchMethodShim[] {
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
	(void *) M_rhino_ScriptRuntime$NoSuchMethodShim_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	{ "call", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_rhino_Callable, };

static FieldMetadata fields[] {
	{ "methodName", &class_java_lang_String, offsetof(rhino_ScriptRuntime$NoSuchMethodShim, F_methodName), "Ljava/lang/String;", 0 },
	{ "noSuchMethodMethod", &class_rhino_Callable, offsetof(rhino_ScriptRuntime$NoSuchMethodShim, F_noSuchMethodMethod), "Lrhino/Callable;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ScriptRuntime$NoSuchMethodShim_rhino_Callable_java_lang_String, 0, "(Lrhino/Callable;Ljava/lang/String;)V", 0 },
	{ "call", (intptr_t) M_rhino_ScriptRuntime$NoSuchMethodShim_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ScriptRuntime$NoSuchMethodShim_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
};

Class class_rhino_ScriptRuntime$NoSuchMethodShim{
		.nativeName = (intptr_t) "rhino/ScriptRuntime$NoSuchMethodShim",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ScriptRuntime$NoSuchMethodShim),
		.classVtable = (intptr_t) vtable_rhino_ScriptRuntime$NoSuchMethodShim,
		.staticInitializer = (intptr_t) clinit_rhino_ScriptRuntime$NoSuchMethodShim,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ScriptRuntime$NoSuchMethodShim,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_ScriptRuntime,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ScriptRuntime$NoSuchMethodShim = registerClass(&class_rhino_ScriptRuntime$NoSuchMethodShim);

}

