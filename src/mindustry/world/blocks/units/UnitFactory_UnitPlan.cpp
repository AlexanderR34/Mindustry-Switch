#include "mindustry/world/blocks/units/UnitFactory_UnitPlan.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/units/UnitFactory.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitPlan.h"
#include "mindustry/type/UnitType.h"

extern "C" {


void mark_mindustry_world_blocks_units_UnitFactory$UnitPlan(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_units_UnitFactory$UnitPlan *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_requirements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requirements)->clazz)->markFunction)((jobject) self->F_requirements, mark, depth + 1);
}

void clinit_mindustry_world_blocks_units_UnitFactory$UnitPlan(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_units_UnitFactory$UnitPlan_mindustry_type_UnitType_float_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitPlan:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory$UnitPlan(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(216);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(217);
	((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(218);
	((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_time = (frame[2].f);
	LINE_NUMBER(219);
	((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[0].o)))->F_requirements = (jref) (frame[3].o);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_blocks_units_UnitFactory$UnitPlan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitFactory$UnitPlan:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitFactory$UnitPlan(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(222);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_units_UnitFactory$UnitPlan[] {
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
	{ "unit", &class_mindustry_type_UnitType, offsetof(mindustry_world_blocks_units_UnitFactory$UnitPlan, F_unit), "Lmindustry/type/UnitType;", 1 },
	{ "requirements", getArrayClass(&class_mindustry_type_ItemStack, 1), offsetof(mindustry_world_blocks_units_UnitFactory$UnitPlan, F_requirements), "[Lmindustry/type/ItemStack;", 1 },
	{ "time", &class_float, offsetof(mindustry_world_blocks_units_UnitFactory$UnitPlan, F_time), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_units_UnitFactory$UnitPlan_mindustry_type_UnitType_float_Array1_mindustry_type_ItemStack, 0, "(Lmindustry/type/UnitType;F[Lmindustry/type/ItemStack;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_blocks_units_UnitFactory$UnitPlan, 0, "()V", 0 },
};

Class class_mindustry_world_blocks_units_UnitFactory$UnitPlan{
		.nativeName = (intptr_t) "mindustry/world/blocks/units/UnitFactory$UnitPlan",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_units_UnitFactory$UnitPlan),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_units_UnitFactory$UnitPlan,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_units_UnitFactory$UnitPlan,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_units_UnitFactory$UnitPlan,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_units_UnitFactory,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_units_UnitFactory$UnitPlan = registerClass(&class_mindustry_world_blocks_units_UnitFactory$UnitPlan);

}

