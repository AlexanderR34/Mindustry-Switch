#include "rhino/v8dtoa/CachedPowers_CachedPower.h"
#include "java/lang/Object.h"
#include "rhino/v8dtoa/CachedPowers.h"
#include "rhino/v8dtoa/CachedPowers_CachedPower.h"

extern "C" {


void mark_rhino_v8dtoa_CachedPowers$CachedPower(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_v8dtoa_CachedPowers$CachedPower *) object;
}

void clinit_rhino_v8dtoa_CachedPowers$CachedPower(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(jcontext ctx, jobject self, jlong param0, jshort param1, jshort param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/CachedPowers$CachedPower:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	frame[4].i = param2;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((rhino_v8dtoa_CachedPowers$CachedPower *) NULL_CHECK((frame[0].o)))->F_significand = (frame[1].l);
	LINE_NUMBER(43);
	((rhino_v8dtoa_CachedPowers$CachedPower *) NULL_CHECK((frame[0].o)))->F_binaryExponent = (frame[3].i);
	LINE_NUMBER(44);
	((rhino_v8dtoa_CachedPowers$CachedPower *) NULL_CHECK((frame[0].o)))->F_decimalExponent = (frame[4].i);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_v8dtoa_CachedPowers$CachedPower[] {
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
	{ "significand", &class_long, offsetof(rhino_v8dtoa_CachedPowers$CachedPower, F_significand), "J", 0 },
	{ "binaryExponent", &class_short, offsetof(rhino_v8dtoa_CachedPowers$CachedPower, F_binaryExponent), "S", 0 },
	{ "decimalExponent", &class_short, offsetof(rhino_v8dtoa_CachedPowers$CachedPower, F_decimalExponent), "S", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short, 0, "(JSS)V", 0 },
};

Class class_rhino_v8dtoa_CachedPowers$CachedPower{
		.nativeName = (intptr_t) "rhino/v8dtoa/CachedPowers$CachedPower",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_v8dtoa_CachedPowers$CachedPower),
		.classVtable = (intptr_t) vtable_rhino_v8dtoa_CachedPowers$CachedPower,
		.staticInitializer = (intptr_t) clinit_rhino_v8dtoa_CachedPowers$CachedPower,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_v8dtoa_CachedPowers$CachedPower,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_v8dtoa_CachedPowers,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_v8dtoa_CachedPowers$CachedPower = registerClass(&class_rhino_v8dtoa_CachedPowers$CachedPower);

}

