#include "mindustry/game/Schematics_1.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "mindustry/game/Schematics_1.h"
#include "arc/math/geom/Position.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_game_Schematics$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_units_BuildPlan(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_Schematics$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_game_Schematics$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_BuildPlan(ctx);
}

void init_mindustry_game_Schematics$1_mindustry_game_Schematics_int_int_int_mindustry_world_Block_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics$1:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(250);
	((mindustry_game_Schematics$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].o), (frame[6].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics$1_tile_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics$1:tile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_emptyTile;
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x = (jshort(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x)));
	LINE_NUMBER(255);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_emptyTile;
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y = (jshort(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y)));
	LINE_NUMBER(256);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_emptyTile;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Schematics$1[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_entities_units_BuildPlan_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_entities_units_BuildPlan_getX_R_float,
	(void *) M_mindustry_entities_units_BuildPlan_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_entities_units_BuildPlan_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_entities_units_BuildPlan_placeable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_entities_units_BuildPlan_isRotation_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_entities_units_BuildPlan_isDerelictRepair_R_boolean,
	(void *) M_mindustry_entities_units_BuildPlan_samePos_mindustry_entities_units_BuildPlan_R_boolean,
	(void *) M_mindustry_entities_units_BuildPlan_pointConfig_arc_func_Cons,
	(void *) M_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_entities_units_BuildPlan_drawx_R_float,
	(void *) M_mindustry_entities_units_BuildPlan_drawy_R_float,
	(void *) M_mindustry_entities_units_BuildPlan_isDone_R_boolean,
	(void *) M_mindustry_game_Schematics$1_tile_R_mindustry_world_Tile,
	(void *) M_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "placeable", "(Lmindustry/game/Team;)Z" },
	{ "isRotation", "(Lmindustry/game/Team;)Z" },
	{ "isDerelictRepair", "()Z" },
	{ "samePos", "(Lmindustry/entities/units/BuildPlan;)Z" },
	{ "pointConfig", "(Larc/func/Cons;)V" },
	{ "copy", "()Lmindustry/entities/units/BuildPlan;" },
	{ "bounds", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "set", "(IIILmindustry/world/Block;)Lmindustry/entities/units/BuildPlan;" },
	{ "drawx", "()F" },
	{ "drawy", "()F" },
	{ "isDone", "()Z" },
	{ "tile", "()Lmindustry/world/Tile;" },
	{ "build", "()Lmindustry/gen/Building;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_game_Schematics, offsetof(mindustry_game_Schematics$1, F_this$0), "Lmindustry/game/Schematics;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Schematics$1_mindustry_game_Schematics_int_int_int_mindustry_world_Block_java_lang_Object, 0, "(Lmindustry/game/Schematics;IIILmindustry/world/Block;Ljava/lang/Object;)V", 0 },
	{ "tile", (intptr_t) M_mindustry_game_Schematics$1_tile_R_mindustry_world_Tile, VTABLE_mindustry_game_Schematics$1_tile_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
};

Class class_mindustry_game_Schematics$1{
		.nativeName = (intptr_t) "mindustry/game/Schematics$1",
		.parentClass = (intptr_t) &class_mindustry_entities_units_BuildPlan,
		.size = sizeof(mindustry_game_Schematics$1),
		.classVtable = (intptr_t) vtable_mindustry_game_Schematics$1,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Schematics$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Schematics$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_game_Schematics$1 = registerClass(&class_mindustry_game_Schematics$1);

}

