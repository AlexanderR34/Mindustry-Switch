#include "mindustry/type/weapons/RepairBeamWeapon_HealBeamMount.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/type/weapons/RepairBeamWeapon_HealBeamMount.h"
#include "mindustry/type/weapons/RepairBeamWeapon.h"
#include "mindustry/entities/units/WeaponMount.h"

extern "C" {


void mark_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_units_WeaponMount(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) object;
	if (self->F_offset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_offset)->clazz)->markFunction)((jobject) self->F_offset, mark, depth + 1);
	if (self->F_lastEnd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastEnd)->clazz)->markFunction)((jobject) self->F_lastEnd, mark, depth + 1);
}

void clinit_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_WeaponMount(ctx);
}

void init_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_mindustry_type_Weapon(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon$HealBeamMount:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(190);
	init_mindustry_entities_units_WeaponMount_mindustry_type_Weapon(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK(sp[0].o))->F_offset = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK(sp[0].o))->F_lastEnd = (jref) sp[1].o;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount[] {
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
	{ "offset", &class_arc_math_geom_Vec2, offsetof(mindustry_type_weapons_RepairBeamWeapon$HealBeamMount, F_offset), "Larc/math/geom/Vec2;", 1 },
	{ "lastEnd", &class_arc_math_geom_Vec2, offsetof(mindustry_type_weapons_RepairBeamWeapon$HealBeamMount, F_lastEnd), "Larc/math/geom/Vec2;", 1 },
	{ "strength", &class_float, offsetof(mindustry_type_weapons_RepairBeamWeapon$HealBeamMount, F_strength), "F", 1 },
	{ "effectTimer", &class_float, offsetof(mindustry_type_weapons_RepairBeamWeapon$HealBeamMount, F_effectTimer), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_mindustry_type_Weapon, 0, "(Lmindustry/type/Weapon;)V", 1 },
};

Class class_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount{
		.nativeName = (intptr_t) "mindustry/type/weapons/RepairBeamWeapon$HealBeamMount",
		.parentClass = (intptr_t) &class_mindustry_entities_units_WeaponMount,
		.size = sizeof(mindustry_type_weapons_RepairBeamWeapon$HealBeamMount),
		.classVtable = (intptr_t) vtable_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount,
		.staticInitializer = (intptr_t) clinit_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_type_weapons_RepairBeamWeapon,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
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
static bool registered_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount = registerClass(&class_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount);

}

