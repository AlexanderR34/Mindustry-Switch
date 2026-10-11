#include "mindustry/logic/LExecutor_UnitLocateI_Cache.h"
#include "mindustry/logic/LExecutor_UnitLocateI.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_logic_LExecutor$UnitLocateI$Cache(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$UnitLocateI$Cache *) object;
	if (self->F_build)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_build)->clazz)->markFunction)((jobject) self->F_build, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$UnitLocateI$Cache(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$UnitLocateI$Cache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitLocateI$Cache:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$UnitLocateI$Cache(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(298);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$UnitLocateI$Cache[] {
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
	{ "x", &class_float, offsetof(mindustry_logic_LExecutor$UnitLocateI$Cache, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_logic_LExecutor$UnitLocateI$Cache, F_y), "F", 0 },
	{ "found", &class_boolean, offsetof(mindustry_logic_LExecutor$UnitLocateI$Cache, F_found), "Z", 0 },
	{ "build", &class_mindustry_gen_Building, offsetof(mindustry_logic_LExecutor$UnitLocateI$Cache, F_build), "Lmindustry/gen/Building;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$UnitLocateI$Cache, 0, "()V", 0 },
};

Class class_mindustry_logic_LExecutor$UnitLocateI$Cache{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$UnitLocateI$Cache",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$UnitLocateI$Cache),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$UnitLocateI$Cache,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$UnitLocateI$Cache,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$UnitLocateI$Cache,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor$UnitLocateI,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$UnitLocateI$Cache = registerClass(&class_mindustry_logic_LExecutor$UnitLocateI$Cache);

}

