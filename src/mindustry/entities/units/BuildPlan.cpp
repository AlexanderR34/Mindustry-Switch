#include "mindustry/entities/units/BuildPlan.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/Block.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Rules.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/game/Team.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/Build.h"

extern "C" {


void mark_mindustry_entities_units_BuildPlan(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_units_BuildPlan *) object;
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_config)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_config)->clazz)->markFunction)((jobject) self->F_config, mark, depth + 1);
}

void clinit_mindustry_entities_units_BuildPlan(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_BuildPlan(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_worldContext = (jint(1));
	LINE_NUMBER(33);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_animScale = (jfloat(0));
	LINE_NUMBER(37);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(38);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(39);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_world_Block_planRotation_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_planRotation_int_R_int])(ctx, (frame[4].o), (frame[3].i));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	}
label_6:;
	{
	LINE_NUMBER(40);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[4].o);
	LINE_NUMBER(41);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking = (jint(0));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_BuildPlan(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_worldContext = (jint(1));
	LINE_NUMBER(33);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_animScale = (jfloat(0));
	LINE_NUMBER(46);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(47);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(48);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_world_Block_planRotation_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_planRotation_int_R_int])(ctx, (frame[4].o), (frame[3].i));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	}
label_6:;
	{
	LINE_NUMBER(49);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[4].o);
	LINE_NUMBER(50);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking = (jint(0));
	LINE_NUMBER(51);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_config = (jref) (frame[5].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_units_BuildPlan_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_BuildPlan(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(55);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_worldContext = (jint(1));
	LINE_NUMBER(33);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_animScale = (jfloat(0));
	LINE_NUMBER(56);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(57);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(58);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_rotation = (jint(-1));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(60);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking = (jint(1));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_BuildPlan(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(63);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_worldContext = (jint(1));
	LINE_NUMBER(33);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_animScale = (jfloat(0));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_BuildPlan_placeable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:placeable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, (frame[1].o), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_rotation));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_BuildPlan_isRotation_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:isRotation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(74);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation) == ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_rotation)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_BuildPlan_isDerelictRepair_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:isDerelictRepair", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_derelictRepair) != 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(80);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_BuildPlan_samePos_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:samePos", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x)) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_units_BuildPlan_pointConfig_mindustry_world_Block_java_lang_Object_arc_func_Cons_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:pointConfig", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_BuildPlan(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(89);
	if ((isInstance(ctx, (frame[1].o), &class_arc_math_geom_Point2)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_math_geom_Point2, (frame[1].o)));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_arc_math_geom_Point2_cpy_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Point2_cpy_R_arc_math_geom_Point2])(ctx, (frame[3].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(91);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (checkCast(ctx, &class_arc_math_geom_Point2, (frame[1].o))));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(92);
	if ((isInstance(ctx, (frame[1].o), getArrayClass(&class_arc_math_geom_Point2, 1))) == 0) goto label_5;
	}
	{
	frame[4].o = (checkCast(ctx, getArrayClass(&class_arc_math_geom_Point2, 1), (frame[1].o)));
	LINE_NUMBER(93);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	frame[5].o = sp[0].o;
	LINE_NUMBER(94);
	frame[6].i = (jint(0));
	LINE_NUMBER(95);
	frame[7].o = (frame[4].o);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_9:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_10;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(96);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((func_arc_math_geom_Point2_cpy_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_geom_Point2_cpy_R_arc_math_geom_Point2])(ctx, (frame[10].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(97);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	jint temp1 = frame[6].i;
	INST_IINC(6, 1);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1)));
	LINE_NUMBER(95);
	INST_IINC(9, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(99);
	frame[1].o = (frame[5].o);
	LINE_NUMBER(100);
	goto label_4;
	}
label_5:;
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_4;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_BuildPlan_pointConfig_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:pointConfig", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_config;
	sp[1].o = (jobject)SM_mindustry_entities_units_BuildPlan_pointConfig_mindustry_world_Block_java_lang_Object_arc_func_Cons_R_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[1].o));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_config = (jref) sp[1].o;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	init_mindustry_entities_units_BuildPlan(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(113);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x = ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(114);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y = ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(115);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation = ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(116);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(117);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking = ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking);
	LINE_NUMBER(118);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_config;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_config = (jref) sp[1].o;
	LINE_NUMBER(119);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_progress = ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_progress);
	LINE_NUMBER(120);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_initialized = ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_initialized);
	LINE_NUMBER(121);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_animScale = ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_animScale);
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:bounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking) == 0) goto label_1;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), (jfloat(-100.0f)), (jfloat(-100.0f)), (jfloat(0)), (jfloat(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(134);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(135);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(136);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_world_Block_planRotation_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_planRotation_int_R_int])(ctx, (frame[4].o), (frame[3].i));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	}
label_3:;
	{
	LINE_NUMBER(137);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[4].o);
	LINE_NUMBER(138);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking = (jint(0));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_units_BuildPlan_drawx_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:drawx", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	jfloat temp0 = jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x) * (8)));
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset;
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	INST_FADD();
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_units_BuildPlan_drawy_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:drawy", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	jfloat temp0 = jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y) * (8)));
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset;
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	INST_FADD();
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_BuildPlan_isDone_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:isDone", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y));
	frame[1].o = sp[0].o;
	LINE_NUMBER(152);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(154);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking) == 0) goto label_4;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (sp[0].o != sp[1].o) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_rotation)) goto label_9;
	}
label_10:;
	INST_ICONST(1);
	goto label_11;
label_9:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:tile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_BuildPlan_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:hitbox", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = frame[1].o;
	jfloat temp0 = jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x) * (8)));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	jfloat temp2 = jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y) * (8)));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp3 = temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, temp3, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), (jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x) * (8)))), (jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y) * (8)))), (jfloat(8.0f)));
	}
label_3:;
	LINE_NUMBER(176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_units_BuildPlan_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_units_BuildPlan_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_BuildPlan_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/BuildPlan:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	jint temp3 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking;
	jfloat temp4 = (jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_progress;
	jint temp5 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_initialized;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_config;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"BuildPlan{x=\u0001, y=\u0001, rotation=\u0001, block=\u0001, breaking=\u0001, progress=\u0001, initialized=\u0001, config=\u0001}"_j.string, 8, boxInteger(ctx, temp0), boxInteger(ctx, temp1), boxInteger(ctx, temp2), sp[0].o, boxBoolean(ctx, temp3), boxFloat(ctx, temp4), boxBoolean(ctx, temp5), sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_units_BuildPlan;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field block
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method tile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method build
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_units_BuildPlan[] {
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
	(void *) M_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile,
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

static jclass interfaces[] { &class_arc_math_geom_Position, &class_arc_math_geom_QuadTree$QuadTreeObject, };

static FieldMetadata fields[] {
	{ "x", &class_int, offsetof(mindustry_entities_units_BuildPlan, F_x), "I", 1 },
	{ "y", &class_int, offsetof(mindustry_entities_units_BuildPlan, F_y), "I", 1 },
	{ "rotation", &class_int, offsetof(mindustry_entities_units_BuildPlan, F_rotation), "I", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_entities_units_BuildPlan, F_block), "Lmindustry/world/Block;", 1 },
	{ "breaking", &class_boolean, offsetof(mindustry_entities_units_BuildPlan, F_breaking), "Z", 1 },
	{ "config", &class_java_lang_Object, offsetof(mindustry_entities_units_BuildPlan, F_config), "Ljava/lang/Object;", 1 },
	{ "progress", &class_float, offsetof(mindustry_entities_units_BuildPlan, F_progress), "F", 1 },
	{ "initialized", &class_boolean, offsetof(mindustry_entities_units_BuildPlan, F_initialized), "Z", 1 },
	{ "stuck", &class_boolean, offsetof(mindustry_entities_units_BuildPlan, F_stuck), "Z", 1 },
	{ "cachedValid", &class_boolean, offsetof(mindustry_entities_units_BuildPlan, F_cachedValid), "Z", 1 },
	{ "worldContext", &class_boolean, offsetof(mindustry_entities_units_BuildPlan, F_worldContext), "Z", 1 },
	{ "animScale", &class_float, offsetof(mindustry_entities_units_BuildPlan, F_animScale), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block, 0, "(IIILmindustry/world/Block;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object, 0, "(IIILmindustry/world/Block;Ljava/lang/Object;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_units_BuildPlan_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_units_BuildPlan, 0, "()V", 1 },
	{ "placeable", (intptr_t) M_mindustry_entities_units_BuildPlan_placeable_mindustry_game_Team_R_boolean, VTABLE_mindustry_entities_units_BuildPlan_placeable_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "isRotation", (intptr_t) M_mindustry_entities_units_BuildPlan_isRotation_mindustry_game_Team_R_boolean, VTABLE_mindustry_entities_units_BuildPlan_isRotation_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "isDerelictRepair", (intptr_t) M_mindustry_entities_units_BuildPlan_isDerelictRepair_R_boolean, VTABLE_mindustry_entities_units_BuildPlan_isDerelictRepair_R_boolean, "()Z", 1 },
	{ "samePos", (intptr_t) M_mindustry_entities_units_BuildPlan_samePos_mindustry_entities_units_BuildPlan_R_boolean, VTABLE_mindustry_entities_units_BuildPlan_samePos_mindustry_entities_units_BuildPlan_R_boolean, "(Lmindustry/entities/units/BuildPlan;)Z", 1 },
	{ "pointConfig", (intptr_t) SM_mindustry_entities_units_BuildPlan_pointConfig_mindustry_world_Block_java_lang_Object_arc_func_Cons_R_java_lang_Object, 0, "(Lmindustry/world/Block;Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;", 9 },
	{ "pointConfig", (intptr_t) M_mindustry_entities_units_BuildPlan_pointConfig_arc_func_Cons, VTABLE_mindustry_entities_units_BuildPlan_pointConfig_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "copy", (intptr_t) M_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan, VTABLE_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan, "()Lmindustry/entities/units/BuildPlan;", 1 },
	{ "bounds", (intptr_t) M_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect, VTABLE_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect, "(Larc/math/geom/Rect;)Larc/math/geom/Rect;", 1 },
	{ "set", (intptr_t) M_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan, VTABLE_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan, "(IIILmindustry/world/Block;)Lmindustry/entities/units/BuildPlan;", 1 },
	{ "drawx", (intptr_t) M_mindustry_entities_units_BuildPlan_drawx_R_float, VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float, "()F", 1 },
	{ "drawy", (intptr_t) M_mindustry_entities_units_BuildPlan_drawy_R_float, VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float, "()F", 1 },
	{ "isDone", (intptr_t) M_mindustry_entities_units_BuildPlan_isDone_R_boolean, VTABLE_mindustry_entities_units_BuildPlan_isDone_R_boolean, "()Z", 1 },
	{ "tile", (intptr_t) M_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile, VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "build", (intptr_t) M_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building, VTABLE_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "hitbox", (intptr_t) M_mindustry_entities_units_BuildPlan_hitbox_arc_math_geom_Rect, VTABLE_mindustry_entities_units_BuildPlan_hitbox_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "getX", (intptr_t) M_mindustry_entities_units_BuildPlan_getX_R_float, VTABLE_mindustry_entities_units_BuildPlan_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_entities_units_BuildPlan_getY_R_float, VTABLE_mindustry_entities_units_BuildPlan_getY_R_float, "()F", 1 },
	{ "toString", (intptr_t) M_mindustry_entities_units_BuildPlan_toString_R_java_lang_String, VTABLE_mindustry_entities_units_BuildPlan_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_entities_units_BuildPlan{
		.nativeName = (intptr_t) "mindustry/entities/units/BuildPlan",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_units_BuildPlan),
		.classVtable = (intptr_t) vtable_mindustry_entities_units_BuildPlan,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_units_BuildPlan,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_units_BuildPlan,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_units_BuildPlan = registerClass(&class_mindustry_entities_units_BuildPlan);

}
