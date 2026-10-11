#include "mindustry/entities/bullet/MassDriverBolt.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/Angles.h"
#include "mindustry/game/Rules.h"
#include "mindustry/type/Item.h"
#include "mindustry/entities/Damage.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "mindustry/world/blocks/distribution/MassDriver_MassDriverBuild.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/bullet/BasicBulletType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/entities/bullet/MassDriverBolt.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/math/geom/Position.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/blocks/distribution/MassDriver_DriverBulletData.h"

extern "C" {


void mark_mindustry_entities_bullet_MassDriverBolt(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_bullet_BasicBulletType(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_bullet_MassDriverBolt *) object;
}

void clinit_mindustry_entities_bullet_MassDriverBolt(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BasicBulletType(ctx);
}

void init_mindustry_entities_bullet_MassDriverBolt(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/MassDriverBolt:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_MassDriverBolt(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_mindustry_entities_bullet_BasicBulletType_float_float(ctx, (frame[0].o), (jfloat(1)), (jfloat(75.0f)));
	LINE_NUMBER(17);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesTiles = (jint(0));
	LINE_NUMBER(18);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(1));
	LINE_NUMBER(19);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(11.0f));
	LINE_NUMBER(20);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_height = (jfloat(13.0f));
	LINE_NUMBER(21);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_shrinkY = (jfloat(0));
	LINE_NUMBER(22);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_sprite = (jref) (((jobject) createStringLiteral(ctx, u8"shell"_j)));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_smeltsmoke;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnEffect = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitBulletBig;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_MassDriverBolt_update_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/MassDriverBolt:update", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	M_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_mindustry_gen_Bullet_data_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_data_R_java_lang_Object])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_distribution_MassDriver$DriverBulletData)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_MassDriver$DriverBulletData, (frame[3].o)));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(33);
	((func_mindustry_entities_bullet_MassDriverBolt_hit_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_MassDriverBolt_hit_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(37);
	frame[3].f = (jfloat(7.0f));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_to;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_from;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_to;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_dst_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	frame[4].f = temp0;
	LINE_NUMBER(45);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_from;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_dst_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp1;
	LINE_NUMBER(46);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_to;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_dst_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	frame[6].f = temp2;
	LINE_NUMBER(48);
	frame[7].i = (jint(0));
	LINE_NUMBER(51);
	if ((floatCompare((frame[5].f), (frame[4].f), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_to;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	frame[8].f = temp0;
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_to;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_from;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	frame[9].f = temp1;
	LINE_NUMBER(56);
	jint temp2 = (jint)SM_arc_math_Angles_near_float_float_float_R_boolean(ctx, (frame[8].f), (frame[9].f), (jfloat(2)));
	if (temp2 == 0) goto label_13;
	}
	{
	LINE_NUMBER(57);
	frame[7].i = (jint(1));
	LINE_NUMBER(59);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_to;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[9].f), (frame[3].f));
	jfloat temp2 = temp0 + temp1;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_to;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[9].f), (frame[3].f));
	((func_mindustry_gen_Bullet_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_set_float_float])(ctx, sp[0].o, temp2, (temp3 + temp4));
	}
label_13:;
	{
	LINE_NUMBER(64);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((frame[5].f) + (frame[6].f)) - (frame[4].f)));
	if ((floatCompare(temp0, (jfloat(4.0f)), 1)) >= 0) goto label_19;
	}
	{
	if ((floatCompare((frame[6].f), (frame[3].f), 1)) > 0) goto label_19;
	}
	{
	LINE_NUMBER(65);
	frame[7].i = (jint(1));
	}
label_19:;
	{
	LINE_NUMBER(68);
	if ((frame[7].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_to;
	((func_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_handlePayload_mindustry_gen_Bullet_mindustry_world_blocks_distribution_MassDriver$DriverBulletData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild_handlePayload_mindustry_gen_Bullet_mindustry_world_blocks_distribution_MassDriver$DriverBulletData])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
label_21:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_MassDriverBolt_despawned_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/MassDriverBolt:despawned", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	M_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_mindustry_gen_Bullet_data_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_data_R_java_lang_Object])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_distribution_MassDriver$DriverBulletData)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_MassDriver$DriverBulletData, (frame[3].o)));
	goto label_4;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(79);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(80);
	jint temp0 = jint(0);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[2].o)))->F_items;
	jint temp1 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, temp0, ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))));
	frame[4].i = temp1;
	LINE_NUMBER(81);
	if ((frame[4].i) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(82);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(100.0f)));
	frame[5].f = (temp0 + temp1);
	LINE_NUMBER(83);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_dropItem;
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp3 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp4 = frame[5].f;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[2].o, (frame[3].i));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp2, temp3, temp4, sp[1].o, sp[2].o);
	}
label_9:;
	{
	LINE_NUMBER(79);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_MassDriverBolt_hit_mindustry_gen_Bullet_float_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/MassDriverBolt:hit", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(90);
	M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i));
	LINE_NUMBER(91);
	((func_mindustry_entities_bullet_MassDriverBolt_despawned_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_MassDriverBolt_despawned_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_mindustry_gen_Bullet_data_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_data_R_java_lang_Object])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_distribution_MassDriver$DriverBulletData)) == 0) goto label_3;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_MassDriver$DriverBulletData, (frame[6].o)));
	LINE_NUMBER(93);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(94);
	frame[7].f = (jfloat(0));
	LINE_NUMBER(95);
	frame[8].f = (jfloat(0));
	LINE_NUMBER(96);
	frame[9].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[9].i;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[5].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(97);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[0].o, (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(98);
	jfloat temp0 = frame[6].f;
	jfloat temp1 = (jfloat)((mindustry_type_Item *) NULL_CHECK((frame[10].o)))->F_explosiveness;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[5].o)))->F_items;
	frame[6].f = (temp0 + (temp1 * (jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[9].i)))))));
	LINE_NUMBER(99);
	jfloat temp2 = frame[7].f;
	jfloat temp3 = (jfloat)((mindustry_type_Item *) NULL_CHECK((frame[10].o)))->F_flammability;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[5].o)))->F_items;
	frame[7].f = (temp2 + (temp3 * (jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[9].i)))))));
	LINE_NUMBER(100);
	jfloat temp4 = frame[8].f;
	jfloat temp5 = (jfloat)((mindustry_type_Item *) NULL_CHECK((frame[10].o)))->F_charge;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_MassDriver$DriverBulletData *) NULL_CHECK((frame[5].o)))->F_items;
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[9].i))))), (jfloat(1.1f)));
	frame[8].f = (temp4 + ((temp5 * temp6) * (jfloat(25.0f))));
	LINE_NUMBER(96);
	INST_IINC(9, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(102);
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (frame[7].f) / (jfloat(10.0f));
	jfloat temp3 = (frame[6].f) / (jfloat(10.0f));
	jfloat temp4 = frame[8].f;
	jfloat temp5 = jfloat(1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean(ctx, temp0, temp1, temp2, temp3, temp4, temp5, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_damageExplosions));
	}
label_3:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_bullet_MassDriverBolt[] {
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
	(void *) M_mindustry_entities_bullet_BasicBulletType_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_entities_bullet_BulletType_estimateDPS_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_calculateRange_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_continuousDamage_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_heals_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float,
	(void *) M_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_MassDriverBolt_hit_mindustry_gen_Bullet_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_MassDriverBolt_despawned_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BasicBulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_MassDriverBolt_update_mindustry_gen_Bullet,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_MassDriverBolt, 0, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_bullet_MassDriverBolt_update_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_MassDriverBolt_update_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "despawned", (intptr_t) M_mindustry_entities_bullet_MassDriverBolt_despawned_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_MassDriverBolt_despawned_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "hit", (intptr_t) M_mindustry_entities_bullet_MassDriverBolt_hit_mindustry_gen_Bullet_float_float_boolean, VTABLE_mindustry_entities_bullet_MassDriverBolt_hit_mindustry_gen_Bullet_float_float_boolean, "(Lmindustry/gen/Bullet;FFZ)V", 1 },
};

Class class_mindustry_entities_bullet_MassDriverBolt{
		.nativeName = (intptr_t) "mindustry/entities/bullet/MassDriverBolt",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BasicBulletType,
		.size = sizeof(mindustry_entities_bullet_MassDriverBolt),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_MassDriverBolt,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_MassDriverBolt,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_MassDriverBolt,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_MassDriverBolt = registerClass(&class_mindustry_entities_bullet_MassDriverBolt);

}
