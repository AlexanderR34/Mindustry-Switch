#include "mindustry/entities/Units_UnitSyncContainer.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/entities/Units.h"
#include "mindustry/entities/Units_UnitSyncContainer.h"

extern "C" {


void mark_mindustry_entities_Units$UnitSyncContainer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_Units$UnitSyncContainer *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
}

void clinit_mindustry_entities_Units$UnitSyncContainer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_Units$UnitSyncContainer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units$UnitSyncContainer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units$UnitSyncContainer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(523);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_Units$UnitSyncContainer_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Units$UnitSyncContainer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Units$UnitSyncContainer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(526);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(527);
	((mindustry_entities_Units$UnitSyncContainer *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(528);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_Units$UnitSyncContainer[] {
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
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_entities_Units$UnitSyncContainer, F_unit), "Lmindustry/gen/Unit;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_Units$UnitSyncContainer, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_Units$UnitSyncContainer_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 1 },
};

Class class_mindustry_entities_Units$UnitSyncContainer{
		.nativeName = (intptr_t) "mindustry/entities/Units$UnitSyncContainer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Units$UnitSyncContainer),
		.classVtable = (intptr_t) vtable_mindustry_entities_Units$UnitSyncContainer,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Units$UnitSyncContainer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_Units$UnitSyncContainer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_entities_Units,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Units$UnitSyncContainer = registerClass(&class_mindustry_entities_Units$UnitSyncContainer);

}

