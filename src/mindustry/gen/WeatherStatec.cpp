#include "mindustry/gen/WeatherStatec.h"
#include "mindustry/gen/Posc.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "mindustry/gen/WeatherStatec.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/type/Weather.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Syncc.h"
#include "arc/math/geom/Position.h"

extern "C" {


void mark_mindustry_gen_WeatherStatec(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_WeatherStatec *) object;
}

void clinit_mindustry_gen_WeatherStatec(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_gen_WeatherStatec[] {
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
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "windVector", "()Larc/math/geom/Vec2;" },
	{ "effectTimer", "()F" },
	{ "intensity", "()F" },
	{ "life", "()F" },
	{ "opacity", "()F" },
	{ "weather", "()Lmindustry/type/Weather;" },
	{ "effectTimer", "(F)V" },
	{ "init", "(Lmindustry/type/Weather;)V" },
	{ "intensity", "(F)V" },
	{ "life", "(F)V" },
	{ "opacity", "(F)V" },
	{ "weather", "(Lmindustry/type/Weather;)V" },
	{ "windVector", "(Larc/math/geom/Vec2;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_Posc, &class_mindustry_gen_Syncc, };

static MethodMetadata methods[] {
	{ "windVector", 0, INDEX_mindustry_gen_WeatherStatec_windVector_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1025 },
	{ "effectTimer", 0, INDEX_mindustry_gen_WeatherStatec_effectTimer_R_float, "()F", 1025 },
	{ "intensity", 0, INDEX_mindustry_gen_WeatherStatec_intensity_R_float, "()F", 1025 },
	{ "life", 0, INDEX_mindustry_gen_WeatherStatec_life_R_float, "()F", 1025 },
	{ "opacity", 0, INDEX_mindustry_gen_WeatherStatec_opacity_R_float, "()F", 1025 },
	{ "weather", 0, INDEX_mindustry_gen_WeatherStatec_weather_R_mindustry_type_Weather, "()Lmindustry/type/Weather;", 1025 },
	{ "draw", 0, INDEX_mindustry_gen_WeatherStatec_draw, "()V", 1025 },
	{ "effectTimer", 0, INDEX_mindustry_gen_WeatherStatec_effectTimer_float, "(F)V", 1025 },
	{ "init", 0, INDEX_mindustry_gen_WeatherStatec_init_mindustry_type_Weather, "(Lmindustry/type/Weather;)V", 1025 },
	{ "intensity", 0, INDEX_mindustry_gen_WeatherStatec_intensity_float, "(F)V", 1025 },
	{ "life", 0, INDEX_mindustry_gen_WeatherStatec_life_float, "(F)V", 1025 },
	{ "opacity", 0, INDEX_mindustry_gen_WeatherStatec_opacity_float, "(F)V", 1025 },
	{ "update", 0, INDEX_mindustry_gen_WeatherStatec_update, "()V", 1025 },
	{ "weather", 0, INDEX_mindustry_gen_WeatherStatec_weather_mindustry_type_Weather, "(Lmindustry/type/Weather;)V", 1025 },
	{ "windVector", 0, INDEX_mindustry_gen_WeatherStatec_windVector_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1025 },
};

Class class_mindustry_gen_WeatherStatec{
		.nativeName = (intptr_t) "mindustry/gen/WeatherStatec",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_WeatherStatec),
		.classVtable = (intptr_t) vtable_mindustry_gen_WeatherStatec,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_WeatherStatec,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_WeatherStatec,
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
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 82,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_WeatherStatec = registerClass(&class_mindustry_gen_WeatherStatec);

}
