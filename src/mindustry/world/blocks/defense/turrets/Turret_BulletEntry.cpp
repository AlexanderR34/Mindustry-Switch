#include "mindustry/world/blocks/defense/turrets/Turret_BulletEntry.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/world/blocks/defense/turrets/Turret.h"
#include "mindustry/world/blocks/defense/turrets/Turret_BulletEntry.h"

extern "C" {


void mark_mindustry_world_blocks_defense_turrets_Turret$BulletEntry(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_defense_turrets_Turret$BulletEntry *) object;
	if (self->F_bullet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bullet)->clazz)->markFunction)((jobject) self->F_bullet, mark, depth + 1);
}

void clinit_mindustry_world_blocks_defense_turrets_Turret$BulletEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_mindustry_gen_Bullet_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$BulletEntry:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_Turret$BulletEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(878);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(879);
	((mindustry_world_blocks_defense_turrets_Turret$BulletEntry *) NULL_CHECK((frame[0].o)))->F_bullet = (jref) (frame[1].o);
	LINE_NUMBER(880);
	((mindustry_world_blocks_defense_turrets_Turret$BulletEntry *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(881);
	((mindustry_world_blocks_defense_turrets_Turret$BulletEntry *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].f);
	LINE_NUMBER(882);
	((mindustry_world_blocks_defense_turrets_Turret$BulletEntry *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[4].f);
	LINE_NUMBER(883);
	((mindustry_world_blocks_defense_turrets_Turret$BulletEntry *) NULL_CHECK((frame[0].o)))->F_life = (frame[5].f);
	LINE_NUMBER(884);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_defense_turrets_Turret$BulletEntry[] {
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
	{ "bullet", &class_mindustry_gen_Bullet, offsetof(mindustry_world_blocks_defense_turrets_Turret$BulletEntry, F_bullet), "Lmindustry/gen/Bullet;", 1 },
	{ "x", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$BulletEntry, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$BulletEntry, F_y), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$BulletEntry, F_rotation), "F", 1 },
	{ "life", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$BulletEntry, F_life), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_mindustry_gen_Bullet_float_float_float_float, 0, "(Lmindustry/gen/Bullet;FFFF)V", 1 },
};

Class class_mindustry_world_blocks_defense_turrets_Turret$BulletEntry{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/turrets/Turret$BulletEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_defense_turrets_Turret$BulletEntry),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_turrets_Turret$BulletEntry,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_turrets_Turret$BulletEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_turrets_Turret$BulletEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_Turret,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_turrets_Turret$BulletEntry = registerClass(&class_mindustry_world_blocks_defense_turrets_Turret$BulletEntry);

}

