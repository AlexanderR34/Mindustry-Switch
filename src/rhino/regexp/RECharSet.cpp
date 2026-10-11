#include "rhino/regexp/RECharSet.h"
#include "java/lang/Object.h"
#include "rhino/regexp/RECharSet.h"

extern "C" {


void mark_rhino_regexp_RECharSet(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_regexp_RECharSet *) object;
	if (self->F_bits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bits)->clazz)->markFunction)((jobject) self->F_bits, mark, depth + 1);
}

void clinit_rhino_regexp_RECharSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_regexp_RECharSet_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RECharSet:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_RECharSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(2893);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2894);
	((rhino_regexp_RECharSet *) NULL_CHECK((frame[0].o)))->F_length = (frame[1].i);
	LINE_NUMBER(2895);
	((rhino_regexp_RECharSet *) NULL_CHECK((frame[0].o)))->F_startIndex = (frame[2].i);
	LINE_NUMBER(2896);
	((rhino_regexp_RECharSet *) NULL_CHECK((frame[0].o)))->F_strlength = (frame[3].i);
	LINE_NUMBER(2897);
	((rhino_regexp_RECharSet *) NULL_CHECK((frame[0].o)))->F_sense = (frame[4].i);
	LINE_NUMBER(2898);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_RECharSet[] {
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
	{ "length", &class_int, offsetof(rhino_regexp_RECharSet, F_length), "I", 16 },
	{ "startIndex", &class_int, offsetof(rhino_regexp_RECharSet, F_startIndex), "I", 16 },
	{ "strlength", &class_int, offsetof(rhino_regexp_RECharSet, F_strlength), "I", 16 },
	{ "sense", &class_boolean, offsetof(rhino_regexp_RECharSet, F_sense), "Z", 16 },
	{ "converted", &class_boolean, offsetof(rhino_regexp_RECharSet, F_converted), "Z", 192 },
	{ "bits", getArrayClass(&class_byte, 1), offsetof(rhino_regexp_RECharSet, F_bits), "[B", 192 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_regexp_RECharSet_int_int_int_boolean, 0, "(IIIZ)V", 0 },
};

Class class_rhino_regexp_RECharSet{
		.nativeName = (intptr_t) "rhino/regexp/RECharSet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_regexp_RECharSet),
		.classVtable = (intptr_t) vtable_rhino_regexp_RECharSet,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_RECharSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_RECharSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_RECharSet = registerClass(&class_rhino_regexp_RECharSet);

}
