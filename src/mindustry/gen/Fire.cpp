#include "mindustry/gen/Fire.h"
#include "arc/func/Prov.h"
#include "java/nio/FloatBuffer.h"
#include "mindustry/content/Bullets.h"
#include "mindustry/world/meta/Attribute.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Puddle.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/gen/Entityc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Fire_invoke_arc_func_Prov_1.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Fire.h"
#include "mindustry/gen/Sounds.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Timedc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "arc/util/io/Writes.h"
#include "mindustry/gen/Fire_invoke_arc_func_Cons_1.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/gen/Fire_invoke_arc_func_Boolf_1.h"
#include "mindustry/gen/Groups.h"
#include "java/lang/Float.h"
#include "arc/math/Scaled.h"
#include "mindustry/entities/Puddles.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/String.h"
#include "mindustry/gen/Firec.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/core/Control.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/world/blocks/Attributes.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/entities/Fires.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Player.h"
#include "arc/audio/Sound.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {

jfloat SF_mindustry_gen_Fire_damageDelay;
jint SF_mindustry_gen_Fire_duration;
jfloat SF_mindustry_gen_Fire_fireballDelay;
jint SF_mindustry_gen_Fire_frames;
jobject SF_mindustry_gen_Fire_regions;
jfloat SF_mindustry_gen_Fire_spreadDelay;
jfloat SF_mindustry_gen_Fire_ticksPerFrame;
jfloat SF_mindustry_gen_Fire_tileDamage;
jfloat SF_mindustry_gen_Fire_unitDamage;
jfloat SF_mindustry_gen_Fire_warmupDuration;

void mark_mindustry_gen_Fire(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_gen_Fire_regions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Fire_regions)->clazz)->markFunction)((jobject) SF_mindustry_gen_Fire_regions, mark, depth + 1);
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
	auto self = (mindustry_gen_Fire *) object;
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
}

void init_mindustry_gen_Fire(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Fire(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(158);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (39));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_animation = (jfloat(temp0));
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(40.0f)));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_damageTimer = temp1;
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(40.0f)));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_fireballTimer = temp2;
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_id = temp3;
	LINE_NUMBER(120);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(122);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(124);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(22.0f)));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_spreadTimer = temp4;
	LINE_NUMBER(140);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_warmup = (jfloat(0));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Fire_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Fire_lifetime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:lifetime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lifetime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Fire_time_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:time", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_time);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Fire_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Fire_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Fire_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (10);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Fire_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Fire_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Fire#\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_id)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_Fire_lastUpdated_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:lastUpdated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lastUpdated);
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_Fire_updateSpacing_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:updateSpacing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_updateSpacing);
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(220);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_lastUpdated_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:lastUpdated", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(225);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lastUpdated = (frame[1].l);
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_lifetime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:lifetime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(230);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lifetime = (frame[1].f);
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_setIndex__all_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:setIndex__all", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(235);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__all = (frame[1].i);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_setIndex__draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:setIndex__draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(240);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__draw = (frame[1].i);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_setIndex__sync_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:setIndex__sync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(245);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__sync = (frame[1].i);
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_time_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:time", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(250);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].f);
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_updateSpacing_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:updateSpacing", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(255);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (frame[1].l);
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(260);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(265);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(270);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(271);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(272);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(273);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, temp1);
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_lifetime = temp2;
	LINE_NUMBER(275);
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_time = temp4;
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_x = temp5;
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_y = temp6;
	goto label_11;
	}
label_2:;
	{
	LINE_NUMBER(280);
	if ((frame[2].i) != (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_lifetime = temp0;
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_time = temp1;
	LINE_NUMBER(284);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_y = temp3;
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(287);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown revision '\u0001' for entity type 'FireComp'"_j.string, 1, boxShort(ctx, (frame[2].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(290);
	((func_mindustry_gen_Fire_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(295);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(296);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lifetime));
	LINE_NUMBER(297);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(298);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_time));
	LINE_NUMBER(299);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(300);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Fire_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Fire_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Fire_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Fire_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController, (frame[1].o)))(ctx, (frame[1].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Fire_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Fire_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool M_mindustry_gen_Fire_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:isSyncHidden", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Fire_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((func_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(337);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Fire_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Fire_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return (jfloat(25.0f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Fire_fin_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:fin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_time) / ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lifetime));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Fire_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Fire_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Fire_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Fire_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Fire_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(377);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_3;
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Fire_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((func_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(383);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_gen_Fire_create_R_mindustry_gen_Fire(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Fire(ctx);
	{
	LINE_NUMBER(387);
	sp[0].o = ((jobject) &class_mindustry_gen_Fire);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Fire_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_gen_Fire_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_gen_Fire_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Fire, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(391);
	if (((jint)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(392);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_all;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_index__all = temp0;
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_sync;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_index__sync = temp1;
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp2 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_index__draw = temp2;
	LINE_NUMBER(396);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:afterRead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(405);
	SM_mindustry_entities_Fires_register_mindustry_gen_Fire(ctx, (frame[0].o));
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(411);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:afterSync", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(416);
	SM_mindustry_entities_Fires_register_mindustry_gen_Fire(ctx, (frame[0].o));
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(425);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(433);
	clinit_mindustry_gen_Fire(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Fire_regions;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(434);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	if ((frame[1].i) >= (40)) goto label_1;
	}
	{
	LINE_NUMBER(435);
	clinit_mindustry_gen_Fire(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Fire_regions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"fire\u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(434);
	INST_IINC(1, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(438);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_warmup) / (jfloat(20.0f))));
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, temp0, temp1, temp2, temp3);
	LINE_NUMBER(439);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(110.0f)));
	LINE_NUMBER(440);
	clinit_mindustry_gen_Fire(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Fire_regions;
	jint temp4 = jint(((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_animation));
	clinit_mindustry_gen_Fire(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Fire_regions;
	jint temp5 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp4, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp5);
	jfloat temp6 = (jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((jint(((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y))))), (jfloat(2)));
	jfloat temp8 = temp6 + temp7;
	jfloat temp9 = (jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((jint(((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x))))), (jfloat(2)));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp8, (temp9 + temp10));
	LINE_NUMBER(441);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(442);
	jfloat temp11 = (jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp12 = (jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp13 = jfloat(50.0f);
	jfloat temp14 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(5.0f)), (jfloat(5.0f)));
	jfloat temp15 = temp13 + temp14;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_lightFlame;
	jfloat temp16 = jfloat(0.6f);
	jfloat temp17 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_warmup) / (jfloat(20.0f))));
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp11, temp12, temp15, sp[0].o, (temp16 * temp17));
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_handleSyncHidden(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:handleSyncHidden", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(448);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_interpolate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:interpolate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(451);
	if ((longCompare(((jlong)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_updateSpacing), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(452);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(453);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[1].f) / (jfloat(((jlong)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_updateSpacing)))), (jfloat(2)));
	frame[2].f = temp1;
	LINE_NUMBER(454);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_LAST_), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_TARGET_), (frame[2].f));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(455);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_LAST_), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_TARGET_), (frame[2].f));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(456);
	goto label_7;
	}
label_1:;
	{
	if ((longCompare(((jlong)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(457);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(458);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	}
label_7:;
	LINE_NUMBER(461);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:readSync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(464);
	if ((longCompare(((jlong)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(465);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(466);
	jint temp1 = (jint)((func_mindustry_gen_Fire_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_isLocal_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_lifetime = temp2;
	LINE_NUMBER(468);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_time = temp3;
	LINE_NUMBER(470);
	if ((frame[2].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(471);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp0;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(474);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(475);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(476);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x);
	}
label_10:;
	{
	LINE_NUMBER(478);
	if ((frame[2].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(479);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(480);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp0;
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(482);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(483);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(484);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y);
	}
label_16:;
	{
	LINE_NUMBER(486);
	((func_mindustry_gen_Fire_afterSync) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_afterSync])(ctx, (frame[0].o));
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:readSyncManual", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(491);
	if ((longCompare(((jlong)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(493);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(494);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp1;
	LINE_NUMBER(495);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(496);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp2;
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(501);
	if (((jint)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(502);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__all));
	LINE_NUMBER(503);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(504);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__sync));
	LINE_NUMBER(505);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(506);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(507);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(510);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(514);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_fireRemove;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_animation));
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_entities_Fires_remove_mindustry_world_Tile(ctx, sp[0].o);
	LINE_NUMBER(519);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(520);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_Fire_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_id_R_int])(ctx, (frame[0].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	}
label_11:;
	{
	LINE_NUMBER(523);
	SM_mindustry_gen_Groups_queueFree_arc_util_pooling_Pool$Poolable(ctx, (frame[0].o));
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(527);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (39));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_animation = (jfloat(temp0));
	LINE_NUMBER(529);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(40.0f)));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_damageTimer = temp1;
	LINE_NUMBER(530);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(40.0f)));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_fireballTimer = temp2;
	LINE_NUMBER(531);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_id = temp3;
	LINE_NUMBER(532);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lastUpdated = (jlong(0));
	LINE_NUMBER(533);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(0));
	LINE_NUMBER(534);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_puddleFlammability = (jfloat(0));
	LINE_NUMBER(535);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(22.0f)));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_spreadTimer = temp4;
	LINE_NUMBER(536);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (jobject(nullptr));
	LINE_NUMBER(537);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(538);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(0));
	LINE_NUMBER(539);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_warmup = (jfloat(0));
	LINE_NUMBER(540);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(541);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(546);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Fire_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Fire_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(551);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(552);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_snapInterpolation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:snapInterpolation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(556);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(557);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(558);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(559);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(560);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(561);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_snapSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:snapSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(566);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(567);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(568);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(569);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(570);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(571);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(573);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(577);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Fire_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Fire_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(582);
	((func_mindustry_gen_Fire_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:update", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_animation = (((jfloat)((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_animation) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(2.25f))));
	LINE_NUMBER(592);
	sp[0].o = frame[0].o;
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_warmup = (((jfloat)((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_warmup) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(593);
	sp[0].o = frame[0].o;
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_animation = (fmodf(((jfloat)((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_animation), (jfloat(40.0f))));
	LINE_NUMBER(594);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_4;
	}
	{
	LINE_NUMBER(595);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopFire;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (frame[0].o), (jfloat(0.07f)));
	}
label_4:;
	{
	LINE_NUMBER(597);
	jfloat temp0 = jfloat(1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_envAttrs;
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_water;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp1 * (jfloat(10.0f))), (jfloat(0)));
	frame[1].f = (temp0 + temp2);
	LINE_NUMBER(598);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_time) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * (frame[1].f))), (jfloat(0)), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lifetime));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_time = temp3;
	LINE_NUMBER(599);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp4 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp4 == 0) goto label_8;
	}
	LINE_NUMBER(600);
	goto label_10;
label_8:;
	{
	LINE_NUMBER(602);
	if ((floatCompare(((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lifetime), -1)) >= 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lifetime));
	if (temp0 == 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(603);
	((func_mindustry_gen_Fire_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_remove])(ctx, (frame[0].o));
	LINE_NUMBER(604);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	frame[2].o = sp[0].o;
	LINE_NUMBER(607);
	if ((frame[2].o) == nullptr) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(608);
	sp[0].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_getFlammability_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getFlammability_R_float])(ctx, sp[0].o);
	frame[4].f = (temp0 + ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_puddleFlammability));
	LINE_NUMBER(609);
	if ((frame[3].i) != 0) goto label_19;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) > 0) goto label_19;
	}
	{
	LINE_NUMBER(610);
	sp[0].o = frame[0].o;
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_time) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * (jfloat(8.0f))));
	}
label_19:;
	{
	LINE_NUMBER(612);
	if ((frame[3].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(613);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_lifetime;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[4].f) / (jfloat(8.0f))), (jfloat(0)), (jfloat(0.6f)));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_lifetime = (temp0 + (temp1 * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	}
label_21:;
	{
	LINE_NUMBER(615);
	if ((floatCompare((frame[4].f), (jfloat(1)), -1)) <= 0) goto label_23;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_spreadTimer;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[4].f) / (jfloat(5.0f))), (jfloat(0.3f)), (jfloat(2)));
	jfloat temp3 = temp0 + (temp1 * temp2);
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_spreadTimer = temp3;
	if ((floatCompare(temp3, (jfloat(22.0f)), -1)) < 0) goto label_23;
	}
	{
	LINE_NUMBER(616);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_spreadTimer = (jfloat(0));
	LINE_NUMBER(617);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (jint(3)));
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(618);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x);
	sp[1].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(619);
	SM_mindustry_entities_Fires_create_mindustry_world_Tile(ctx, (frame[6].o));
	}
label_23:;
	{
	LINE_NUMBER(621);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) <= 0) goto label_28;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_fireballTimer;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[4].f) / (jfloat(10.0f))), (jfloat(0)), (jfloat(0.5f)));
	jfloat temp3 = temp0 + (temp1 * temp2);
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_fireballTimer = temp3;
	if ((floatCompare(temp3, (jfloat(40.0f)), -1)) < 0) goto label_28;
	}
	{
	LINE_NUMBER(622);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_fireballTimer = (jfloat(0));
	LINE_NUMBER(623);
	clinit_mindustry_content_Bullets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Bullets_fireball;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	jfloat temp0 = (jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(360.0f)));
	((func_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, (jfloat(-1.0f)), (jfloat(1)), (jfloat(1)));
	}
label_28:;
	{
	LINE_NUMBER(625);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_damageTimer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_damageTimer = temp0;
	if ((floatCompare(temp0, (jfloat(40.0f)), -1)) < 0) goto label_10;
	}
	{
	LINE_NUMBER(626);
	((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_damageTimer = (jfloat(0));
	LINE_NUMBER(627);
	sp[0].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(628);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[5].o) == nullptr) goto label_34;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Puddle_getFlammability_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Puddle_getFlammability_R_float])(ctx, (frame[5].o));
	jfloat temp1 = temp0 / (jfloat(3.0f));
	sp[0].f = temp1;
	sp += 1;
	goto label_35;
	}
label_34:;
	INST_FCONST(0);
label_35:;
	{
	sp -= 2;
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_puddleFlammability = sp[1].f;
	LINE_NUMBER(629);
	if ((frame[3].i) == 0) goto label_37;
	}
	{
	LINE_NUMBER(630);
	((func_mindustry_gen_Building_damage_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_damage_float])(ctx, (frame[2].o), (jfloat(1.8f)));
	}
label_37:;
	{
	LINE_NUMBER(632);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[1].o);
	jfloat temp2 = jfloat(8.0f);
	jfloat temp3 = jfloat(3.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Fire_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_gen_Fire_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_gen_Fire_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Fire_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_gen_Fire_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_gen_Fire_invoke_arc_func_Cons_1);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_entities_Damage_damageUnits_mindustry_game_Team_float_float_float_float_arc_func_Boolf_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o, sp[2].o);
	}
label_10:;
	{
	LINE_NUMBER(637);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_39;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Fire_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_40;
	}
label_39:;
	{
	jint temp0 = (jint)((func_mindustry_gen_Fire_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_41;
	}
label_40:;
	{
	LINE_NUMBER(638);
	((func_mindustry_gen_Fire_interpolate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_interpolate])(ctx, (frame[0].o));
	}
label_41:;
	{
	LINE_NUMBER(643);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lifetime));
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_time = temp0;
	LINE_NUMBER(644);
	if ((floatCompare(((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lifetime), -1)) < 0) goto label_43;
	}
	{
	LINE_NUMBER(645);
	((func_mindustry_gen_Fire_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Fire_remove])(ctx, (frame[0].o));
	}
label_43:;
	LINE_NUMBER(648);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:writeSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(651);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_lifetime));
	LINE_NUMBER(652);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(653);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_time));
	LINE_NUMBER(654);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(655);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(657);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Fire_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:writeSyncManual", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(661);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(663);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Fire_lambda$update$1_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:lambda$update$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Fire(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(632);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_burning;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, (jfloat(300.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_Fire_lambda$update$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:lambda$update$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Fire(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(632);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_burning;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isImmune_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isImmune_mindustry_type_StatusEffect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
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

void clinit_mindustry_gen_Fire(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_Fire_damageDelay = jfloat(40.0f);
	SF_mindustry_gen_Fire_duration = jint(90);
	SF_mindustry_gen_Fire_fireballDelay = jfloat(40.0f);
	SF_mindustry_gen_Fire_frames = jint(40);
	SF_mindustry_gen_Fire_spreadDelay = jfloat(22.0f);
	SF_mindustry_gen_Fire_ticksPerFrame = jfloat(2.25f);
	SF_mindustry_gen_Fire_tileDamage = jfloat(1.8f);
	SF_mindustry_gen_Fire_unitDamage = jfloat(3.0f);
	SF_mindustry_gen_Fire_warmupDuration = jfloat(20.0f);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Fire:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Fire(ctx);
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (40));
	clinit_mindustry_gen_Fire(ctx);
	SF_mindustry_gen_Fire_regions = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_Fire;
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

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method buildOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method tileOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_gen_Fire[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Fire_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Fire_reset,
	(void *) M_mindustry_gen_Fire_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Fire_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Fire_isAdded_R_boolean,
	(void *) M_mindustry_gen_Fire_isLocal_R_boolean,
	(void *) M_mindustry_gen_Fire_isRemote_R_boolean,
	(void *) M_mindustry_gen_Fire_serialize_R_boolean,
	(void *) M_mindustry_gen_Fire_classId_R_int,
	(void *) M_mindustry_gen_Fire_id_R_int,
	(void *) M_mindustry_gen_Fire_add,
	(void *) M_mindustry_gen_Fire_afterRead,
	(void *) M_mindustry_gen_Fire_afterReadAll,
	(void *) M_mindustry_gen_Fire_beforeWrite,
	(void *) M_mindustry_gen_Fire_id_int,
	(void *) M_mindustry_gen_Fire_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Fire_remove,
	(void *) M_mindustry_gen_Fire_update,
	(void *) M_mindustry_gen_Fire_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Fire_getX_R_float,
	(void *) M_mindustry_gen_Fire_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Fire_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Fire_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Fire_onSolid_R_boolean,
	(void *) M_mindustry_gen_Fire_x_R_float,
	(void *) M_mindustry_gen_Fire_y_R_float,
	(void *) M_mindustry_gen_Fire_tileX_R_int,
	(void *) M_mindustry_gen_Fire_tileY_R_int,
	(void *) M_mindustry_gen_Fire_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Fire_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Fire_set_float_float,
	(void *) M_mindustry_gen_Fire_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Fire_trns_float_float,
	(void *) M_mindustry_gen_Fire_x_float,
	(void *) M_mindustry_gen_Fire_y_float,
	(void *) M_mindustry_gen_Fire_clipSize_R_float,
	(void *) M_mindustry_gen_Fire_draw,
	(void *) M_mindustry_gen_Fire_isSyncHidden_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Fire_lastUpdated_R_long,
	(void *) M_mindustry_gen_Fire_updateSpacing_R_long,
	(void *) M_mindustry_gen_Fire_afterSync,
	(void *) M_mindustry_gen_Fire_handleSyncHidden,
	(void *) M_mindustry_gen_Fire_interpolate,
	(void *) M_mindustry_gen_Fire_lastUpdated_long,
	(void *) M_mindustry_gen_Fire_readSync_arc_util_io_Reads,
	(void *) M_mindustry_gen_Fire_readSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_Fire_snapInterpolation,
	(void *) M_mindustry_gen_Fire_snapSync,
	(void *) M_mindustry_gen_Fire_updateSpacing_long,
	(void *) M_mindustry_gen_Fire_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Fire_writeSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_Fire_fin_R_float,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) M_mindustry_gen_Fire_lifetime_R_float,
	(void *) M_mindustry_gen_Fire_time_R_float,
	(void *) M_mindustry_gen_Fire_lifetime_float,
	(void *) M_mindustry_gen_Fire_time_float,
	(void *) M_mindustry_gen_Fire_setIndex__all_int,
	(void *) M_mindustry_gen_Fire_setIndex__draw_int,
	(void *) M_mindustry_gen_Fire_setIndex__sync_int,
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
	{ "reset", "()V" },
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
	{ "setIndex__all", "(I)V" },
	{ "setIndex__draw", "(I)V" },
	{ "setIndex__sync", "(I)V" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_Firec, &class_mindustry_gen_IndexableEntity__all, &class_mindustry_gen_IndexableEntity__draw, &class_mindustry_gen_IndexableEntity__sync, &class_mindustry_gen_Posc, &class_mindustry_gen_Syncc, &class_mindustry_gen_Timedc, };

static FieldMetadata fields[] {
	{ "damageDelay", &class_float, (intptr_t) &SF_mindustry_gen_Fire_damageDelay, "F", 28 },
	{ "duration", &class_int, (intptr_t) &SF_mindustry_gen_Fire_duration, "I", 25 },
	{ "fireballDelay", &class_float, (intptr_t) &SF_mindustry_gen_Fire_fireballDelay, "F", 28 },
	{ "frames", &class_int, (intptr_t) &SF_mindustry_gen_Fire_frames, "I", 25 },
	{ "regions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), (intptr_t) &SF_mindustry_gen_Fire_regions, "[Larc/graphics/g2d/TextureRegion;", 25 },
	{ "spreadDelay", &class_float, (intptr_t) &SF_mindustry_gen_Fire_spreadDelay, "F", 28 },
	{ "ticksPerFrame", &class_float, (intptr_t) &SF_mindustry_gen_Fire_ticksPerFrame, "F", 28 },
	{ "tileDamage", &class_float, (intptr_t) &SF_mindustry_gen_Fire_tileDamage, "F", 28 },
	{ "unitDamage", &class_float, (intptr_t) &SF_mindustry_gen_Fire_unitDamage, "F", 28 },
	{ "warmupDuration", &class_float, (intptr_t) &SF_mindustry_gen_Fire_warmupDuration, "F", 28 },
	{ "added", &class_boolean, offsetof(mindustry_gen_Fire, F_added), "Z", 132 },
	{ "animation", &class_float, offsetof(mindustry_gen_Fire, F_animation), "F", 132 },
	{ "damageTimer", &class_float, offsetof(mindustry_gen_Fire, F_damageTimer), "F", 132 },
	{ "fireballTimer", &class_float, offsetof(mindustry_gen_Fire, F_fireballTimer), "F", 132 },
	{ "id", &class_int, offsetof(mindustry_gen_Fire, F_id), "I", 129 },
	{ "index__all", &class_int, offsetof(mindustry_gen_Fire, F_index__all), "I", 132 },
	{ "index__draw", &class_int, offsetof(mindustry_gen_Fire, F_index__draw), "I", 132 },
	{ "index__sync", &class_int, offsetof(mindustry_gen_Fire, F_index__sync), "I", 132 },
	{ "lastUpdated", &class_long, offsetof(mindustry_gen_Fire, F_lastUpdated), "J", 129 },
	{ "lifetime", &class_float, offsetof(mindustry_gen_Fire, F_lifetime), "F", 1 },
	{ "puddleFlammability", &class_float, offsetof(mindustry_gen_Fire, F_puddleFlammability), "F", 132 },
	{ "spreadTimer", &class_float, offsetof(mindustry_gen_Fire, F_spreadTimer), "F", 132 },
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_gen_Fire, F_tile), "Lmindustry/world/Tile;", 1 },
	{ "time", &class_float, offsetof(mindustry_gen_Fire, F_time), "F", 1 },
	{ "updateSpacing", &class_long, offsetof(mindustry_gen_Fire, F_updateSpacing), "J", 129 },
	{ "warmup", &class_float, offsetof(mindustry_gen_Fire, F_warmup), "F", 132 },
	{ "x", &class_float, offsetof(mindustry_gen_Fire, F_x), "F", 1 },
	{ "x_LAST_", &class_float, offsetof(mindustry_gen_Fire, F_x_LAST_), "F", 130 },
	{ "x_TARGET_", &class_float, offsetof(mindustry_gen_Fire, F_x_TARGET_), "F", 130 },
	{ "y", &class_float, offsetof(mindustry_gen_Fire, F_y), "F", 1 },
	{ "y_LAST_", &class_float, offsetof(mindustry_gen_Fire, F_y_LAST_), "F", 130 },
	{ "y_TARGET_", &class_float, offsetof(mindustry_gen_Fire, F_y_TARGET_), "F", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_Fire, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_Fire_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_Fire_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_Fire_lifetime_R_float, VTABLE_mindustry_gen_Fire_lifetime_R_float, "()F", 1 },
	{ "time", (intptr_t) M_mindustry_gen_Fire_time_R_float, VTABLE_mindustry_gen_Fire_time_R_float, "()F", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Fire_x_R_float, VTABLE_mindustry_gen_Fire_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Fire_y_R_float, VTABLE_mindustry_gen_Fire_y_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_Fire_classId_R_int, VTABLE_mindustry_gen_Fire_classId_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Fire_id_R_int, VTABLE_mindustry_gen_Fire_id_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_Fire_toString_R_java_lang_String, VTABLE_mindustry_gen_Fire_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_Fire_lastUpdated_R_long, VTABLE_mindustry_gen_Fire_lastUpdated_R_long, "()J", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_Fire_updateSpacing_R_long, VTABLE_mindustry_gen_Fire_updateSpacing_R_long, "()J", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Fire_id_int, VTABLE_mindustry_gen_Fire_id_int, "(I)V", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_Fire_lastUpdated_long, VTABLE_mindustry_gen_Fire_lastUpdated_long, "(J)V", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_Fire_lifetime_float, VTABLE_mindustry_gen_Fire_lifetime_float, "(F)V", 1 },
	{ "setIndex__all", (intptr_t) M_mindustry_gen_Fire_setIndex__all_int, VTABLE_mindustry_gen_Fire_setIndex__all_int, "(I)V", 1 },
	{ "setIndex__draw", (intptr_t) M_mindustry_gen_Fire_setIndex__draw_int, VTABLE_mindustry_gen_Fire_setIndex__draw_int, "(I)V", 1 },
	{ "setIndex__sync", (intptr_t) M_mindustry_gen_Fire_setIndex__sync_int, VTABLE_mindustry_gen_Fire_setIndex__sync_int, "(I)V", 1 },
	{ "time", (intptr_t) M_mindustry_gen_Fire_time_float, VTABLE_mindustry_gen_Fire_time_float, "(F)V", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_Fire_updateSpacing_long, VTABLE_mindustry_gen_Fire_updateSpacing_long, "(J)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Fire_x_float, VTABLE_mindustry_gen_Fire_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Fire_y_float, VTABLE_mindustry_gen_Fire_y_float, "(F)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_Fire_read_arc_util_io_Reads, VTABLE_mindustry_gen_Fire_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_Fire_write_arc_util_io_Writes, VTABLE_mindustry_gen_Fire_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_Fire_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_Fire_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_Fire_as_R_java_lang_Object, VTABLE_mindustry_gen_Fire_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_Fire_isAdded_R_boolean, VTABLE_mindustry_gen_Fire_isAdded_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_Fire_isLocal_R_boolean, VTABLE_mindustry_gen_Fire_isLocal_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_Fire_isRemote_R_boolean, VTABLE_mindustry_gen_Fire_isRemote_R_boolean, "()Z", 1 },
	{ "isSyncHidden", (intptr_t) M_mindustry_gen_Fire_isSyncHidden_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_Fire_isSyncHidden_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_Fire_onSolid_R_boolean, VTABLE_mindustry_gen_Fire_onSolid_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_Fire_serialize_R_boolean, VTABLE_mindustry_gen_Fire_serialize_R_boolean, "()Z", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_Fire_clipSize_R_float, VTABLE_mindustry_gen_Fire_clipSize_R_float, "()F", 1 },
	{ "fin", (intptr_t) M_mindustry_gen_Fire_fin_R_float, VTABLE_mindustry_gen_Fire_fin_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_Fire_getX_R_float, VTABLE_mindustry_gen_Fire_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_Fire_getY_R_float, VTABLE_mindustry_gen_Fire_getY_R_float, "()F", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_Fire_tileX_R_int, VTABLE_mindustry_gen_Fire_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_Fire_tileY_R_int, VTABLE_mindustry_gen_Fire_tileY_R_int, "()I", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_Fire_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_Fire_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_Fire_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_Fire_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_Fire_create_R_mindustry_gen_Fire, 0, "()Lmindustry/gen/Fire;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_Fire_add, VTABLE_mindustry_gen_Fire_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_Fire_afterRead, VTABLE_mindustry_gen_Fire_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_Fire_afterReadAll, VTABLE_mindustry_gen_Fire_afterReadAll, "()V", 1 },
	{ "afterSync", (intptr_t) M_mindustry_gen_Fire_afterSync, VTABLE_mindustry_gen_Fire_afterSync, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_Fire_beforeWrite, VTABLE_mindustry_gen_Fire_beforeWrite, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_Fire_draw, VTABLE_mindustry_gen_Fire_draw, "()V", 1 },
	{ "handleSyncHidden", (intptr_t) M_mindustry_gen_Fire_handleSyncHidden, VTABLE_mindustry_gen_Fire_handleSyncHidden, "()V", 1 },
	{ "interpolate", (intptr_t) M_mindustry_gen_Fire_interpolate, VTABLE_mindustry_gen_Fire_interpolate, "()V", 1 },
	{ "readSync", (intptr_t) M_mindustry_gen_Fire_readSync_arc_util_io_Reads, VTABLE_mindustry_gen_Fire_readSync_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "readSyncManual", (intptr_t) M_mindustry_gen_Fire_readSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_Fire_readSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_Fire_remove, VTABLE_mindustry_gen_Fire_remove, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_gen_Fire_reset, VTABLE_mindustry_gen_Fire_reset, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Fire_set_arc_math_geom_Position, VTABLE_mindustry_gen_Fire_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Fire_set_float_float, VTABLE_mindustry_gen_Fire_set_float_float, "(FF)V", 1 },
	{ "snapInterpolation", (intptr_t) M_mindustry_gen_Fire_snapInterpolation, VTABLE_mindustry_gen_Fire_snapInterpolation, "()V", 1 },
	{ "snapSync", (intptr_t) M_mindustry_gen_Fire_snapSync, VTABLE_mindustry_gen_Fire_snapSync, "()V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Fire_trns_arc_math_geom_Position, VTABLE_mindustry_gen_Fire_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Fire_trns_float_float, VTABLE_mindustry_gen_Fire_trns_float_float, "(FF)V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_Fire_update, VTABLE_mindustry_gen_Fire_update, "()V", 1 },
	{ "writeSync", (intptr_t) M_mindustry_gen_Fire_writeSync_arc_util_io_Writes, VTABLE_mindustry_gen_Fire_writeSync_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "writeSyncManual", (intptr_t) M_mindustry_gen_Fire_writeSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_Fire_writeSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "lambda$update$1", (intptr_t) SM_mindustry_gen_Fire_lambda$update$1_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$update$0", (intptr_t) SM_mindustry_gen_Fire_lambda$update$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_gen_Fire, 0, "()V", 8 },
};

Class class_mindustry_gen_Fire{
		.nativeName = (intptr_t) "mindustry/gen/Fire",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Fire),
		.classVtable = (intptr_t) vtable_mindustry_gen_Fire,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Fire,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_Fire,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 10,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 32,
		.nativeFields = (intptr_t) fields,
		.methodCount = 65,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 87,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Fire = registerClass(&class_mindustry_gen_Fire);

}
