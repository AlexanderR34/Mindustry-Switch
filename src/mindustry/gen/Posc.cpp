#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_gen_Posc(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Posc *) object;
}

void clinit_mindustry_gen_Posc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_gen_Posc[] {
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
};

static jclass interfaces[] { &class_arc_math_geom_Position, &class_mindustry_gen_Entityc, };

static MethodMetadata methods[] {
	{ "floorOn", 0, INDEX_mindustry_gen_Posc_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1025 },
	{ "buildOn", 0, INDEX_mindustry_gen_Posc_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1025 },
	{ "onSolid", 0, INDEX_mindustry_gen_Posc_onSolid_R_boolean, "()Z", 1025 },
	{ "getX", 0, INDEX_mindustry_gen_Posc_getX_R_float, "()F", 1025 },
	{ "getY", 0, INDEX_mindustry_gen_Posc_getY_R_float, "()F", 1025 },
	{ "x", 0, INDEX_mindustry_gen_Posc_x_R_float, "()F", 1025 },
	{ "y", 0, INDEX_mindustry_gen_Posc_y_R_float, "()F", 1025 },
	{ "tileX", 0, INDEX_mindustry_gen_Posc_tileX_R_int, "()I", 1025 },
	{ "tileY", 0, INDEX_mindustry_gen_Posc_tileY_R_int, "()I", 1025 },
	{ "blockOn", 0, INDEX_mindustry_gen_Posc_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1025 },
	{ "tileOn", 0, INDEX_mindustry_gen_Posc_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1025 },
	{ "set", 0, INDEX_mindustry_gen_Posc_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1025 },
	{ "set", 0, INDEX_mindustry_gen_Posc_set_float_float, "(FF)V", 1025 },
	{ "trns", 0, INDEX_mindustry_gen_Posc_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1025 },
	{ "trns", 0, INDEX_mindustry_gen_Posc_trns_float_float, "(FF)V", 1025 },
	{ "x", 0, INDEX_mindustry_gen_Posc_x_float, "(F)V", 1025 },
	{ "y", 0, INDEX_mindustry_gen_Posc_y_float, "(F)V", 1025 },
};

Class class_mindustry_gen_Posc{
		.nativeName = (intptr_t) "mindustry/gen/Posc",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Posc),
		.classVtable = (intptr_t) vtable_mindustry_gen_Posc,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Posc,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_Posc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 53,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Posc = registerClass(&class_mindustry_gen_Posc);

}
