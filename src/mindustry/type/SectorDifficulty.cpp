#include "mindustry/type/SectorDifficulty.h"
#include "java/lang/Object.h"

extern "C" {

jint SF_mindustry_type_SectorDifficulty_low;
jint SF_mindustry_type_SectorDifficulty_medium;
jint SF_mindustry_type_SectorDifficulty_high;
jint SF_mindustry_type_SectorDifficulty_extreme;
jint SF_mindustry_type_SectorDifficulty_eradication;
jint SF_mindustry_type_SectorDifficulty_unreasonable;

void mark_mindustry_type_SectorDifficulty(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_SectorDifficulty *) object;
}

void clinit_mindustry_type_SectorDifficulty(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_type_SectorDifficulty_low = jint(0);
	SF_mindustry_type_SectorDifficulty_medium = jint(3);
	SF_mindustry_type_SectorDifficulty_high = jint(5);
	SF_mindustry_type_SectorDifficulty_extreme = jint(8);
	SF_mindustry_type_SectorDifficulty_eradication = jint(10);
	SF_mindustry_type_SectorDifficulty_unreasonable = jint(13);
}

void init_mindustry_type_SectorDifficulty(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/SectorDifficulty:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_SectorDifficulty(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(4);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_SectorDifficulty[] {
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
	{ "low", &class_int, (intptr_t) &SF_mindustry_type_SectorDifficulty_low, "I", 25 },
	{ "medium", &class_int, (intptr_t) &SF_mindustry_type_SectorDifficulty_medium, "I", 25 },
	{ "high", &class_int, (intptr_t) &SF_mindustry_type_SectorDifficulty_high, "I", 25 },
	{ "extreme", &class_int, (intptr_t) &SF_mindustry_type_SectorDifficulty_extreme, "I", 25 },
	{ "eradication", &class_int, (intptr_t) &SF_mindustry_type_SectorDifficulty_eradication, "I", 25 },
	{ "unreasonable", &class_int, (intptr_t) &SF_mindustry_type_SectorDifficulty_unreasonable, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_SectorDifficulty, 0, "()V", 1 },
};

Class class_mindustry_type_SectorDifficulty{
		.nativeName = (intptr_t) "mindustry/type/SectorDifficulty",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_SectorDifficulty),
		.classVtable = (intptr_t) vtable_mindustry_type_SectorDifficulty,
		.staticInitializer = (intptr_t) clinit_mindustry_type_SectorDifficulty,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_SectorDifficulty,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
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
static bool registered_mindustry_type_SectorDifficulty = registerClass(&class_mindustry_type_SectorDifficulty);

}
