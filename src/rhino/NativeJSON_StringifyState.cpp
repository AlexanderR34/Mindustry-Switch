#include "rhino/NativeJSON_StringifyState.h"
#include "java/lang/Object.h"
#include "rhino/NativeJSON_StringifyState.h"
#include "java/lang/String.h"
#include "java/util/Stack.h"
#include "rhino/Context.h"
#include "rhino/NativeJSON.h"
#include "rhino/Scriptable.h"
#include "rhino/Callable.h"
#include "java/util/List.h"

extern "C" {


void mark_rhino_NativeJSON$StringifyState(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_NativeJSON$StringifyState *) object;
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_indent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indent)->clazz)->markFunction)((jobject) self->F_indent, mark, depth + 1);
	if (self->F_gap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_gap)->clazz)->markFunction)((jobject) self->F_gap, mark, depth + 1);
	if (self->F_replacer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_replacer)->clazz)->markFunction)((jobject) self->F_replacer, mark, depth + 1);
	if (self->F_propertyList)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_propertyList)->clazz)->markFunction)((jobject) self->F_propertyList, mark, depth + 1);
	if (self->F_space)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_space)->clazz)->markFunction)((jobject) self->F_space, mark, depth + 1);
	if (self->F_cx)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cx)->clazz)->markFunction)((jobject) self->F_cx, mark, depth + 1);
	if (self->F_scope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scope)->clazz)->markFunction)((jobject) self->F_scope, mark, depth + 1);
}

void clinit_rhino_NativeJSON$StringifyState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_NativeJSON$StringifyState_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Callable_java_util_List_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJSON$StringifyState:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJSON$StringifyState(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(197);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	clinit_java_util_Stack(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Stack);
	init_java_util_Stack(ctx, sp[1].o);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(198);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[0].o)))->F_cx = (jref) (frame[1].o);
	LINE_NUMBER(199);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[0].o)))->F_scope = (jref) (frame[2].o);
	LINE_NUMBER(201);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[0].o)))->F_indent = (jref) (frame[3].o);
	LINE_NUMBER(202);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[0].o)))->F_gap = (jref) (frame[4].o);
	LINE_NUMBER(203);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[0].o)))->F_replacer = (jref) (frame[5].o);
	LINE_NUMBER(204);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[0].o)))->F_propertyList = (jref) (frame[6].o);
	LINE_NUMBER(205);
	((rhino_NativeJSON$StringifyState *) NULL_CHECK((frame[0].o)))->F_space = (jref) (frame[7].o);
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeJSON$StringifyState[] {
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
};

static FieldMetadata fields[] {
	{ "stack", &class_java_util_Stack, offsetof(rhino_NativeJSON$StringifyState, F_stack), "Ljava/util/Stack;", 0 },
	{ "indent", &class_java_lang_String, offsetof(rhino_NativeJSON$StringifyState, F_indent), "Ljava/lang/String;", 0 },
	{ "gap", &class_java_lang_String, offsetof(rhino_NativeJSON$StringifyState, F_gap), "Ljava/lang/String;", 0 },
	{ "replacer", &class_rhino_Callable, offsetof(rhino_NativeJSON$StringifyState, F_replacer), "Lrhino/Callable;", 0 },
	{ "propertyList", &class_java_util_List, offsetof(rhino_NativeJSON$StringifyState, F_propertyList), "Ljava/util/List;", 0 },
	{ "space", &class_java_lang_Object, offsetof(rhino_NativeJSON$StringifyState, F_space), "Ljava/lang/Object;", 0 },
	{ "cx", &class_rhino_Context, offsetof(rhino_NativeJSON$StringifyState, F_cx), "Lrhino/Context;", 0 },
	{ "scope", &class_rhino_Scriptable, offsetof(rhino_NativeJSON$StringifyState, F_scope), "Lrhino/Scriptable;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeJSON$StringifyState_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Callable_java_util_List_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;Lrhino/Callable;Ljava/util/List;Ljava/lang/Object;)V", 0 },
};

Class class_rhino_NativeJSON$StringifyState{
		.nativeName = (intptr_t) "rhino/NativeJSON$StringifyState",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NativeJSON$StringifyState),
		.classVtable = (intptr_t) vtable_rhino_NativeJSON$StringifyState,
		.staticInitializer = (intptr_t) clinit_rhino_NativeJSON$StringifyState,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeJSON$StringifyState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_NativeJSON,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeJSON$StringifyState = registerClass(&class_rhino_NativeJSON$StringifyState);

}

