#include "mindustry/gen/Bulletc.h"
#include "mindustry/gen/Damagec.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/gen/Bulletc.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/Settable.h"
#include "mindustry/logic/LAccess.h"
#include "arc/struct/IntSeq.h"
#include "arc/math/Scaled.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/gen/Entityc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/Mover.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/reflect/Field.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/gen/Shielderc.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Ownerc.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/graphics/Trail.h"
#include "java/lang/Object.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/gen/Timerc.h"

extern "C" {


void mark_mindustry_gen_Bulletc(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Bulletc *) object;
}

void clinit_mindustry_gen_Bulletc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_Bulletc;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method mover
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method trail
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method aimTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_gen_Bulletc[] {
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
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "damage", "()F" },
	{ "damage", "(F)V" },
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
	{ "owner", "()Lmindustry/gen/Entityc;" },
	{ "owner", "(Lmindustry/gen/Entityc;)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "absorb", "()V" },
	{ "fin", "()F" },
	{ "fout", "()F" },
	{ "fout", "(Larc/math/Interp;)F" },
	{ "fout", "(F)F" },
	{ "fin", "(Larc/math/Interp;)F" },
	{ "finpow", "()F" },
	{ "foutpow", "()F" },
	{ "finpowdown", "()F" },
	{ "foutpowdown", "()F" },
	{ "fslope", "()F" },
	{ "lifetime", "()F" },
	{ "time", "()F" },
	{ "lifetime", "(F)V" },
	{ "time", "(F)V" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "shooter", "()Lmindustry/gen/Entityc;" },
	{ "shooter", "(Lmindustry/gen/Entityc;)V" },
	{ "mover", "()Lmindustry/entities/Mover;" },
	{ "trail", "()Lmindustry/graphics/Trail;" },
	{ "aimTile", "()Lmindustry/world/Tile;" },
	{ "stickyTarget", "()Lmindustry/gen/Posc;" },
	{ "vel", "()Larc/math/geom/Vec2;" },
	{ "collided", "()Larc/struct/IntSeq;" },
	{ "absorbed", "()Z" },
	{ "checkUnderBuild", "(Lmindustry/gen/Building;FF)Z" },
	{ "hasCollided", "(I)Z" },
	{ "hit", "()Z" },
	{ "justSpawned", "()Z" },
	{ "keepAlive", "()Z" },
	{ "aimX", "()F" },
	{ "aimY", "()F" },
	{ "buildingDamageMultiplier", "()F" },
	{ "damageMultiplier", "()F" },
	{ "fdata", "()F" },
	{ "originX", "()F" },
	{ "originY", "()F" },
	{ "stickyRotation", "()F" },
	{ "stickyRotationOffset", "()F" },
	{ "stickyX", "()F" },
	{ "stickyY", "()F" },
	{ "frags", "()I" },
	{ "data", "()Ljava/lang/Object;" },
	{ "type", "()Lmindustry/entities/bullet/BulletType;" },
	{ "absorbed", "(Z)V" },
	{ "aimTile", "(Lmindustry/world/Tile;)V" },
	{ "aimX", "(F)V" },
	{ "aimY", "(F)V" },
	{ "buildingDamageMultiplier", "(F)V" },
	{ "collided", "(Larc/struct/IntSeq;)V" },
	{ "data", "(Ljava/lang/Object;)V" },
	{ "fdata", "(F)V" },
	{ "frags", "(I)V" },
	{ "hit", "(Z)V" },
	{ "initVel", "(FF)V" },
	{ "justSpawned", "(Z)V" },
	{ "keepAlive", "(Z)V" },
	{ "moveRelative", "(FF)V" },
	{ "mover", "(Lmindustry/entities/Mover;)V" },
	{ "originX", "(F)V" },
	{ "originY", "(F)V" },
	{ "stickTo", "(Lmindustry/gen/Posc;)V" },
	{ "stickyRotation", "(F)V" },
	{ "stickyRotationOffset", "(F)V" },
	{ "stickyTarget", "(Lmindustry/gen/Posc;)V" },
	{ "stickyX", "(F)V" },
	{ "stickyY", "(F)V" },
	{ "tileRaycast", "(IIII)V" },
	{ "trail", "(Lmindustry/graphics/Trail;)V" },
	{ "turn", "(FF)V" },
	{ "type", "(Lmindustry/entities/bullet/BulletType;)V" },
	{ "vel", "(Larc/math/geom/Vec2;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Damagec, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Ownerc, &class_mindustry_gen_Posc, &class_mindustry_gen_Shielderc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Timedc, &class_mindustry_gen_Timerc, &class_mindustry_logic_Senseable, &class_mindustry_logic_Settable, };

static MethodMetadata methods[] {
	{ "rotation", 0, INDEX_mindustry_gen_Bulletc_rotation_R_float, "()F", 1025 },
	{ "rotation", 0, INDEX_mindustry_gen_Bulletc_rotation_float, "(F)V", 1025 },
	{ "shooter", 0, INDEX_mindustry_gen_Bulletc_shooter_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1025 },
	{ "shooter", 0, INDEX_mindustry_gen_Bulletc_shooter_mindustry_gen_Entityc, "(Lmindustry/gen/Entityc;)V", 1025 },
	{ "mover", 0, INDEX_mindustry_gen_Bulletc_mover_R_mindustry_entities_Mover, "()Lmindustry/entities/Mover;", 1025 },
	{ "trail", 0, INDEX_mindustry_gen_Bulletc_trail_R_mindustry_graphics_Trail, "()Lmindustry/graphics/Trail;", 1025 },
	{ "aimTile", 0, INDEX_mindustry_gen_Bulletc_aimTile_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1025 },
	{ "stickyTarget", 0, INDEX_mindustry_gen_Bulletc_stickyTarget_R_mindustry_gen_Posc, "()Lmindustry/gen/Posc;", 1025 },
	{ "vel", 0, INDEX_mindustry_gen_Bulletc_vel_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1025 },
	{ "collided", 0, INDEX_mindustry_gen_Bulletc_collided_R_arc_struct_IntSeq, "()Larc/struct/IntSeq;", 1025 },
	{ "absorbed", 0, INDEX_mindustry_gen_Bulletc_absorbed_R_boolean, "()Z", 1025 },
	{ "checkUnderBuild", 0, INDEX_mindustry_gen_Bulletc_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean, "(Lmindustry/gen/Building;FF)Z", 1025 },
	{ "collides", 0, INDEX_mindustry_gen_Bulletc_collides_mindustry_gen_Hitboxc_R_boolean, "(Lmindustry/gen/Hitboxc;)Z", 1025 },
	{ "hasCollided", 0, INDEX_mindustry_gen_Bulletc_hasCollided_int_R_boolean, "(I)Z", 1025 },
	{ "hit", 0, INDEX_mindustry_gen_Bulletc_hit_R_boolean, "()Z", 1025 },
	{ "isLocal", 0, INDEX_mindustry_gen_Bulletc_isLocal_R_boolean, "()Z", 1025 },
	{ "justSpawned", 0, INDEX_mindustry_gen_Bulletc_justSpawned_R_boolean, "()Z", 1025 },
	{ "keepAlive", 0, INDEX_mindustry_gen_Bulletc_keepAlive_R_boolean, "()Z", 1025 },
	{ "sense", 0, INDEX_mindustry_gen_Bulletc_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1025 },
	{ "aimX", 0, INDEX_mindustry_gen_Bulletc_aimX_R_float, "()F", 1025 },
	{ "aimY", 0, INDEX_mindustry_gen_Bulletc_aimY_R_float, "()F", 1025 },
	{ "buildingDamageMultiplier", 0, INDEX_mindustry_gen_Bulletc_buildingDamageMultiplier_R_float, "()F", 1025 },
	{ "clipSize", 0, INDEX_mindustry_gen_Bulletc_clipSize_R_float, "()F", 1025 },
	{ "damageMultiplier", 0, INDEX_mindustry_gen_Bulletc_damageMultiplier_R_float, "()F", 1025 },
	{ "fdata", 0, INDEX_mindustry_gen_Bulletc_fdata_R_float, "()F", 1025 },
	{ "originX", 0, INDEX_mindustry_gen_Bulletc_originX_R_float, "()F", 1025 },
	{ "originY", 0, INDEX_mindustry_gen_Bulletc_originY_R_float, "()F", 1025 },
	{ "stickyRotation", 0, INDEX_mindustry_gen_Bulletc_stickyRotation_R_float, "()F", 1025 },
	{ "stickyRotationOffset", 0, INDEX_mindustry_gen_Bulletc_stickyRotationOffset_R_float, "()F", 1025 },
	{ "stickyX", 0, INDEX_mindustry_gen_Bulletc_stickyX_R_float, "()F", 1025 },
	{ "stickyY", 0, INDEX_mindustry_gen_Bulletc_stickyY_R_float, "()F", 1025 },
	{ "frags", 0, INDEX_mindustry_gen_Bulletc_frags_R_int, "()I", 1025 },
	{ "data", 0, INDEX_mindustry_gen_Bulletc_data_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "type", 0, INDEX_mindustry_gen_Bulletc_type_R_mindustry_entities_bullet_BulletType, "()Lmindustry/entities/bullet/BulletType;", 1025 },
	{ "absorb", 0, INDEX_mindustry_gen_Bulletc_absorb, "()V", 1025 },
	{ "absorbed", 0, INDEX_mindustry_gen_Bulletc_absorbed_boolean, "(Z)V", 1025 },
	{ "add", 0, INDEX_mindustry_gen_Bulletc_add, "()V", 1025 },
	{ "aimTile", 0, INDEX_mindustry_gen_Bulletc_aimTile_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1025 },
	{ "aimX", 0, INDEX_mindustry_gen_Bulletc_aimX_float, "(F)V", 1025 },
	{ "aimY", 0, INDEX_mindustry_gen_Bulletc_aimY_float, "(F)V", 1025 },
	{ "buildingDamageMultiplier", 0, INDEX_mindustry_gen_Bulletc_buildingDamageMultiplier_float, "(F)V", 1025 },
	{ "collided", 0, INDEX_mindustry_gen_Bulletc_collided_arc_struct_IntSeq, "(Larc/struct/IntSeq;)V", 1025 },
	{ "collision", 0, INDEX_mindustry_gen_Bulletc_collision_mindustry_gen_Hitboxc_float_float, "(Lmindustry/gen/Hitboxc;FF)V", 1025 },
	{ "data", 0, INDEX_mindustry_gen_Bulletc_data_java_lang_Object, "(Ljava/lang/Object;)V", 1025 },
	{ "draw", 0, INDEX_mindustry_gen_Bulletc_draw, "()V", 1025 },
	{ "fdata", 0, INDEX_mindustry_gen_Bulletc_fdata_float, "(F)V", 1025 },
	{ "frags", 0, INDEX_mindustry_gen_Bulletc_frags_int, "(I)V", 1025 },
	{ "getCollisions", 0, INDEX_mindustry_gen_Bulletc_getCollisions_arc_func_Cons, "(Larc/func/Cons;)V", 1025 },
	{ "hit", 0, INDEX_mindustry_gen_Bulletc_hit_boolean, "(Z)V", 1025 },
	{ "initVel", 0, INDEX_mindustry_gen_Bulletc_initVel_float_float, "(FF)V", 1025 },
	{ "justSpawned", 0, INDEX_mindustry_gen_Bulletc_justSpawned_boolean, "(Z)V", 1025 },
	{ "keepAlive", 0, INDEX_mindustry_gen_Bulletc_keepAlive_boolean, "(Z)V", 1025 },
	{ "moveRelative", 0, INDEX_mindustry_gen_Bulletc_moveRelative_float_float, "(FF)V", 1025 },
	{ "mover", 0, INDEX_mindustry_gen_Bulletc_mover_mindustry_entities_Mover, "(Lmindustry/entities/Mover;)V", 1025 },
	{ "originX", 0, INDEX_mindustry_gen_Bulletc_originX_float, "(F)V", 1025 },
	{ "originY", 0, INDEX_mindustry_gen_Bulletc_originY_float, "(F)V", 1025 },
	{ "remove", 0, INDEX_mindustry_gen_Bulletc_remove, "()V", 1025 },
	{ "setProp", 0, INDEX_mindustry_gen_Bulletc_setProp_mindustry_ctype_UnlockableContent_double, "(Lmindustry/ctype/UnlockableContent;D)V", 1025 },
	{ "setProp", 0, INDEX_mindustry_gen_Bulletc_setProp_mindustry_logic_LAccess_double, "(Lmindustry/logic/LAccess;D)V", 1025 },
	{ "setProp", 0, INDEX_mindustry_gen_Bulletc_setProp_mindustry_logic_LAccess_java_lang_Object, "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V", 1025 },
	{ "stickTo", 0, INDEX_mindustry_gen_Bulletc_stickTo_mindustry_gen_Posc, "(Lmindustry/gen/Posc;)V", 1025 },
	{ "stickyRotation", 0, INDEX_mindustry_gen_Bulletc_stickyRotation_float, "(F)V", 1025 },
	{ "stickyRotationOffset", 0, INDEX_mindustry_gen_Bulletc_stickyRotationOffset_float, "(F)V", 1025 },
	{ "stickyTarget", 0, INDEX_mindustry_gen_Bulletc_stickyTarget_mindustry_gen_Posc, "(Lmindustry/gen/Posc;)V", 1025 },
	{ "stickyX", 0, INDEX_mindustry_gen_Bulletc_stickyX_float, "(F)V", 1025 },
	{ "stickyY", 0, INDEX_mindustry_gen_Bulletc_stickyY_float, "(F)V", 1025 },
	{ "tileRaycast", 0, INDEX_mindustry_gen_Bulletc_tileRaycast_int_int_int_int, "(IIII)V", 1025 },
	{ "trail", 0, INDEX_mindustry_gen_Bulletc_trail_mindustry_graphics_Trail, "(Lmindustry/graphics/Trail;)V", 1025 },
	{ "turn", 0, INDEX_mindustry_gen_Bulletc_turn_float_float, "(FF)V", 1025 },
	{ "type", 0, INDEX_mindustry_gen_Bulletc_type_mindustry_entities_bullet_BulletType, "(Lmindustry/entities/bullet/BulletType;)V", 1025 },
	{ "update", 0, INDEX_mindustry_gen_Bulletc_update, "()V", 1025 },
	{ "vel", 0, INDEX_mindustry_gen_Bulletc_vel_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1025 },
};

Class class_mindustry_gen_Bulletc{
		.nativeName = (intptr_t) "mindustry/gen/Bulletc",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Bulletc),
		.classVtable = (intptr_t) vtable_mindustry_gen_Bulletc,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Bulletc,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_Bulletc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 12,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 72,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 166,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Bulletc = registerClass(&class_mindustry_gen_Bulletc);

}
