#include "mindustry/entities/units/StatusEntry.h"
#include "java/lang/Object.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/entities/units/StatusEntry.h"

extern "C" {


void mark_mindustry_entities_units_StatusEntry(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_units_StatusEntry *) object;
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
}

void clinit_mindustry_entities_units_StatusEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/StatusEntry:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_StatusEntry(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_damageMultiplier = (jfloat(1));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_healthMultiplier = (jfloat(1));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_speedMultiplier = (jfloat(1));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_reloadMultiplier = (jfloat(1));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier = (jfloat(1));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_dragMultiplier = (jfloat(1));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_armorOverride = (jfloat(-1.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/StatusEntry:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(15);
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[1].o);
	LINE_NUMBER(16);
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_time = (frame[2].f);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_units_StatusEntry[] {
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
	(void *) M_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry,
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
	{ "set", "(Lmindustry/type/StatusEffect;F)Lmindustry/entities/units/StatusEntry;" },
};

static FieldMetadata fields[] {
	{ "effect", &class_mindustry_type_StatusEffect, offsetof(mindustry_entities_units_StatusEntry, F_effect), "Lmindustry/type/StatusEffect;", 1 },
	{ "time", &class_float, offsetof(mindustry_entities_units_StatusEntry, F_time), "F", 1 },
	{ "damageTime", &class_float, offsetof(mindustry_entities_units_StatusEntry, F_damageTime), "F", 1 },
	{ "damageMultiplier", &class_float, offsetof(mindustry_entities_units_StatusEntry, F_damageMultiplier), "F", 1 },
	{ "healthMultiplier", &class_float, offsetof(mindustry_entities_units_StatusEntry, F_healthMultiplier), "F", 1 },
	{ "speedMultiplier", &class_float, offsetof(mindustry_entities_units_StatusEntry, F_speedMultiplier), "F", 1 },
	{ "reloadMultiplier", &class_float, offsetof(mindustry_entities_units_StatusEntry, F_reloadMultiplier), "F", 1 },
	{ "buildSpeedMultiplier", &class_float, offsetof(mindustry_entities_units_StatusEntry, F_buildSpeedMultiplier), "F", 1 },
	{ "dragMultiplier", &class_float, offsetof(mindustry_entities_units_StatusEntry, F_dragMultiplier), "F", 1 },
	{ "armorOverride", &class_float, offsetof(mindustry_entities_units_StatusEntry, F_armorOverride), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_units_StatusEntry, 0, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry, VTABLE_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry, "(Lmindustry/type/StatusEffect;F)Lmindustry/entities/units/StatusEntry;", 1 },
};

Class class_mindustry_entities_units_StatusEntry{
		.nativeName = (intptr_t) "mindustry/entities/units/StatusEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_units_StatusEntry),
		.classVtable = (intptr_t) vtable_mindustry_entities_units_StatusEntry,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_units_StatusEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_units_StatusEntry,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_units_StatusEntry = registerClass(&class_mindustry_entities_units_StatusEntry);

}
