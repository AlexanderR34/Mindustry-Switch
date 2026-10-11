#include "mindustry/entities/units/WeaponMount.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/gen/Bullet.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/audio/SoundLoop.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Nullable.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_entities_units_WeaponMount(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_units_WeaponMount *) object;
	if (self->F_weapon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weapon)->clazz)->markFunction)((jobject) self->F_weapon, mark, depth + 1);
	if (self->F_recoils)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_recoils)->clazz)->markFunction)((jobject) self->F_recoils, mark, depth + 1);
	if (self->F_bullet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bullet)->clazz)->markFunction)((jobject) self->F_bullet, mark, depth + 1);
	if (self->F_sound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sound)->clazz)->markFunction)((jobject) self->F_sound, mark, depth + 1);
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
}

void clinit_mindustry_entities_units_WeaponMount(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_units_WeaponMount_mindustry_type_Weapon(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/WeaponMount:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_WeaponMount(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[0].o)))->F_shoot = (jint(0));
	LINE_NUMBER(36);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[0].o)))->F_allowShootEffects = (jint(1));
	LINE_NUMBER(38);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(0));
	LINE_NUMBER(54);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[0].o)))->F_retarget = (jfloat(0));
	LINE_NUMBER(57);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[0].o)))->F_weapon = (jref) (frame[1].o);
	LINE_NUMBER(58);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[0].o)))->F_rotation = ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[1].o)))->F_baseRotation);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_units_WeaponMount;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field recoils
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field bullet
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[20]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field sound
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[21]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field target
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[22]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_units_WeaponMount[] {
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
	{ "weapon", &class_mindustry_type_Weapon, offsetof(mindustry_entities_units_WeaponMount, F_weapon), "Lmindustry/type/Weapon;", 17 },
	{ "reload", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_reload), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_rotation), "F", 1 },
	{ "recoil", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_recoil), "F", 1 },
	{ "recoils", getArrayClass(&class_float, 1), offsetof(mindustry_entities_units_WeaponMount, F_recoils), "[F", 1 },
	{ "targetRotation", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_targetRotation), "F", 1 },
	{ "heat", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_heat), "F", 1 },
	{ "warmup", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_warmup), "F", 1 },
	{ "charging", &class_boolean, offsetof(mindustry_entities_units_WeaponMount, F_charging), "Z", 1 },
	{ "charge", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_charge), "F", 1 },
	{ "smoothReload", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_smoothReload), "F", 1 },
	{ "aimX", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_aimX), "F", 1 },
	{ "aimY", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_aimY), "F", 1 },
	{ "shoot", &class_boolean, offsetof(mindustry_entities_units_WeaponMount, F_shoot), "Z", 1 },
	{ "allowShootEffects", &class_boolean, offsetof(mindustry_entities_units_WeaponMount, F_allowShootEffects), "Z", 1 },
	{ "rotate", &class_boolean, offsetof(mindustry_entities_units_WeaponMount, F_rotate), "Z", 1 },
	{ "side", &class_boolean, offsetof(mindustry_entities_units_WeaponMount, F_side), "Z", 1 },
	{ "totalShots", &class_int, offsetof(mindustry_entities_units_WeaponMount, F_totalShots), "I", 1 },
	{ "barrelCounter", &class_int, offsetof(mindustry_entities_units_WeaponMount, F_barrelCounter), "I", 1 },
	{ "lastLength", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_lastLength), "F", 1 },
	{ "bullet", &class_mindustry_gen_Bullet, offsetof(mindustry_entities_units_WeaponMount, F_bullet), "Lmindustry/gen/Bullet;", 1 },
	{ "sound", &class_mindustry_audio_SoundLoop, offsetof(mindustry_entities_units_WeaponMount, F_sound), "Lmindustry/audio/SoundLoop;", 1 },
	{ "target", &class_mindustry_gen_Teamc, offsetof(mindustry_entities_units_WeaponMount, F_target), "Lmindustry/gen/Teamc;", 1 },
	{ "retarget", &class_float, offsetof(mindustry_entities_units_WeaponMount, F_retarget), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_units_WeaponMount_mindustry_type_Weapon, 0, "(Lmindustry/type/Weapon;)V", 1 },
};

Class class_mindustry_entities_units_WeaponMount{
		.nativeName = (intptr_t) "mindustry/entities/units/WeaponMount",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_units_WeaponMount),
		.classVtable = (intptr_t) vtable_mindustry_entities_units_WeaponMount,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_units_WeaponMount,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_units_WeaponMount,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_units_WeaponMount = registerClass(&class_mindustry_entities_units_WeaponMount);

}
