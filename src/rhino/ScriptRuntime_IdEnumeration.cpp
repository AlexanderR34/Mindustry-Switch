#include "rhino/ScriptRuntime_IdEnumeration.h"
#include "rhino/ScriptRuntime_1.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/ObjToIntMap.h"
#include "rhino/Scriptable.h"
#include "rhino/ScriptRuntime_IdEnumeration.h"

extern "C" {


void mark_rhino_ScriptRuntime$IdEnumeration(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ScriptRuntime$IdEnumeration *) object;
	if (self->F_obj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_obj)->clazz)->markFunction)((jobject) self->F_obj, mark, depth + 1);
	if (self->F_ids)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ids)->clazz)->markFunction)((jobject) self->F_ids, mark, depth + 1);
	if (self->F_used)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_used)->clazz)->markFunction)((jobject) self->F_used, mark, depth + 1);
	if (self->F_currentId)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentId)->clazz)->markFunction)((jobject) self->F_currentId, mark, depth + 1);
	if (self->F_iterator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator)->clazz)->markFunction)((jobject) self->F_iterator, mark, depth + 1);
}

void clinit_rhino_ScriptRuntime$IdEnumeration(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ScriptRuntime$IdEnumeration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime$IdEnumeration:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime$IdEnumeration(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1859);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ScriptRuntime$IdEnumeration_rhino_ScriptRuntime$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptRuntime$IdEnumeration:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptRuntime$IdEnumeration(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1859);
	init_rhino_ScriptRuntime$IdEnumeration(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ScriptRuntime$IdEnumeration[] {
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
	{ "obj", &class_rhino_Scriptable, offsetof(rhino_ScriptRuntime$IdEnumeration, F_obj), "Lrhino/Scriptable;", 0 },
	{ "ids", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_ScriptRuntime$IdEnumeration, F_ids), "[Ljava/lang/Object;", 0 },
	{ "used", &class_rhino_ObjToIntMap, offsetof(rhino_ScriptRuntime$IdEnumeration, F_used), "Lrhino/ObjToIntMap;", 0 },
	{ "currentId", &class_java_lang_Object, offsetof(rhino_ScriptRuntime$IdEnumeration, F_currentId), "Ljava/lang/Object;", 0 },
	{ "index", &class_int, offsetof(rhino_ScriptRuntime$IdEnumeration, F_index), "I", 0 },
	{ "enumType", &class_int, offsetof(rhino_ScriptRuntime$IdEnumeration, F_enumType), "I", 0 },
	{ "enumNumbers", &class_boolean, offsetof(rhino_ScriptRuntime$IdEnumeration, F_enumNumbers), "Z", 0 },
	{ "iterator", &class_rhino_Scriptable, offsetof(rhino_ScriptRuntime$IdEnumeration, F_iterator), "Lrhino/Scriptable;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ScriptRuntime$IdEnumeration, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_rhino_ScriptRuntime$IdEnumeration_rhino_ScriptRuntime$1, 0, "(Lrhino/ScriptRuntime$1;)V", 4096 },
};

Class class_rhino_ScriptRuntime$IdEnumeration{
		.nativeName = (intptr_t) "rhino/ScriptRuntime$IdEnumeration",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ScriptRuntime$IdEnumeration),
		.classVtable = (intptr_t) vtable_rhino_ScriptRuntime$IdEnumeration,
		.staticInitializer = (intptr_t) clinit_rhino_ScriptRuntime$IdEnumeration,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ScriptRuntime$IdEnumeration,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_ScriptRuntime,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ScriptRuntime$IdEnumeration = registerClass(&class_rhino_ScriptRuntime$IdEnumeration);

}

