#include "mindustry/entities/Lightning.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/content/Bullets.h"
#include "arc/math/Rand.h"
#include "arc/math/Angles.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "java/lang/Iterable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntSet.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Geometry_Raycaster.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/entities/Lightning.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/Lightning_invoke_arc_math_geom_Geometry_Raycaster_1.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/Lightning_invoke_arc_func_Cons_1.h"
#include "mindustry/entities/Units.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/World.h"
#include "mindustry/Vars.h"

extern "C" {

jobject SF_mindustry_entities_Lightning_random;
jobject SF_mindustry_entities_Lightning_rect;
jobject SF_mindustry_entities_Lightning_entities;
jobject SF_mindustry_entities_Lightning_hit;
jint SF_mindustry_entities_Lightning_maxChain;
jfloat SF_mindustry_entities_Lightning_hitRange;
jbool SF_mindustry_entities_Lightning_bhit;
jint SF_mindustry_entities_Lightning_lastSeed;

void mark_mindustry_entities_Lightning(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_Lightning_random)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Lightning_random)->clazz)->markFunction)((jobject) SF_mindustry_entities_Lightning_random, mark, depth + 1);
		if (SF_mindustry_entities_Lightning_rect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Lightning_rect)->clazz)->markFunction)((jobject) SF_mindustry_entities_Lightning_rect, mark, depth + 1);
		if (SF_mindustry_entities_Lightning_entities)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Lightning_entities)->clazz)->markFunction)((jobject) SF_mindustry_entities_Lightning_entities, mark, depth + 1);
		if (SF_mindustry_entities_Lightning_hit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Lightning_hit)->clazz)->markFunction)((jobject) SF_mindustry_entities_Lightning_hit, mark, depth + 1);
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
	auto self = (mindustry_entities_Lightning *) object;
}

void init_mindustry_entities_Lightning(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Lightning:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Lightning(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Lightning_create_mindustry_entities_bullet_BulletType_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jint param7) {
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Lightning:create", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Lightning(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(29);
	sp[0].o = jobject(nullptr);
	sp[1].o = frame[0].o;
	clinit_mindustry_entities_Lightning(ctx);
	jint temp0 = (jint)SF_mindustry_entities_Lightning_lastSeed;
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_lastSeed = (temp0 + (jint(1)));
	SM_mindustry_entities_Lightning_createLightningInternal_mindustry_gen_Bullet_mindustry_entities_bullet_BulletType_int_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(ctx, sp[0].o, sp[1].o, temp0, (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].i));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Lightning_create_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jint param6) {
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Lightning:create", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Lightning(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(34);
	sp[0].o = jobject(nullptr);
	clinit_mindustry_content_Bullets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Bullets_damageLightning;
	clinit_mindustry_entities_Lightning(ctx);
	jint temp0 = (jint)SF_mindustry_entities_Lightning_lastSeed;
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_lastSeed = (temp0 + (jint(1)));
	SM_mindustry_entities_Lightning_createLightningInternal_mindustry_gen_Bullet_mindustry_entities_bullet_BulletType_int_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(ctx, sp[0].o, sp[1].o, temp0, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].i));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Lightning_create_mindustry_gen_Bullet_arc_graphics_Color_float_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jint param6) {
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Lightning:create", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Lightning(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightningType;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	clinit_mindustry_content_Bullets(ctx);
	(sp++)->o = SF_mindustry_content_Bullets_damageLightning;
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightningType;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	clinit_mindustry_entities_Lightning(ctx);
	jint temp0 = (jint)SF_mindustry_entities_Lightning_lastSeed;
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_lastSeed = (temp0 + (jint(1)));
	sp[2].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_entities_Lightning_createLightningInternal_mindustry_gen_Bullet_mindustry_entities_bullet_BulletType_int_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].i));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Lightning_createLightningInternal_mindustry_gen_Bullet_mindustry_entities_bullet_BulletType_int_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jint param9) {
	jtype frame[24];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Lightning:createLightningInternal", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Lightning(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].i = param9;
	{
	LINE_NUMBER(43);
	clinit_mindustry_entities_Lightning(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Lightning_random;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong((frame[2].i))));
	LINE_NUMBER(44);
	clinit_mindustry_entities_Lightning(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Lightning_hit;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(46);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(47);
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_bhit = (jint(0));
	LINE_NUMBER(49);
	frame[11].i = (jint(0));
	}
label_5:;
	{
	if ((frame[11].i) >= ((frame[9].i) / (jint(2)))) goto label_6;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = frame[1].o;
	sp[1].o = jobject(nullptr);
	sp[2].o = frame[3].o;
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[7].f;
	jfloat temp2 = frame[8].f;
	jfloat temp3 = frame[5].f;
	sp[3].f = temp0;
	sp[4].f = temp1;
	sp[5].f = temp2;
	sp[6].f = temp3;
	sp += 7;
	if ((frame[0].o) != nullptr) goto label_8;
	}
	INST_FCONST(1);
	goto label_9;
label_8:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_mindustry_gen_Bullet_damageMultiplier_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_damageMultiplier_R_float])(ctx, sp[0].o);
	sp++;
label_9:;
	{
	sp -= 8;
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].f, sp[4].f, sp[5].f, (sp[6].f * sp[7].f), (jfloat(1)), (jfloat(1)), (jobject(nullptr)));
	LINE_NUMBER(51);
	sp[0].o = frame[10].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	jfloat temp0 = frame[6].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(3.0f)));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = frame[7].f;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(3.0f)));
	init_arc_math_geom_Vec2_float_float(ctx, sp[1].o, temp2, (temp3 + temp4));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[10].o)))->F_size) <= (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(54);
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_bhit = (jint(0));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[10].o), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[10].o)))->F_size) - (jint(2))));
	frame[12].o = (checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[10].o), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[10].o)))->F_size) - (jint(1))));
	frame[13].o = (checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o));
	LINE_NUMBER(57);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_getX_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_math_geom_Vec2_getX_R_float])(ctx, (frame[12].o));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp0);
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec2_getY_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_math_geom_Vec2_getY_R_float])(ctx, (frame[12].o));
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp2);
	jfloat temp4 = (jfloat)((func_arc_math_geom_Vec2_getX_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_math_geom_Vec2_getX_R_float])(ctx, (frame[13].o));
	jint temp5 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp4);
	jfloat temp6 = (jfloat)((func_arc_math_geom_Vec2_getY_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_math_geom_Vec2_getY_R_float])(ctx, (frame[13].o));
	jint temp7 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp6);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_1(ctx);
		auto proxy = (mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_1 *) gcAlloc(ctx, &class_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_1);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[0].o = (jobject) proxy;
	}
	SM_mindustry_core_World_raycastEach_int_int_int_int_arc_math_geom_Geometry$Raycaster(ctx, temp1, temp3, temp5, temp7, sp[0].o);
	LINE_NUMBER(68);
	if ((clinit_mindustry_entities_Lightning(ctx), (jint)SF_mindustry_entities_Lightning_bhit) == 0) goto label_12;
	}
	goto label_6;
label_12:;
	{
	LINE_NUMBER(71);
	clinit_mindustry_entities_Lightning(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Lightning_rect;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(30.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[6].f), (frame[7].f));
	LINE_NUMBER(72);
	clinit_mindustry_entities_Lightning(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Lightning_entities;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(73);
	clinit_mindustry_entities_Lightning(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Lightning_hit;
	if (((jint)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_size) >= (8)) goto label_20;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = frame[3].o;
	clinit_mindustry_entities_Lightning(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Lightning_rect;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Lightning_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_entities_Lightning_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_entities_Lightning_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_20:;
	{
	LINE_NUMBER(81);
	if ((frame[0].o) == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceCap) <= 0) goto label_22;
	}
	{
	clinit_mindustry_entities_Lightning(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Lightning_hit;
	jint temp0 = (jint)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (temp0 < ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceCap)) goto label_22;
	}
	LINE_NUMBER(82);
	goto label_6;
label_22:;
	{
	LINE_NUMBER(85);
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[7].f;
	clinit_mindustry_entities_Lightning(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Lightning_entities;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_findFurthest_float_float_java_lang_Iterable_R_arc_math_geom_Position(ctx, temp0, temp1, sp[0].o);
	frame[12].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(87);
	if ((frame[12].o) == nullptr) goto label_25;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, (frame[12].o), (frame[6].f), (frame[7].f), (jfloat(60.0f)));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(88);
	clinit_mindustry_entities_Lightning(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Lightning_hit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_id_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Unit_id_R_int])(ctx, (frame[12].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(89);
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_x_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Unit_x_R_float])(ctx, (frame[12].o));
	frame[6].f = temp2;
	LINE_NUMBER(90);
	jfloat temp3 = (jfloat)((func_mindustry_gen_Unit_y_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Unit_y_R_float])(ctx, (frame[12].o));
	frame[7].f = temp3;
	goto label_29;
	}
label_25:;
	{
	LINE_NUMBER(92);
	jfloat temp0 = frame[8].f;
	clinit_mindustry_entities_Lightning(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Lightning_random;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, (jfloat(20.0f)));
	frame[8].f = (temp0 + temp1);
	LINE_NUMBER(93);
	jfloat temp2 = frame[6].f;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[8].f), (jfloat(15.0f)));
	frame[6].f = (temp2 + temp3);
	LINE_NUMBER(94);
	jfloat temp4 = frame[7].f;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[8].f), (jfloat(15.0f)));
	frame[7].f = (temp4 + temp5);
	}
label_29:;
	{
	LINE_NUMBER(49);
	INST_IINC(11, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(98);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_lightning;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, (frame[6].f), (frame[7].f), (frame[8].f), (frame[4].o), (frame[10].o));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Lightning_lambda$createLightningInternal$1_mindustry_gen_Bullet_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Lightning:lambda$createLightningInternal$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Lightning(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(75);
	clinit_mindustry_entities_Lightning(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Lightning_hit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_id_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_id_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_1;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_2;
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesAir;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesGround));
	if (temp1 == 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(76);
	clinit_mindustry_entities_Lightning(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Lightning_entities;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Lightning_lambda$createLightningInternal$0_mindustry_game_Team_arc_struct_Seq_int_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Lightning:lambda$createLightningInternal$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Lightning(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(59);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(60);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_isInsulated_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isInsulated_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[4].o));
	if (sp[0].o == (frame[0].o)) goto label_2;
	}
	{
	LINE_NUMBER(61);
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_bhit = (jint(1));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o)))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o)), (jfloat(((frame[2].i) * (8)))), (jfloat(((frame[3].i) * (8)))));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_entities_Lightning(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_Lightning_maxChain = jint(8);
	SF_mindustry_entities_Lightning_hitRange = jfloat(30.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Lightning:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Lightning(ctx);
	{
	LINE_NUMBER(18);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_random = sp[0].o;
	LINE_NUMBER(19);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_rect = sp[0].o;
	LINE_NUMBER(20);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_entities = sp[0].o;
	LINE_NUMBER(21);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_hit = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_bhit = (jint(0));
	LINE_NUMBER(25);
	clinit_mindustry_entities_Lightning(ctx);
	SF_mindustry_entities_Lightning_lastSeed = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_Lightning[] {
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
};

static FieldMetadata fields[] {
	{ "random", &class_arc_math_Rand, (intptr_t) &SF_mindustry_entities_Lightning_random, "Larc/math/Rand;", 26 },
	{ "rect", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_entities_Lightning_rect, "Larc/math/geom/Rect;", 26 },
	{ "entities", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_entities_Lightning_entities, "Larc/struct/Seq;", 26 },
	{ "hit", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_entities_Lightning_hit, "Larc/struct/IntSet;", 26 },
	{ "maxChain", &class_int, (intptr_t) &SF_mindustry_entities_Lightning_maxChain, "I", 26 },
	{ "hitRange", &class_float, (intptr_t) &SF_mindustry_entities_Lightning_hitRange, "F", 26 },
	{ "bhit", &class_boolean, (intptr_t) &SF_mindustry_entities_Lightning_bhit, "Z", 10 },
	{ "lastSeed", &class_int, (intptr_t) &SF_mindustry_entities_Lightning_lastSeed, "I", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_Lightning, 0, "()V", 1 },
	{ "create", (intptr_t) SM_mindustry_entities_Lightning_create_mindustry_entities_bullet_BulletType_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int, 0, "(Lmindustry/entities/bullet/BulletType;Lmindustry/game/Team;Larc/graphics/Color;FFFFI)V", 9 },
	{ "create", (intptr_t) SM_mindustry_entities_Lightning_create_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int, 0, "(Lmindustry/game/Team;Larc/graphics/Color;FFFFI)V", 9 },
	{ "create", (intptr_t) SM_mindustry_entities_Lightning_create_mindustry_gen_Bullet_arc_graphics_Color_float_float_float_float_int, 0, "(Lmindustry/gen/Bullet;Larc/graphics/Color;FFFFI)V", 9 },
	{ "createLightningInternal", (intptr_t) SM_mindustry_entities_Lightning_createLightningInternal_mindustry_gen_Bullet_mindustry_entities_bullet_BulletType_int_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int, 0, "(Lmindustry/gen/Bullet;Lmindustry/entities/bullet/BulletType;ILmindustry/game/Team;Larc/graphics/Color;FFFFI)V", 10 },
	{ "lambda$createLightningInternal$1", (intptr_t) SM_mindustry_entities_Lightning_lambda$createLightningInternal$1_mindustry_gen_Bullet_mindustry_gen_Unit, 0, "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$createLightningInternal$0", (intptr_t) SM_mindustry_entities_Lightning_lambda$createLightningInternal$0_mindustry_game_Team_arc_struct_Seq_int_int_R_boolean, 0, "(Lmindustry/game/Team;Larc/struct/Seq;II)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_Lightning, 0, "()V", 8 },
};

Class class_mindustry_entities_Lightning{
		.nativeName = (intptr_t) "mindustry/entities/Lightning",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Lightning),
		.classVtable = (intptr_t) vtable_mindustry_entities_Lightning,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Lightning,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_Lightning,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Lightning = registerClass(&class_mindustry_entities_Lightning);

}
