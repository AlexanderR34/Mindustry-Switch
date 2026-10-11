#include "mindustry/entities/TargetPriority.h"
#include "java/lang/Object.h"

extern "C" {

jfloat SF_mindustry_entities_TargetPriority_wall;
jfloat SF_mindustry_entities_TargetPriority_under;
jfloat SF_mindustry_entities_TargetPriority_transport;
jfloat SF_mindustry_entities_TargetPriority_base;
jfloat SF_mindustry_entities_TargetPriority_turret;
jfloat SF_mindustry_entities_TargetPriority_core;

void mark_mindustry_entities_TargetPriority(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_TargetPriority *) object;
}

void clinit_mindustry_entities_TargetPriority(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_TargetPriority_wall = jfloat(-3.0f);
	SF_mindustry_entities_TargetPriority_under = jfloat(-2.0f);
	SF_mindustry_entities_TargetPriority_transport = jfloat(-1.0f);
	SF_mindustry_entities_TargetPriority_base = jfloat(0,000000e+00f);
	SF_mindustry_entities_TargetPriority_turret = jfloat(1.0f);
	SF_mindustry_entities_TargetPriority_core = jfloat(2.0f);
}

void init_mindustry_entities_TargetPriority(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/TargetPriority:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_TargetPriority(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(4);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_TargetPriority[] {
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
	{ "wall", &class_float, (intptr_t) &SF_mindustry_entities_TargetPriority_wall, "F", 25 },
	{ "under", &class_float, (intptr_t) &SF_mindustry_entities_TargetPriority_under, "F", 25 },
	{ "transport", &class_float, (intptr_t) &SF_mindustry_entities_TargetPriority_transport, "F", 25 },
	{ "base", &class_float, (intptr_t) &SF_mindustry_entities_TargetPriority_base, "F", 25 },
	{ "turret", &class_float, (intptr_t) &SF_mindustry_entities_TargetPriority_turret, "F", 25 },
	{ "core", &class_float, (intptr_t) &SF_mindustry_entities_TargetPriority_core, "F", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_TargetPriority, 0, "()V", 1 },
};

Class class_mindustry_entities_TargetPriority{
		.nativeName = (intptr_t) "mindustry/entities/TargetPriority",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_TargetPriority),
		.classVtable = (intptr_t) vtable_mindustry_entities_TargetPriority,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_TargetPriority,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_TargetPriority,
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
static bool registered_mindustry_entities_TargetPriority = registerClass(&class_mindustry_entities_TargetPriority);

}
