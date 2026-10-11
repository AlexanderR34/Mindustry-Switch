#include "mindustry/entities/comp/HitboxComp.h"
#include "mindustry/gen/Posc.h"
#include "arc/func/Cons.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/entities/comp/HitboxComp.h"
#include "java/lang/Object.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/gen/Entityc.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/gen/Hitboxc.h"
#include "arc/math/geom/Position.h"

extern "C" {


void mark_mindustry_entities_comp_HitboxComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_HitboxComp *) object;
}

void clinit_mindustry_entities_comp_HitboxComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_HitboxComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_HitboxComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HitboxComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:update", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(20);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HitboxComp_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:add", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	((func_mindustry_entities_comp_HitboxComp_updateLastPosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HitboxComp_updateLastPosition])(ctx, (frame[0].o));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HitboxComp_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:afterRead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	((func_mindustry_entities_comp_HitboxComp_updateLastPosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HitboxComp_updateLastPosition])(ctx, (frame[0].o));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_HitboxComp_hitSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:hitSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_hitSize);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HitboxComp_getCollisions_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:getCollisions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HitboxComp_updateLastPosition(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:updateLastPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_deltaX = (((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_lastX));
	LINE_NUMBER(43);
	((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_deltaY = (((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_lastY));
	LINE_NUMBER(44);
	((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_lastX = ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(45);
	((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_lastY = ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HitboxComp_collision_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:collision", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_HitboxComp_deltaLen_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:deltaLen", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_len_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_deltaX), ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_deltaY));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_HitboxComp_deltaAngle_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:deltaAngle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_deltaX), ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_deltaY));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_HitboxComp_collides_mindustry_gen_Hitboxc_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:collides", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HitboxComp_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:hitbox", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_hitSize), ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_hitSize));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HitboxComp_hitboxTile_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HitboxComp:hitboxTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(0.66f))), (jfloat(7.8f)));
	frame[2].f = temp0;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_HitboxComp *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), (frame[2].f));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_HitboxComp[] {
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
	(void *) M_mindustry_entities_comp_HitboxComp_add,
	(void *) M_mindustry_entities_comp_HitboxComp_afterRead,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_HitboxComp_update,
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
	(void *) M_mindustry_entities_comp_HitboxComp_hitSize_R_float,
	(void *) M_mindustry_entities_comp_HitboxComp_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_entities_comp_HitboxComp_getCollisions_arc_func_Cons,
	(void *) M_mindustry_entities_comp_HitboxComp_updateLastPosition,
	(void *) M_mindustry_entities_comp_HitboxComp_collision_mindustry_gen_Hitboxc_float_float,
	(void *) M_mindustry_entities_comp_HitboxComp_deltaLen_R_float,
	(void *) M_mindustry_entities_comp_HitboxComp_deltaAngle_R_float,
	(void *) M_mindustry_entities_comp_HitboxComp_collides_mindustry_gen_Hitboxc_R_boolean,
	(void *) M_mindustry_entities_comp_HitboxComp_hitboxTile_arc_math_geom_Rect,
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
	{ "hitSize", "()F" },
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "getCollisions", "(Larc/func/Cons;)V" },
	{ "updateLastPosition", "()V" },
	{ "collision", "(Lmindustry/gen/Hitboxc;FF)V" },
	{ "deltaLen", "()F" },
	{ "deltaAngle", "()F" },
	{ "collides", "(Lmindustry/gen/Hitboxc;)Z" },
	{ "hitboxTile", "(Larc/math/geom/Rect;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_entities_Sized, &class_arc_math_geom_QuadTree$QuadTreeObject, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_HitboxComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_HitboxComp, F_y), "F", 0 },
	{ "lastX", &class_float, offsetof(mindustry_entities_comp_HitboxComp, F_lastX), "F", 128 },
	{ "lastY", &class_float, offsetof(mindustry_entities_comp_HitboxComp, F_lastY), "F", 128 },
	{ "deltaX", &class_float, offsetof(mindustry_entities_comp_HitboxComp, F_deltaX), "F", 128 },
	{ "deltaY", &class_float, offsetof(mindustry_entities_comp_HitboxComp, F_deltaY), "F", 128 },
	{ "hitSize", &class_float, offsetof(mindustry_entities_comp_HitboxComp, F_hitSize), "F", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_HitboxComp, 0, "()V", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_HitboxComp_update, VTABLE_mindustry_entities_comp_HitboxComp_update, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_entities_comp_HitboxComp_add, VTABLE_mindustry_entities_comp_HitboxComp_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_entities_comp_HitboxComp_afterRead, VTABLE_mindustry_entities_comp_HitboxComp_afterRead, "()V", 1 },
	{ "hitSize", (intptr_t) M_mindustry_entities_comp_HitboxComp_hitSize_R_float, VTABLE_mindustry_entities_comp_HitboxComp_hitSize_R_float, "()F", 1 },
	{ "getCollisions", (intptr_t) M_mindustry_entities_comp_HitboxComp_getCollisions_arc_func_Cons, VTABLE_mindustry_entities_comp_HitboxComp_getCollisions_arc_func_Cons, "(Larc/func/Cons;)V", 0 },
	{ "updateLastPosition", (intptr_t) M_mindustry_entities_comp_HitboxComp_updateLastPosition, VTABLE_mindustry_entities_comp_HitboxComp_updateLastPosition, "()V", 0 },
	{ "collision", (intptr_t) M_mindustry_entities_comp_HitboxComp_collision_mindustry_gen_Hitboxc_float_float, VTABLE_mindustry_entities_comp_HitboxComp_collision_mindustry_gen_Hitboxc_float_float, "(Lmindustry/gen/Hitboxc;FF)V", 0 },
	{ "deltaLen", (intptr_t) M_mindustry_entities_comp_HitboxComp_deltaLen_R_float, VTABLE_mindustry_entities_comp_HitboxComp_deltaLen_R_float, "()F", 0 },
	{ "deltaAngle", (intptr_t) M_mindustry_entities_comp_HitboxComp_deltaAngle_R_float, VTABLE_mindustry_entities_comp_HitboxComp_deltaAngle_R_float, "()F", 0 },
	{ "collides", (intptr_t) M_mindustry_entities_comp_HitboxComp_collides_mindustry_gen_Hitboxc_R_boolean, VTABLE_mindustry_entities_comp_HitboxComp_collides_mindustry_gen_Hitboxc_R_boolean, "(Lmindustry/gen/Hitboxc;)Z", 0 },
	{ "hitbox", (intptr_t) M_mindustry_entities_comp_HitboxComp_hitbox_arc_math_geom_Rect, VTABLE_mindustry_entities_comp_HitboxComp_hitbox_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "hitboxTile", (intptr_t) M_mindustry_entities_comp_HitboxComp_hitboxTile_arc_math_geom_Rect, VTABLE_mindustry_entities_comp_HitboxComp_hitboxTile_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
};

Class class_mindustry_entities_comp_HitboxComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/HitboxComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_HitboxComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_HitboxComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_HitboxComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_HitboxComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 62,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_HitboxComp = registerClass(&class_mindustry_entities_comp_HitboxComp);

}
