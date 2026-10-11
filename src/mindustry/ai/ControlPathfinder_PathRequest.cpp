#include "mindustry/ai/ControlPathfinder_PathRequest.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/struct/IntFloatMap.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/ControlPathfinder_PathRequest.h"
#include "mindustry/ai/ControlPathfinder.h"
#include "arc/struct/IntSeq.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "mindustry/ai/PathfindQueue.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/ai/ControlPathfinder_FieldCache.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "arc/struct/IntIntMap.h"

extern "C" {


void mark_mindustry_ai_ControlPathfinder$PathRequest(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_ControlPathfinder$PathRequest *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_resultPath)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resultPath)->clazz)->markFunction)((jobject) self->F_resultPath, mark, depth + 1);
	if (self->F_costs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_costs)->clazz)->markFunction)((jobject) self->F_costs, mark, depth + 1);
	if (self->F_cameFrom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cameFrom)->clazz)->markFunction)((jobject) self->F_cameFrom, mark, depth + 1);
	if (self->F_frontier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frontier)->clazz)->markFunction)((jobject) self->F_frontier, mark, depth + 1);
	if (self->F_oldCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_oldCache)->clazz)->markFunction)((jobject) self->F_oldCache, mark, depth + 1);
	if (self->F_lastTargetTile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTargetTile)->clazz)->markFunction)((jobject) self->F_lastTargetTile, mark, depth + 1);
}

void clinit_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ai_ControlPathfinder$PathRequest_mindustry_gen_Unit_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder$PathRequest:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder$PathRequest(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(180);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_resultPath = (jref) sp[1].o;
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap);
	init_arc_struct_IntFloatMap(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_costs = (jref) sp[1].o;
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap);
	init_arc_struct_IntIntMap(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_cameFrom = (jref) sp[1].o;
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_PathfindQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ai_PathfindQueue);
	init_mindustry_ai_PathfindQueue(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_frontier = (jref) sp[1].o;
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_lastUpdateId = ((jlong)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_updateId);
	LINE_NUMBER(170);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[0].o)))->F_notFound = (jint(0));
	LINE_NUMBER(171);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[0].o)))->F_invalidated = (jint(0));
	LINE_NUMBER(175);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[0].o)))->F_lastRaycastResult = (jint(0));
	LINE_NUMBER(181);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(182);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[0].o)))->F_costId = (frame[3].i);
	LINE_NUMBER(183);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[0].o)))->F_team = (frame[2].i);
	LINE_NUMBER(184);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[0].o)))->F_destination = (frame[4].i);
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_ControlPathfinder$PathRequest;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field costs
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field cameFrom
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field frontier
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field oldCache
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastTargetTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ai_ControlPathfinder$PathRequest[] {
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
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_unit), "Lmindustry/gen/Unit;", 16 },
	{ "destination", &class_int, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_destination), "I", 16 },
	{ "team", &class_int, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_team), "I", 16 },
	{ "costId", &class_int, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_costId), "I", 16 },
	{ "resultPath", &class_arc_struct_IntSeq, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_resultPath), "Larc/struct/IntSeq;", 16 },
	{ "costs", &class_arc_struct_IntFloatMap, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_costs), "Larc/struct/IntFloatMap;", 0 },
	{ "cameFrom", &class_arc_struct_IntIntMap, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_cameFrom), "Larc/struct/IntIntMap;", 0 },
	{ "frontier", &class_mindustry_ai_PathfindQueue, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_frontier), "Lmindustry/ai/PathfindQueue;", 0 },
	{ "lastUpdateId", &class_long, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_lastUpdateId), "J", 0 },
	{ "lastRecomputeTime", &class_long, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_lastRecomputeTime), "J", 0 },
	{ "notFound", &class_boolean, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_notFound), "Z", 64 },
	{ "invalidated", &class_boolean, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_invalidated), "Z", 64 },
	{ "oldCache", &class_mindustry_ai_ControlPathfinder$FieldCache, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_oldCache), "Lmindustry/ai/ControlPathfinder$FieldCache;", 64 },
	{ "lastRaycastResult", &class_boolean, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_lastRaycastResult), "Z", 0 },
	{ "lastRaycastTile", &class_int, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_lastRaycastTile), "I", 0 },
	{ "lastWorldUpdate", &class_int, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_lastWorldUpdate), "I", 0 },
	{ "lastTile", &class_int, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_lastTile), "I", 0 },
	{ "lastTargetTile", &class_mindustry_world_Tile, offsetof(mindustry_ai_ControlPathfinder$PathRequest, F_lastTargetTile), "Lmindustry/world/Tile;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_ControlPathfinder$PathRequest_mindustry_gen_Unit_int_int_int, 0, "(Lmindustry/gen/Unit;III)V", 0 },
};

Class class_mindustry_ai_ControlPathfinder$PathRequest{
		.nativeName = (intptr_t) "mindustry/ai/ControlPathfinder$PathRequest",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_ControlPathfinder$PathRequest),
		.classVtable = (intptr_t) vtable_mindustry_ai_ControlPathfinder$PathRequest,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_ControlPathfinder$PathRequest,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_ControlPathfinder$PathRequest,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ai_ControlPathfinder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_ControlPathfinder$PathRequest = registerClass(&class_mindustry_ai_ControlPathfinder$PathRequest);

}

