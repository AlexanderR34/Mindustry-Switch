#include "mindustry/game/GameStats.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/GameStats.h"
#include "arc/struct/ObjectIntMap.h"

extern "C" {


void mark_mindustry_game_GameStats(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_GameStats *) object;
	if (self->F_placedBlockCount)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_placedBlockCount)->clazz)->markFunction)((jobject) self->F_placedBlockCount, mark, depth + 1);
	if (self->F_destroyedBlockCount)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_destroyedBlockCount)->clazz)->markFunction)((jobject) self->F_destroyedBlockCount, mark, depth + 1);
	if (self->F_coreItemCount)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_coreItemCount)->clazz)->markFunction)((jobject) self->F_coreItemCount, mark, depth + 1);
}

void clinit_mindustry_game_GameStats(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_GameStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/GameStats:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_GameStats(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_placedBlockCount = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_destroyedBlockCount = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_coreItemCount = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_GameStats_getPlaced_mindustry_world_Block_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/GameStats:getPlaced", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_game_GameStats *) NULL_CHECK((frame[0].o)))->F_placedBlockCount;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/GameStats:getDestroyed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_game_GameStats *) NULL_CHECK((frame[0].o)))->F_destroyedBlockCount;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_GameStats[] {
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
	(void *) M_mindustry_game_GameStats_getPlaced_mindustry_world_Block_R_int,
	(void *) M_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int,
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
	{ "getPlaced", "(Lmindustry/world/Block;)I" },
	{ "getDestroyed", "(Lmindustry/world/Block;)I" },
};

static FieldMetadata fields[] {
	{ "enemyUnitsDestroyed", &class_int, offsetof(mindustry_game_GameStats, F_enemyUnitsDestroyed), "I", 1 },
	{ "wavesLasted", &class_int, offsetof(mindustry_game_GameStats, F_wavesLasted), "I", 1 },
	{ "buildingsBuilt", &class_int, offsetof(mindustry_game_GameStats, F_buildingsBuilt), "I", 1 },
	{ "buildingsDeconstructed", &class_int, offsetof(mindustry_game_GameStats, F_buildingsDeconstructed), "I", 1 },
	{ "buildingsDestroyed", &class_int, offsetof(mindustry_game_GameStats, F_buildingsDestroyed), "I", 1 },
	{ "unitsCreated", &class_int, offsetof(mindustry_game_GameStats, F_unitsCreated), "I", 1 },
	{ "placedBlockCount", &class_arc_struct_ObjectIntMap, offsetof(mindustry_game_GameStats, F_placedBlockCount), "Larc/struct/ObjectIntMap;", 1 },
	{ "destroyedBlockCount", &class_arc_struct_ObjectIntMap, offsetof(mindustry_game_GameStats, F_destroyedBlockCount), "Larc/struct/ObjectIntMap;", 1 },
	{ "coreItemCount", &class_arc_struct_ObjectIntMap, offsetof(mindustry_game_GameStats, F_coreItemCount), "Larc/struct/ObjectIntMap;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_GameStats, 0, "()V", 1 },
	{ "getPlaced", (intptr_t) M_mindustry_game_GameStats_getPlaced_mindustry_world_Block_R_int, VTABLE_mindustry_game_GameStats_getPlaced_mindustry_world_Block_R_int, "(Lmindustry/world/Block;)I", 1 },
	{ "getDestroyed", (intptr_t) M_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int, VTABLE_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int, "(Lmindustry/world/Block;)I", 1 },
};

Class class_mindustry_game_GameStats{
		.nativeName = (intptr_t) "mindustry/game/GameStats",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_GameStats),
		.classVtable = (intptr_t) vtable_mindustry_game_GameStats,
		.staticInitializer = (intptr_t) clinit_mindustry_game_GameStats,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_GameStats,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_GameStats = registerClass(&class_mindustry_game_GameStats);

}
