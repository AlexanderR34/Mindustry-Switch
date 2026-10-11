#include "mindustry/entities/comp/PhysicsComp.h"
#include "mindustry/gen/Posc.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/entities/comp/PhysicsComp.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/Velc.h"
#include "arc/math/geom/Position.h"

extern "C" {


void mark_mindustry_entities_comp_PhysicsComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_PhysicsComp *) object;
	if (self->F_vel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vel)->clazz)->markFunction)((jobject) self->F_vel, mark, depth + 1);
}

void clinit_mindustry_entities_comp_PhysicsComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_PhysicsComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PhysicsComp:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PhysicsComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_PhysicsComp_mass_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PhysicsComp:mass", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return ((((jfloat)((mindustry_entities_comp_PhysicsComp *) NULL_CHECK((frame[0].o)))->F_hitSize) * ((jfloat)((mindustry_entities_comp_PhysicsComp *) NULL_CHECK((frame[0].o)))->F_hitSize)) * (jfloat(3.1415927f)));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PhysicsComp_impulse_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PhysicsComp:impulse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(23);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_PhysicsComp_mass_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PhysicsComp_mass_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_entities_comp_PhysicsComp *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[1].f) / (frame[3].f)), ((frame[2].f) / (frame[3].f)));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PhysicsComp_impulse_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PhysicsComp:impulse", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	((func_mindustry_entities_comp_PhysicsComp_impulse_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PhysicsComp_impulse_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PhysicsComp_impulseNet_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PhysicsComp:impulseNet", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	((func_mindustry_entities_comp_PhysicsComp_impulse_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PhysicsComp_impulse_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(35);
	jint temp0 = (jint)((func_mindustry_entities_comp_PhysicsComp_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PhysicsComp_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(36);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_PhysicsComp_mass_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PhysicsComp_mass_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(37);
	((func_mindustry_entities_comp_PhysicsComp_move_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PhysicsComp_move_float_float])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) / (frame[2].f)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) / (frame[2].f)));
	}
label_2:;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_PhysicsComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PhysicsComp_mass_R_float,
	(void *) M_mindustry_entities_comp_PhysicsComp_impulse_float_float,
	(void *) M_mindustry_entities_comp_PhysicsComp_impulse_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_comp_PhysicsComp_impulseNet_arc_math_geom_Vec2,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "solidity", "()Lmindustry/entities/EntityCollisions$SolidPred;" },
	{ "canPassOn", "()Z" },
	{ "canPass", "(II)Z" },
	{ "vel", "()Larc/math/geom/Vec2;" },
	{ "ignoreSolids", "()Z" },
	{ "moving", "()Z" },
	{ "drag", "()F" },
	{ "drag", "(F)V" },
	{ "move", "(Larc/math/geom/Vec2;)V" },
	{ "move", "(FF)V" },
	{ "vel", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(FF)V" },
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "hitSize", "()F" },
	{ "collides", "(Lmindustry/gen/Hitboxc;)Z" },
	{ "deltaAngle", "()F" },
	{ "deltaLen", "()F" },
	{ "deltaX", "()F" },
	{ "deltaY", "()F" },
	{ "lastX", "()F" },
	{ "lastY", "()F" },
	{ "collision", "(Lmindustry/gen/Hitboxc;FF)V" },
	{ "deltaX", "(F)V" },
	{ "deltaY", "(F)V" },
	{ "getCollisions", "(Larc/func/Cons;)V" },
	{ "hitSize", "(F)V" },
	{ "hitboxTile", "(Larc/math/geom/Rect;)V" },
	{ "lastX", "(F)V" },
	{ "lastY", "(F)V" },
	{ "updateLastPosition", "()V" },
	{ "mass", "()F" },
	{ "impulse", "(FF)V" },
	{ "impulse", "(Larc/math/geom/Vec2;)V" },
	{ "impulseNet", "(Larc/math/geom/Vec2;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Velc, &class_mindustry_gen_Hitboxc, };

static FieldMetadata fields[] {
	{ "hitSize", &class_float, offsetof(mindustry_entities_comp_PhysicsComp, F_hitSize), "F", 0 },
	{ "x", &class_float, offsetof(mindustry_entities_comp_PhysicsComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_PhysicsComp, F_y), "F", 0 },
	{ "vel", &class_arc_math_geom_Vec2, offsetof(mindustry_entities_comp_PhysicsComp, F_vel), "Larc/math/geom/Vec2;", 0 },
	{ "hasPhysicsRef", &class_boolean, offsetof(mindustry_entities_comp_PhysicsComp, F_hasPhysicsRef), "Z", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_PhysicsComp, 0, "()V", 0 },
	{ "mass", (intptr_t) M_mindustry_entities_comp_PhysicsComp_mass_R_float, VTABLE_mindustry_entities_comp_PhysicsComp_mass_R_float, "()F", 0 },
	{ "impulse", (intptr_t) M_mindustry_entities_comp_PhysicsComp_impulse_float_float, VTABLE_mindustry_entities_comp_PhysicsComp_impulse_float_float, "(FF)V", 0 },
	{ "impulse", (intptr_t) M_mindustry_entities_comp_PhysicsComp_impulse_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_PhysicsComp_impulse_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 0 },
	{ "impulseNet", (intptr_t) M_mindustry_entities_comp_PhysicsComp_impulseNet_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_PhysicsComp_impulseNet_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 0 },
};

Class class_mindustry_entities_comp_PhysicsComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/PhysicsComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_PhysicsComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_PhysicsComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_PhysicsComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_PhysicsComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 88,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_PhysicsComp = registerClass(&class_mindustry_entities_comp_PhysicsComp);

}
