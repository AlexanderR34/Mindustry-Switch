#include "mindustry/game/CampaignStats.h"
#include "java/lang/Object.h"
#include "mindustry/game/CampaignStats.h"
#include "arc/struct/ObjectIntMap.h"

extern "C" {


void mark_mindustry_game_CampaignStats(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_CampaignStats *) object;
	if (self->F_enemyUnitsDestroyed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_enemyUnitsDestroyed)->clazz)->markFunction)((jobject) self->F_enemyUnitsDestroyed, mark, depth + 1);
	if (self->F_enemyBuildingsDestroyed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_enemyBuildingsDestroyed)->clazz)->markFunction)((jobject) self->F_enemyBuildingsDestroyed, mark, depth + 1);
	if (self->F_unitsProduced)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitsProduced)->clazz)->markFunction)((jobject) self->F_unitsProduced, mark, depth + 1);
	if (self->F_unitsDestroyed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitsDestroyed)->clazz)->markFunction)((jobject) self->F_unitsDestroyed, mark, depth + 1);
	if (self->F_buildingsBuilt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildingsBuilt)->clazz)->markFunction)((jobject) self->F_buildingsBuilt, mark, depth + 1);
	if (self->F_buildingsDeconstructed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildingsDeconstructed)->clazz)->markFunction)((jobject) self->F_buildingsDeconstructed, mark, depth + 1);
	if (self->F_buildingsDestroyed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildingsDestroyed)->clazz)->markFunction)((jobject) self->F_buildingsDestroyed, mark, depth + 1);
}

void clinit_mindustry_game_CampaignStats(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_CampaignStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/CampaignStats:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_CampaignStats(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_enemyUnitsDestroyed = (jref) sp[1].o;
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_enemyBuildingsDestroyed = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_unitsProduced = (jref) sp[1].o;
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_unitsDestroyed = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_buildingsBuilt = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_buildingsDeconstructed = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_buildingsDestroyed = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_CampaignStats[] {
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
	{ "enemyUnitsDestroyed", &class_arc_struct_ObjectIntMap, offsetof(mindustry_game_CampaignStats, F_enemyUnitsDestroyed), "Larc/struct/ObjectIntMap;", 1 },
	{ "enemyBuildingsDestroyed", &class_arc_struct_ObjectIntMap, offsetof(mindustry_game_CampaignStats, F_enemyBuildingsDestroyed), "Larc/struct/ObjectIntMap;", 1 },
	{ "unitsProduced", &class_arc_struct_ObjectIntMap, offsetof(mindustry_game_CampaignStats, F_unitsProduced), "Larc/struct/ObjectIntMap;", 1 },
	{ "unitsDestroyed", &class_arc_struct_ObjectIntMap, offsetof(mindustry_game_CampaignStats, F_unitsDestroyed), "Larc/struct/ObjectIntMap;", 1 },
	{ "buildingsBuilt", &class_arc_struct_ObjectIntMap, offsetof(mindustry_game_CampaignStats, F_buildingsBuilt), "Larc/struct/ObjectIntMap;", 1 },
	{ "buildingsDeconstructed", &class_arc_struct_ObjectIntMap, offsetof(mindustry_game_CampaignStats, F_buildingsDeconstructed), "Larc/struct/ObjectIntMap;", 1 },
	{ "buildingsDestroyed", &class_arc_struct_ObjectIntMap, offsetof(mindustry_game_CampaignStats, F_buildingsDestroyed), "Larc/struct/ObjectIntMap;", 1 },
	{ "playtime", &class_long, offsetof(mindustry_game_CampaignStats, F_playtime), "J", 1 },
	{ "sectorsLost", &class_int, offsetof(mindustry_game_CampaignStats, F_sectorsLost), "I", 1 },
	{ "sectorsCaptured", &class_int, offsetof(mindustry_game_CampaignStats, F_sectorsCaptured), "I", 1 },
	{ "wavesLasted", &class_int, offsetof(mindustry_game_CampaignStats, F_wavesLasted), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_CampaignStats, 0, "()V", 1 },
};

Class class_mindustry_game_CampaignStats{
		.nativeName = (intptr_t) "mindustry/game/CampaignStats",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_CampaignStats),
		.classVtable = (intptr_t) vtable_mindustry_game_CampaignStats,
		.staticInitializer = (intptr_t) clinit_mindustry_game_CampaignStats,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_CampaignStats,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_CampaignStats = registerClass(&class_mindustry_game_CampaignStats);

}
