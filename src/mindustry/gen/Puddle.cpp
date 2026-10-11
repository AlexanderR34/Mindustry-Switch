#include "mindustry/gen/Puddle.h"
#include "arc/func/Prov.h"
#include "java/nio/FloatBuffer.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Puddle.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Puddle_invoke_arc_func_Prov_1.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/gen/Entityc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/gen/Puddlec.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/Liquid.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Puddle_invoke_arc_func_Cons_1.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/entities/Units.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "arc/util/io/Writes.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/entities/Puddles.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/type/UnitType.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/entities/Fires.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Player.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jobject SF_mindustry_gen_Puddle_paramPuddle;
jobject SF_mindustry_gen_Puddle_rect;
jobject SF_mindustry_gen_Puddle_rect2;
jobject SF_mindustry_gen_Puddle_unitCons;

void mark_mindustry_gen_Puddle(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_gen_Puddle_paramPuddle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Puddle_paramPuddle)->clazz)->markFunction)((jobject) SF_mindustry_gen_Puddle_paramPuddle, mark, depth + 1);
		if (SF_mindustry_gen_Puddle_rect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Puddle_rect)->clazz)->markFunction)((jobject) SF_mindustry_gen_Puddle_rect, mark, depth + 1);
		if (SF_mindustry_gen_Puddle_rect2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Puddle_rect2)->clazz)->markFunction)((jobject) SF_mindustry_gen_Puddle_rect2, mark, depth + 1);
		if (SF_mindustry_gen_Puddle_unitCons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Puddle_unitCons)->clazz)->markFunction)((jobject) SF_mindustry_gen_Puddle_unitCons, mark, depth + 1);
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
	auto self = (mindustry_gen_Puddle *) object;
	if (self->F_liquid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquid)->clazz)->markFunction)((jobject) self->F_liquid, mark, depth + 1);
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
}

void init_mindustry_gen_Puddle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Puddle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(154);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(50.0f)));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_effectTime = temp0;
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_id = temp1;
	LINE_NUMBER(120);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(122);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(124);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	clinit_arc_util_Time(ctx);
	jfloat temp2 = (jfloat)SF_arc_util_Time_time;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(40.0f)));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_lastRipple = (temp2 + temp3);
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Puddle_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Puddle_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Puddle_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Puddle_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return (13);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Puddle_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Puddle_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Puddle#\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_id)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_Puddle_lastUpdated_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:lastUpdated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_lastUpdated);
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_Puddle_updateSpacing_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:updateSpacing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_updateSpacing);
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(206);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_lastUpdated_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:lastUpdated", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(211);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_lastUpdated = (frame[1].l);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_setIndex__all_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:setIndex__all", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(216);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__all = (frame[1].i);
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_setIndex__draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:setIndex__draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(221);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__draw = (frame[1].i);
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_setIndex__sync_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:setIndex__sync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(226);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__sync = (frame[1].i);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_updateSpacing_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:updateSpacing", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(231);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (frame[1].l);
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(236);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(241);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:read", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(247);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = temp0;
	LINE_NUMBER(249);
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	jint temp2 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp2);
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_liquid = (jref) (checkCast(ctx, &class_mindustry_type_Liquid, sp[1].o));
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_x = temp3;
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_y = temp4;
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(254);
	if ((frame[2].i) != (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = temp0;
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp1);
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_liquid = (jref) (checkCast(ctx, &class_mindustry_type_Liquid, sp[1].o));
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_y = temp3;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(261);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown revision '\u0001' for entity type 'PuddleComp'"_j.string, 1, boxShort(ctx, (frame[2].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(264);
	((func_mindustry_gen_Puddle_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(269);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(270);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount));
	LINE_NUMBER(271);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp += 1;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ICONST(-1);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(272);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(273);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(274);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Puddle_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Puddle_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Puddle_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Puddle_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
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

jbool M_mindustry_gen_Puddle_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(300);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Puddle_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_isLocal_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_Puddle_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:isSyncHidden", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Puddle_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(311);
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

jbool M_mindustry_gen_Puddle_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Puddle_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (jfloat(50.0f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Puddle_getFlammability_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:getFlammability", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	popStackFrame(ctx);
	return (((jfloat)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_flammability) * ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Puddle_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Puddle_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Puddle_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Puddle_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Puddle_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(351);
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

jobject M_mindustry_gen_Puddle_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((func_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(357);
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

jobject SM_mindustry_gen_Puddle_create_R_mindustry_gen_Puddle(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Puddle(ctx);
	{
	LINE_NUMBER(361);
	sp[0].o = ((jobject) &class_mindustry_gen_Puddle);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Puddle_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_gen_Puddle_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_gen_Puddle_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Puddle, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(365);
	if (((jint)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_all;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_index__all = temp0;
	LINE_NUMBER(367);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_sync;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_index__sync = temp1;
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp2 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_index__draw = temp2;
	LINE_NUMBER(370);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:afterRead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(379);
	SM_mindustry_entities_Puddles_register_mindustry_gen_Puddle(ctx, (frame[0].o));
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(385);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:afterSync", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(391);
	SM_mindustry_entities_Puddles_register_mindustry_gen_Puddle(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(397);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(401);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(409);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(19.0f)));
	LINE_NUMBER(410);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	((func_mindustry_type_Liquid_drawPuddle_mindustry_gen_Puddle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Liquid_drawPuddle_mindustry_gen_Puddle])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_handleSyncHidden(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:handleSyncHidden", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(416);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_interpolate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:interpolate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(419);
	if ((longCompare(((jlong)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_updateSpacing), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(420);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(421);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[1].f) / (jfloat(((jlong)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_updateSpacing)))), (jfloat(2)));
	frame[2].f = temp1;
	LINE_NUMBER(422);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_LAST_), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_TARGET_), (frame[2].f));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(423);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_LAST_), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_TARGET_), (frame[2].f));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(424);
	goto label_7;
	}
label_1:;
	{
	if ((longCompare(((jlong)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(425);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(426);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	}
label_7:;
	LINE_NUMBER(429);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:readSync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(432);
	if ((longCompare(((jlong)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(434);
	jint temp1 = (jint)((func_mindustry_gen_Puddle_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_isLocal_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(435);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = temp2;
	LINE_NUMBER(436);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	jint temp3 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp3);
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_liquid = (jref) (checkCast(ctx, &class_mindustry_type_Liquid, sp[1].o));
	LINE_NUMBER(437);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	LINE_NUMBER(438);
	if ((frame[2].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(439);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp0;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(442);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(443);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(444);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x);
	}
label_10:;
	{
	LINE_NUMBER(446);
	if ((frame[2].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(447);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp0;
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(450);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(451);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(452);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y);
	}
label_16:;
	{
	LINE_NUMBER(454);
	((func_mindustry_gen_Puddle_afterSync) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_afterSync])(ctx, (frame[0].o));
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:readSyncManual", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(459);
	if ((longCompare(((jlong)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(461);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp1;
	LINE_NUMBER(463);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(464);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp2;
	LINE_NUMBER(466);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(469);
	if (((jint)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(470);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__all));
	LINE_NUMBER(471);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(472);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__sync));
	LINE_NUMBER(473);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(474);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(475);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(478);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(482);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_entities_Puddles_remove_mindustry_world_Tile(ctx, sp[0].o);
	LINE_NUMBER(486);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(487);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_Puddle_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_id_R_int])(ctx, (frame[0].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	}
label_10:;
	{
	LINE_NUMBER(490);
	SM_mindustry_gen_Groups_queueFree_arc_util_pooling_Pool$Poolable(ctx, (frame[0].o));
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(494);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_accepting = (jfloat(0));
	LINE_NUMBER(495);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(496);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount = (jfloat(0));
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(50.0f)));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_effectTime = temp0;
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_id = temp1;
	LINE_NUMBER(499);
	sp[0].o = frame[0].o;
	clinit_arc_util_Time(ctx);
	jfloat temp2 = (jfloat)SF_arc_util_Time_time;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(40.0f)));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_lastRipple = (temp2 + temp3);
	LINE_NUMBER(500);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_lastUpdated = (jlong(0));
	LINE_NUMBER(501);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid = (jref) (jobject(nullptr));
	LINE_NUMBER(502);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (jobject(nullptr));
	LINE_NUMBER(503);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(0));
	LINE_NUMBER(504);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_updateTime = (jfloat(0));
	LINE_NUMBER(505);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(506);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(511);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Puddle_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Puddle_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(516);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(517);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_snapInterpolation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:snapInterpolation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(521);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(522);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(523);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(524);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(525);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(526);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(528);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_snapSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:snapSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(531);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(532);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(533);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(534);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(535);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(536);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(542);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Puddle_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Puddle_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(547);
	((func_mindustry_gen_Puddle_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:update", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(557);
	((func_mindustry_gen_Puddle_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_remove])(ctx, (frame[0].o));
	LINE_NUMBER(558);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(560);
	if ((floatCompare(((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_accepting), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	(sp++)->f = jfloat(3.0f);
	goto label_6;
label_5:;
	INST_FCONST(0);
label_6:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(561);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = (temp0 - ((temp1 * (temp2 - ((jfloat)((mindustry_type_Liquid *) NULL_CHECK(sp[1].o))->F_viscosity))) / ((jfloat(5.0f)) + (frame[1].f))));
	LINE_NUMBER(562);
	sp[0].o = frame[0].o;
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = (((jfloat)((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount) + ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_accepting));
	LINE_NUMBER(563);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(70.0f)));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = temp3;
	LINE_NUMBER(564);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_accepting = (jfloat(0));
	LINE_NUMBER(565);
	if ((floatCompare(((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(46.666668f)), -1)) < 0) goto label_12;
	}
	{
	LINE_NUMBER(566);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount) - (jfloat(46.666668f))) / (jfloat(4.0f))), ((jfloat(0.3f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	frame[2].f = temp0;
	LINE_NUMBER(567);
	frame[3].i = (jint(0));
	LINE_NUMBER(568);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_16:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_17;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(569);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_x);
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_y)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(570);
	if ((frame[8].o) == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_moveThroughBlocks) == 0) goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(571);
	INST_IINC(3, 1);
	LINE_NUMBER(572);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].f), (jint(0)));
	}
label_20:;
	{
	LINE_NUMBER(568);
	INST_IINC(6, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(575);
	sp[0].o = frame[0].o;
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = (((jfloat)((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount) - ((frame[2].f) * (jfloat((frame[3].i)))));
	}
label_12:;
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_capPuddles) == 0) goto label_23;
	}
	{
	LINE_NUMBER(578);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(0)), (jfloat(70.0f)));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = temp0;
	}
label_23:;
	{
	LINE_NUMBER(580);
	if ((floatCompare(((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(0)), 1)) > 0) goto label_25;
	}
	{
	LINE_NUMBER(581);
	((func_mindustry_gen_Puddle_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_remove])(ctx, (frame[0].o));
	LINE_NUMBER(582);
	goto label_4;
	}
label_25:;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle(ctx, sp[0].o);
	if (sp[0].o == (frame[0].o)) goto label_28;
	}
	{
	if (((jint)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_added) == 0) goto label_28;
	}
	{
	LINE_NUMBER(585);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	((func_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(586);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(587);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(588);
	goto label_4;
	}
label_28:;
	{
	LINE_NUMBER(590);
	if ((floatCompare(((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(35.0f)), -1)) < 0) goto label_33;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_updateTime), (jfloat(0)), 1)) > 0) goto label_33;
	}
	{
	LINE_NUMBER(591);
	clinit_mindustry_gen_Puddle(ctx);
	SF_mindustry_gen_Puddle_paramPuddle = (frame[0].o);
	LINE_NUMBER(592);
	clinit_mindustry_gen_Puddle(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Puddle_rect;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount) / (jfloat(46.666668f))));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (temp0 * (jfloat(10.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y));
	clinit_mindustry_gen_Puddle(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Puddle_unitCons;
	SM_mindustry_entities_Units_nearby_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(593);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_temperature), (jfloat(0.7f)), -1)) <= 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_37;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.5)));
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_entities_Fires_create_mindustry_world_Tile(ctx, sp[0].o);
	}
label_37:;
	{
	LINE_NUMBER(596);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_updateTime = (jfloat(40.0f));
	LINE_NUMBER(597);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	((func_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle])(ctx, sp[0].o, (frame[0].o));
	}
label_33:;
	{
	LINE_NUMBER(601);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_particleEffect;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	if (sp[0].o == sp[1].o) goto label_41;
	}
	{
	LINE_NUMBER(602);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_effectTime) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_effectTime = temp0;
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	if ((floatCompare(temp0, ((jfloat)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_particleSpacing), -1)) < 0) goto label_41;
	}
	{
	LINE_NUMBER(603);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount) / (jfloat(46.666668f))));
	frame[2].f = (temp0 * (jfloat(4.0f)));
	LINE_NUMBER(604);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_particleEffect;
	jfloat temp1 = (jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[2].f));
	jfloat temp3 = temp1 + temp2;
	jfloat temp4 = (jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[2].f));
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, temp3, (temp4 + temp5));
	LINE_NUMBER(605);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_effectTime = (jfloat(0));
	}
label_41:;
	{
	LINE_NUMBER(608);
	sp[0].o = frame[0].o;
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_updateTime = (((jfloat)((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_updateTime) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(609);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	((func_mindustry_type_Liquid_update_mindustry_gen_Puddle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Liquid_update_mindustry_gen_Puddle])(ctx, sp[0].o, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(613);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_47;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Puddle_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_48;
	}
label_47:;
	{
	jint temp0 = (jint)((func_mindustry_gen_Puddle_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_49;
	}
label_48:;
	{
	LINE_NUMBER(614);
	((func_mindustry_gen_Puddle_interpolate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Puddle_interpolate])(ctx, (frame[0].o));
	}
label_49:;
	LINE_NUMBER(617);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:writeSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(620);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_amount));
	LINE_NUMBER(621);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp += 1;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ICONST(-1);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_liquid;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(622);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(623);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(624);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(626);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Puddle_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:writeSyncManual", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(630);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(632);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Puddle_lambda$static$0_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:lambda$static$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Puddle(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(99);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) != 0) goto label_1;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Puddle(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Puddle_rect2;
	((func_mindustry_gen_Unit_hitbox_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hitbox_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(101);
	clinit_mindustry_gen_Puddle(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Puddle_rect;
	clinit_mindustry_gen_Puddle(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Puddle_rect2;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Puddle(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Puddle_paramPuddle;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK(sp[1].o))->F_liquid;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK(sp[1].o))->F_effect;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, (jfloat(120.0f)));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len2_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0.010000001f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(104);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_ripple;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rippleScale;
	clinit_mindustry_gen_Puddle(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Puddle_paramPuddle;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK(sp[1].o))->F_liquid;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK(sp[1].o))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	}
label_1:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_gen_Puddle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Puddle:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Puddle(ctx);
	{
	LINE_NUMBER(94);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_gen_Puddle(ctx);
	SF_mindustry_gen_Puddle_rect = sp[0].o;
	LINE_NUMBER(96);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_gen_Puddle(ctx);
	SF_mindustry_gen_Puddle_rect2 = sp[0].o;
	LINE_NUMBER(98);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Puddle_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_gen_Puddle_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_gen_Puddle_invoke_arc_func_Cons_1);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_gen_Puddle(ctx);
	SF_mindustry_gen_Puddle_unitCons = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_Puddle;
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
}

void *vtable_mindustry_gen_Puddle[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Puddle_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Puddle_reset,
	(void *) M_mindustry_gen_Puddle_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Puddle_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Puddle_isAdded_R_boolean,
	(void *) M_mindustry_gen_Puddle_isLocal_R_boolean,
	(void *) M_mindustry_gen_Puddle_isRemote_R_boolean,
	(void *) M_mindustry_gen_Puddle_serialize_R_boolean,
	(void *) M_mindustry_gen_Puddle_classId_R_int,
	(void *) M_mindustry_gen_Puddle_id_R_int,
	(void *) M_mindustry_gen_Puddle_add,
	(void *) M_mindustry_gen_Puddle_afterRead,
	(void *) M_mindustry_gen_Puddle_afterReadAll,
	(void *) M_mindustry_gen_Puddle_beforeWrite,
	(void *) M_mindustry_gen_Puddle_id_int,
	(void *) M_mindustry_gen_Puddle_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Puddle_remove,
	(void *) M_mindustry_gen_Puddle_update,
	(void *) M_mindustry_gen_Puddle_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Puddle_getX_R_float,
	(void *) M_mindustry_gen_Puddle_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Puddle_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Puddle_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Puddle_onSolid_R_boolean,
	(void *) M_mindustry_gen_Puddle_x_R_float,
	(void *) M_mindustry_gen_Puddle_y_R_float,
	(void *) M_mindustry_gen_Puddle_tileX_R_int,
	(void *) M_mindustry_gen_Puddle_tileY_R_int,
	(void *) M_mindustry_gen_Puddle_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Puddle_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Puddle_set_float_float,
	(void *) M_mindustry_gen_Puddle_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Puddle_trns_float_float,
	(void *) M_mindustry_gen_Puddle_x_float,
	(void *) M_mindustry_gen_Puddle_y_float,
	(void *) M_mindustry_gen_Puddle_clipSize_R_float,
	(void *) M_mindustry_gen_Puddle_draw,
	(void *) M_mindustry_gen_Puddle_setIndex__all_int,
	(void *) M_mindustry_gen_Puddle_setIndex__draw_int,
	(void *) M_mindustry_gen_Puddle_setIndex__sync_int,
	(void *) M_mindustry_gen_Puddle_isSyncHidden_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Puddle_lastUpdated_R_long,
	(void *) M_mindustry_gen_Puddle_updateSpacing_R_long,
	(void *) M_mindustry_gen_Puddle_afterSync,
	(void *) M_mindustry_gen_Puddle_handleSyncHidden,
	(void *) M_mindustry_gen_Puddle_interpolate,
	(void *) M_mindustry_gen_Puddle_lastUpdated_long,
	(void *) M_mindustry_gen_Puddle_readSync_arc_util_io_Reads,
	(void *) M_mindustry_gen_Puddle_readSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_Puddle_snapInterpolation,
	(void *) M_mindustry_gen_Puddle_snapSync,
	(void *) M_mindustry_gen_Puddle_updateSpacing_long,
	(void *) M_mindustry_gen_Puddle_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Puddle_writeSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_Puddle_getFlammability_R_float,
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
	{ "setIndex__all", "(I)V" },
	{ "setIndex__draw", "(I)V" },
	{ "setIndex__sync", "(I)V" },
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
	{ "getFlammability", "()F" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_IndexableEntity__all, &class_mindustry_gen_IndexableEntity__draw, &class_mindustry_gen_IndexableEntity__sync, &class_mindustry_gen_Posc, &class_mindustry_gen_Puddlec, &class_mindustry_gen_Syncc, };

static FieldMetadata fields[] {
	{ "paramPuddle", &class_mindustry_gen_Puddle, (intptr_t) &SF_mindustry_gen_Puddle_paramPuddle, "Lmindustry/gen/Puddle;", 12 },
	{ "rect", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_gen_Puddle_rect, "Larc/math/geom/Rect;", 28 },
	{ "rect2", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_gen_Puddle_rect2, "Larc/math/geom/Rect;", 28 },
	{ "unitCons", &class_arc_func_Cons, (intptr_t) &SF_mindustry_gen_Puddle_unitCons, "Larc/func/Cons;", 12 },
	{ "accepting", &class_float, offsetof(mindustry_gen_Puddle, F_accepting), "F", 129 },
	{ "added", &class_boolean, offsetof(mindustry_gen_Puddle, F_added), "Z", 132 },
	{ "amount", &class_float, offsetof(mindustry_gen_Puddle, F_amount), "F", 1 },
	{ "effectTime", &class_float, offsetof(mindustry_gen_Puddle, F_effectTime), "F", 129 },
	{ "id", &class_int, offsetof(mindustry_gen_Puddle, F_id), "I", 129 },
	{ "index__all", &class_int, offsetof(mindustry_gen_Puddle, F_index__all), "I", 132 },
	{ "index__draw", &class_int, offsetof(mindustry_gen_Puddle, F_index__draw), "I", 132 },
	{ "index__sync", &class_int, offsetof(mindustry_gen_Puddle, F_index__sync), "I", 132 },
	{ "lastRipple", &class_float, offsetof(mindustry_gen_Puddle, F_lastRipple), "F", 129 },
	{ "lastUpdated", &class_long, offsetof(mindustry_gen_Puddle, F_lastUpdated), "J", 129 },
	{ "liquid", &class_mindustry_type_Liquid, offsetof(mindustry_gen_Puddle, F_liquid), "Lmindustry/type/Liquid;", 1 },
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_gen_Puddle, F_tile), "Lmindustry/world/Tile;", 1 },
	{ "updateSpacing", &class_long, offsetof(mindustry_gen_Puddle, F_updateSpacing), "J", 129 },
	{ "updateTime", &class_float, offsetof(mindustry_gen_Puddle, F_updateTime), "F", 129 },
	{ "x", &class_float, offsetof(mindustry_gen_Puddle, F_x), "F", 1 },
	{ "x_LAST_", &class_float, offsetof(mindustry_gen_Puddle, F_x_LAST_), "F", 130 },
	{ "x_TARGET_", &class_float, offsetof(mindustry_gen_Puddle, F_x_TARGET_), "F", 130 },
	{ "y", &class_float, offsetof(mindustry_gen_Puddle, F_y), "F", 1 },
	{ "y_LAST_", &class_float, offsetof(mindustry_gen_Puddle, F_y_LAST_), "F", 130 },
	{ "y_TARGET_", &class_float, offsetof(mindustry_gen_Puddle, F_y_TARGET_), "F", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_Puddle, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_Puddle_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_Puddle_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Puddle_x_R_float, VTABLE_mindustry_gen_Puddle_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Puddle_y_R_float, VTABLE_mindustry_gen_Puddle_y_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_Puddle_classId_R_int, VTABLE_mindustry_gen_Puddle_classId_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Puddle_id_R_int, VTABLE_mindustry_gen_Puddle_id_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_Puddle_toString_R_java_lang_String, VTABLE_mindustry_gen_Puddle_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_Puddle_lastUpdated_R_long, VTABLE_mindustry_gen_Puddle_lastUpdated_R_long, "()J", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_Puddle_updateSpacing_R_long, VTABLE_mindustry_gen_Puddle_updateSpacing_R_long, "()J", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Puddle_id_int, VTABLE_mindustry_gen_Puddle_id_int, "(I)V", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_Puddle_lastUpdated_long, VTABLE_mindustry_gen_Puddle_lastUpdated_long, "(J)V", 1 },
	{ "setIndex__all", (intptr_t) M_mindustry_gen_Puddle_setIndex__all_int, VTABLE_mindustry_gen_Puddle_setIndex__all_int, "(I)V", 1 },
	{ "setIndex__draw", (intptr_t) M_mindustry_gen_Puddle_setIndex__draw_int, VTABLE_mindustry_gen_Puddle_setIndex__draw_int, "(I)V", 1 },
	{ "setIndex__sync", (intptr_t) M_mindustry_gen_Puddle_setIndex__sync_int, VTABLE_mindustry_gen_Puddle_setIndex__sync_int, "(I)V", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_Puddle_updateSpacing_long, VTABLE_mindustry_gen_Puddle_updateSpacing_long, "(J)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Puddle_x_float, VTABLE_mindustry_gen_Puddle_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Puddle_y_float, VTABLE_mindustry_gen_Puddle_y_float, "(F)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_Puddle_read_arc_util_io_Reads, VTABLE_mindustry_gen_Puddle_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_Puddle_write_arc_util_io_Writes, VTABLE_mindustry_gen_Puddle_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_Puddle_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_Puddle_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_Puddle_as_R_java_lang_Object, VTABLE_mindustry_gen_Puddle_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_Puddle_isAdded_R_boolean, VTABLE_mindustry_gen_Puddle_isAdded_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_Puddle_isLocal_R_boolean, VTABLE_mindustry_gen_Puddle_isLocal_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_Puddle_isRemote_R_boolean, VTABLE_mindustry_gen_Puddle_isRemote_R_boolean, "()Z", 1 },
	{ "isSyncHidden", (intptr_t) M_mindustry_gen_Puddle_isSyncHidden_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_Puddle_isSyncHidden_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_Puddle_onSolid_R_boolean, VTABLE_mindustry_gen_Puddle_onSolid_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_Puddle_serialize_R_boolean, VTABLE_mindustry_gen_Puddle_serialize_R_boolean, "()Z", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_Puddle_clipSize_R_float, VTABLE_mindustry_gen_Puddle_clipSize_R_float, "()F", 1 },
	{ "getFlammability", (intptr_t) M_mindustry_gen_Puddle_getFlammability_R_float, VTABLE_mindustry_gen_Puddle_getFlammability_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_Puddle_getX_R_float, VTABLE_mindustry_gen_Puddle_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_Puddle_getY_R_float, VTABLE_mindustry_gen_Puddle_getY_R_float, "()F", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_Puddle_tileX_R_int, VTABLE_mindustry_gen_Puddle_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_Puddle_tileY_R_int, VTABLE_mindustry_gen_Puddle_tileY_R_int, "()I", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_Puddle_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_Puddle_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_Puddle_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_Puddle_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_Puddle_create_R_mindustry_gen_Puddle, 0, "()Lmindustry/gen/Puddle;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_Puddle_add, VTABLE_mindustry_gen_Puddle_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_Puddle_afterRead, VTABLE_mindustry_gen_Puddle_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_Puddle_afterReadAll, VTABLE_mindustry_gen_Puddle_afterReadAll, "()V", 1 },
	{ "afterSync", (intptr_t) M_mindustry_gen_Puddle_afterSync, VTABLE_mindustry_gen_Puddle_afterSync, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_Puddle_beforeWrite, VTABLE_mindustry_gen_Puddle_beforeWrite, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_Puddle_draw, VTABLE_mindustry_gen_Puddle_draw, "()V", 1 },
	{ "handleSyncHidden", (intptr_t) M_mindustry_gen_Puddle_handleSyncHidden, VTABLE_mindustry_gen_Puddle_handleSyncHidden, "()V", 1 },
	{ "interpolate", (intptr_t) M_mindustry_gen_Puddle_interpolate, VTABLE_mindustry_gen_Puddle_interpolate, "()V", 1 },
	{ "readSync", (intptr_t) M_mindustry_gen_Puddle_readSync_arc_util_io_Reads, VTABLE_mindustry_gen_Puddle_readSync_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "readSyncManual", (intptr_t) M_mindustry_gen_Puddle_readSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_Puddle_readSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_Puddle_remove, VTABLE_mindustry_gen_Puddle_remove, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_gen_Puddle_reset, VTABLE_mindustry_gen_Puddle_reset, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Puddle_set_arc_math_geom_Position, VTABLE_mindustry_gen_Puddle_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Puddle_set_float_float, VTABLE_mindustry_gen_Puddle_set_float_float, "(FF)V", 1 },
	{ "snapInterpolation", (intptr_t) M_mindustry_gen_Puddle_snapInterpolation, VTABLE_mindustry_gen_Puddle_snapInterpolation, "()V", 1 },
	{ "snapSync", (intptr_t) M_mindustry_gen_Puddle_snapSync, VTABLE_mindustry_gen_Puddle_snapSync, "()V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Puddle_trns_arc_math_geom_Position, VTABLE_mindustry_gen_Puddle_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Puddle_trns_float_float, VTABLE_mindustry_gen_Puddle_trns_float_float, "(FF)V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_Puddle_update, VTABLE_mindustry_gen_Puddle_update, "()V", 1 },
	{ "writeSync", (intptr_t) M_mindustry_gen_Puddle_writeSync_arc_util_io_Writes, VTABLE_mindustry_gen_Puddle_writeSync_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "writeSyncManual", (intptr_t) M_mindustry_gen_Puddle_writeSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_Puddle_writeSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_gen_Puddle_lambda$static$0_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_gen_Puddle, 0, "()V", 8 },
};

Class class_mindustry_gen_Puddle{
		.nativeName = (intptr_t) "mindustry/gen/Puddle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Puddle),
		.classVtable = (intptr_t) vtable_mindustry_gen_Puddle,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Puddle,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_Puddle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 9,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 60,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 74,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Puddle = registerClass(&class_mindustry_gen_Puddle);

}
