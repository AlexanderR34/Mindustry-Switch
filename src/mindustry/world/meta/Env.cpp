#include "mindustry/world/meta/Env.h"
#include "java/lang/Object.h"

extern "C" {

jint SF_mindustry_world_meta_Env_terrestrial;
jint SF_mindustry_world_meta_Env_space;
jint SF_mindustry_world_meta_Env_underwater;
jint SF_mindustry_world_meta_Env_spores;
jint SF_mindustry_world_meta_Env_scorching;
jint SF_mindustry_world_meta_Env_groundOil;
jint SF_mindustry_world_meta_Env_groundWater;
jint SF_mindustry_world_meta_Env_oxygen;
jint SF_mindustry_world_meta_Env_any;
jint SF_mindustry_world_meta_Env_none;

void mark_mindustry_world_meta_Env(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_meta_Env *) object;
}

void clinit_mindustry_world_meta_Env(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_world_meta_Env_terrestrial = jint(1);
	SF_mindustry_world_meta_Env_space = jint(2);
	SF_mindustry_world_meta_Env_underwater = jint(4);
	SF_mindustry_world_meta_Env_spores = jint(8);
	SF_mindustry_world_meta_Env_scorching = jint(16);
	SF_mindustry_world_meta_Env_groundOil = jint(32);
	SF_mindustry_world_meta_Env_groundWater = jint(64);
	SF_mindustry_world_meta_Env_oxygen = jint(128);
	SF_mindustry_world_meta_Env_any = jint(-1);
	SF_mindustry_world_meta_Env_none = jint(0);
}

void init_mindustry_world_meta_Env(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Env:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Env(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(4);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_meta_Env[] {
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
	{ "terrestrial", &class_int, (intptr_t) &SF_mindustry_world_meta_Env_terrestrial, "I", 25 },
	{ "space", &class_int, (intptr_t) &SF_mindustry_world_meta_Env_space, "I", 25 },
	{ "underwater", &class_int, (intptr_t) &SF_mindustry_world_meta_Env_underwater, "I", 25 },
	{ "spores", &class_int, (intptr_t) &SF_mindustry_world_meta_Env_spores, "I", 25 },
	{ "scorching", &class_int, (intptr_t) &SF_mindustry_world_meta_Env_scorching, "I", 25 },
	{ "groundOil", &class_int, (intptr_t) &SF_mindustry_world_meta_Env_groundOil, "I", 25 },
	{ "groundWater", &class_int, (intptr_t) &SF_mindustry_world_meta_Env_groundWater, "I", 25 },
	{ "oxygen", &class_int, (intptr_t) &SF_mindustry_world_meta_Env_oxygen, "I", 25 },
	{ "any", &class_int, (intptr_t) &SF_mindustry_world_meta_Env_any, "I", 25 },
	{ "none", &class_int, (intptr_t) &SF_mindustry_world_meta_Env_none, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_meta_Env, 0, "()V", 1 },
};

Class class_mindustry_world_meta_Env{
		.nativeName = (intptr_t) "mindustry/world/meta/Env",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_meta_Env),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_Env,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_Env,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_meta_Env,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_Env = registerClass(&class_mindustry_world_meta_Env);

}
