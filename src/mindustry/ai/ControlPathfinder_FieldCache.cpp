#include "mindustry/ai/ControlPathfinder_FieldCache.h"
#include "java/lang/Object.h"
#include "mindustry/ai/Pathfinder_PathCost.h"
#include "mindustry/gen/FieldIndex.h"
#include "mindustry/ai/ControlPathfinder.h"
#include "mindustry/ai/ControlPathfinder_FieldCache.h"
#include "arc/struct/IntMap.h"
#include "arc/struct/IntQueue.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_ai_ControlPathfinder$FieldCache(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_ControlPathfinder$FieldCache *) object;
	if (self->F_cost)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cost)->clazz)->markFunction)((jobject) self->F_cost, mark, depth + 1);
	if (self->F_frontier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frontier)->clazz)->markFunction)((jobject) self->F_frontier, mark, depth + 1);
	if (self->F_fields)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fields)->clazz)->markFunction)((jobject) self->F_fields, mark, depth + 1);
}

void clinit_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ai_ControlPathfinder$FieldCache_mindustry_ai_Pathfinder$PathCost_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder$FieldCache:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder$FieldCache(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(205);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntQueue);
	init_arc_struct_IntQueue(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK(sp[0].o))->F_frontier = (jref) sp[1].o;
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK(sp[0].o))->F_fields = (jref) sp[1].o;
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK(sp[0].o))->F_lastUpdateId = ((jlong)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_updateId);
	LINE_NUMBER(206);
	((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[0].o)))->F_cost = (jref) (frame[1].o);
	LINE_NUMBER(207);
	((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[0].o)))->F_team = (frame[3].i);
	LINE_NUMBER(208);
	((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[0].o)))->F_goalPos = (frame[4].i);
	LINE_NUMBER(209);
	((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[0].o)))->F_costId = (frame[2].i);
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_mindustry_gen_FieldIndex_get_int_int_int_R_long(ctx, (frame[4].i), (frame[2].i), (frame[3].i));
	((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK(sp[0].o))->F_mapKey = temp0;
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_ControlPathfinder$FieldCache[] {
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
	{ "cost", &class_mindustry_ai_Pathfinder$PathCost, offsetof(mindustry_ai_ControlPathfinder$FieldCache, F_cost), "Lmindustry/ai/Pathfinder$PathCost;", 16 },
	{ "costId", &class_int, offsetof(mindustry_ai_ControlPathfinder$FieldCache, F_costId), "I", 16 },
	{ "team", &class_int, offsetof(mindustry_ai_ControlPathfinder$FieldCache, F_team), "I", 16 },
	{ "goalPos", &class_int, offsetof(mindustry_ai_ControlPathfinder$FieldCache, F_goalPos), "I", 16 },
	{ "frontier", &class_arc_struct_IntQueue, offsetof(mindustry_ai_ControlPathfinder$FieldCache, F_frontier), "Larc/struct/IntQueue;", 16 },
	{ "fields", &class_arc_struct_IntMap, offsetof(mindustry_ai_ControlPathfinder$FieldCache, F_fields), "Larc/struct/IntMap;", 16 },
	{ "mapKey", &class_long, offsetof(mindustry_ai_ControlPathfinder$FieldCache, F_mapKey), "J", 16 },
	{ "lastUpdateId", &class_long, offsetof(mindustry_ai_ControlPathfinder$FieldCache, F_lastUpdateId), "J", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_ControlPathfinder$FieldCache_mindustry_ai_Pathfinder$PathCost_int_int_int, 0, "(Lmindustry/ai/Pathfinder$PathCost;III)V", 0 },
};

Class class_mindustry_ai_ControlPathfinder$FieldCache{
		.nativeName = (intptr_t) "mindustry/ai/ControlPathfinder$FieldCache",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_ControlPathfinder$FieldCache),
		.classVtable = (intptr_t) vtable_mindustry_ai_ControlPathfinder$FieldCache,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_ControlPathfinder$FieldCache,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_ControlPathfinder$FieldCache,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ai_ControlPathfinder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_ControlPathfinder$FieldCache = registerClass(&class_mindustry_ai_ControlPathfinder$FieldCache);

}

