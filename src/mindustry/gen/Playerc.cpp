#include "mindustry/gen/Playerc.h"
#include "mindustry/net/Administration_PlayerInfo.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "mindustry/gen/Entityc.h"
#include "arc/struct/Seq.h"
#include "mindustry/gen/Syncc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/input/InputHandler_QueryEachable.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Playerc.h"
#include "mindustry/net/NetConnection.h"
#include "java/lang/reflect/Field.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Unit.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/math/geom/QuadTree.h"
#include "mindustry/ai/UnitCommand.h"
#include "arc/util/Nullable.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/net/Packets_KickReason.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Player.h"
#include "mindustry/gen/Drawc.h"
#include "arc/util/Ratekeeper.h"
#include "mindustry/game/Team.h"
#include "mindustry/gen/Timerc.h"

extern "C" {


void mark_mindustry_gen_Playerc(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Playerc *) object;
}

void clinit_mindustry_gen_Playerc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_Playerc;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method lastCommand
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method justSwitchFrom
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method justSwitchTo
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method previewPlanTree
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method pingText
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method planEachable
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method con
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method selectedBlock
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_gen_Playerc[] {
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
	(void *) M_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_units_UnitController_isValidController_R_boolean,
	(void *) M_mindustry_entities_units_UnitController_isLogicControllable_R_boolean,
	(void *) M_mindustry_entities_units_UnitController_updateUnit,
	(void *) M_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit,
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
	{ "unit", "(Lmindustry/gen/Unit;)V" },
	{ "unit", "()Lmindustry/gen/Unit;" },
	{ "hit", "(Lmindustry/gen/Bullet;)V" },
	{ "isValidController", "()Z" },
	{ "isLogicControllable", "()Z" },
	{ "updateUnit", "()V" },
	{ "removed", "(Lmindustry/gen/Unit;)V" },
	{ "afterRead", "(Lmindustry/gen/Unit;)V" },
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
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "bestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "coloredName", "()Ljava/lang/String;" },
	{ "lastCommand", "()Lmindustry/ai/UnitCommand;" },
	{ "lastCommand", "(Lmindustry/ai/UnitCommand;)V" },
	{ "justSwitchFrom", "()Lmindustry/gen/Unit;" },
	{ "justSwitchTo", "()Lmindustry/gen/Unit;" },
	{ "previewPlanTree", "()Larc/math/geom/QuadTree;" },
	{ "pingText", "()Ljava/lang/String;" },
	{ "planEachable", "()Lmindustry/input/InputHandler$QueryEachable;" },
	{ "con", "()Lmindustry/net/NetConnection;" },
	{ "selectedBlock", "()Lmindustry/world/Block;" },
	{ "color", "()Larc/graphics/Color;" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getPreviewPlans", "()Larc/struct/Seq;" },
	{ "previewPlansAssembling", "()Larc/struct/Seq;" },
	{ "previewPlansCurrent", "()Larc/struct/Seq;" },
	{ "itemDepositRate", "()Larc/util/Ratekeeper;" },
	{ "admin", "()Z" },
	{ "boosting", "()Z" },
	{ "dead", "()Z" },
	{ "displayAmmo", "()Z" },
	{ "isBuilder", "()Z" },
	{ "isPinging", "()Z" },
	{ "previewPlansDirty", "()Z" },
	{ "receivingNewPlanGroup", "()Z" },
	{ "shooting", "()Z" },
	{ "typing", "()Z" },
	{ "deathTimer", "()F" },
	{ "mouseX", "()F" },
	{ "mouseY", "()F" },
	{ "pingTime", "()F" },
	{ "pingX", "()F" },
	{ "pingY", "()F" },
	{ "textFadeTime", "()F" },
	{ "lastPreviewPlanGroup", "()I" },
	{ "lastPreviewPlanGroupServer", "()I" },
	{ "selectedRotation", "()I" },
	{ "ip", "()Ljava/lang/String;" },
	{ "lastText", "()Ljava/lang/String;" },
	{ "locale", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
	{ "plainName", "()Ljava/lang/String;" },
	{ "usid", "()Ljava/lang/String;" },
	{ "uuid", "()Ljava/lang/String;" },
	{ "lastPreviewPlanTimestamp", "()J" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "getInfo", "()Lmindustry/net/Administration$PlayerInfo;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "admin", "(Z)V" },
	{ "boosting", "(Z)V" },
	{ "checkSpawn", "()V" },
	{ "clearUnit", "()V" },
	{ "color", "(Larc/graphics/Color;)V" },
	{ "con", "(Lmindustry/net/NetConnection;)V" },
	{ "deathTimer", "(F)V" },
	{ "drawName", "()V" },
	{ "drawPing", "()V" },
	{ "handlePreviewPlans", "(ILarc/struct/Seq;)V" },
	{ "itemDepositRate", "(Larc/util/Ratekeeper;)V" },
	{ "justSwitchFrom", "(Lmindustry/gen/Unit;)V" },
	{ "justSwitchTo", "(Lmindustry/gen/Unit;)V" },
	{ "kick", "(Ljava/lang/String;)V" },
	{ "kick", "(Ljava/lang/String;J)V" },
	{ "kick", "(Lmindustry/net/Packets$KickReason;)V" },
	{ "kick", "(Lmindustry/net/Packets$KickReason;J)V" },
	{ "lastPreviewPlanGroup", "(I)V" },
	{ "lastPreviewPlanGroupServer", "(I)V" },
	{ "lastPreviewPlanTimestamp", "(J)V" },
	{ "lastText", "(Ljava/lang/String;)V" },
	{ "locale", "(Ljava/lang/String;)V" },
	{ "mouseX", "(F)V" },
	{ "mouseY", "(F)V" },
	{ "name", "(Ljava/lang/String;)V" },
	{ "pingText", "(Ljava/lang/String;)V" },
	{ "pingTime", "(F)V" },
	{ "pingX", "(F)V" },
	{ "pingY", "(F)V" },
	{ "planEachable", "(Lmindustry/input/InputHandler$QueryEachable;)V" },
	{ "previewPlanTree", "(Larc/math/geom/QuadTree;)V" },
	{ "previewPlansAssembling", "(Larc/struct/Seq;)V" },
	{ "previewPlansCurrent", "(Larc/struct/Seq;)V" },
	{ "previewPlansDirty", "(Z)V" },
	{ "receivingNewPlanGroup", "(Z)V" },
	{ "reset", "()V" },
	{ "selectedBlock", "(Lmindustry/world/Block;)V" },
	{ "selectedRotation", "(I)V" },
	{ "sendMessage", "(Ljava/lang/String;)V" },
	{ "sendMessage", "(Ljava/lang/String;Lmindustry/gen/Player;)V" },
	{ "sendMessage", "(Ljava/lang/String;Lmindustry/gen/Player;Ljava/lang/String;)V" },
	{ "sendUnformatted", "(Lmindustry/gen/Player;Ljava/lang/String;)V" },
	{ "sendUnformatted", "(Ljava/lang/String;)V" },
	{ "shooting", "(Z)V" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "textFadeTime", "(F)V" },
	{ "typing", "(Z)V" },
};

static jclass interfaces[] { &class_mindustry_entities_units_UnitController, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_Posc, &class_mindustry_gen_Syncc, &class_mindustry_gen_Timerc, };

static MethodMetadata methods[] {
	{ "bestCore", 0, INDEX_mindustry_gen_Playerc_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1025 },
	{ "coloredName", 0, INDEX_mindustry_gen_Playerc_coloredName_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "lastCommand", 0, INDEX_mindustry_gen_Playerc_lastCommand_R_mindustry_ai_UnitCommand, "()Lmindustry/ai/UnitCommand;", 1025 },
	{ "lastCommand", 0, INDEX_mindustry_gen_Playerc_lastCommand_mindustry_ai_UnitCommand, "(Lmindustry/ai/UnitCommand;)V", 1025 },
	{ "justSwitchFrom", 0, INDEX_mindustry_gen_Playerc_justSwitchFrom_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1025 },
	{ "justSwitchTo", 0, INDEX_mindustry_gen_Playerc_justSwitchTo_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1025 },
	{ "previewPlanTree", 0, INDEX_mindustry_gen_Playerc_previewPlanTree_R_arc_math_geom_QuadTree, "()Larc/math/geom/QuadTree;", 1025 },
	{ "pingText", 0, INDEX_mindustry_gen_Playerc_pingText_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "planEachable", 0, INDEX_mindustry_gen_Playerc_planEachable_R_mindustry_input_InputHandler$QueryEachable, "()Lmindustry/input/InputHandler$QueryEachable;", 1025 },
	{ "con", 0, INDEX_mindustry_gen_Playerc_con_R_mindustry_net_NetConnection, "()Lmindustry/net/NetConnection;", 1025 },
	{ "selectedBlock", 0, INDEX_mindustry_gen_Playerc_selectedBlock_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1025 },
	{ "unit", 0, INDEX_mindustry_gen_Playerc_unit_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1025 },
	{ "color", 0, INDEX_mindustry_gen_Playerc_color_R_arc_graphics_Color, "()Larc/graphics/Color;", 1025 },
	{ "icon", 0, INDEX_mindustry_gen_Playerc_icon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1025 },
	{ "getPreviewPlans", 0, INDEX_mindustry_gen_Playerc_getPreviewPlans_R_arc_struct_Seq, "()Larc/struct/Seq;", 1025 },
	{ "previewPlansAssembling", 0, INDEX_mindustry_gen_Playerc_previewPlansAssembling_R_arc_struct_Seq, "()Larc/struct/Seq;", 1025 },
	{ "previewPlansCurrent", 0, INDEX_mindustry_gen_Playerc_previewPlansCurrent_R_arc_struct_Seq, "()Larc/struct/Seq;", 1025 },
	{ "itemDepositRate", 0, INDEX_mindustry_gen_Playerc_itemDepositRate_R_arc_util_Ratekeeper, "()Larc/util/Ratekeeper;", 1025 },
	{ "admin", 0, INDEX_mindustry_gen_Playerc_admin_R_boolean, "()Z", 1025 },
	{ "boosting", 0, INDEX_mindustry_gen_Playerc_boosting_R_boolean, "()Z", 1025 },
	{ "dead", 0, INDEX_mindustry_gen_Playerc_dead_R_boolean, "()Z", 1025 },
	{ "displayAmmo", 0, INDEX_mindustry_gen_Playerc_displayAmmo_R_boolean, "()Z", 1025 },
	{ "isBuilder", 0, INDEX_mindustry_gen_Playerc_isBuilder_R_boolean, "()Z", 1025 },
	{ "isLogicControllable", 0, INDEX_mindustry_gen_Playerc_isLogicControllable_R_boolean, "()Z", 1025 },
	{ "isPinging", 0, INDEX_mindustry_gen_Playerc_isPinging_R_boolean, "()Z", 1025 },
	{ "isValidController", 0, INDEX_mindustry_gen_Playerc_isValidController_R_boolean, "()Z", 1025 },
	{ "previewPlansDirty", 0, INDEX_mindustry_gen_Playerc_previewPlansDirty_R_boolean, "()Z", 1025 },
	{ "receivingNewPlanGroup", 0, INDEX_mindustry_gen_Playerc_receivingNewPlanGroup_R_boolean, "()Z", 1025 },
	{ "shooting", 0, INDEX_mindustry_gen_Playerc_shooting_R_boolean, "()Z", 1025 },
	{ "typing", 0, INDEX_mindustry_gen_Playerc_typing_R_boolean, "()Z", 1025 },
	{ "clipSize", 0, INDEX_mindustry_gen_Playerc_clipSize_R_float, "()F", 1025 },
	{ "deathTimer", 0, INDEX_mindustry_gen_Playerc_deathTimer_R_float, "()F", 1025 },
	{ "mouseX", 0, INDEX_mindustry_gen_Playerc_mouseX_R_float, "()F", 1025 },
	{ "mouseY", 0, INDEX_mindustry_gen_Playerc_mouseY_R_float, "()F", 1025 },
	{ "pingTime", 0, INDEX_mindustry_gen_Playerc_pingTime_R_float, "()F", 1025 },
	{ "pingX", 0, INDEX_mindustry_gen_Playerc_pingX_R_float, "()F", 1025 },
	{ "pingY", 0, INDEX_mindustry_gen_Playerc_pingY_R_float, "()F", 1025 },
	{ "textFadeTime", 0, INDEX_mindustry_gen_Playerc_textFadeTime_R_float, "()F", 1025 },
	{ "lastPreviewPlanGroup", 0, INDEX_mindustry_gen_Playerc_lastPreviewPlanGroup_R_int, "()I", 1025 },
	{ "lastPreviewPlanGroupServer", 0, INDEX_mindustry_gen_Playerc_lastPreviewPlanGroupServer_R_int, "()I", 1025 },
	{ "selectedRotation", 0, INDEX_mindustry_gen_Playerc_selectedRotation_R_int, "()I", 1025 },
	{ "ip", 0, INDEX_mindustry_gen_Playerc_ip_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "lastText", 0, INDEX_mindustry_gen_Playerc_lastText_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "locale", 0, INDEX_mindustry_gen_Playerc_locale_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "name", 0, INDEX_mindustry_gen_Playerc_name_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "plainName", 0, INDEX_mindustry_gen_Playerc_plainName_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "usid", 0, INDEX_mindustry_gen_Playerc_usid_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "uuid", 0, INDEX_mindustry_gen_Playerc_uuid_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "lastPreviewPlanTimestamp", 0, INDEX_mindustry_gen_Playerc_lastPreviewPlanTimestamp_R_long, "()J", 1025 },
	{ "team", 0, INDEX_mindustry_gen_Playerc_team_R_mindustry_game_Team, "()Lmindustry/game/Team;", 1025 },
	{ "getInfo", 0, INDEX_mindustry_gen_Playerc_getInfo_R_mindustry_net_Administration$PlayerInfo, "()Lmindustry/net/Administration$PlayerInfo;", 1025 },
	{ "closestCore", 0, INDEX_mindustry_gen_Playerc_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1025 },
	{ "core", 0, INDEX_mindustry_gen_Playerc_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1025 },
	{ "admin", 0, INDEX_mindustry_gen_Playerc_admin_boolean, "(Z)V", 1025 },
	{ "afterSync", 0, INDEX_mindustry_gen_Playerc_afterSync, "()V", 1025 },
	{ "boosting", 0, INDEX_mindustry_gen_Playerc_boosting_boolean, "(Z)V", 1025 },
	{ "checkSpawn", 0, INDEX_mindustry_gen_Playerc_checkSpawn, "()V", 1025 },
	{ "clearUnit", 0, INDEX_mindustry_gen_Playerc_clearUnit, "()V", 1025 },
	{ "color", 0, INDEX_mindustry_gen_Playerc_color_arc_graphics_Color, "(Larc/graphics/Color;)V", 1025 },
	{ "con", 0, INDEX_mindustry_gen_Playerc_con_mindustry_net_NetConnection, "(Lmindustry/net/NetConnection;)V", 1025 },
	{ "deathTimer", 0, INDEX_mindustry_gen_Playerc_deathTimer_float, "(F)V", 1025 },
	{ "draw", 0, INDEX_mindustry_gen_Playerc_draw, "()V", 1025 },
	{ "drawName", 0, INDEX_mindustry_gen_Playerc_drawName, "()V", 1025 },
	{ "drawPing", 0, INDEX_mindustry_gen_Playerc_drawPing, "()V", 1025 },
	{ "handlePreviewPlans", 0, INDEX_mindustry_gen_Playerc_handlePreviewPlans_int_arc_struct_Seq, "(ILarc/struct/Seq;)V", 1025 },
	{ "itemDepositRate", 0, INDEX_mindustry_gen_Playerc_itemDepositRate_arc_util_Ratekeeper, "(Larc/util/Ratekeeper;)V", 1025 },
	{ "justSwitchFrom", 0, INDEX_mindustry_gen_Playerc_justSwitchFrom_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1025 },
	{ "justSwitchTo", 0, INDEX_mindustry_gen_Playerc_justSwitchTo_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1025 },
	{ "kick", 0, INDEX_mindustry_gen_Playerc_kick_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "kick", 0, INDEX_mindustry_gen_Playerc_kick_java_lang_String_long, "(Ljava/lang/String;J)V", 1025 },
	{ "kick", 0, INDEX_mindustry_gen_Playerc_kick_mindustry_net_Packets$KickReason, "(Lmindustry/net/Packets$KickReason;)V", 1025 },
	{ "kick", 0, INDEX_mindustry_gen_Playerc_kick_mindustry_net_Packets$KickReason_long, "(Lmindustry/net/Packets$KickReason;J)V", 1025 },
	{ "lastPreviewPlanGroup", 0, INDEX_mindustry_gen_Playerc_lastPreviewPlanGroup_int, "(I)V", 1025 },
	{ "lastPreviewPlanGroupServer", 0, INDEX_mindustry_gen_Playerc_lastPreviewPlanGroupServer_int, "(I)V", 1025 },
	{ "lastPreviewPlanTimestamp", 0, INDEX_mindustry_gen_Playerc_lastPreviewPlanTimestamp_long, "(J)V", 1025 },
	{ "lastText", 0, INDEX_mindustry_gen_Playerc_lastText_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "locale", 0, INDEX_mindustry_gen_Playerc_locale_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "mouseX", 0, INDEX_mindustry_gen_Playerc_mouseX_float, "(F)V", 1025 },
	{ "mouseY", 0, INDEX_mindustry_gen_Playerc_mouseY_float, "(F)V", 1025 },
	{ "name", 0, INDEX_mindustry_gen_Playerc_name_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "pingText", 0, INDEX_mindustry_gen_Playerc_pingText_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "pingTime", 0, INDEX_mindustry_gen_Playerc_pingTime_float, "(F)V", 1025 },
	{ "pingX", 0, INDEX_mindustry_gen_Playerc_pingX_float, "(F)V", 1025 },
	{ "pingY", 0, INDEX_mindustry_gen_Playerc_pingY_float, "(F)V", 1025 },
	{ "planEachable", 0, INDEX_mindustry_gen_Playerc_planEachable_mindustry_input_InputHandler$QueryEachable, "(Lmindustry/input/InputHandler$QueryEachable;)V", 1025 },
	{ "previewPlanTree", 0, INDEX_mindustry_gen_Playerc_previewPlanTree_arc_math_geom_QuadTree, "(Larc/math/geom/QuadTree;)V", 1025 },
	{ "previewPlansAssembling", 0, INDEX_mindustry_gen_Playerc_previewPlansAssembling_arc_struct_Seq, "(Larc/struct/Seq;)V", 1025 },
	{ "previewPlansCurrent", 0, INDEX_mindustry_gen_Playerc_previewPlansCurrent_arc_struct_Seq, "(Larc/struct/Seq;)V", 1025 },
	{ "previewPlansDirty", 0, INDEX_mindustry_gen_Playerc_previewPlansDirty_boolean, "(Z)V", 1025 },
	{ "receivingNewPlanGroup", 0, INDEX_mindustry_gen_Playerc_receivingNewPlanGroup_boolean, "(Z)V", 1025 },
	{ "remove", 0, INDEX_mindustry_gen_Playerc_remove, "()V", 1025 },
	{ "reset", 0, INDEX_mindustry_gen_Playerc_reset, "()V", 1025 },
	{ "selectedBlock", 0, INDEX_mindustry_gen_Playerc_selectedBlock_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1025 },
	{ "selectedRotation", 0, INDEX_mindustry_gen_Playerc_selectedRotation_int, "(I)V", 1025 },
	{ "sendMessage", 0, INDEX_mindustry_gen_Playerc_sendMessage_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "sendMessage", 0, INDEX_mindustry_gen_Playerc_sendMessage_java_lang_String_mindustry_gen_Player, "(Ljava/lang/String;Lmindustry/gen/Player;)V", 1025 },
	{ "sendMessage", 0, INDEX_mindustry_gen_Playerc_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String, "(Ljava/lang/String;Lmindustry/gen/Player;Ljava/lang/String;)V", 1025 },
	{ "sendUnformatted", 0, INDEX_mindustry_gen_Playerc_sendUnformatted_mindustry_gen_Player_java_lang_String, "(Lmindustry/gen/Player;Ljava/lang/String;)V", 1025 },
	{ "sendUnformatted", 0, INDEX_mindustry_gen_Playerc_sendUnformatted_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "shooting", 0, INDEX_mindustry_gen_Playerc_shooting_boolean, "(Z)V", 1025 },
	{ "team", 0, INDEX_mindustry_gen_Playerc_team_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1025 },
	{ "textFadeTime", 0, INDEX_mindustry_gen_Playerc_textFadeTime_float, "(F)V", 1025 },
	{ "typing", 0, INDEX_mindustry_gen_Playerc_typing_boolean, "(Z)V", 1025 },
	{ "unit", 0, INDEX_mindustry_gen_Playerc_unit_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1025 },
	{ "update", 0, INDEX_mindustry_gen_Playerc_update, "()V", 1025 },
};

Class class_mindustry_gen_Playerc{
		.nativeName = (intptr_t) "mindustry/gen/Playerc",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Playerc),
		.classVtable = (intptr_t) vtable_mindustry_gen_Playerc,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Playerc,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_Playerc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 6,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 105,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 176,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Playerc = registerClass(&class_mindustry_gen_Playerc);

}
