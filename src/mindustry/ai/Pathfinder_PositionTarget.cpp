#include "mindustry/ai/Pathfinder_PositionTarget.h"
#include "java/lang/Object.h"
#include "mindustry/ai/Pathfinder_Flowfield.h"
#include "mindustry/ai/Pathfinder_PositionTarget.h"
#include "mindustry/ai/Pathfinder.h"
#include "arc/math/geom/Position.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_ai_Pathfinder$PositionTarget(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ai_Pathfinder$Flowfield(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_Pathfinder$PositionTarget *) object;
	if (self->F_position)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_position)->clazz)->markFunction)((jobject) self->F_position, mark, depth + 1);
}

void clinit_mindustry_ai_Pathfinder$PositionTarget(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ai_Pathfinder$Flowfield(ctx);
}

void init_mindustry_ai_Pathfinder$PositionTarget_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$PositionTarget:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder$PositionTarget(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(595);
	init_mindustry_ai_Pathfinder$Flowfield(ctx, (frame[0].o));
	LINE_NUMBER(596);
	((mindustry_ai_Pathfinder$PositionTarget *) NULL_CHECK((frame[0].o)))->F_position = (jref) (frame[1].o);
	LINE_NUMBER(597);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_refreshRate = (900);
	LINE_NUMBER(598);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder$PositionTarget_getPositions_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$PositionTarget:getPositions", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(602);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[2].o = (jobject)((mindustry_ai_Pathfinder$PositionTarget *) NULL_CHECK((frame[0].o)))->F_position;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, sp[2].o))(ctx, sp[2].o);
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp0);
	sp[2].o = (jobject)((mindustry_ai_Pathfinder$PositionTarget *) NULL_CHECK((frame[0].o)))->F_position;
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, sp[2].o))(ctx, sp[2].o);
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp2);
	jint temp4 = (jint)((func_mindustry_core_World_packArray_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_packArray_int_int_R_int])(ctx, sp[1].o, temp1, temp3);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp4);
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_Pathfinder$PositionTarget[] {
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
	(void *) M_mindustry_ai_Pathfinder$Flowfield_setup,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getCost_Array1_int_int_R_int,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_hasTargets_R_boolean,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_boolean_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_hasCompleteWeights_R_boolean,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_needsRefresh_R_boolean,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean,
	(void *) M_mindustry_ai_Pathfinder$PositionTarget_getPositions_arc_struct_IntSeq,
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
	{ "setup", "()V" },
	{ "getCost", "([II)I" },
	{ "hasTargets", "()Z" },
	{ "getNextTile", "(Lmindustry/world/Tile;Z)Lmindustry/world/Tile;" },
	{ "getNextTile", "(Lmindustry/world/Tile;)Lmindustry/world/Tile;" },
	{ "getNextTile", "(Lmindustry/world/Tile;I)Lmindustry/world/Tile;" },
	{ "hasCompleteWeights", "()Z" },
	{ "updateTargetPositions", "()V" },
	{ "needsRefresh", "()Z" },
	{ "passable", "(I)Z" },
	{ "getPositions", "(Larc/struct/IntSeq;)V" },
};

static FieldMetadata fields[] {
	{ "position", &class_arc_math_geom_Position, offsetof(mindustry_ai_Pathfinder$PositionTarget, F_position), "Larc/math/geom/Position;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_Pathfinder$PositionTarget_arc_math_geom_Position, 0, "(Larc/math/geom/Position;)V", 1 },
	{ "getPositions", (intptr_t) M_mindustry_ai_Pathfinder$PositionTarget_getPositions_arc_struct_IntSeq, VTABLE_mindustry_ai_Pathfinder$PositionTarget_getPositions_arc_struct_IntSeq, "(Larc/struct/IntSeq;)V", 1 },
};

Class class_mindustry_ai_Pathfinder$PositionTarget{
		.nativeName = (intptr_t) "mindustry/ai/Pathfinder$PositionTarget",
		.parentClass = (intptr_t) &class_mindustry_ai_Pathfinder$Flowfield,
		.size = sizeof(mindustry_ai_Pathfinder$PositionTarget),
		.classVtable = (intptr_t) vtable_mindustry_ai_Pathfinder$PositionTarget,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_Pathfinder$PositionTarget,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_Pathfinder$PositionTarget,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ai_Pathfinder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_Pathfinder$PositionTarget = registerClass(&class_mindustry_ai_Pathfinder$PositionTarget);

}

