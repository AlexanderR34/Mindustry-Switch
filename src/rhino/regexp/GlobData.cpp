#include "rhino/regexp/GlobData.h"
#include "rhino/Function.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "rhino/regexp/GlobData.h"
#include "rhino/Scriptable.h"

extern "C" {


void mark_rhino_regexp_GlobData(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_regexp_GlobData *) object;
	if (self->F_str)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_str)->clazz)->markFunction)((jobject) self->F_str, mark, depth + 1);
	if (self->F_arrayobj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrayobj)->clazz)->markFunction)((jobject) self->F_arrayobj, mark, depth + 1);
	if (self->F_lambda)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lambda)->clazz)->markFunction)((jobject) self->F_lambda, mark, depth + 1);
	if (self->F_repstr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_repstr)->clazz)->markFunction)((jobject) self->F_repstr, mark, depth + 1);
	if (self->F_charBuf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charBuf)->clazz)->markFunction)((jobject) self->F_charBuf, mark, depth + 1);
}

void clinit_rhino_regexp_GlobData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_regexp_GlobData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/GlobData:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_GlobData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(729);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(742);
	((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_dollar = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_GlobData[] {
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
	{ "mode", &class_int, offsetof(rhino_regexp_GlobData, F_mode), "I", 0 },
	{ "global", &class_boolean, offsetof(rhino_regexp_GlobData, F_global), "Z", 0 },
	{ "str", &class_java_lang_String, offsetof(rhino_regexp_GlobData, F_str), "Ljava/lang/String;", 0 },
	{ "arrayobj", &class_rhino_Scriptable, offsetof(rhino_regexp_GlobData, F_arrayobj), "Lrhino/Scriptable;", 0 },
	{ "lambda", &class_rhino_Function, offsetof(rhino_regexp_GlobData, F_lambda), "Lrhino/Function;", 0 },
	{ "repstr", &class_java_lang_String, offsetof(rhino_regexp_GlobData, F_repstr), "Ljava/lang/String;", 0 },
	{ "dollar", &class_int, offsetof(rhino_regexp_GlobData, F_dollar), "I", 0 },
	{ "charBuf", &class_java_lang_StringBuilder, offsetof(rhino_regexp_GlobData, F_charBuf), "Ljava/lang/StringBuilder;", 0 },
	{ "leftIndex", &class_int, offsetof(rhino_regexp_GlobData, F_leftIndex), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_regexp_GlobData, 0, "()V", 0 },
};

Class class_rhino_regexp_GlobData{
		.nativeName = (intptr_t) "rhino/regexp/GlobData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_regexp_GlobData),
		.classVtable = (intptr_t) vtable_rhino_regexp_GlobData,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_GlobData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_GlobData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_GlobData = registerClass(&class_rhino_regexp_GlobData);

}
