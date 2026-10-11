#include "mindustry/world/blocks/defense/turrets/Turret_AmmoEntry.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/defense/turrets/Turret_AmmoEntry.h"
#include "mindustry/world/blocks/defense/turrets/Turret.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) object;
}

void clinit_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$AmmoEntry:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(263);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry[] {
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
	(void *) nullptr,
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
	{ "type", "()Lmindustry/entities/bullet/BulletType;" },
};

static FieldMetadata fields[] {
	{ "amount", &class_int, offsetof(mindustry_world_blocks_defense_turrets_Turret$AmmoEntry, F_amount), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry, 0, "()V", 1 },
	{ "type", 0, VTABLE_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry_type_R_mindustry_entities_bullet_BulletType, "()Lmindustry/entities/bullet/BulletType;", 1025 },
};

Class class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/turrets/Turret$AmmoEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_defense_turrets_Turret$AmmoEntry),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_Turret,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry = registerClass(&class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry);

}

