#include "mindustry/entities/bullet/RailBulletType.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/entities/bullet/RailBulletType.h"
#include "mindustry/entities/Damage.h"
#include "arc/graphics/Color.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/ctype/Content.h"
#include "arc/util/Tmp.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/math/geom/Position.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_entities_bullet_RailBulletType(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_bullet_BulletType(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_bullet_RailBulletType *) object;
	if (self->F_pierceEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pierceEffect)->clazz)->markFunction)((jobject) self->F_pierceEffect, mark, depth + 1);
	if (self->F_pointEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointEffect)->clazz)->markFunction)((jobject) self->F_pointEffect, mark, depth + 1);
	if (self->F_lineEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lineEffect)->clazz)->markFunction)((jobject) self->F_lineEffect, mark, depth + 1);
	if (self->F_endEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_endEffect)->clazz)->markFunction)((jobject) self->F_endEffect, mark, depth + 1);
}

void clinit_mindustry_entities_bullet_RailBulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BulletType(ctx);
}

void init_mindustry_entities_bullet_RailBulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/RailBulletType:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_RailBulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_mindustry_entities_bullet_BulletType(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitBulletSmall;
	((mindustry_entities_bullet_RailBulletType *) NULL_CHECK(sp[0].o))->F_pierceEffect = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_RailBulletType *) NULL_CHECK(sp[0].o))->F_pointEffect = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_RailBulletType *) NULL_CHECK(sp[0].o))->F_lineEffect = (jref) sp[1].o;
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_RailBulletType *) NULL_CHECK(sp[0].o))->F_endEffect = (jref) sp[1].o;
	LINE_NUMBER(13);
	((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_length = (jfloat(100.0f));
	LINE_NUMBER(15);
	((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_pointEffectSpace = (jfloat(20.0f));
	LINE_NUMBER(18);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(0));
	LINE_NUMBER(19);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceBuilding = (jint(1));
	LINE_NUMBER(20);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierce = (jint(1));
	LINE_NUMBER(21);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_reflectable = (jint(0));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnEffect = (jref) sp[1].o;
	LINE_NUMBER(24);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collides = (jint(0));
	LINE_NUMBER(25);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_keepVelocity = (jint(0));
	LINE_NUMBER(26);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(1));
	LINE_NUMBER(27);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_delayFrags = (jint(1));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_RailBulletType_calculateRange_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/RailBulletType:calculateRange", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_length);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_RailBulletType_handlePierce_mindustry_gen_Bullet_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/RailBulletType:handlePierce", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(37);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((frame[2].f) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceDamageFactor)), (jfloat(0)));
	frame[5].f = temp0;
	LINE_NUMBER(39);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_damage), (jfloat(0)), 1)) > 0) goto label_2;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_fdata;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_dst_float_float_R_float])(ctx, (frame[1].o), (frame[3].f), (frame[4].f));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_fdata = temp2;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(44);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_damage), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_pierceEffect;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, temp2);
	}
label_5:;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_damage;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_damage), (frame[5].f));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_damage = (temp0 - temp1);
	LINE_NUMBER(52);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_damage), (jfloat(0)), 1)) > 0) goto label_8;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_fdata;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_dst_float_float_R_float])(ctx, (frame[1].o), (frame[3].f), (frame[4].f));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_fdata = temp2;
	}
label_8:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_RailBulletType_init_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/RailBulletType:init", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(61);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_fdata = ((jfloat)((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_length);
	LINE_NUMBER(62);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean_boolean_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jfloat)((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_length), (jint(0)), (jint(0)), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap));
	LINE_NUMBER(63);
	frame[2].f = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_fdata);
	LINE_NUMBER(65);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp3, (jfloat(1)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_pointEffect;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(67);
	frame[4].f = (jfloat(0));
	}
label_8:;
	{
	if ((floatCompare((frame[4].f), (frame[2].f), 1)) > 0) goto label_6;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_pointEffect;
	jfloat temp0 = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x) * (frame[4].f));
	jfloat temp1 = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y) * (frame[4].f));
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(67);
	frame[4].f = ((frame[4].f) + ((jfloat)((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_pointEffectSpace));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_collided;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(74);
	if ((frame[4].i) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_endEffect;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_endEffect;
	jfloat temp0 = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x) * (frame[2].f));
	jfloat temp1 = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y) * (frame[2].f));
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_lineEffect;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	if (sp[0].o == sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_lineEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	clinit_arc_math_geom_Vec2(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[2].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y));
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, (frame[3].o), (frame[2].f));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	}
label_16:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_bullet_RailBulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/RailBulletType:testCollision", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
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

void M_mindustry_entities_bullet_RailBulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/RailBulletType:hitTile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(90);
	((func_mindustry_entities_bullet_RailBulletType_handlePierce_mindustry_gen_Bullet_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_RailBulletType_handlePierce_mindustry_gen_Bullet_float_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[5].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_bullet_RailBulletType[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_Content_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_entities_bullet_BulletType_init,
	(void *) M_mindustry_ctype_Content_postInit,
	(void *) M_mindustry_entities_bullet_BulletType_afterPatch,
	(void *) M_mindustry_entities_bullet_BulletType_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_entities_bullet_BulletType_estimateDPS_R_float,
	(void *) M_mindustry_entities_bullet_RailBulletType_calculateRange_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_continuousDamage_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_heals_R_boolean,
	(void *) M_mindustry_entities_bullet_RailBulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_RailBulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float,
	(void *) M_mindustry_entities_bullet_RailBulletType_handlePierce_mindustry_gen_Bullet_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_RailBulletType_init_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$0_mindustry_gen_Building,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$hit$0_mindustry_gen_Bullet_float_float,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "copy", "()Lmindustry/entities/bullet/BulletType;" },
	{ "estimateDPS", "()F" },
	{ "calculateRange", "()F" },
	{ "continuousDamage", "()F" },
	{ "heals", "()Z" },
	{ "testCollision", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "hitTile", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;FFFZ)V" },
	{ "hitEntity", "(Lmindustry/gen/Bullet;Lmindustry/gen/Hitboxc;F)V" },
	{ "handlePierce", "(Lmindustry/gen/Bullet;FFF)V" },
	{ "damageMultiplier", "(Lmindustry/gen/Bullet;)F" },
	{ "hit", "(Lmindustry/gen/Bullet;)V" },
	{ "hit", "(Lmindustry/gen/Bullet;FF)V" },
	{ "hit", "(Lmindustry/gen/Bullet;FFZ)V" },
	{ "createIncend", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createPuddles", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createSplashDamage", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createFrags", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createUnits", "(Lmindustry/gen/Bullet;FF)V" },
	{ "despawned", "(Lmindustry/gen/Bullet;)V" },
	{ "removed", "(Lmindustry/gen/Bullet;)V" },
	{ "buildingDamage", "(Lmindustry/gen/Bullet;)F" },
	{ "shieldDamage", "(Lmindustry/gen/Bullet;)F" },
	{ "draw", "(Lmindustry/gen/Bullet;)V" },
	{ "drawTrail", "(Lmindustry/gen/Bullet;)V" },
	{ "drawParts", "(Lmindustry/gen/Bullet;)V" },
	{ "drawLight", "(Lmindustry/gen/Bullet;)V" },
	{ "init", "(Lmindustry/gen/Bullet;)V" },
	{ "update", "(Lmindustry/gen/Bullet;)V" },
	{ "updateBulletInterval", "(Lmindustry/gen/Bullet;)V" },
	{ "updateHoming", "(Lmindustry/gen/Bullet;)V" },
	{ "updateWeaving", "(Lmindustry/gen/Bullet;)V" },
	{ "updateTrailEffects", "(Lmindustry/gen/Bullet;)V" },
	{ "updateTrail", "(Lmindustry/gen/Bullet;)V" },
	{ "create", "(Lmindustry/gen/Teamc;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFLmindustry/entities/Mover;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FFLmindustry/gen/Teamc;)Lmindustry/gen/Bullet;" },
	{ "createNet", "(Lmindustry/game/Team;FFFFFF)V" },
	{ "lambda$updateHoming$3", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "lambda$updateHoming$2", "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z" },
	{ "lambda$updateHoming$1", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "lambda$updateHoming$0", "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z" },
	{ "lambda$createSplashDamage$0", "(Lmindustry/gen/Building;)V" },
	{ "lambda$hit$0", "(Lmindustry/gen/Bullet;FF)V" },
};

static FieldMetadata fields[] {
	{ "pierceEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_RailBulletType, F_pierceEffect), "Lmindustry/entities/Effect;", 1 },
	{ "pointEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_RailBulletType, F_pointEffect), "Lmindustry/entities/Effect;", 1 },
	{ "lineEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_RailBulletType, F_lineEffect), "Lmindustry/entities/Effect;", 1 },
	{ "endEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_RailBulletType, F_endEffect), "Lmindustry/entities/Effect;", 1 },
	{ "length", &class_float, offsetof(mindustry_entities_bullet_RailBulletType, F_length), "F", 1 },
	{ "pointEffectSpace", &class_float, offsetof(mindustry_entities_bullet_RailBulletType, F_pointEffectSpace), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_RailBulletType, 0, "()V", 1 },
	{ "calculateRange", (intptr_t) M_mindustry_entities_bullet_RailBulletType_calculateRange_R_float, VTABLE_mindustry_entities_bullet_RailBulletType_calculateRange_R_float, "()F", 4 },
	{ "handlePierce", (intptr_t) M_mindustry_entities_bullet_RailBulletType_handlePierce_mindustry_gen_Bullet_float_float_float, VTABLE_mindustry_entities_bullet_RailBulletType_handlePierce_mindustry_gen_Bullet_float_float_float, "(Lmindustry/gen/Bullet;FFF)V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_bullet_RailBulletType_init_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_RailBulletType_init_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "testCollision", (intptr_t) M_mindustry_entities_bullet_RailBulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean, VTABLE_mindustry_entities_bullet_RailBulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z", 1 },
	{ "hitTile", (intptr_t) M_mindustry_entities_bullet_RailBulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean, VTABLE_mindustry_entities_bullet_RailBulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean, "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;FFFZ)V", 1 },
};

Class class_mindustry_entities_bullet_RailBulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/RailBulletType",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BulletType,
		.size = sizeof(mindustry_entities_bullet_RailBulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_RailBulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_RailBulletType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_RailBulletType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_RailBulletType = registerClass(&class_mindustry_entities_bullet_RailBulletType);

}
