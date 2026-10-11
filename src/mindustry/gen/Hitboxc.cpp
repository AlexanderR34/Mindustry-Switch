#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/Posc.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/gen/Entityc.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/gen/Hitboxc.h"
#include "arc/math/geom/Position.h"

extern "C" {


void mark_mindustry_gen_Hitboxc(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Hitboxc *) object;
}

void clinit_mindustry_gen_Hitboxc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_gen_Hitboxc[] {
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
	(void *) nullptr,
	(void *) nullptr,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
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
	{ "hitSize", "()F" },
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
};

static jclass interfaces[] { &class_arc_math_geom_QuadTree$QuadTreeObject, &class_mindustry_entities_Sized, &class_mindustry_gen_Entityc, &class_mindustry_gen_Posc, };

static MethodMetadata methods[] {
	{ "collides", 0, INDEX_mindustry_gen_Hitboxc_collides_mindustry_gen_Hitboxc_R_boolean, "(Lmindustry/gen/Hitboxc;)Z", 1025 },
	{ "deltaAngle", 0, INDEX_mindustry_gen_Hitboxc_deltaAngle_R_float, "()F", 1025 },
	{ "deltaLen", 0, INDEX_mindustry_gen_Hitboxc_deltaLen_R_float, "()F", 1025 },
	{ "deltaX", 0, INDEX_mindustry_gen_Hitboxc_deltaX_R_float, "()F", 1025 },
	{ "deltaY", 0, INDEX_mindustry_gen_Hitboxc_deltaY_R_float, "()F", 1025 },
	{ "hitSize", 0, INDEX_mindustry_gen_Hitboxc_hitSize_R_float, "()F", 1025 },
	{ "lastX", 0, INDEX_mindustry_gen_Hitboxc_lastX_R_float, "()F", 1025 },
	{ "lastY", 0, INDEX_mindustry_gen_Hitboxc_lastY_R_float, "()F", 1025 },
	{ "add", 0, INDEX_mindustry_gen_Hitboxc_add, "()V", 1025 },
	{ "afterRead", 0, INDEX_mindustry_gen_Hitboxc_afterRead, "()V", 1025 },
	{ "collision", 0, INDEX_mindustry_gen_Hitboxc_collision_mindustry_gen_Hitboxc_float_float, "(Lmindustry/gen/Hitboxc;FF)V", 1025 },
	{ "deltaX", 0, INDEX_mindustry_gen_Hitboxc_deltaX_float, "(F)V", 1025 },
	{ "deltaY", 0, INDEX_mindustry_gen_Hitboxc_deltaY_float, "(F)V", 1025 },
	{ "getCollisions", 0, INDEX_mindustry_gen_Hitboxc_getCollisions_arc_func_Cons, "(Larc/func/Cons;)V", 1025 },
	{ "hitSize", 0, INDEX_mindustry_gen_Hitboxc_hitSize_float, "(F)V", 1025 },
	{ "hitbox", 0, INDEX_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1025 },
	{ "hitboxTile", 0, INDEX_mindustry_gen_Hitboxc_hitboxTile_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1025 },
	{ "lastX", 0, INDEX_mindustry_gen_Hitboxc_lastX_float, "(F)V", 1025 },
	{ "lastY", 0, INDEX_mindustry_gen_Hitboxc_lastY_float, "(F)V", 1025 },
	{ "update", 0, INDEX_mindustry_gen_Hitboxc_update, "()V", 1025 },
	{ "updateLastPosition", 0, INDEX_mindustry_gen_Hitboxc_updateLastPosition, "()V", 1025 },
};

Class class_mindustry_gen_Hitboxc{
		.nativeName = (intptr_t) "mindustry/gen/Hitboxc",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Hitboxc),
		.classVtable = (intptr_t) vtable_mindustry_gen_Hitboxc,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Hitboxc,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_Hitboxc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 71,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Hitboxc = registerClass(&class_mindustry_gen_Hitboxc);

}
