#include "rhino/regexp/RECompiled.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/regexp/RECharSet.h"
#include "rhino/regexp/RECompiled.h"

extern "C" {


void mark_rhino_regexp_RECompiled(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_regexp_RECompiled *) object;
	if (self->F_source)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_source)->clazz)->markFunction)((jobject) self->F_source, mark, depth + 1);
	if (self->F_program)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_program)->clazz)->markFunction)((jobject) self->F_program, mark, depth + 1);
	if (self->F_classList)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classList)->clazz)->markFunction)((jobject) self->F_classList, mark, depth + 1);
}

void clinit_rhino_regexp_RECompiled(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_regexp_RECompiled_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RECompiled:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_RECompiled(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2732);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2730);
	((rhino_regexp_RECompiled *) NULL_CHECK((frame[0].o)))->F_anchorCh = (jint(-1));
	LINE_NUMBER(2733);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[1].o));
	((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source = (jref) sp[1].o;
	LINE_NUMBER(2734);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_RECompiled[] {
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
	{ "source", getArrayClass(&class_char, 1), offsetof(rhino_regexp_RECompiled, F_source), "[C", 16 },
	{ "parenCount", &class_int, offsetof(rhino_regexp_RECompiled, F_parenCount), "I", 0 },
	{ "flags", &class_int, offsetof(rhino_regexp_RECompiled, F_flags), "I", 0 },
	{ "program", getArrayClass(&class_byte, 1), offsetof(rhino_regexp_RECompiled, F_program), "[B", 0 },
	{ "classCount", &class_int, offsetof(rhino_regexp_RECompiled, F_classCount), "I", 0 },
	{ "classList", getArrayClass(&class_rhino_regexp_RECharSet, 1), offsetof(rhino_regexp_RECompiled, F_classList), "[Lrhino/regexp/RECharSet;", 0 },
	{ "anchorCh", &class_int, offsetof(rhino_regexp_RECompiled, F_anchorCh), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_regexp_RECompiled_java_lang_String, 0, "(Ljava/lang/String;)V", 0 },
};

Class class_rhino_regexp_RECompiled{
		.nativeName = (intptr_t) "rhino/regexp/RECompiled",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_regexp_RECompiled),
		.classVtable = (intptr_t) vtable_rhino_regexp_RECompiled,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_RECompiled,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_RECompiled,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_RECompiled = registerClass(&class_rhino_regexp_RECompiled);

}
