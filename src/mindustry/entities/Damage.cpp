#include "mindustry/entities/Damage.h"
#include "mindustry/entities/Damage_invoke_arc_func_Cons_9.h"
#include "arc/func/Prov.h"
#include "mindustry/entities/Damage_invoke_arc_func_Boolf_2.h"
#include "mindustry/content/Bullets.h"
#include "arc/Events.h"
#include "mindustry/entities/Damage_invoke_arc_func_Boolf_3.h"
#include "mindustry/entities/Damage_invoke_arc_func_Floatf_1.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/Point2.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Damage_invoke_java_lang_Runnable_9.h"
#include "mindustry/content/Fx.h"
#include "mindustry/entities/Damage_invoke_java_lang_Runnable_7.h"
#include "mindustry/entities/Damage_invoke_java_lang_Runnable_8.h"
#include "mindustry/game/EventType_UnitBulletDestroyEvent.h"
#include "mindustry/gen/Physicsc.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/entities/Damage_invoke_java_lang_Runnable_5.h"
#include "mindustry/entities/Damage_invoke_arc_math_geom_Geometry_Raycaster_9.h"
#include "mindustry/entities/Damage_invoke_java_lang_Runnable_6.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/Damage_invoke_arc_math_geom_Geometry_Raycaster_7.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/Damage_invoke_arc_math_geom_Geometry_Raycaster_8.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/Damage_invoke_arc_math_geom_Geometry_Raycaster_5.h"
#include "mindustry/entities/Damage_invoke_arc_math_geom_Geometry_Raycaster_6.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/entities/Damage_invoke_arc_func_Cons_11.h"
#include "mindustry/entities/Damage_invoke_arc_func_Cons_10.h"
#include "arc/func/Floatf.h"
#include "arc/math/geom/Geometry_Raycaster.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/entities/Damage_invoke_arc_func_Cons_13.h"
#include "java/util/Iterator.h"
#include "mindustry/entities/Damage_invoke_arc_func_Cons_12.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/entities/Damage_invoke_arc_func_Cons_15.h"
#include "mindustry/entities/Lightning.h"
#include "mindustry/entities/Damage_invoke_arc_func_Cons_14.h"
#include "mindustry/entities/Damage_invoke_arc_func_Cons_17.h"
#include "mindustry/entities/Damage_invoke_arc_func_Cons_16.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "arc/util/Nullable.h"
#include "mindustry/game/EventType_UnitDamageEvent.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "arc/math/geom/Intersector.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/Units.h"
#include "arc/util/pooling/Pool.h"
#include "mindustry/entities/Damage_invoke_arc_func_Prov_1.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/struct/IntFloatMap_Entry.h"
#include "mindustry/world/blocks/ExplosionShield.h"
#include "mindustry/entities/Damage_Collided.h"
#include "arc/struct/FloatSeq.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntSet.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "arc/struct/IntFloatMap.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/StatusEffect.h"
#include "java/lang/Enum.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/entities/Fires.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Call.h"

extern "C" {

jobject SF_mindustry_entities_Damage_bulletDamageEvent;
jobject SF_mindustry_entities_Damage_rect;
jobject SF_mindustry_entities_Damage_hitrect;
jobject SF_mindustry_entities_Damage_vec;
jobject SF_mindustry_entities_Damage_seg1;
jobject SF_mindustry_entities_Damage_seg2;
jobject SF_mindustry_entities_Damage_collidedBlocks;
jobject SF_mindustry_entities_Damage_damages;
jobject SF_mindustry_entities_Damage_collided;
jobject SF_mindustry_entities_Damage_collidePool;
jobject SF_mindustry_entities_Damage_builds;
jobject SF_mindustry_entities_Damage_distances;
jobject SF_mindustry_entities_Damage_furthest;
jfloat SF_mindustry_entities_Damage_maxDst;
jobject SF_mindustry_entities_Damage_tmpBuilding;
jobject SF_mindustry_entities_Damage_tmpUnit;

void mark_mindustry_entities_Damage(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_Damage_bulletDamageEvent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_bulletDamageEvent)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_bulletDamageEvent, mark, depth + 1);
		if (SF_mindustry_entities_Damage_rect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_rect)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_rect, mark, depth + 1);
		if (SF_mindustry_entities_Damage_hitrect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_hitrect)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_hitrect, mark, depth + 1);
		if (SF_mindustry_entities_Damage_vec)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_vec)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_vec, mark, depth + 1);
		if (SF_mindustry_entities_Damage_seg1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_seg1)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_seg1, mark, depth + 1);
		if (SF_mindustry_entities_Damage_seg2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_seg2)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_seg2, mark, depth + 1);
		if (SF_mindustry_entities_Damage_collidedBlocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_collidedBlocks)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_collidedBlocks, mark, depth + 1);
		if (SF_mindustry_entities_Damage_damages)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_damages)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_damages, mark, depth + 1);
		if (SF_mindustry_entities_Damage_collided)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_collided)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_collided, mark, depth + 1);
		if (SF_mindustry_entities_Damage_collidePool)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_collidePool)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_collidePool, mark, depth + 1);
		if (SF_mindustry_entities_Damage_builds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_builds)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_builds, mark, depth + 1);
		if (SF_mindustry_entities_Damage_distances)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_distances)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_distances, mark, depth + 1);
		if (SF_mindustry_entities_Damage_furthest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_furthest)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_furthest, mark, depth + 1);
		if (SF_mindustry_entities_Damage_tmpBuilding)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_tmpBuilding)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_tmpBuilding, mark, depth + 1);
		if (SF_mindustry_entities_Damage_tmpUnit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Damage_tmpUnit)->clazz)->markFunction)((jobject) SF_mindustry_entities_Damage_tmpUnit, mark, depth + 1);
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
	auto self = (mindustry_entities_Damage *) object;
}

void init_mindustry_entities_Damage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_applySuppression_mindustry_game_Team_float_float_float_float_float_float_arc_math_geom_Position(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:applySuppression", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	jfloat temp4 = frame[5].f;
	jfloat temp5 = frame[6].f;
	sp[1].o = frame[7].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_sapBullet;
	SM_mindustry_entities_Damage_applySuppression_mindustry_game_Team_float_float_float_float_float_float_arc_math_geom_Position_arc_graphics_Color(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, sp[1].o, sp[2].o);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_applySuppression_mindustry_game_Team_float_float_float_float_float_float_arc_math_geom_Position_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7, jobject param8) {
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:applySuppression", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].o = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(47);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_builds;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(48);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = jobject(nullptr);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Cons_9);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (frame[4].f);
		sp[3].o = (jobject) proxy;
	}
	jint temp3 = (jint)((func_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	LINE_NUMBER(63);
	jfloat temp4 = frame[6].f;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_builds;
	frame[9].f = (temp4 / (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size))));
	LINE_NUMBER(64);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_builds;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(65);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble((frame[9].f))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(66);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (frame[5].f));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_java_lang_Runnable_5);
		proxy->F_field2 = (jref) (frame[7].o);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[11].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_7:;
	LINE_NUMBER(70);
	goto label_4;
label_5:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6) {
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:dynamicExplosion", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(74);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	jfloat temp5 = frame[5].f;
	jint temp6 = frame[6].i;
	jint temp7 = jint(1);
	sp[0].o = jobject(nullptr);
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_dynamicExplosion;
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_mindustry_entities_Effect(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jobject param7) {
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:dynamicExplosion", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(78);
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].i), (jint(1)), (jobject(nullptr)), (frame[7].o));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_mindustry_entities_Effect_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jobject param7, jfloat param8) {
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:dynamicExplosion", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].o = param7;
	frame[8].f = param8;
	{
	LINE_NUMBER(82);
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].i), (jint(1)), (jobject(nullptr)), (frame[7].o), (frame[8].f));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jbool param7, jobject param8) {
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:dynamicExplosion", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(86);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	jfloat temp5 = frame[5].f;
	jint temp6 = frame[6].i;
	jint temp7 = frame[7].i;
	sp[0].o = frame[8].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_dynamicExplosion;
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jbool param7, jobject param8, jobject param9) {
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:dynamicExplosion", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].o = param8;
	frame[9].o = param9;
	{
	LINE_NUMBER(90);
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].i), (frame[7].i), (frame[8].o), (frame[9].o), (jfloat(3.0f)));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jbool param7, jobject param8, jobject param9, jfloat param10) {
	jtype frame[24];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:dynamicExplosion", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].o = param8;
	frame[9].o = param9;
	frame[10].f = param10;
	{
	LINE_NUMBER(94);
	if ((frame[6].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(95);
	frame[11].i = (jint(0));
	}
label_3:;
	{
	jfloat temp0 = jfloat((frame[11].i));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[4].f) / (jfloat(700.0f))), (jfloat(0)), (jfloat(8.0f)));
	if ((floatCompare(temp0, temp1, 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(96);
	jint temp0 = jint(5);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (frame[4].f), (jfloat(0.98f)));
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (jint((temp1 / (jfloat(500.0f))))), (jint(1)), (18));
	frame[12].i = (temp0 + temp2);
	LINE_NUMBER(97);
	jfloat temp3 = (jfloat((frame[11].i))) * (jfloat(0.8f));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp5 = temp3 + temp4;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_java_lang_Runnable_6);
		proxy->F_field3 = (frame[12].i);
		proxy->F_field2 = (frame[1].f);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (frame[4].f);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp5, sp[0].o);
	LINE_NUMBER(95);
	INST_IINC(11, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(100);
	if ((frame[7].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(101);
	frame[11].i = (jint(0));
	}
label_10:;
	{
	jfloat temp0 = jfloat((frame[11].i));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[2].f) / (jfloat(4.0f))), (jfloat(0)), (jfloat(30.0f)));
	if ((floatCompare(temp0, temp1, 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(102);
	jfloat temp0 = (jfloat((frame[11].i))) / (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_java_lang_Runnable_7);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (frame[0].f);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(101);
	INST_IINC(11, 1);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(106);
	if ((floatCompare((frame[3].f), (jfloat(2)), 1)) > 0) goto label_13;
	}
	INST_ICONST(0);
	goto label_14;
label_13:;
	{
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (jint(((frame[3].f) / (jfloat(11.0f))))), (jint(1)), (25));
	sp[0].i = temp0;
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(107);
	frame[12].f = ((frame[3].f) / (jfloat(2)));
	LINE_NUMBER(109);
	frame[13].i = (jint(0));
	}
label_17:;
	{
	if ((frame[13].i) >= (frame[11].i)) goto label_1;
	}
	{
	LINE_NUMBER(110);
	frame[14].i = (frame[13].i);
	LINE_NUMBER(111);
	jfloat temp0 = (jfloat((frame[13].i))) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_java_lang_Runnable_8);
		proxy->F_field7 = (frame[11].i);
		proxy->F_field6 = (frame[14].i);
		proxy->F_field5 = (frame[3].f);
		proxy->F_field4 = (frame[5].f);
		proxy->F_field3 = (frame[12].f);
		proxy->F_field2 = (frame[1].f);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (jref) (frame[8].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(109);
	INST_IINC(13, 1);
	goto label_17;
	}
label_1:;
	{
	LINE_NUMBER(122);
	if ((floatCompare((frame[3].f), (jfloat(15.0f)), -1)) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(123);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_shockwave;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	}
label_21:;
	{
	LINE_NUMBER(126);
	if ((floatCompare((frame[3].f), (jfloat(30.0f)), -1)) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(127);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_bigShockwave;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	}
label_23:;
	{
	LINE_NUMBER(130);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((frame[3].f) / (jfloat(4.0f))) + (frame[10].f)), (jfloat(9.0f)));
	frame[11].f = temp0;
	LINE_NUMBER(131);
	SM_mindustry_entities_Effect_shake_float_float_float_float(ctx, (frame[11].f), (frame[11].f), (frame[0].f), (frame[1].f));
	LINE_NUMBER(132);
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, (frame[9].o), (frame[0].f), (frame[1].f), ((frame[5].f) / (jfloat(8.0f))));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_createIncend_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jint param3) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:createIncend", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(136);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(137);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[2].f));
	frame[5].f = (temp0 + temp1);
	LINE_NUMBER(138);
	jfloat temp2 = frame[1].f;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[2].f));
	frame[6].f = (temp2 + temp3);
	LINE_NUMBER(139);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[5].f), (frame[6].f));
	frame[7].o = sp[0].o;
	LINE_NUMBER(140);
	if ((frame[7].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(141);
	SM_mindustry_entities_Fires_create_mindustry_world_Tile(ctx, (frame[7].o));
	}
label_7:;
	{
	LINE_NUMBER(136);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Damage_findAbsorber_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:findAbsorber", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(147);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_tmpBuilding = (jobject(nullptr));
	LINE_NUMBER(149);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[1].f));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[2].f));
	jint temp2 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[3].f));
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[4].f));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_5(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_5 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	jint temp4 = (jint)SM_mindustry_core_World_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	frame[5].i = temp4;
	LINE_NUMBER(152);
	if ((frame[5].i) == 0) goto label_3;
	}
	clinit_mindustry_entities_Damage(ctx);
	(sp++)->o = SF_mindustry_entities_Damage_tmpBuilding;
	goto label_4;
label_3:;
	INST_ACONST_NULL();
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_Damage_findLength_mindustry_gen_Bullet_float_boolean_int_R_float(jcontext ctx, jobject param0, jfloat param1, jbool param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:findLength", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(156);
	if ((frame[3].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(157);
	jfloat temp0 = (jfloat)SM_mindustry_entities_Damage_findPierceLength_mindustry_gen_Bullet_int_boolean_float_R_float(ctx, (frame[0].o), (frame[3].i), (frame[2].i), (frame[1].f));
	frame[1].f = temp0;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(158);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(159);
	jfloat temp0 = (jfloat)SM_mindustry_entities_Damage_findLaserLength_mindustry_gen_Bullet_float_R_float(ctx, (frame[0].o), (frame[1].f));
	frame[1].f = temp0;
	}
label_3:;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_Damage_findLaserLength_mindustry_gen_Bullet_float_R_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:findLaserLength", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(166);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (frame[1].f));
	LINE_NUMBER(168);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_furthest = (jobject(nullptr));
	LINE_NUMBER(170);
	jint temp1 = (jint)((func_mindustry_gen_Bullet_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_tileX_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_mindustry_gen_Bullet_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_tileY_R_int])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	jint temp4 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x)));
	jfloat temp5 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	jint temp6 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp5 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_6(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_6 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	jint temp7 = (jint)SM_mindustry_core_World_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean(ctx, temp1, temp2, temp4, temp6, sp[0].o);
	frame[2].i = temp7;
	LINE_NUMBER(173);
	if ((frame[2].i) == 0) goto label_4;
	}
	clinit_mindustry_entities_Damage(ctx);
	(sp++)->o = SF_mindustry_entities_Damage_furthest;
	if ((--sp)->o == nullptr) goto label_4;
	{
	jfloat temp0 = jfloat(6.0f);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_furthest;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_furthest;
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[1].o);
	jfloat temp3 = (jfloat)((func_mindustry_gen_Bullet_dst_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_dst_float_float_R_float])(ctx, sp[0].o, temp1, temp2);
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp3);
	sp[0].f = temp4;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_FLOAD(1);
label_5:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_Damage_findPierceLength_mindustry_gen_Bullet_int_float_R_float(jcontext ctx, jobject param0, jint param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:findPierceLength", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)SM_mindustry_entities_Damage_findPierceLength_mindustry_gen_Bullet_int_boolean_float_R_float(ctx, sp[0].o, temp0, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_laserAbsorb), (frame[2].f));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_Damage_findPierceLength_mindustry_gen_Bullet_int_boolean_float_R_float(jcontext ctx, jobject param0, jint param1, jbool param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:findPierceLength", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(181);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (frame[3].f));
	LINE_NUMBER(182);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y));
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_vec;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(184);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_maxDst = (jfloat(std::numeric_limits<float>::infinity()));
	LINE_NUMBER(186);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_distances;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesGround) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesTiles) == 0) goto label_5;
	}
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)((func_mindustry_gen_Bullet_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_tileX_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_Bullet_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_tileY_R_int])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x)));
	jfloat temp4 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	jint temp5 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_7(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_7 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_7);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	jint temp6 = (jint)SM_mindustry_core_World_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean(ctx, temp0, temp1, temp3, temp5, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_rect;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(214);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_distances;
	((func_arc_struct_FloatSeq_sort) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_sort])(ctx, sp[0].o);
	LINE_NUMBER(218);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_distances;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) < (frame[1].i)) goto label_9;
	}
	INST_ILOAD(1);
	if ((--sp)->i > 0) goto label_10;
label_9:;
	INST_FLOAD(3);
	goto label_11;
label_10:;
	{
	jfloat temp0 = jfloat(6.0f);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_distances;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, ((frame[1].i) - (jint(1))));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	sp[0].f = temp2;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, sp[0].f, (clinit_mindustry_entities_Damage(ctx), (jfloat)SF_mindustry_entities_Damage_maxDst));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_Damage_collideLaser_mindustry_gen_Bullet_float_boolean_boolean_int_R_float(jcontext ctx, jobject param0, jfloat param1, jbool param2, jbool param3, jint param4) {
	jtype frame[15];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:collideLaser", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(223);
	jfloat temp0 = (jfloat)SM_mindustry_entities_Damage_findPierceLength_mindustry_gen_Bullet_int_boolean_float_R_float(ctx, (frame[0].o), (frame[4].i), (frame[3].i), (frame[1].f));
	frame[5].f = temp0;
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[0].o));
	SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean_boolean_int(ctx, sp[0].o, sp[1].o, temp1, temp2, temp3, (frame[5].f), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(227);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_fdata = (frame[5].f);
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (frame[5].f);
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:collideLine", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(233);
	SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (jint(0)));
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:collideLine", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(241);
	SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].i), (jint(1)));
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jbool param7) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:collideLine", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(249);
	SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean_boolean_int(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].i), (frame[7].i), (jint(-1)));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean_boolean_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jbool param7, jint param8) {
	jtype frame[21];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:collideLine", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(257);
	jfloat temp0 = (jfloat)SM_mindustry_entities_Damage_findLength_mindustry_gen_Bullet_float_boolean_int_R_float(ctx, (frame[0].o), (frame[5].f), (frame[7].i), (frame[8].i));
	frame[5].f = temp0;
	LINE_NUMBER(258);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_fdata = (frame[5].f);
	LINE_NUMBER(260);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_collidedBlocks;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(261);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesGround) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesTiles) == 0) goto label_5;
	}
	{
	LINE_NUMBER(264);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_seg1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(265);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_seg2;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_seg1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(266);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_seg2;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_seg2;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_8(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_8 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_8);
		proxy->F_field2 = (frame[6].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_mindustry_core_World_raycastEachNoDiagonalWorld_float_float_float_float_arc_math_geom_Geometry$Raycaster(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(287);
	frame[9].f = (jfloat(3.0f));
	LINE_NUMBER(289);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_vec;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((frame[9].f) * (jfloat(2))));
	LINE_NUMBER(290);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	frame[10].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[2].f));
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	frame[11].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[3].f));
	LINE_NUMBER(292);
	sp[0].o = frame[1].o;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_rect;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Cons_11);
		proxy->F_field5 = (frame[9].f);
		proxy->F_field4 = (frame[11].f);
		proxy->F_field3 = (frame[10].f);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(304);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[12].o = sp[0].o;
	LINE_NUMBER(305);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_collided;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Floatf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(306);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_collided;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Cons_12);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[12].o);
		proxy->F_field1 = (frame[8].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(329);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_collidePool;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_collided;
	((func_arc_util_pooling_Pool_freeAll_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_pooling_Pool_freeAll_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(330);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_collided;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_collidePoint_mindustry_gen_Bullet_mindustry_game_Team_mindustry_entities_Effect_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4) {
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:collidePoint", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesGround) == 0) goto label_1;
	}
	{
	LINE_NUMBER(340);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[3].f));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[4].f));
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, temp1);
	frame[5].o = sp[0].o;
	LINE_NUMBER(342);
	if ((frame[5].o) == nullptr) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_damage), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(343);
	frame[6].f = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_health);
	LINE_NUMBER(345);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_team;
	if (sp[0].o == (frame[1].o)) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean])(ctx, (frame[5].o), (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)((func_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean])(ctx, (frame[5].o), (frame[0].o));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float])(ctx, sp[0].o, (frame[0].o), (frame[3].f), (frame[4].f));
	}
label_6:;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean])(ctx, sp[0].o, (frame[0].o), (frame[5].o), (frame[3].f), (frame[4].f), (frame[6].f), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(357);
	sp[0].o = frame[1].o;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_rect;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, (frame[3].f), (frame[4].f), (jfloat(1)));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Cons_13);
		proxy->F_field2 = (frame[4].f);
		proxy->F_field1 = (frame[3].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Damage_linecast_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Healthc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:linecast", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(370);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f), (frame[4].f));
	LINE_NUMBER(372);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_tmpBuilding = (jobject(nullptr));
	LINE_NUMBER(374);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesGround) == 0) goto label_3;
	}
	{
	LINE_NUMBER(375);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[1].f;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp4 = frame[2].f;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_9(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_9 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_math_geom_Geometry$Raycaster_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_mindustry_core_World_raycastEachWorld_float_float_float_float_arc_math_geom_Geometry$Raycaster(ctx, temp0, temp1, temp3, temp5, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(385);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_vec;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(386);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	frame[5].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	frame[6].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(388);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width), (jfloat(0)), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(389);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width));
	LINE_NUMBER(390);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) * (jfloat(-1.0f)));
	}
label_8:;
	{
	LINE_NUMBER(393);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height), (jfloat(0)), 1)) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(394);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (temp0 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height));
	LINE_NUMBER(395);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) * (jfloat(-1.0f)));
	}
label_11:;
	{
	LINE_NUMBER(398);
	frame[7].f = (jfloat(3.0f));
	LINE_NUMBER(400);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y) - (frame[7].f));
	LINE_NUMBER(401);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x) - (frame[7].f));
	LINE_NUMBER(402);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) + ((frame[7].f) * (jfloat(2))));
	LINE_NUMBER(403);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) + ((frame[7].f) * (jfloat(2))));
	LINE_NUMBER(405);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_tmpUnit = (jobject(nullptr));
	LINE_NUMBER(407);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_rect;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Cons_14);
		proxy->F_field5 = (frame[6].f);
		proxy->F_field4 = (frame[5].f);
		proxy->F_field3 = (frame[7].f);
		proxy->F_field2 = (jref) (frame[0].o);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[1].f);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(424);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpBuilding;
	if (sp[0].o == nullptr) goto label_21;
	}
	clinit_mindustry_entities_Damage(ctx);
	(sp++)->o = SF_mindustry_entities_Damage_tmpUnit;
	if ((--sp)->o == nullptr) goto label_21;
	{
	LINE_NUMBER(425);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpBuilding;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_getX_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getX_R_float])(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpBuilding;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Building_getY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getY_R_float])(ctx, sp[0].o);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, temp0, temp1, temp2, temp3);
	jfloat temp5 = frame[1].f;
	jfloat temp6 = frame[2].f;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpUnit;
	jfloat temp7 = (jfloat)((func_mindustry_gen_Unit_getX_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_getX_R_float])(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpUnit;
	jfloat temp8 = (jfloat)((func_mindustry_gen_Unit_getY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_getY_R_float])(ctx, sp[0].o);
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, temp5, temp6, temp7, temp8);
	if ((floatCompare(temp4, temp9, 1)) > 0) goto label_23;
	}
	{
	LINE_NUMBER(426);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpBuilding;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(428);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpBuilding;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(429);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpBuilding;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(432);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpUnit;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_damageUnits_mindustry_game_Team_float_float_float_float_arc_func_Boolf_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:damageUnits", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(437);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Cons_15);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (frame[4].f);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[0].o = (jobject) proxy;
	}
	frame[7].o = sp[0].o;
	LINE_NUMBER(448);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((frame[3].f) * (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(449);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(450);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_rect;
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o, (frame[7].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(452);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	SM_mindustry_entities_Units_nearby_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, (frame[7].o));
	}
label_5:;
	LINE_NUMBER(454);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_damage_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:damage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(458);
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean(ctx, (jobject(nullptr)), (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (jint(0)));
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:damage", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(463);
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (jint(0)));
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:damage", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(468);
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (jint(0)), (frame[5].i), (frame[6].i));
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_status_mindustry_game_Team_float_float_float_mindustry_type_StatusEffect_float_boolean_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jbool param6, jbool param7) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:status", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(472);
	SM_mindustry_entities_Damage_status_mindustry_game_Team_float_float_float_mindustry_type_StatusEffect_float_boolean_boolean_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o), (frame[5].f), (frame[6].i), (frame[7].i), (jfloat(1)));
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_status_mindustry_game_Team_float_float_float_mindustry_type_StatusEffect_float_boolean_boolean_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jbool param6, jbool param7, jfloat param8) {
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:status", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].f = param8;
	{
	LINE_NUMBER(476);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Cons_16);
		proxy->F_field8 = (frame[5].f);
		proxy->F_field7 = (jref) (frame[4].o);
		proxy->F_field6 = (frame[8].f);
		proxy->F_field5 = (frame[3].f);
		proxy->F_field4 = (frame[2].f);
		proxy->F_field3 = (frame[1].f);
		proxy->F_field2 = (frame[7].i);
		proxy->F_field1 = (frame[6].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[9].o = sp[0].o;
	LINE_NUMBER(486);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((frame[3].f) * (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(487);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(488);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_rect;
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o, (frame[9].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(490);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	SM_mindustry_entities_Units_nearby_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, (frame[9].o));
	}
label_5:;
	LINE_NUMBER(492);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:damage", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(495);
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i), (jint(1)), (jint(1)));
	LINE_NUMBER(496);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7) {
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:damage", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(500);
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i), (frame[6].i), (frame[7].i), (jint(0)), (jobject(nullptr)));
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean_mindustry_gen_Bullet(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7, jbool param8, jobject param9) {
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:damage", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].i = param8;
	frame[9].o = param9;
	{
	LINE_NUMBER(505);
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean_mindustry_gen_Bullet_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].o), (jfloat(1)));
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean_mindustry_gen_Bullet_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7, jbool param8, jobject param9, jfloat param10) {
	jtype frame[23];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:damage", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].i = param8;
	frame[9].o = param9;
	frame[10].f = param10;
	{
	LINE_NUMBER(510);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Cons_17);
		proxy->F_field10 = (frame[5].i);
		proxy->F_field9 = (jref) (frame[9].o);
		proxy->F_field8 = (frame[10].f);
		proxy->F_field7 = (frame[4].f);
		proxy->F_field6 = (frame[8].i);
		proxy->F_field5 = (frame[3].f);
		proxy->F_field4 = (frame[2].f);
		proxy->F_field3 = (frame[1].f);
		proxy->F_field2 = (frame[7].i);
		proxy->F_field1 = (frame[6].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[11].o = sp[0].o;
	LINE_NUMBER(541);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((frame[3].f) * (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(542);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(543);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_rect;
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o, (frame[11].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(545);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_rect;
	SM_mindustry_entities_Units_nearby_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, (frame[11].o));
	}
label_5:;
	{
	LINE_NUMBER(548);
	if ((frame[7].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(549);
	if ((frame[5].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[1].f));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[2].f));
	jfloat temp2 = (frame[3].f) / (jfloat(8.0f));
	jfloat temp3 = frame[4].f;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].f = temp2;
	sp[4].f = temp3;
	sp += 5;
	if ((frame[9].o) != nullptr) goto label_10;
	}
	INST_FCONST(1);
	goto label_11;
label_10:;
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[9].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_buildingDamageMultiplier;
	sp[0].f = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 6;
	SM_mindustry_entities_Damage_tileDamage_mindustry_game_Team_int_int_float_float_mindustry_gen_Bullet(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].f, (sp[4].f * sp[5].f), (frame[9].o));
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(552);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp[4].f = temp3;
	sp += 5;
	if ((frame[9].o) != nullptr) goto label_12;
	}
	INST_FCONST(1);
	goto label_13;
label_12:;
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[9].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_buildingDamageMultiplier;
	sp[0].f = temp0;
	sp += 1;
	}
label_13:;
	INST_FMUL();
	POP_N(5); // Pop method args
	SM_mindustry_entities_Damage_completeDamage_mindustry_game_Team_float_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].f);
label_6:;
	LINE_NUMBER(555);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_tileDamage_mindustry_game_Team_int_int_float_float(jcontext ctx, jobject param0, jint param1, jint param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:tileDamage", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(558);
	SM_mindustry_entities_Damage_tileDamage_mindustry_game_Team_int_int_float_float_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].f), (frame[4].f), (jobject(nullptr)));
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_tileDamage_mindustry_game_Team_int_int_float_float_mindustry_gen_Bullet(jcontext ctx, jobject param0, jint param1, jint param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:tileDamage", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(562);
	jfloat temp0 = jfloat(0);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_java_lang_Runnable_9);
		proxy->F_field5 = (jref) (frame[5].o);
		proxy->F_field4 = (frame[3].f);
		proxy->F_field3 = (frame[4].f);
		proxy->F_field2 = (jref) (frame[0].o);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (frame[1].i);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(641);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_completeDamage_mindustry_game_Team_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:completeDamage", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(645);
	frame[5].i = (jint(((frame[3].f) / (jfloat(8.0f)))));
	LINE_NUMBER(646);
	frame[6].i = (-(frame[5].i));
	}
label_2:;
	{
	if ((frame[6].i) > (frame[5].i)) goto label_3;
	}
	{
	LINE_NUMBER(647);
	frame[7].i = (-(frame[5].i));
	}
label_5:;
	{
	if ((frame[7].i) > (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(648);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[1].f) / (jfloat(8.0f))));
	jint temp1 = temp0 + (frame[6].i);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[2].f) / (jfloat(8.0f))));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (temp2 + (frame[7].i)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(649);
	if ((frame[8].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	if (sp[0].o == nullptr) goto label_9;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_10;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[8].o));
	if (sp[0].o == sp[1].o) goto label_9;
	}
label_10:;
	{
	if ((((frame[6].i) * (frame[6].i)) + ((frame[7].i) * (frame[7].i))) > ((frame[5].i) * (frame[5].i))) goto label_9;
	}
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	((func_mindustry_gen_Building_damage_mindustry_game_Team_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_damage_mindustry_game_Team_float])(ctx, sp[0].o, (frame[0].o), (frame[4].f));
	}
label_9:;
	{
	LINE_NUMBER(647);
	INST_IINC(7, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(646);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(654);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_Damage_calculateDamage_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:calculateDamage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(657);
	frame[3].f = (jfloat(0.4f));
	LINE_NUMBER(658);
	if ((floatCompare((frame[1].f), (jfloat(1,000000e-05f)), 1)) > 0) goto label_2;
	}
	INST_FCONST(1);
	goto label_3;
label_2:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat(1)) - ((frame[0].f) / (frame[1].f))), (jfloat(1)), (frame[3].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return ((frame[2].f) * (frame[4].f));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_Damage_applyArmor_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:applyArmor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(664);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((frame[0].f) - (frame[1].f)), ((jfloat(0.1f)) * (frame[0].f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$tileDamage$0_int_int_mindustry_game_Team_float_float_mindustry_gen_Bullet(jcontext ctx, jint param0, jint param1, jobject param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[35];
	auto stack = &frame[30];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$tileDamage$0", 35 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(563);
	jint temp0 = frame[0].i;
	jint temp1 = -100;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, (temp2 + (100)));
	frame[6].i = temp3;
	jint temp4 = frame[1].i;
	jint temp5 = -100;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp6 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp7 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp4, temp5, (temp6 + (100)));
	frame[7].i = temp7;
	LINE_NUMBER(565);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(569);
	if ((frame[8].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_team;
	if (sp[0].o == (frame[2].o)) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_health), (frame[3].f), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(571);
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))), ((frame[4].f) * (jfloat(0.4f))));
	frame[9].f = (temp0 * temp1);
	LINE_NUMBER(572);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(573);
	((func_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float])(ctx, (frame[8].o), (frame[5].o), (frame[2].o), (frame[9].f));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(575);
	((func_mindustry_gen_Building_damage_mindustry_game_Team_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_damage_mindustry_game_Team_float])(ctx, (frame[8].o), (frame[2].o), (frame[9].f));
	}
label_9:;
	LINE_NUMBER(578);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(582);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[4].f), (jfloat(100.0f)));
	frame[9].f = temp0;
	frame[10].f = ((frame[9].f) * (frame[9].f));
	LINE_NUMBER(583);
	jint temp1 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (((frame[9].f) * (jfloat(2))) * (jfloat(3.1415927f))));
	frame[11].i = temp1;
	LINE_NUMBER(584);
	frame[12].d = ((jdouble(6.283185307179586)) / (jdouble((frame[11].i))));
	LINE_NUMBER(585);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_damages;
	((func_arc_struct_IntFloatMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(588);
	frame[14].i = (jint(0));
	}
label_15:;
	{
	if ((frame[14].i) > (frame[11].i)) goto label_16;
	}
	{
	LINE_NUMBER(589);
	frame[15].f = (jfloat(0));
	LINE_NUMBER(590);
	frame[16].i = (frame[6].i);
	LINE_NUMBER(591);
	frame[17].i = (frame[7].i);
	LINE_NUMBER(592);
	jint temp0 = frame[6].i;
	jdouble temp1 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, ((frame[12].d) * (jdouble((frame[14].i)))));
	frame[18].i = (temp0 + (jint((temp1 * (jdouble((frame[9].f)))))));
	jint temp2 = frame[7].i;
	jdouble temp3 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, ((frame[12].d) * (jdouble((frame[14].i)))));
	frame[19].i = (temp2 + (jint((temp3 * (jdouble((frame[9].f)))))));
	LINE_NUMBER(594);
	jint temp4 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[18].i) - (frame[16].i)));
	frame[20].i = temp4;
	LINE_NUMBER(595);
	jint temp5 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[19].i) - (frame[17].i)));
	frame[21].i = (-temp5);
	LINE_NUMBER(596);
	if ((frame[16].i) >= (frame[18].i)) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(-1);
label_26:;
	{
	sp -= 1;
	frame[22].i = sp[0].i;
	LINE_NUMBER(597);
	if ((frame[17].i) >= (frame[19].i)) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(-1);
label_29:;
	{
	sp -= 1;
	frame[23].i = sp[0].i;
	LINE_NUMBER(598);
	frame[24].i = ((frame[20].i) + (frame[21].i));
	}
label_31:;
	{
	LINE_NUMBER(600);
	if ((frame[16].i) != (frame[18].i)) goto label_32;
	}
	{
	if ((frame[17].i) == (frame[19].i)) goto label_33;
	}
label_32:;
	{
	LINE_NUMBER(601);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[16].i), (frame[17].i));
	frame[25].o = sp[0].o;
	LINE_NUMBER(602);
	if ((frame[25].o) == nullptr) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[25].o)))->F_team;
	if (sp[0].o == (frame[2].o)) goto label_35;
	}
	{
	LINE_NUMBER(604);
	frame[26].f = (jfloat(0.6f));
	LINE_NUMBER(605);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, (jfloat((frame[16].i))), (jfloat((frame[17].i))), (jfloat((frame[6].i))), (jfloat((frame[7].i))));
	frame[27].f = (((temp0 - (temp1 / (frame[10].f))) + (frame[26].f)) / ((jfloat(1)) + (frame[26].f)));
	LINE_NUMBER(606);
	frame[28].f = (((frame[3].f) * (frame[27].f)) - (frame[15].f));
	LINE_NUMBER(608);
	jint temp2 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[16].i), (frame[17].i));
	frame[29].i = temp2;
	LINE_NUMBER(609);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_damages;
	jint temp3 = frame[29].i;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_damages;
	jfloat temp4 = (jfloat)((func_arc_struct_IntFloatMap_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_R_float])(ctx, sp[1].o, (frame[29].i));
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, (frame[28].f));
	((func_arc_struct_IntFloatMap_put_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_put_int_float])(ctx, sp[0].o, temp3, temp5);
	LINE_NUMBER(611);
	frame[15].f = ((frame[15].f) + ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[25].o)))->F_health));
	LINE_NUMBER(613);
	if ((floatCompare(((frame[28].f) - (frame[15].f)), (jfloat(0)), 1)) > 0) goto label_35;
	}
	LINE_NUMBER(614);
	goto label_33;
label_35:;
	{
	LINE_NUMBER(618);
	if ((((jint(2)) * (frame[24].i)) - (frame[21].i)) <= ((frame[20].i) - ((jint(2)) * (frame[24].i)))) goto label_44;
	}
	{
	LINE_NUMBER(619);
	frame[24].i = ((frame[24].i) + (frame[21].i));
	LINE_NUMBER(620);
	frame[16].i = ((frame[16].i) + (frame[22].i));
	goto label_47;
	}
label_44:;
	{
	LINE_NUMBER(622);
	frame[24].i = ((frame[24].i) + (frame[20].i));
	LINE_NUMBER(623);
	frame[17].i = ((frame[17].i) + (frame[23].i));
	}
label_47:;
	LINE_NUMBER(625);
	goto label_31;
label_33:;
	{
	LINE_NUMBER(588);
	INST_IINC(14, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(629);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_damages;
	sp[0].o = (jobject)((func_arc_struct_IntFloatMap_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	}
label_49:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[14].o)))(ctx, (frame[14].o));
	if (temp0 == 0) goto label_50;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[14].o)))(ctx, (frame[14].o));
	frame[15].o = (checkCast(ctx, &class_arc_struct_IntFloatMap$Entry, sp[0].o));
	LINE_NUMBER(630);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, ((jint)((arc_struct_IntFloatMap$Entry *) NULL_CHECK((frame[15].o)))->F_key));
	frame[16].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, ((jint)((arc_struct_IntFloatMap$Entry *) NULL_CHECK((frame[15].o)))->F_key));
	frame[17].i = temp1;
	LINE_NUMBER(631);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[16].i), (frame[17].i));
	frame[18].o = sp[0].o;
	LINE_NUMBER(632);
	if ((frame[18].o) == nullptr) goto label_55;
	}
	{
	LINE_NUMBER(633);
	if ((frame[5].o) == nullptr) goto label_57;
	}
	{
	LINE_NUMBER(634);
	((func_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float])(ctx, (frame[18].o), (frame[5].o), (frame[2].o), ((jfloat)((arc_struct_IntFloatMap$Entry *) NULL_CHECK((frame[15].o)))->F_value));
	goto label_55;
	}
label_57:;
	{
	LINE_NUMBER(636);
	((func_mindustry_gen_Building_damage_mindustry_game_Team_float) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_gen_Building_damage_mindustry_game_Team_float])(ctx, (frame[18].o), (frame[2].o), ((jfloat)((arc_struct_IntFloatMap$Entry *) NULL_CHECK((frame[15].o)))->F_value));
	}
label_55:;
	LINE_NUMBER(639);
	goto label_49;
label_50:;
	LINE_NUMBER(640);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$damage$0_mindustry_game_Team_boolean_boolean_float_float_float_boolean_float_float_mindustry_gen_Bullet_boolean_mindustry_gen_Unit(jcontext ctx, jobject param0, jbool param1, jbool param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jfloat param7, jfloat param8, jobject param9, jbool param10, jobject param11) {
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$damage$0", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].o = param9;
	frame[10].i = param10;
	frame[11].o = param11;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_team;
	if (sp[0].o == (frame[0].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[11].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_gen_Unit_hittable_R_boolean])(ctx, (frame[11].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[11].o;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[5].f;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp += 4;
	if ((frame[6].i) == 0) goto label_2;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_hitSize) / (jfloat(2));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 5;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, sp[0].o, sp[1].f, sp[2].f, (sp[3].f + sp[4].f));
	if (temp0 != 0) goto label_4;
	}
label_1:;
	LINE_NUMBER(512);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(515);
	frame[12].i = ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_dead);
	LINE_NUMBER(517);
	if ((frame[6].i) == 0) goto label_6;
	}
	{
	jfloat temp0 = jfloat(0);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_gen_Unit_dst_float_float_R_float])(ctx, (frame[11].o), (frame[3].f), (frame[4].f));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_type;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 - (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hitSize) / (jfloat(2)))));
	sp[0].f = temp2;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_gen_Unit_dst_float_float_R_float])(ctx, (frame[11].o), (frame[3].f), (frame[4].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)SM_mindustry_entities_Damage_calculateDamage_float_float_float_R_float(ctx, sp[0].f, (frame[5].f), (frame[7].f));
	frame[13].f = temp0;
	LINE_NUMBER(518);
	if ((floatCompare((frame[8].f), (jfloat(1)), -1)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(519);
	((func_mindustry_gen_Unit_damageArmorMult_float_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_gen_Unit_damageArmorMult_float_float])(ctx, (frame[11].o), (frame[13].f), (frame[8].f));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(521);
	((func_mindustry_gen_Unit_damage_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_gen_Unit_damage_float])(ctx, (frame[11].o), (frame[13].f));
	}
label_11:;
	{
	LINE_NUMBER(524);
	if ((frame[9].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(525);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_bulletDamageEvent;
	sp[0].o = (jobject)((func_mindustry_game_EventType$UnitDamageEvent_set_mindustry_gen_Unit_mindustry_gen_Bullet_R_mindustry_game_EventType$UnitDamageEvent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_EventType$UnitDamageEvent_set_mindustry_gen_Unit_mindustry_gen_Bullet_R_mindustry_game_EventType$UnitDamageEvent])(ctx, sp[0].o, (frame[11].o), (frame[9].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(526);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[11].o));
	((func_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet, sp[0].o))(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(528);
	if ((frame[12].i) != 0) goto label_12;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_dead) == 0) goto label_12;
	}
	{
	LINE_NUMBER(529);
	clinit_mindustry_game_EventType$UnitBulletDestroyEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitBulletDestroyEvent);
	init_mindustry_game_EventType$UnitBulletDestroyEvent_mindustry_gen_Unit_mindustry_gen_Bullet(ctx, sp[0].o, (frame[11].o), (frame[9].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_12:;
	{
	LINE_NUMBER(533);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_x) - (frame[3].f)), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_y) - (frame[4].f)));
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	frame[14].f = temp0;
	LINE_NUMBER(534);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_vel;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_vec;
	sp += 2;
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) <= 0) goto label_18;
	}
	{
	jfloat temp0 = (jfloat(1)) - ((frame[14].f) / (frame[5].f));
	sp[0].f = temp0;
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_FCONST(1);
label_19:;
	{
	sp -= 3;
	jfloat temp0 = sp[2].f * (jfloat(2));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_mass_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_gen_Unit_mass_R_float])(ctx, (frame[11].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (temp0 / temp1));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(536);
	if ((frame[10].i) == 0) goto label_21;
	}
	{
	if ((floatCompare((frame[7].f), (jfloat(9999999.0f)), -1)) < 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[11].o));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(537);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_exclusionDeath;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_21:;
	LINE_NUMBER(539);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$status$0_mindustry_game_Team_boolean_boolean_float_float_float_float_mindustry_type_StatusEffect_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jbool param1, jbool param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7, jfloat param8, jobject param9) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$status$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].o = param7;
	frame[8].f = param8;
	frame[9].o = param9;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[9].o)))->F_team;
	if (sp[0].o == (frame[0].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[9].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Unit_hittable_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, (frame[9].o), (frame[3].f), (frame[4].f), (frame[5].f));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(478);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(481);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble((frame[6].f))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(482);
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, (frame[9].o), (frame[7].o), (frame[8].f));
	}
label_3:;
	LINE_NUMBER(484);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$damageUnits$0_arc_func_Boolf_float_arc_func_Cons_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$damageUnits$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(438);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_hittable_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(440);
	sp[0].o = frame[3].o;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_hitrect;
	((func_mindustry_gen_Unit_hitbox_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hitbox_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(441);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_hitrect;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_rect;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	LINE_NUMBER(442);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(444);
	((func_mindustry_gen_Unit_damage_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_damage_float])(ctx, (frame[3].o), (frame[1].f));
	LINE_NUMBER(445);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$linecast$1_float_float_mindustry_gen_Bullet_float_float_float_mindustry_gen_Unit(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$linecast$1", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(408);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpUnit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_dst2_float_float_R_float])(ctx, (frame[6].o), (frame[0].f), (frame[1].f));
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpUnit;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_dst2_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_dst2_float_float_R_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	if ((floatCompare(temp0, temp1, -1)) > 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[2].o)))->F_type;
	jint temp0 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesAir;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[2].o)))->F_type;
	jint temp1 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesGround));
	if (temp1 == 0) goto label_2;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[2].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(410);
	sp[0].o = frame[6].o;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_hitrect;
	((func_mindustry_gen_Unit_hitbox_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hitbox_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(411);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_hitrect;
	frame[7].o = sp[0].o;
	LINE_NUMBER(412);
	sp[0].o = frame[7].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y) - (frame[3].f));
	LINE_NUMBER(413);
	sp[0].o = frame[7].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x) - (frame[3].f));
	LINE_NUMBER(414);
	sp[0].o = frame[7].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) + ((frame[3].f) * (jfloat(2))));
	LINE_NUMBER(415);
	sp[0].o = frame[7].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) + ((frame[3].f) * (jfloat(2))));
	LINE_NUMBER(417);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_raycastRect_float_float_float_float_arc_math_geom_Rect_R_arc_math_geom_Vec2(ctx, (frame[0].f), (frame[1].f), (frame[4].f), (frame[5].f), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(419);
	if ((frame[8].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(420);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_tmpUnit = (frame[6].o);
	}
label_11:;
	LINE_NUMBER(422);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Damage_lambda$linecast$0_mindustry_gen_Bullet_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$linecast$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(376);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(377);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(378);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_tmpBuilding = (frame[3].o);
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$collidePoint$0_mindustry_gen_Bullet_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$collidePoint$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesAir;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesGround));
	if (temp1 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_hittable_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(359);
	((func_mindustry_gen_Unit_collision_mindustry_gen_Hitboxc_float_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_collision_mindustry_gen_Hitboxc_float_float])(ctx, (frame[3].o), (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(360);
	((func_mindustry_gen_Bullet_collision_mindustry_gen_Hitboxc_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_collision_mindustry_gen_Hitboxc_float_float])(ctx, (frame[0].o), (frame[3].o), (frame[1].f), (frame[2].f));
	}
label_1:;
	LINE_NUMBER(362);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$collideLine$3_mindustry_gen_Bullet_int_Array1_int_mindustry_game_Team_mindustry_entities_Damage$Collided(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$collideLine$3", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(307);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_damage), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i <= 0) goto label_2;
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))) >= (frame[1].i)) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[4].o)))->F_target;
	frame[7].o = sp[0].o;
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_gen_Unit)) == 0) goto label_4;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[7].o)));
	LINE_NUMBER(309);
	((func_mindustry_gen_Unit_collision_mindustry_gen_Hitboxc_float_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Unit_collision_mindustry_gen_Hitboxc_float_float])(ctx, (frame[5].o), (frame[0].o), ((jfloat)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[4].o)))->F_y));
	LINE_NUMBER(310);
	((func_mindustry_gen_Bullet_collision_mindustry_gen_Hitboxc_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_collision_mindustry_gen_Hitboxc_float_float])(ctx, (frame[0].o), (frame[5].o), ((jfloat)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[4].o)))->F_y));
	LINE_NUMBER(311);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[4].o)))->F_target;
	frame[7].o = sp[0].o;
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_gen_Building)) == 0) goto label_1;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[7].o)));
	LINE_NUMBER(313);
	frame[7].f = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_health);
	LINE_NUMBER(315);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_team;
	if (sp[0].o == (frame[3].o)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean])(ctx, (frame[6].o), (frame[0].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(316);
	jint temp0 = (jint)((func_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean])(ctx, (frame[6].o), (frame[0].o));
	LINE_NUMBER(317);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float])(ctx, sp[0].o, (frame[0].o), ((jfloat)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[4].o)))->F_y));
	LINE_NUMBER(318);
	sp[0].o = frame[2].o;
	jint temp1 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp1)) + (jint(1)));
	}
label_11:;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[6].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean])(ctx, sp[0].o, (frame[0].o), (frame[6].o), ((jfloat)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[4].o)))->F_y), (frame[7].f), (jint(0)));
	}
label_1:;
	LINE_NUMBER(327);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_Damage_lambda$collideLine$2_mindustry_gen_Bullet_mindustry_entities_Damage$Collided_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$collideLine$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(305);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_dst2_float_float_R_float])(ctx, (frame[0].o), ((jfloat)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_entities_Damage$Collided *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$collideLine$1_mindustry_gen_Bullet_float_float_float_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$collideLine$1", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(293);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesAir;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesGround));
	if (temp1 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_hittable_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = frame[6].o;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_hitrect;
	((func_mindustry_gen_Unit_hitbox_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hitbox_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(296);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_hitrect;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((frame[5].f) * (jfloat(2))));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_raycastRect_float_float_float_float_arc_math_geom_Rect_R_arc_math_geom_Vec2(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(298);
	if ((frame[7].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(299);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_collided;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_collidePool;
	sp[1].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_entities_Damage$Collided, sp[1].o)))->vtable)[VTABLE_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided])(ctx, (checkCast(ctx, &class_mindustry_entities_Damage$Collided, sp[1].o)), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_y), (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(302);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Damage_lambda$collideLine$0_mindustry_gen_Bullet_mindustry_game_Team_boolean_int_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2, jint param3, jint param4) {
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$collideLine$0", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(267);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(268);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean])(ctx, (frame[5].o), (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean])(ctx, (frame[0].o), (frame[5].o), (jfloat(((frame[3].i) * (8)))), (jfloat(((frame[4].i) * (8)))));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_team;
	if (sp[0].o == (frame[1].o)) goto label_3;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = frame[0].o;
	LINE_NUMBER(269);
	jint temp0 = (jint)((func_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[5].o));
	if (temp0 == 0) goto label_2;
	}
label_5:;
	{
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_collidedBlocks;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[5].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_6;
label_2:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(270);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(271);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_collided;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_collidePool;
	sp[1].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_entities_Damage$Collided, sp[1].o)))->vtable)[VTABLE_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided])(ctx, (checkCast(ctx, &class_mindustry_entities_Damage$Collided, sp[1].o)), (jfloat(((frame[3].i) * (8)))), (jfloat(((frame[4].i) * (8)))), (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(273);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_13:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_8;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(274);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_x) + (frame[3].i)), (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_y) + (frame[4].i)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(275);
	if ((frame[11].o) == nullptr) goto label_16;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_17;
	{
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_seg1;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_seg2;
	sp[2].o = frame[11].o;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_r1;
	sp[2].o = (jobject)((func_mindustry_world_Tile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[2].o, sp[3].o);
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectSegmentRectangle_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Rect_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[11].o)))->F_build;
	frame[12].o = sp[0].o;
	LINE_NUMBER(277);
	if ((frame[12].o) == nullptr) goto label_16;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean])(ctx, (frame[0].o), (frame[12].o), (jfloat(((frame[3].i) * (8)))), (jfloat(((frame[4].i) * (8)))));
	if (temp0 == 0) goto label_16;
	}
	{
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_collidedBlocks;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[12].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_16;
	}
	{
	LINE_NUMBER(278);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_collided;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_collidePool;
	sp[1].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_entities_Damage$Collided, sp[1].o)))->vtable)[VTABLE_mindustry_entities_Damage$Collided_set_float_float_mindustry_gen_Teamc_R_mindustry_entities_Damage$Collided])(ctx, (checkCast(ctx, &class_mindustry_entities_Damage$Collided, sp[1].o)), (jfloat((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_x) + ((frame[3].i) * (8))))), (jfloat(((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_y) + (frame[4].i)) * (8)))), (frame[12].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(273);
	INST_IINC(9, 1);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$findPierceLength$1_mindustry_gen_Bullet_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$findPierceLength$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(207);
	sp[0].o = frame[1].o;
	clinit_mindustry_entities_Damage(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Damage_hitrect;
	((func_mindustry_gen_Unit_hitbox_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hitbox_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(209);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesAir;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesGround));
	if (temp1 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_hittable_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp4 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_vec;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_hitrect;
	jint temp6 = (jint)SM_arc_math_geom_Intersector_intersectSegmentRectangle_float_float_float_float_arc_math_geom_Rect_R_boolean(ctx, temp0, temp1, temp3, temp5, sp[0].o);
	if (temp6 == 0) goto label_2;
	}
	{
	LINE_NUMBER(210);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_distances;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_dst_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[0].o));
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, temp0);
	}
label_2:;
	LINE_NUMBER(212);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Damage_lambda$findPierceLength$0_mindustry_gen_Bullet_boolean_int_int_R_boolean(jcontext ctx, jobject param0, jbool param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$findPierceLength$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(191);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(193);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean])(ctx, (frame[4].o), (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean])(ctx, (frame[0].o), (frame[4].o), (jfloat(((frame[2].i) * (8)))), (jfloat(((frame[3].i) * (8)))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(194);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_distances;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_dst_arc_math_geom_Position_R_float])(ctx, (frame[0].o), (frame[4].o));
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(196);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_absorbLasers_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_absorbLasers_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(197);
	clinit_mindustry_entities_Damage(ctx);
	jfloat temp0 = (jfloat)SF_mindustry_entities_Damage_maxDst;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_dst_arc_math_geom_Position_R_float])(ctx, (frame[0].o), (frame[4].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_maxDst = temp2;
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Damage_lambda$findLaserLength$0_mindustry_gen_Bullet_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$findLaserLength$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_furthest = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_furthest;
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_furthest;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_furthest;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_absorbLasers_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_absorbLasers_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
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

jbool SM_mindustry_entities_Damage_lambda$findAbsorber$0_mindustry_game_Team_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$findAbsorber$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(150);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_tmpBuilding = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpBuilding;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	if (sp[0].o == (frame[0].o)) goto label_1;
	}
	{
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_tmpBuilding;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_absorbLasers) == 0) goto label_1;
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

void SM_mindustry_entities_Damage_lambda$dynamicExplosion$2_mindustry_game_Team_float_float_float_float_float_int_int(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jint param6, jint param7) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$dynamicExplosion$2", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(112);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = frame[0].o;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_shield;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(113);
	if ((frame[8].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Boolf_3);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[1].f);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[4].f) + (frame[5].f)), (jfloat(0)), (jfloat(50.0f)));
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean(ctx, sp[0].o, temp0, temp1, (temp2 * (((jfloat((frame[6].i))) + (jfloat(1))) / (jfloat((frame[7].i))))), (frame[3].f), (jint(0)));
	}
label_5:;
	{
	LINE_NUMBER(117);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_blockExplosionSmoke;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[4].f));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = frame[2].f;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[4].f));
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, temp2, (temp3 + temp4));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Damage_lambda$dynamicExplosion$3_float_float_float_mindustry_gen_Building_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$dynamicExplosion$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(113);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_ExplosionShield)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_ExplosionShield, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_ExplosionShield_absorbExplosion_float_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ExplosionShield, INDEX_mindustry_world_blocks_ExplosionShield_absorbExplosion_float_float_float_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[0].f), (frame[1].f), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$dynamicExplosion$1_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$dynamicExplosion$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(102);
	clinit_mindustry_content_Bullets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Bullets_fireball;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(360.0f)));
	clinit_mindustry_content_Bullets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Bullets_fireball;
	SM_mindustry_gen_Call_createBullet_mindustry_entities_bullet_BulletType_mindustry_game_Team_float_float_float_float_float_float(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[2].o))->F_damage), (jfloat(1)), (jfloat(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$dynamicExplosion$0_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jint param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$dynamicExplosion$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(97);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_derelict;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_power;
	jfloat temp0 = jfloat(3.0f);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (frame[0].f), (jfloat(0.35f)));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = frame[1].f;
	jfloat temp4 = frame[2].f;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(360.0f)));
	jint temp6 = frame[3].i;
	jint temp7 = (jint)SM_arc_math_Mathf_range_int_R_int(ctx, (jint(2)));
	SM_mindustry_entities_Lightning_create_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(ctx, sp[0].o, sp[1].o, temp2, temp3, temp4, temp5, (temp6 + temp7));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$applySuppression$2_mindustry_gen_Building_arc_graphics_Color_arc_math_geom_Position(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$applySuppression$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(67);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_regenSuppressSeek;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp2, (temp3 + temp4), (jfloat(0)), (frame[1].o), (frame[2].o));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Damage_lambda$applySuppression$1_float_arc_graphics_Color_mindustry_gen_Building(jcontext ctx, jfloat param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$applySuppression$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(49);
	frame[3].f = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_healSuppressionTime);
	LINE_NUMBER(50);
	((func_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color])(ctx, (frame[2].o), ((frame[0].f) + (jfloat(1))), (frame[1].o));
	LINE_NUMBER(53);
	jint temp0 = (jint)((func_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean])(ctx, (frame[2].o), (jfloat(720.0f)));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_suppressable) == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(56);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_4;
	}
	{
	if ((floatCompare(((frame[3].f) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time)), ((frame[0].f) / (jfloat(2))), 1)) > 0) goto label_4;
	}
	{
	LINE_NUMBER(57);
	clinit_mindustry_entities_Damage(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Damage_builds;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Damage_lambda$applySuppression$0_mindustry_game_Team_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:lambda$applySuppression$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o == (frame[0].o)) goto label_1;
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

void clinit_mindustry_entities_Damage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Damage:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Damage(ctx);
	{
	LINE_NUMBER(26);
	clinit_mindustry_game_EventType$UnitDamageEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitDamageEvent);
	init_mindustry_game_EventType$UnitDamageEvent(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_bulletDamageEvent = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_rect = sp[0].o;
	LINE_NUMBER(28);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_hitrect = sp[0].o;
	LINE_NUMBER(29);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_vec = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_seg1 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_seg2 = sp[0].o;
	LINE_NUMBER(30);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_collidedBlocks = sp[0].o;
	LINE_NUMBER(31);
	clinit_arc_struct_IntFloatMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap);
	init_arc_struct_IntFloatMap(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_damages = sp[0].o;
	LINE_NUMBER(32);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_collided = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = ((jobject) &class_mindustry_entities_Damage$Collided);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Damage_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_entities_Damage_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_entities_Damage_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_collidePool = sp[0].o;
	LINE_NUMBER(34);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_builds = sp[0].o;
	LINE_NUMBER(35);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[0].o);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_distances = sp[0].o;
	LINE_NUMBER(38);
	clinit_mindustry_entities_Damage(ctx);
	SF_mindustry_entities_Damage_maxDst = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_Damage;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method findAbsorber
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_entities_Damage[] {
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

static jclass innerClasses[] {
	&class_mindustry_entities_Damage$Collided,
};

static FieldMetadata fields[] {
	{ "bulletDamageEvent", &class_mindustry_game_EventType$UnitDamageEvent, (intptr_t) &SF_mindustry_entities_Damage_bulletDamageEvent, "Lmindustry/game/EventType$UnitDamageEvent;", 26 },
	{ "rect", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_entities_Damage_rect, "Larc/math/geom/Rect;", 26 },
	{ "hitrect", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_entities_Damage_hitrect, "Larc/math/geom/Rect;", 26 },
	{ "vec", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_entities_Damage_vec, "Larc/math/geom/Vec2;", 26 },
	{ "seg1", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_entities_Damage_seg1, "Larc/math/geom/Vec2;", 26 },
	{ "seg2", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_entities_Damage_seg2, "Larc/math/geom/Vec2;", 26 },
	{ "collidedBlocks", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_entities_Damage_collidedBlocks, "Larc/struct/IntSet;", 26 },
	{ "damages", &class_arc_struct_IntFloatMap, (intptr_t) &SF_mindustry_entities_Damage_damages, "Larc/struct/IntFloatMap;", 26 },
	{ "collided", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_entities_Damage_collided, "Larc/struct/Seq;", 26 },
	{ "collidePool", &class_arc_util_pooling_Pool, (intptr_t) &SF_mindustry_entities_Damage_collidePool, "Larc/util/pooling/Pool;", 26 },
	{ "builds", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_entities_Damage_builds, "Larc/struct/Seq;", 26 },
	{ "distances", &class_arc_struct_FloatSeq, (intptr_t) &SF_mindustry_entities_Damage_distances, "Larc/struct/FloatSeq;", 26 },
	{ "furthest", &class_mindustry_world_Tile, (intptr_t) &SF_mindustry_entities_Damage_furthest, "Lmindustry/world/Tile;", 10 },
	{ "maxDst", &class_float, (intptr_t) &SF_mindustry_entities_Damage_maxDst, "F", 10 },
	{ "tmpBuilding", &class_mindustry_gen_Building, (intptr_t) &SF_mindustry_entities_Damage_tmpBuilding, "Lmindustry/gen/Building;", 10 },
	{ "tmpUnit", &class_mindustry_gen_Unit, (intptr_t) &SF_mindustry_entities_Damage_tmpUnit, "Lmindustry/gen/Unit;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_Damage, 0, "()V", 1 },
	{ "applySuppression", (intptr_t) SM_mindustry_entities_Damage_applySuppression_mindustry_game_Team_float_float_float_float_float_float_arc_math_geom_Position, 0, "(Lmindustry/game/Team;FFFFFFLarc/math/geom/Position;)V", 9 },
	{ "applySuppression", (intptr_t) SM_mindustry_entities_Damage_applySuppression_mindustry_game_Team_float_float_float_float_float_float_arc_math_geom_Position_arc_graphics_Color, 0, "(Lmindustry/game/Team;FFFFFFLarc/math/geom/Position;Larc/graphics/Color;)V", 9 },
	{ "dynamicExplosion", (intptr_t) SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean, 0, "(FFFFFFZ)V", 9 },
	{ "dynamicExplosion", (intptr_t) SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_mindustry_entities_Effect, 0, "(FFFFFFZLmindustry/entities/Effect;)V", 9 },
	{ "dynamicExplosion", (intptr_t) SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_mindustry_entities_Effect_float, 0, "(FFFFFFZLmindustry/entities/Effect;F)V", 9 },
	{ "dynamicExplosion", (intptr_t) SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team, 0, "(FFFFFFZZLmindustry/game/Team;)V", 9 },
	{ "dynamicExplosion", (intptr_t) SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect, 0, "(FFFFFFZZLmindustry/game/Team;Lmindustry/entities/Effect;)V", 9 },
	{ "dynamicExplosion", (intptr_t) SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect_float, 0, "(FFFFFFZZLmindustry/game/Team;Lmindustry/entities/Effect;F)V", 9 },
	{ "createIncend", (intptr_t) SM_mindustry_entities_Damage_createIncend_float_float_float_int, 0, "(FFFI)V", 9 },
	{ "findAbsorber", (intptr_t) SM_mindustry_entities_Damage_findAbsorber_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Building, 0, "(Lmindustry/game/Team;FFFF)Lmindustry/gen/Building;", 9 },
	{ "findLength", (intptr_t) SM_mindustry_entities_Damage_findLength_mindustry_gen_Bullet_float_boolean_int_R_float, 0, "(Lmindustry/gen/Bullet;FZI)F", 9 },
	{ "findLaserLength", (intptr_t) SM_mindustry_entities_Damage_findLaserLength_mindustry_gen_Bullet_float_R_float, 0, "(Lmindustry/gen/Bullet;F)F", 9 },
	{ "findPierceLength", (intptr_t) SM_mindustry_entities_Damage_findPierceLength_mindustry_gen_Bullet_int_float_R_float, 0, "(Lmindustry/gen/Bullet;IF)F", 9 },
	{ "findPierceLength", (intptr_t) SM_mindustry_entities_Damage_findPierceLength_mindustry_gen_Bullet_int_boolean_float_R_float, 0, "(Lmindustry/gen/Bullet;IZF)F", 9 },
	{ "collideLaser", (intptr_t) SM_mindustry_entities_Damage_collideLaser_mindustry_gen_Bullet_float_boolean_boolean_int_R_float, 0, "(Lmindustry/gen/Bullet;FZZI)F", 9 },
	{ "collideLine", (intptr_t) SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float, 0, "(Lmindustry/gen/Bullet;Lmindustry/game/Team;FFFF)V", 9 },
	{ "collideLine", (intptr_t) SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean, 0, "(Lmindustry/gen/Bullet;Lmindustry/game/Team;FFFFZ)V", 9 },
	{ "collideLine", (intptr_t) SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean_boolean, 0, "(Lmindustry/gen/Bullet;Lmindustry/game/Team;FFFFZZ)V", 9 },
	{ "collideLine", (intptr_t) SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean_boolean_int, 0, "(Lmindustry/gen/Bullet;Lmindustry/game/Team;FFFFZZI)V", 9 },
	{ "collidePoint", (intptr_t) SM_mindustry_entities_Damage_collidePoint_mindustry_gen_Bullet_mindustry_game_Team_mindustry_entities_Effect_float_float, 0, "(Lmindustry/gen/Bullet;Lmindustry/game/Team;Lmindustry/entities/Effect;FF)V", 9 },
	{ "linecast", (intptr_t) SM_mindustry_entities_Damage_linecast_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Healthc, 0, "(Lmindustry/gen/Bullet;FFFF)Lmindustry/gen/Healthc;", 9 },
	{ "damageUnits", (intptr_t) SM_mindustry_entities_Damage_damageUnits_mindustry_game_Team_float_float_float_float_arc_func_Boolf_arc_func_Cons, 0, "(Lmindustry/game/Team;FFFFLarc/func/Boolf;Larc/func/Cons;)V", 9 },
	{ "damage", (intptr_t) SM_mindustry_entities_Damage_damage_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "damage", (intptr_t) SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float, 0, "(Lmindustry/game/Team;FFFF)V", 9 },
	{ "damage", (intptr_t) SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean, 0, "(Lmindustry/game/Team;FFFFZZ)V", 9 },
	{ "status", (intptr_t) SM_mindustry_entities_Damage_status_mindustry_game_Team_float_float_float_mindustry_type_StatusEffect_float_boolean_boolean, 0, "(Lmindustry/game/Team;FFFLmindustry/type/StatusEffect;FZZ)V", 9 },
	{ "status", (intptr_t) SM_mindustry_entities_Damage_status_mindustry_game_Team_float_float_float_mindustry_type_StatusEffect_float_boolean_boolean_float, 0, "(Lmindustry/game/Team;FFFLmindustry/type/StatusEffect;FZZF)V", 9 },
	{ "damage", (intptr_t) SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean, 0, "(Lmindustry/game/Team;FFFFZ)V", 9 },
	{ "damage", (intptr_t) SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean, 0, "(Lmindustry/game/Team;FFFFZZZ)V", 9 },
	{ "damage", (intptr_t) SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean_mindustry_gen_Bullet, 0, "(Lmindustry/game/Team;FFFFZZZZLmindustry/gen/Bullet;)V", 9 },
	{ "damage", (intptr_t) SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean_mindustry_gen_Bullet_float, 0, "(Lmindustry/game/Team;FFFFZZZZLmindustry/gen/Bullet;F)V", 9 },
	{ "tileDamage", (intptr_t) SM_mindustry_entities_Damage_tileDamage_mindustry_game_Team_int_int_float_float, 0, "(Lmindustry/game/Team;IIFF)V", 9 },
	{ "tileDamage", (intptr_t) SM_mindustry_entities_Damage_tileDamage_mindustry_game_Team_int_int_float_float_mindustry_gen_Bullet, 0, "(Lmindustry/game/Team;IIFFLmindustry/gen/Bullet;)V", 9 },
	{ "completeDamage", (intptr_t) SM_mindustry_entities_Damage_completeDamage_mindustry_game_Team_float_float_float_float, 0, "(Lmindustry/game/Team;FFFF)V", 10 },
	{ "calculateDamage", (intptr_t) SM_mindustry_entities_Damage_calculateDamage_float_float_float_R_float, 0, "(FFF)F", 10 },
	{ "applyArmor", (intptr_t) SM_mindustry_entities_Damage_applyArmor_float_float_R_float, 0, "(FF)F", 9 },
	{ "lambda$tileDamage$0", (intptr_t) SM_mindustry_entities_Damage_lambda$tileDamage$0_int_int_mindustry_game_Team_float_float_mindustry_gen_Bullet, 0, "(IILmindustry/game/Team;FFLmindustry/gen/Bullet;)V", 4106 },
	{ "lambda$damage$0", (intptr_t) SM_mindustry_entities_Damage_lambda$damage$0_mindustry_game_Team_boolean_boolean_float_float_float_boolean_float_float_mindustry_gen_Bullet_boolean_mindustry_gen_Unit, 0, "(Lmindustry/game/Team;ZZFFFZFFLmindustry/gen/Bullet;ZLmindustry/gen/Unit;)V", 4106 },
	{ "lambda$status$0", (intptr_t) SM_mindustry_entities_Damage_lambda$status$0_mindustry_game_Team_boolean_boolean_float_float_float_float_mindustry_type_StatusEffect_float_mindustry_gen_Unit, 0, "(Lmindustry/game/Team;ZZFFFFLmindustry/type/StatusEffect;FLmindustry/gen/Unit;)V", 4106 },
	{ "lambda$damageUnits$0", (intptr_t) SM_mindustry_entities_Damage_lambda$damageUnits$0_arc_func_Boolf_float_arc_func_Cons_mindustry_gen_Unit, 0, "(Larc/func/Boolf;FLarc/func/Cons;Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$linecast$1", (intptr_t) SM_mindustry_entities_Damage_lambda$linecast$1_float_float_mindustry_gen_Bullet_float_float_float_mindustry_gen_Unit, 0, "(FFLmindustry/gen/Bullet;FFFLmindustry/gen/Unit;)V", 4106 },
	{ "lambda$linecast$0", (intptr_t) SM_mindustry_entities_Damage_lambda$linecast$0_mindustry_gen_Bullet_int_int_R_boolean, 0, "(Lmindustry/gen/Bullet;II)Z", 4106 },
	{ "lambda$collidePoint$0", (intptr_t) SM_mindustry_entities_Damage_lambda$collidePoint$0_mindustry_gen_Bullet_float_float_mindustry_gen_Unit, 0, "(Lmindustry/gen/Bullet;FFLmindustry/gen/Unit;)V", 4106 },
	{ "lambda$collideLine$3", (intptr_t) SM_mindustry_entities_Damage_lambda$collideLine$3_mindustry_gen_Bullet_int_Array1_int_mindustry_game_Team_mindustry_entities_Damage$Collided, 0, "(Lmindustry/gen/Bullet;I[ILmindustry/game/Team;Lmindustry/entities/Damage$Collided;)V", 4106 },
	{ "lambda$collideLine$2", (intptr_t) SM_mindustry_entities_Damage_lambda$collideLine$2_mindustry_gen_Bullet_mindustry_entities_Damage$Collided_R_float, 0, "(Lmindustry/gen/Bullet;Lmindustry/entities/Damage$Collided;)F", 4106 },
	{ "lambda$collideLine$1", (intptr_t) SM_mindustry_entities_Damage_lambda$collideLine$1_mindustry_gen_Bullet_float_float_float_float_float_mindustry_gen_Unit, 0, "(Lmindustry/gen/Bullet;FFFFFLmindustry/gen/Unit;)V", 4106 },
	{ "lambda$collideLine$0", (intptr_t) SM_mindustry_entities_Damage_lambda$collideLine$0_mindustry_gen_Bullet_mindustry_game_Team_boolean_int_int_R_boolean, 0, "(Lmindustry/gen/Bullet;Lmindustry/game/Team;ZII)Z", 4106 },
	{ "lambda$findPierceLength$1", (intptr_t) SM_mindustry_entities_Damage_lambda$findPierceLength$1_mindustry_gen_Bullet_mindustry_gen_Unit, 0, "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$findPierceLength$0", (intptr_t) SM_mindustry_entities_Damage_lambda$findPierceLength$0_mindustry_gen_Bullet_boolean_int_int_R_boolean, 0, "(Lmindustry/gen/Bullet;ZII)Z", 4106 },
	{ "lambda$findLaserLength$0", (intptr_t) SM_mindustry_entities_Damage_lambda$findLaserLength$0_mindustry_gen_Bullet_int_int_R_boolean, 0, "(Lmindustry/gen/Bullet;II)Z", 4106 },
	{ "lambda$findAbsorber$0", (intptr_t) SM_mindustry_entities_Damage_lambda$findAbsorber$0_mindustry_game_Team_int_int_R_boolean, 0, "(Lmindustry/game/Team;II)Z", 4106 },
	{ "lambda$dynamicExplosion$2", (intptr_t) SM_mindustry_entities_Damage_lambda$dynamicExplosion$2_mindustry_game_Team_float_float_float_float_float_int_int, 0, "(Lmindustry/game/Team;FFFFFII)V", 4106 },
	{ "lambda$dynamicExplosion$3", (intptr_t) SM_mindustry_entities_Damage_lambda$dynamicExplosion$3_float_float_float_mindustry_gen_Building_R_boolean, 0, "(FFFLmindustry/gen/Building;)Z", 4106 },
	{ "lambda$dynamicExplosion$1", (intptr_t) SM_mindustry_entities_Damage_lambda$dynamicExplosion$1_float_float, 0, "(FF)V", 4106 },
	{ "lambda$dynamicExplosion$0", (intptr_t) SM_mindustry_entities_Damage_lambda$dynamicExplosion$0_float_float_float_int, 0, "(FFFI)V", 4106 },
	{ "lambda$applySuppression$2", (intptr_t) SM_mindustry_entities_Damage_lambda$applySuppression$2_mindustry_gen_Building_arc_graphics_Color_arc_math_geom_Position, 0, "(Lmindustry/gen/Building;Larc/graphics/Color;Larc/math/geom/Position;)V", 4106 },
	{ "lambda$applySuppression$1", (intptr_t) SM_mindustry_entities_Damage_lambda$applySuppression$1_float_arc_graphics_Color_mindustry_gen_Building, 0, "(FLarc/graphics/Color;Lmindustry/gen/Building;)V", 4106 },
	{ "lambda$applySuppression$0", (intptr_t) SM_mindustry_entities_Damage_lambda$applySuppression$0_mindustry_game_Team_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/game/Team;Lmindustry/gen/Building;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_Damage, 0, "()V", 8 },
};

Class class_mindustry_entities_Damage{
		.nativeName = (intptr_t) "mindustry/entities/Damage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Damage),
		.classVtable = (intptr_t) vtable_mindustry_entities_Damage,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Damage,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_Damage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 60,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Damage = registerClass(&class_mindustry_entities_Damage);

}
